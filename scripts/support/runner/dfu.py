# Copyright (c) 2017 Linaro Limited.
#
# SPDX-License-Identifier: Apache-2.0

'''Runner for flashing with dfu-util.'''

from collections import namedtuple
import os
import sys
import time

from .core import ZephyrBinaryRunner, RunnerCaps, BuildConfiguration


DfuSeConfig = namedtuple('DfuSeConfig', ['address', 'options'])


class DfuUtilBinaryRunner(ZephyrBinaryRunner):
    '''Runner front-end for dfu-util.'''

    def __init__(self, pid, alt, img, exe='dfu-util',
                 dfuse_config=None, debug=False):
        super(DfuUtilBinaryRunner, self).__init__(debug=debug)
        self.alt = alt
        self.img = img
        self.cmd = [exe, '-d,{}'.format(pid)]
        try:
            self.list_pattern = ', alt={},'.format(int(self.alt))
        except ValueError:
            self.list_pattern = ', name="{}",'.format(self.alt)

        if dfuse_config is None:
            self.dfuse = False
        else:
            self.dfuse = True
        self.dfuse_config = dfuse_config

    @classmethod
    def name(cls):
        return 'dfu-util'

    @classmethod
    def capabilities(cls):
        return RunnerCaps(commands={'flash'}, flash_addr=True)

    @classmethod
    def do_add_parser(cls, parser):
        # Required:
        parser.add_argument("--pid", required=True,
                            help="USB VID:PID of the board")
        parser.add_argument("--alt", required=True,
                            help="interface alternate setting number or name")

        # Optional:
        parser.add_argument("--img",
                            help="binary to flash, default is --kernel-bin")
        parser.add_argument("--dfuse", default=False, action='store_true',
                            help='''set if target is a DfuSe device;
                            implies --dt-flash.''')
        parser.add_argument('--dfu-util', default='dfu-util',
                            help='dfu-util executable; defaults to "dfu-util"')

    @classmethod
    def create_from_args(cls, args):
        if args.img is None:
            args.img = args.kernel_bin

        if args.dfuse:
            args.dt_flash = True  # --dfuse implies --dt-flash.
            build_conf = BuildConfiguration(os.getcwd())
            dcfg = DfuSeConfig(address=cls.get_flash_address(args, build_conf),
                               options="leave")
        else:
            dcfg = None

        return DfuUtilBinaryRunner(args.pid, args.alt, args.img,
                                   exe=args.dfu_util, dfuse_config=dcfg,
                                   debug=args.verbose)

    def find_device(self):
        cmd = list(self.cmd) + ['-l']
        output = self.check_output(cmd)
        output = output.decode(sys.getdefaultencoding())
        return self.list_pattern in output

    def do_run(self, command, **kwargs):
        reset = False
        if not self.find_device():
            reset = True
            print('Please reset your board to switch to DFU mode...')
            while not self.find_device():
                time.sleep(0.1)

        cmd = list(self.cmd)
        if self.dfuse:
            # http://dfu-util.sourceforge.net/dfuse.html
            dcfg = self.dfuse_config
            addr_opts = hex(dcfg.address) + ':' + dcfg.options
            cmd.extend(['-s', addr_opts])
        cmd.extend(['-a', self.alt, '-D', self.img])
        self.check_call(cmd)

        if self.dfuse and 'leave' in dcfg.options.split(':'):
            # Normal DFU devices generally need to be reset to switch
            # back to the flashed program.
            #
            # DfuSe targets do as well, except when 'leave' is given
            # as an option.
            reset = False
        if reset:
            print('Now reset your board again to switch back to runtime mode.')
