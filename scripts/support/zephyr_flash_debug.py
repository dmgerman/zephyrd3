#! /usr/bin/env python3

# Copyright (c) 2017 Linaro Limited.
#
# SPDX-License-Identifier: Apache-2.0

"""Zephyr flash/debug script

This script is a transparent replacement for existing Zephyr flash and debug
scripts, i.e. scripts to flash binaries, run them, and debug them on real or
emulated hardware. If it can invoke the relevant tools natively, it will do so;
otherwise, it delegates to the shell script."""

import abc
from os import path
import os
import pprint
import platform
import shlex
import signal
import sys
import subprocess
import time


def get_env_or_bail(env_var):
    try:
        return os.environ[env_var]
    except KeyError:
        print('Variable {} not in environment:'.format(
                  env_var), file=sys.stderr)
        pprint.pprint(dict(os.environ), stream=sys.stderr)
        raise


def get_env_bool_or(env_var, default_value):
    try:
        return bool(int(os.environ[env_var]))
    except KeyError:
        return default_value


def get_env_strip_or(env_var, to_strip, default_value):
    value = os.environ.get(env_var, None)
    if value is not None:
        return value.strip(to_strip)
    else:
        return default_value


def check_call(cmd, debug):
    if debug:
        print(' '.join(cmd))
    subprocess.check_call(cmd)


def check_output(cmd, debug):
    if debug:
        print(' '.join(cmd))
    return subprocess.check_output(cmd)


def popen_ignore_int(cmd, debug):
    '''Spawn a child command, ensuring it ignores SIGINT.

    The returned subprocess.Popen object must be manually terminated.'''
    cflags = 0
    preexec = None
    system = platform.system()

    if system == 'Windows':
        cflags |= subprocess.CREATE_NEW_PROCESS_GROUP
    elif system in {'Linux', 'Darwin'}:
        preexec = os.setsid

    if debug:
        print(' '.join(cmd))

    return subprocess.Popen(cmd, creationflags=cflags, preexec_fn=preexec)


class ZephyrBinaryRunner(abc.ABC):
    '''Abstract superclass for binary runners (flashers, debuggers).

    With some exceptions, boards supported by Zephyr must provide
    generic means to be flashed (have a Zephyr firmware binary
    permanently installed on the device for running) and debugged
    (have a breakpoint debugger and program loader on a host
    workstation attached to a running target). This is supported by
    three top-level commands managed by the Zephyr build system:

    - 'flash': flash a previously configured binary to the board,
      start execution on the target, then return.

    - 'debug': connect to the board via a debugging protocol, then
      drop the user into a debugger interface with symbol tables
      loaded from the current binary, and block until it exits.

    - 'debugserver': connect via a board-specific debugging protocol,
      then reset and halt the target. Ensure the user is now able to
      connect to a debug server with symbol tables loaded from the
      binary.

    Runner functionality relies on a variety of target-specific tools
    and configuration values, the user interface to which is
    abstracted by this class. Each runner subclass should take any
    values it needs to execute one of these commands in its
    constructor.  The actual command execution is handled in the run()
    method.

    This functionality is also replacing the legacy Zephyr runners,
    which are shell scripts.

    At present, the Zephyr build system uses a variety of
    tool-specific environment variables to control runner behavior.
    To support a transition to ZephyrBinaryRunner and subclasses, this
    class provides a create_for_shell_script() static factory method.
    This method iterates over ZephyrBinaryRUnner subclasses,
    determines which (if any) can provide equivalent functionality to
    the shell-based runner, and returns a subclass instance with its
    configuration determined from the environment.

    To support this, subclasess currently must provide a pair of
    static methods, replaces_shell_script() and create_from_env(). The
    first allows the runner subclass to declare which commands and
    scripts it can replace. The second is called by
    create_for_shell_script() to create a concrete runner instance.

    The environment-based factories are for legacy use *only*; the
    user must be able to construct and use a runner using only the
    constructor and run() method.'''

    def __init__(self, debug=False):
        self.debug = debug

    @staticmethod
    def create_for_shell_script(shell_script, command, debug):
        '''Factory for using as a drop-in replacement to a shell script.

        Command is one of 'flash', 'debug', 'debugserver'.

        Get runner instance to use in place of shell_script, deriving
        configuration from the environment.'''
        for sub_cls in ZephyrBinaryRunner.__subclasses__():
            if sub_cls.replaces_shell_script(shell_script, command):
                return sub_cls.create_from_env(command, debug)
        raise ValueError('cannot implement script {} command {}'.format(
                             shell_script, command))

    @staticmethod
    @abc.abstractmethod
    def replaces_shell_script(shell_script, command):
        '''Check if this class replaces shell_script for the given command.'''

    @staticmethod
    @abc.abstractmethod
    def create_from_env(command, debug):
        '''Create new flasher instance from environment variables.

        This class must be able to replace the current shell script
        (FLASH_SCRIPT or DEBUG_SCRIPT, depending on command). The
        environment variables expected by that script are used to build
        the flasher in a backwards-compatible manner.'''

    @abc.abstractmethod
    def run(self, command, **kwargs):
        '''Run a command ('flash', 'debug', 'debugserver').

        In case of an unsupported command, raise a ValueError.'''

    def run_server_and_client(self, server, client):
        '''Run a server that ignores SIGINT, and a client that handles it.

        This routine portably:

        - creates a Popen object for the `server' command which ignores SIGINT
        - runs `client' in a subprocess while temporarily ignoring SIGINT
        - cleans up the server after the client exits.

        It's useful to e.g. open a GDB server and client.'''
        server_proc = popen_ignore_int(server, self.debug)
        previous = signal.signal(signal.SIGINT, signal.SIG_IGN)
        try:
            check_call(client, self.debug)
        finally:
            signal.signal(signal.SIGINT, previous)
            server_proc.terminate()
            server_proc.wait()


DEFAULT_ARC_TCL_PORT = 6333
DEFAULT_ARC_TELNET_PORT = 4444
DEFAULT_ARC_GDB_PORT = 3333


class ArcBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for the ARC architecture, using openocd.'''

    # This unusual 'flash' implementation matches the original shell script.
    #
    # It works by starting a GDB server in a separate session, connecting a
    # client to it to load the program, and running 'continue' within the
    # client to execute the application.
    #
    # TODO: exit immediately when flashing is done, leaving Zephyr running.

    def __init__(self, elf, zephyr_base, arch, board_name, python,
                 gdb, openocd='openocd', extra_init=None, default_path=None,
                 tui=None, tcl_port=DEFAULT_ARC_TCL_PORT,
                 telnet_port=DEFAULT_ARC_TELNET_PORT,
                 gdb_port=DEFAULT_ARC_GDB_PORT, debug=False):
        super(ArcBinaryRunner, self).__init__(debug=debug)
        self.elf = elf
        self.zephyr_base = zephyr_base
        self.arch = arch
        self.board_name = board_name
        self.python = python
        self.gdb = gdb
        search_args = []
        if default_path is not None:
            search_args = ['-s', default_path]
        self.openocd_cmd = [openocd] + search_args
        self.extra_init = extra_init if extra_init is not None else []
        self.tui = tui
        self.tcl_port = tcl_port
        self.telnet_port = telnet_port
        self.gdb_port = gdb_port

    def replaces_shell_script(shell_script, command):
        return (command in {'flash', 'debug', 'debugserver'} and
                shell_script == 'arc_debugger.sh')

    def create_from_env(command, debug):
        '''Create runner from environment.

        Required:

        - O: build output directory
        - KERNEL_ELF_NAME: zephyr kernel binary in ELF format
        - ZEPHYR_BASE: zephyr Git repository base directory
        - ARCH: board architecture
        - BOARD_NAME: zephyr name of board
        - PYTHON: python executable
        - GDB: gdb executable

        Optional:

        - OPENOCD: path to openocd, defaults to openocd
        - OPENOCD_EXTRA_INIT: initialization command for GDB server
        - OPENOCD_DEFAULT_PATH: openocd search path to use
        - TUI: if present, passed to gdb server used to flash
        - TCL_PORT: openocd TCL port, defaults to 6333
        - TELNET_PORT: openocd telnet port, defaults to 4444
        - GDB_PORT: openocd gdb port, defaults to 3333
        '''
        elf = path.join(get_env_or_bail('O'),
                        get_env_or_bail('KERNEL_ELF_NAME'))
        zephyr_base = get_env_or_bail('ZEPHYR_BASE')
        arch = get_env_or_bail('ARCH')
        board_name = get_env_or_bail('BOARD_NAME')
        python = get_env_or_bail('PYTHON')
        gdb = get_env_or_bail('GDB')

        openocd = os.environ.get('OPENOCD', 'openocd')
        extra_init = os.environ.get('OPENOCD_EXTRA_INIT', None)
        if extra_init is not None:
            extra_init = shlex.split(extra_init)
        default_path = os.environ.get('OPENOCD_DEFAULT_PATH', None)
        tui = os.environ.get('TUI', None)
        tcl_port = int(os.environ.get('TCL_PORT',
                                      str(DEFAULT_ARC_TCL_PORT)))
        telnet_port = int(os.environ.get('TELNET_PORT',
                                         str(DEFAULT_ARC_TELNET_PORT)))
        gdb_port = int(os.environ.get('GDB_PORT',
                                      str(DEFAULT_ARC_GDB_PORT)))

        return ArcBinaryRunner(elf, zephyr_base, arch, board_name, python,
                               gdb, openocd=openocd, extra_init=extra_init,
                               default_path=default_path, tui=tui,
                               tcl_port=tcl_port, telnet_port=telnet_port,
                               gdb_port=gdb_port, debug=debug)

    def run(self, command, **kwargs):
        if command not in {'flash', 'debug', 'debugserver'}:
            raise ValueError('{} is not supported'.format(command))

        kwargs['openocd-cfg'] = path.join(self.zephyr_base, 'boards',
                                          self.arch, self.board_name,
                                          'support', 'openocd.cfg')

        if command in {'flash', 'debug'}:
            self.flash_debug(command, **kwargs)
        else:
            self.debugserver(**kwargs)

    def flash_debug(self, command, **kwargs):
        config = kwargs['openocd-cfg']

        server_cmd = (self.openocd_cmd +
                      ['-f', config] +
                      self.extra_init +
                      ['-c', 'tcl_port {}'.format(self.tcl_port),
                       '-c', 'telnet_port {}'.format(self.telnet_port),
                       '-c', 'gdb_port {}'.format(self.gdb_port),
                       '-c', 'init',
                       '-c', 'targets',
                       '-c', 'halt'])

        tui_arg = []
        if self.tui is not None:
            tui_arg = [self.tui]

        continue_arg = []
        if command == 'flash':
            continue_arg = ['-ex', 'c']

        gdb_cmd = ([self.gdb] +
                   tui_arg +
                   ['-ex', 'target remote :{}'.format(self.gdb_port),
                    '-ex', 'load'] +
                   continue_arg +
                   [self.elf])

        self.run_server_and_client(server_cmd, gdb_cmd)

    def debugserver(self, **kwargs):
        config = kwargs['openocd-cfg']
        cmd = (self.openocd_cmd +
               ['-f', config,
                '-c', 'init',
                '-c', 'targets',
                '-c', 'reset halt'])
        check_call(cmd, self.debug)


class BossacBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for bossac.'''

    def __init__(self, bin_name, bossac='bossac', debug=False):
        super(BossacBinaryRunner, self).__init__(debug=debug)
        self.bin_name = bin_name
        self.bossac = bossac

    def replaces_shell_script(shell_script, command):
        return command == 'flash' and shell_script == 'bossa-flash.sh'

    def create_from_env(command, debug):
        '''Create flasher from environment.

        Required:

        - O: build output directory
        - KERNEL_BIN_NAME: name of kernel binary

        Optional:

        - BOSSAC: path to bossac, default is bossac
        '''
        bin_name = path.join(get_env_or_bail('O'),
                             get_env_or_bail('KERNEL_BIN_NAME'))
        bossac = os.environ.get('BOSSAC', 'bossac')
        return BossacBinaryRunner(bin_name, bossac=bossac, debug=debug)

    def run(self, command, **kwargs):
        if command != 'flash':
            raise ValueError('only flash is supported')

        if platform.system() != 'Linux':
            msg = 'CAUTION: No flash tool for your host system found!'
            raise NotImplementedError(msg)

        cmd_stty = ['stty', '-F', '/dev/ttyACM0', 'raw', 'ispeed', '1200',
                    'ospeed', '1200', 'cs8', '-cstopb', 'ignpar', 'eol', '255',
                    'eof', '255']
        cmd_flash = [self.bossac, '-R', '-e', '-w', '-v', '-b', self.bin_name]

        check_call(cmd_stty, self.debug)
        check_call(cmd_flash, self.debug)


class DfuUtilBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for dfu-util.'''

    def __init__(self, pid, alt, img, dfuse=None, exe='dfu-util', debug=False):
        super(DfuUtilBinaryRunner, self).__init__(debug=debug)
        self.alt = alt
        self.img = img
        self.dfuse = dfuse
        self.cmd = [exe, '-d,{}'.format(pid)]
        try:
            self.list_pattern = ', alt={},'.format(int(self.alt))
        except ValueError:
            self.list_pattern = ', name="{}",'.format(self.alt)

    def replaces_shell_script(shell_script, command):
        return command == 'flash' and shell_script == 'dfuutil.sh'

    def create_from_env(command, debug):
        '''Create flasher from environment.

        Required:

        - DFUUTIL_PID: USB VID:PID of the board
        - DFUUTIL_ALT: interface alternate setting number or name
        - DFUUTIL_IMG: binary to flash

        Optional:

        - DFUUTIL_DFUSE_ADDR: target address if the board is a
          DfuSe device. Ignored if not present.
        - DFUUTIL: dfu-util executable, defaults to dfu-util.
        '''
        pid = get_env_or_bail('DFUUTIL_PID')
        alt = get_env_or_bail('DFUUTIL_ALT')
        img = get_env_or_bail('DFUUTIL_IMG')
        dfuse = os.environ.get('DFUUTIL_DFUSE_ADDR', None)
        exe = os.environ.get('DFUUTIL', 'dfu-util')

        return DfuUtilBinaryRunner(pid, alt, img, dfuse=dfuse, exe=exe,
                                   debug=debug)

    def find_device(self):
        cmd = list(self.cmd) + ['-l']
        output = check_output(cmd, self.debug)
        output = output.decode(sys.getdefaultencoding())
        return self.list_pattern in output

    def run(self, command, **kwargs):
        if command != 'flash':
            raise ValueError('only flash is supported')

        reset = 0
        if not self.find_device():
            reset = 1
            print('Please reset your board to switch to DFU mode...')
            while not self.find_device():
                time.sleep(0.1)

        cmd = list(self.cmd)
        if self.dfuse is not None:
            cmd.extend(['-s', '{}:leave'.format(self.dfuse)])
        cmd.extend(['-a', self.alt, '-D', self.img])
        check_call(cmd, self.debug)
        if reset:
            print('Now reset your board again to switch back to runtime mode.')


class Esp32BinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for espidf.'''

    def __init__(self, elf, device, baud=921600, flash_size='detect',
                 flash_freq='40m', flash_mode='dio', espidf='espidf',
                 debug=False):
        super(Esp32BinaryRunner, self).__init__(debug=debug)
        self.elf = elf
        self.device = device
        self.baud = baud
        self.flash_size = flash_size
        self.flash_freq = flash_freq
        self.flash_mode = flash_mode
        self.espidf = espidf

    def replaces_shell_script(shell_script, command):
        return command == 'flash' and shell_script == 'esp32.sh'

    def create_from_env(command, debug):
        '''Create flasher from environment.

        Required:

        - O: build output directory
        - KERNEL_ELF_NAME: name of kernel binary in ELF format

        Optional:

        - ESP_DEVICE: serial port to flash, default /dev/ttyUSB0
        - ESP_BAUD_RATE: serial baud rate, default 921600
        - ESP_FLASH_SIZE: flash size, default 'detect'
        - ESP_FLASH_FREQ: flash frequency, default '40m'
        - ESP_FLASH_MODE: flash mode, default 'dio'
        - ESP_TOOL: complete path to espidf, or set to 'espidf' to look for it
          in $ESP_IDF_PATH/components/esptool_py/esptool/esptool.py
        '''
        elf = path.join(get_env_or_bail('O'),
                        get_env_or_bail('KERNEL_ELF_NAME'))

        # TODO add sane device defaults on other platforms than Linux.
        device = os.environ.get('ESP_DEVICE', '/dev/ttyUSB0')
        baud = os.environ.get('ESP_BAUD_RATE', '921600')
        flash_size = os.environ.get('ESP_FLASH_SIZE', 'detect')
        flash_freq = os.environ.get('ESP_FLASH_FREQ', '40m')
        flash_mode = os.environ.get('ESP_FLASH_MODE', 'dio')
        espidf = os.environ.get('ESP_TOOL', 'espidf')

        if espidf == 'espidf':
            idf_path = get_env_or_bail('ESP_IDF_PATH')
            espidf = path.join(idf_path, 'components', 'esptool_py', 'esptool',
                               'esptool.py')

        return Esp32BinaryRunner(elf, device, baud=baud,
                                 flash_size=flash_size, flash_freq=flash_freq,
                                 flash_mode=flash_mode, espidf=espidf,
                                 debug=debug)

    def run(self, command, **kwargs):
        if command != 'flash':
            raise ValueError('only flash is supported')

        bin_name = path.splitext(self.elf)[0] + path.extsep + 'bin'
        cmd_convert = [self.espidf, '--chip', 'esp32', 'elf2image', self.elf]
        cmd_flash = [self.espidf, '--chip', 'esp32', '--port', self.device,
                     '--baud', self.baud, '--before', 'default_reset',
                     '--after', 'hard_reset', 'write_flash', '-u',
                     '--flash_mode', self.flash_mode,
                     '--flash_freq', self.flash_freq,
                     '--flash_size', self.flash_size,
                     '0x1000', bin_name]

        print("Converting ELF to BIN")
        check_call(cmd_convert, self.debug)

        print("Flashing ESP32 on {} ({}bps)".format(self.device, self.baud))
        check_call(cmd_flash, self.debug)


class Nios2BinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for NIOS II.'''

    # From the original shell script:
    #
    #     "XXX [flash] only support[s] cases where the .elf is sent
    #      over the JTAG and the CPU directly boots from __start. CONFIG_XIP
    #      and CONFIG_INCLUDE_RESET_VECTOR must be disabled."

    def __init__(self, hex_, cpu_sof, zephyr_base, debug=False):
        super(Nios2BinaryRunner, self).__init__(debug=debug)
        self.hex_ = hex_
        self.cpu_sof = cpu_sof
        self.zephyr_base = zephyr_base

    def replaces_shell_script(shell_script, command):
        return command == 'flash' and shell_script == 'nios2.sh'

    def create_from_env(command, debug):
        '''Create flasher from environment.

        Required:

        - O: build output directory
        - KERNEL_HEX_NAME: name of kernel binary in ELF format
        - NIOS2_CPU_SOF: location of the CPU .sof data
        - ZEPHYR_BASE: zephyr Git repository base directory
        '''
        hex_ = path.join(get_env_or_bail('O'),
                         get_env_or_bail('KERNEL_HEX_NAME'))
        cpu_sof = get_env_or_bail('NIOS2_CPU_SOF')
        zephyr_base = get_env_or_bail('ZEPHYR_BASE')

        return Nios2BinaryRunner(hex_, cpu_sof, zephyr_base, debug=debug)

    def run(self, command, **kwargs):
        if command != 'flash':
            raise ValueError('only flash is supported')

        cmd = [path.join(self.zephyr_base, 'scripts', 'support',
                         'quartus-flash.py'),
               '--sof', self.cpu_sof,
               '--kernel', self.hex_]

        check_call(cmd, self.debug)


class NrfJprogBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for nrfjprog.'''

    def __init__(self, hex_, family, board, debug=False):
        super(NrfJprogBinaryRunner, self).__init__(debug=debug)
        self.hex_ = hex_
        self.family = family
        self.board = board

    def replaces_shell_script(shell_script, command):
        return command == 'flash' and shell_script == 'nrf_flash.sh'

    def create_from_env(command, debug):
        '''Create flasher from environment.

        Required:

        - O: build output directory
        - KERNEL_HEX_NAME: name of kernel binary in ELF format
        - NRF_FAMILY: e.g. NRF51 or NRF52
        - BOARD: Zephyr board name
        '''
        hex_ = path.join(get_env_or_bail('O'),
                         get_env_or_bail('KERNEL_HEX_NAME'))
        family = get_env_or_bail('NRF_FAMILY')
        board = get_env_or_bail('BOARD')

        return NrfJprogBinaryRunner(hex_, family, board, debug=debug)

    def get_board_snr_from_user(self):
        snrs = check_output(['nrfjprog', '--ids'], self.debug)
        snrs = snrs.decode(sys.getdefaultencoding()).strip().splitlines()

        if len(snrs) == 1:
            return snrs[0]

        print('There are multiple boards connected.')
        for i, snr in enumerate(snrs, 1):
            print('{}. {}'.format(i, snr))

        p = 'Please select one with desired serial number (1-{}): '.format(
                len(snrs))
        while True:
            value = input(p)
            try:
                value = int(value)
            except ValueError:
                continue
            if 1 <= value <= len(snrs):
                break

        return snrs[value - 1]

    def run(self, command, **kwargs):
        if command != 'flash':
            raise ValueError('only flash is supported')

        board_snr = self.get_board_snr_from_user()

        print('Flashing file: {}'.format(self.hex_))
        commands = [
            ['nrfjprog', '--eraseall', '-f', self.family, '--snr', board_snr],
            ['nrfjprog', '--program', self.hex_, '-f', self.family, '--snr',
             board_snr],
        ]
        if self.family == 'NRF52':
            commands.extend([
                # Set reset pin
                ['nrfjprog', '--memwr', '0x10001200', '--val', '0x00000015',
                 '-f', self.family, '--snr', board_snr],
                ['nrfjprog', '--memwr', '0x10001204', '--val', '0x00000015',
                 '-f', self.family, '--snr', board_snr],
                ['nrfjprog', '--reset', '-f', self.family, '--snr', board_snr],
            ])
        commands.append(['nrfjprog',
                         '--pinreset',
                         '-f', self.family,
                         '--snr', board_snr])

        for cmd in commands:
            check_call(cmd, self.debug)

        print('{} Serial Number {} flashed with success.'.format(
                  self.board, board_snr))


DEFAULT_OPENOCD_TCL_PORT = 6333
DEFAULT_OPENOCD_TELNET_PORT = 4444
DEFAULT_OPENOCD_GDB_PORT = 3333


class OpenOcdBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for openocd.'''

    def __init__(self, openocd_config,
                 openocd='openocd', default_path=None,
                 bin_name=None, elf_name=None,
                 load_cmd=None, verify_cmd=None, pre_cmd=None, post_cmd=None,
                 extra_init=None,
                 tcl_port=DEFAULT_OPENOCD_TCL_PORT,
                 telnet_port=DEFAULT_OPENOCD_TELNET_PORT,
                 gdb_port=DEFAULT_OPENOCD_GDB_PORT,
                 gdb=None, tui=None, debug=False):
        super(OpenOcdBinaryRunner, self).__init__(debug=debug)
        self.openocd_config = openocd_config

        search_args = []
        if default_path is not None:
            search_args = ['-s', default_path]
        self.openocd_cmd = [openocd] + search_args
        self.bin_name = bin_name
        self.elf_name = elf_name
        self.load_cmd = load_cmd
        self.verify_cmd = verify_cmd
        self.pre_cmd = pre_cmd
        self.post_cmd = post_cmd
        self.extra_init = extra_init if extra_init is not None else []
        self.tcl_port = tcl_port
        self.telnet_port = telnet_port
        self.gdb_port = gdb_port
        self.gdb_cmd = [gdb] if gdb is not None else None
        self.tui_arg = [tui] if tui is not None else []

    def replaces_shell_script(shell_script, command):
        return (command in {'flash', 'debug', 'debugserver'} and
                shell_script == 'openocd.sh')

    def create_from_env(command, debug):
        '''Create runner from environment.

        Required:

        - ZEPHYR_BASE: zephyr Git repository base directory
        - ARCH: board architecture
        - BOARD_NAME: zephyr name of board

        Optional:

        - OPENOCD: path to openocd, defaults to openocd
        - OPENOCD_DEFAULT_PATH: openocd search path to use

        Required for 'flash':

        - O: build output directory
        - KERNEL_BIN_NAME: zephyr kernel binary
        - OPENOCD_LOAD_CMD: command to load binary into flash
        - OPENOCD_VERIFY_CMD: command to verify flash executed correctly

        Optional for 'flash':

        - OPENOCD_PRE_CMD: command to run before any others
        - OPENOCD_POST_CMD: command to run after verifying flash write

        Required for 'debug':

        - GDB: GDB executable
        - O: build output directory
        - KERNEL_ELF_NAME: zephyr kernel binary, ELF format

        Optional for 'debug':

        - TUI: one additional argument to GDB (e.g. -tui)
        - OPENOCD_EXTRA_INIT: additional arguments to pass to openocd
        - TCL_PORT: openocd TCL port, defaults to 6333
        - TELNET_PORT: openocd telnet port, defaults to 4444
        - GDB_PORT: openocd gdb port, defaults to 3333
        '''
        zephyr_base = get_env_or_bail('ZEPHYR_BASE')
        arch = get_env_or_bail('ARCH')
        board_name = get_env_or_bail('BOARD_NAME')
        openocd_config = path.join(zephyr_base, 'boards', arch,
                                   board_name, 'support', 'openocd.cfg')

        openocd = os.environ.get('OPENOCD', 'openocd')
        default_path = os.environ.get('OPENOCD_DEFAULT_PATH', None)

        o = os.environ.get('O', None)
        bin_ = os.environ.get('KERNEL_BIN_NAME', None)
        elf = os.environ.get('KERNEL_ELF_NAME', None)
        bin_name = None
        elf_name = None
        if o is not None:
            if bin_ is not None:
                bin_name = path.join(o, bin_)
            if elf is not None:
                elf_name = path.join(o, elf)

        load_cmd = get_env_strip_or('OPENOCD_LOAD_CMD', '"', None)
        verify_cmd = get_env_strip_or('OPENOCD_VERIFY_CMD', '"', None)
        pre_cmd = get_env_strip_or('OPENOCD_PRE_CMD', '"', None)
        post_cmd = get_env_strip_or('OPENOCD_POST_CMD', '"', None)

        gdb = os.environ.get('GDB', None)
        tui = os.environ.get('TUI', None)
        extra_init = os.environ.get('OPENOCD_EXTRA_INIT', None)
        if extra_init is not None:
            extra_init = shlex.split(extra_init)
        tcl_port = int(os.environ.get('TCL_PORT',
                                      str(DEFAULT_OPENOCD_TCL_PORT)))
        telnet_port = int(os.environ.get('TELNET_PORT',
                                         str(DEFAULT_OPENOCD_TELNET_PORT)))
        gdb_port = int(os.environ.get('GDB_PORT',
                                      str(DEFAULT_OPENOCD_GDB_PORT)))

        return OpenOcdBinaryRunner(openocd_config,
                                   openocd=openocd, default_path=default_path,
                                   bin_name=bin_name, elf_name=elf_name,
                                   load_cmd=load_cmd, verify_cmd=verify_cmd,
                                   pre_cmd=pre_cmd, post_cmd=post_cmd,
                                   extra_init=extra_init, tcl_port=tcl_port,
                                   telnet_port=telnet_port, gdb_port=gdb_port,
                                   gdb=gdb, tui=tui, debug=debug)

    def run(self, command, **kwargs):
        if command not in {'flash', 'debug', 'debugserver'}:
            raise ValueError('{} is not supported'.format(command))

        if command == 'flash':
            self.do_flash(**kwargs)
        elif command == 'debug':
            self.do_debug(**kwargs)
        else:
            self.do_debugserver(**kwargs)

    def do_flash(self, **kwargs):
        if self.bin_name is None:
            raise ValueError('Cannot flash; binary name is missing')
        if self.load_cmd is None:
            raise ValueError('Cannot flash; load command is missing')
        if self.verify_cmd is None:
            raise ValueError('Cannot flash; verify command is missing')

        pre_cmd = []
        if self.pre_cmd is not None:
            pre_cmd = ['-c', self.pre_cmd]

        post_cmd = []
        if self.post_cmd is not None:
            post_cmd = ['-c', self.post_cmd]

        cmd = (self.openocd_cmd +
               ['-f', self.openocd_config,
                '-c', 'init',
                '-c', 'targets'] +
               pre_cmd +
               ['-c', 'reset halt',
                '-c', self.load_cmd,
                '-c', 'reset halt',
                '-c', self.verify_cmd] +
               post_cmd +
               ['-c', 'reset run',
                '-c', 'shutdown'])
        check_call(cmd, self.debug)

    def do_debug(self, **kwargs):
        if self.gdb_cmd is None:
            raise ValueError('Cannot debug; no gdb specified')
        if self.elf_name is None:
            raise ValueError('Cannot debug; no .elf specified')

        server_cmd = (self.openocd_cmd +
                      ['-f', self.openocd_config] +
                      self.extra_init +
                      ['-c', 'tcl_port {}'.format(self.tcl_port),
                       '-c', 'telnet_port {}'.format(self.telnet_port),
                       '-c', 'gdb_port {}'.format(self.gdb_port),
                       '-c', 'init',
                       '-c', 'targets',
                       '-c', 'halt'])

        gdb_cmd = (self.gdb_cmd + self.tui_arg +
                   ['-ex', 'target remote :{}'.format(self.gdb_port),
                    self.elf_name])

        self.run_server_and_client(server_cmd, gdb_cmd)

    def do_debugserver(self, **kwargs):
        cmd = (self.openocd_cmd +
               ['-f', self.openocd_config,
                '-c', 'init',
                '-c', 'targets',
                '-c', 'reset halt'])
        check_call(cmd, self.debug)


DEFAULT_PYOCD_GDB_PORT = 3333


class PyOcdBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for pyocd-flashtool.'''

    def __init__(self, target, flashtool='pyocd-flashtool',
                 gdb=None, gdbserver='pyocd-gdbserver',
                 gdb_port=DEFAULT_PYOCD_GDB_PORT, tui=None,
                 bin_name=None, elf_name=None,
                 board_id=None, daparg=None, debug=False):
        super(PyOcdBinaryRunner, self).__init__(debug=debug)

        self.target_args = ['-t', target]
        self.flashtool = flashtool
        self.gdb_cmd = [gdb] if gdb is not None else None
        self.gdbserver = gdbserver
        self.gdb_port = gdb_port
        self.tui_args = [tui] if tui is not None else []
        self.bin_name = bin_name
        self.elf_name = elf_name

        board_args = []
        if board_id is not None:
            board_args = ['-b', board_id]
        self.board_args = board_args

        daparg_args = []
        if daparg is not None:
            daparg_args = ['-da', daparg]
        self.daparg_args = daparg_args

    def replaces_shell_script(shell_script, command):
        return (command in {'flash', 'debug', 'debugserver'} and
                shell_script == 'pyocd.sh')

    def port_args(self):
        return ['-p', str(self.gdb_port)]

    def create_from_env(command, debug):
        '''Create runner from environment.

        Required:

        - PYOCD_TARGET: target override

        Optional:

        - PYOCD_DAPARG: arguments to pass to pyocd tool, default is none
        - PYOCD_BOARD_ID: ID of board to flash, default is to prompt

        Required for 'flash':

        - O: build output directory
        - KERNEL_BIN_NAME: name of kernel binary

        Optional for 'flash':

        - PYOCD_FLASHTOOL: flash tool path, defaults to pyocd-flashtool

        Required for 'debug':

        - O: build output directory
        - KERNEL_ELF_NAME
        - GDB: gdb executable

        Optional for 'debug', 'debugserver':

        - TUI: one additional argument to GDB (e.g. -tui)
        - GDB_PORT: pyocd gdb port, defaults to 3333
        - PYOCD_GDBSERVER: gdb server executable, defaults to pyocd-gdbserver
        '''
        target = get_env_or_bail('PYOCD_TARGET')

        o = os.environ.get('O', None)
        bin_ = os.environ.get('KERNEL_BIN_NAME', None)
        elf = os.environ.get('KERNEL_ELF_NAME', None)
        bin_name = None
        elf_name = None
        if o is not None:
            if bin_ is not None:
                bin_name = path.join(o, bin_)
            if elf is not None:
                elf_name = path.join(o, elf)

        flashtool = os.environ.get('PYOCD_FLASHTOOL', 'pyocd-flashtool')
        board_id = os.environ.get('PYOCD_BOARD_ID', None)
        daparg = os.environ.get('PYOCD_DAPARG', None)
        gdb = os.environ.get('GDB', None)
        gdbserver = os.environ.get('PYOCD_GDBSERVER', 'pyocd-gdbserver')
        gdb_port = os.environ.get('GDB_PORT', DEFAULT_PYOCD_GDB_PORT)
        tui = os.environ.get('TUI', None)

        return PyOcdBinaryRunner(target, flashtool=flashtool, gdb=gdb,
                                 gdbserver=gdbserver, gdb_port=gdb_port,
                                 tui=tui, bin_name=bin_name, elf_name=elf_name,
                                 board_id=board_id, daparg=daparg, debug=debug)

    def run(self, command, **kwargs):
        if command not in {'flash', 'debug', 'debugserver'}:
            raise ValueError('{} is not supported'.format(command))

        if command == 'flash':
            self.flash(**kwargs)
        else:
            self.debug_debugserver(command, **kwargs)

    def flash(self, **kwargs):
        if self.bin_name is None:
            raise ValueError('Cannot flash; bin_name is missing')

        cmd = ([self.flashtool] +
               self.daparg_args +
               self.target_args +
               self.board_args +
               [self.bin_name])

        print('Flashing Target Device')
        check_call(cmd, self.debug)

    def print_gdbserver_message(self):
        print('pyOCD GDB server running on port {}'.format(self.gdb_port))

    def debug_debugserver(self, command, **kwargs):
        server_cmd = ([self.gdbserver] +
                      self.daparg_args +
                      self.port_args() +
                      self.target_args +
                      self.board_args)

        if command == 'debugserver':
            self.print_gdbserver_message()
            check_call(server_cmd, self.debug)
        else:
            if self.gdb_cmd is None:
                raise ValueError('Cannot debug; gdb is missing')
            if self.elf_name is None:
                raise ValueError('Cannot debug; elf is missing')
            client_cmd = (self.gdb_cmd +
                          self.tui_args +
                          [self.elf_name] +
                          ['-ex', 'target remote :{}'.format(self.gdb_port),
                           '-ex', 'load',
                           '-ex', 'monitor reset halt'])
            self.print_gdbserver_message()
            self.run_server_and_client(server_cmd, client_cmd)


# TODO: Stop using environment variables.
#
# Migrate the build system so we can use an argparse.ArgumentParser and
# per-flasher subparsers, so invoking the script becomes something like:
#
#   python zephyr_flash_debug.py openocd --openocd-bin=/openocd/path ...
#
# For now, maintain compatibility.
def run(shell_script_full, command, debug):
    shell_script = path.basename(shell_script_full)
    try:
        runner = ZephyrBinaryRunner.create_for_shell_script(shell_script,
                                                            command,
                                                            debug)
    except ValueError:
        # Unsupported; fall back on shell script.
        check_call([shell_script_full, command], debug)
        return

    runner.run(command)


if __name__ == '__main__':
    commands = {'flash', 'debug', 'debugserver'}
    debug = True
    try:
        debug = get_env_bool_or('KBUILD_VERBOSE', False)
        if len(sys.argv) != 3 or sys.argv[1] not in commands:
            raise ValueError('usage: {} <{}> path-to-script'.format(
                sys.argv[0], '|'.join(commands)))
        run(sys.argv[2], sys.argv[1], debug)
    except Exception as e:
        if debug:
            raise
        else:
            print('Error: {}'.format(e), file=sys.stderr)
            print('Re-run with KBUILD_VERBOSE=1 for a stack trace.',
                  file=sys.stderr)
            sys.exit(1)
