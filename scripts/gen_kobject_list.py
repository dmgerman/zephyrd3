#!/usr/bin/env python3
#
# Copyright (c) 2017 Intel Corporation
#
# SPDX-License-Identifier: Apache-2.0

import sys
import argparse
import pprint
import os
import struct
from distutils.version import LooseVersion

import elftools
from elftools.elf.elffile import ELFFile
from elftools.dwarf import descriptions
from elftools.elf.sections import SymbolTableSection

if LooseVersion(elftools.__version__) < LooseVersion('0.24'):
    sys.stderr.write("pyelftools is out of date, need version 0.24 or later\n")
    sys.exit(1)

kobjects = [
        "k_alert",
        "k_msgq",
        "k_mutex",
        "k_pipe",
        "k_sem",
        "k_stack",
        "k_thread",
        "k_timer",
        "device"
        ]

subsystems = [
        "adc_driver_api",
        "aio_cmp_driver_api",
        "clock_control_driver_api",
        "counter_driver_api",
        "crypto_driver_api",
        "dma_driver_api",
        "eth_driver_api",
        "flash_driver_api",
        "gpio_driver_api",
        "i2c_driver_api",
        "i2s_driver_api",
        "ipm_driver_api",
        "pinmux_driver_api",
        "pwm_driver_api",
        "random_driver_api",
        "rtc_driver_api",
        "sensor_driver_api",
        "shared_irq_driver_api",
        "spi_driver_api",
        "uart_driver_api",
        "wdt_driver_api",
        ]


def subsystem_to_enum(subsys):
    return "K_OBJ_DRIVER_" + subsys[:-11].upper()

def kobject_to_enum(ko):
    return "K_OBJ_" + ko[2:].upper()

DW_OP_addr = 0x3
DW_OP_fbreg = 0x91

# Global type environment. Populated by pass 1.
type_env = {}

# --- debug stuff ---

scr = os.path.basename(sys.argv[0])

def debug(text):
    if not args.verbose:
        return
    sys.stdout.write(scr + ": " + text + "\n")

def error(text):
    sys.stderr.write("%s ERROR: %s\n" % (scr, text))
    sys.exit(1)

def debug_die(die, text):
    fn, ln = get_filename_lineno(die)

    debug(str(die))
    debug("File '%s', line %d:" % (fn, ln))
    debug("    %s" % text)


# --- type classes ----

class ArrayType:
    def __init__(self, offset, num_members, member_type):
        self.num_members = num_members
        self.member_type = member_type
        self.offset = offset

    def __repr__(self):
        return "<array of %d, size %d>" % (self.member_type, self.num_members)

    def has_kobject(self):
        if self.member_type not in type_env:
            return False

        return type_env[self.member_type].has_kobject()

    def get_kobjects(self, addr):
        mt = type_env[self.member_type]
        objs = {}

        for i in range(self.num_members):
            objs.update(mt.get_kobjects(addr + (i * mt.size)))
        return objs


class AggregateTypeMember:
    def __init__(self, offset, member_name, member_type, member_offset):
        self.member_name = member_name
        self.member_type = member_type
        self.member_offset = member_offset

    def __repr__(self):
        return "<member %s, type %d, offset %d>" % (self.member_name,
                self.member_type, self.member_offset)

    def has_kobject(self):
        if self.member_type not in type_env:
            return False

        return type_env[self.member_type].has_kobject()

    def get_kobjects(self, addr):
        mt = type_env[self.member_type]
        return mt.get_kobjects(addr + self.member_offset)


class ConstType:
    def __init__(self, child_type):
        self.child_type = child_type

    def __repr__(self):
        return "<const %d>" % self.child_type

    def has_kobject(self):
        if self.child_type not in type_env:
            return False

        return type_env[self.child_type].has_kobject()

    def get_kobjects(self, addr):
        return type_env[self.child_type].get_kobjects(addr)


class AggregateType:
    def __init__(self, offset, name, size):
        self.name = name
        self.size = size
        self.offset = offset
        self.members = []

    def add_member(self, member):
        self.members.append(member)

    def __repr__(self):
        return "<struct %s, with %s>" % (self.name, self.members)

    def has_kobject(self):
        result = False

        bad_members = []

        for member in self.members:
            if member.has_kobject():
                result = True
            else:
                bad_members.append(member)
                # Don't need to consider this again, just remove it

        for bad_member in bad_members:
            self.members.remove(bad_member)

        return result

    def get_kobjects(self, addr):
        objs = {}
        for member in self.members:
            objs.update(member.get_kobjects(addr))
        return objs


class KobjectType:
    def __init__(self, offset, name, size, api=False):
        self.name = name
        self.size = size
        self.offset = offset
        self.api = api

    def __repr__(self):
        return "<kobject %s>" % self.name

    def has_kobject(self):
        return True

    def get_kobjects(self, addr):
        return {addr: self}

# --- helper functions for getting data from DIEs ---

def die_get_name(die):
    if not 'DW_AT_name' in die.attributes:
        return None
    return die.attributes["DW_AT_name"].value.decode("utf-8")


def die_get_type_offset(die):
    if not 'DW_AT_type' in die.attributes:
        return 0

    return die.attributes["DW_AT_type"].value + die.cu.cu_offset


def die_get_byte_size(die):
    if not 'DW_AT_byte_size' in die.attributes:
        return 0

    return die.attributes["DW_AT_byte_size"].value

def analyze_die_struct(die):
    name = die_get_name(die) or "<anon>"
    offset = die.offset
    size = die_get_byte_size(die)

    # Incomplete type
    if not size:
        return

    if name in kobjects:
        type_env[offset] = KobjectType(offset, name, size)
    elif name in subsystems:
        type_env[offset] = KobjectType(offset, name, size, api=True)
    else:
        at = AggregateType(offset, name, size)
        type_env[offset] = at

        for child in die.iter_children():
            if child.tag != "DW_TAG_member":
                continue
            child_type = die_get_type_offset(child)
            member_offset = child.attributes["DW_AT_data_member_location"].value
            cname = die_get_name(child) or "<anon>"
            m = AggregateTypeMember(child.offset, cname, child_type,
                    member_offset)
            at.add_member(m)

        return


def analyze_die_const(die):
    type_offset = die_get_type_offset(die)
    if not type_offset:
        return

    type_env[die.offset] = ConstType(type_offset)


def analyze_die_array(die):
    type_offset = die_get_type_offset(die)
    elements = 1
    size_found = False

    for child in die.iter_children():
        if child.tag != "DW_TAG_subrange_type":
            continue
        if "DW_AT_upper_bound" not in child.attributes:
            continue

        ub = child.attributes["DW_AT_upper_bound"]
        if not ub.form.startswith("DW_FORM_data"):
            continue

        size_found = True
        elements = elements * (ub.value + 1)

    if not size_found:
        return

    type_env[die.offset] = ArrayType(die.offset, elements, type_offset)


def addr_deref(elf, addr):
    for section in elf.iter_sections():
        start = section['sh_addr']
        end = start + section['sh_size']

        if addr >= start and addr < end:
            data = section.data()
            offset = addr - start
            return struct.unpack("<I" if args.little_endian else ">I",
                    data[offset:offset+4])[0]

    return 0


def device_get_api_addr(elf, addr):
    return addr_deref(elf, addr + 4)


def get_filename_lineno(die):
    lp_header = die.dwarfinfo.line_program_for_CU(die.cu).header
    files = lp_header["file_entry"]
    includes = lp_header["include_directory"]

    fileinfo = files[die.attributes["DW_AT_decl_file"].value - 1]
    filename = fileinfo.name.decode("utf-8")
    filedir = includes[fileinfo.dir_index - 1].decode("utf-8")

    path = os.path.join(filedir, filename)
    lineno = die.attributes["DW_AT_decl_line"].value
    return (path, lineno)


def find_kobjects(elf, syms):
    if not elf.has_dwarf_info():
        sys.stderr.write("ELF file has no DWARF information\n");
        sys.exit(1)

    kram_start = syms["__kernel_ram_start"]
    kram_end = syms["__kernel_ram_end"]
    krom_start = syms["_image_rom_start"]
    krom_end = syms["_image_rom_end"]

    di = elf.get_dwarf_info()

    variables = []

    # Step 1: collect all type information.
    for CU in di.iter_CUs():
        CU_path = CU.get_top_DIE().get_full_path()
        lp = di.line_program_for_CU(CU)

        for idx, die in enumerate(CU.iter_DIEs()):
            # Unions are disregarded, kernel objects should never be union
            # members since the memory is not dedicated to that object and
            # could be something else
            if die.tag == "DW_TAG_structure_type":
                analyze_die_struct(die)
            elif die.tag == "DW_TAG_const_type":
                analyze_die_const(die)
            elif die.tag == "DW_TAG_array_type":
                analyze_die_array(die)
            elif die.tag == "DW_TAG_variable":
                variables.append(die)

    # Step 2: filter type_env to only contain kernel objects, or structs and
    # arrays of kernel objects
    bad_offsets = []
    for offset, type_object in type_env.items():
        if not type_object.has_kobject():
            bad_offsets.append(offset)

    for offset in bad_offsets:
        del type_env[offset]

    # Step 3: Now that we know all the types we are looking for, examine
    # all variables
    all_objs = {}

    # Gross hack, see below
    work_q_found = False

    for die in variables:
        name = die_get_name(die)
        if not name:
            continue

        type_offset = die_get_type_offset(die)

        # Is this a kernel object, or a structure containing kernel objects?
        if type_offset not in type_env:
            continue

        if "DW_AT_declaration" in die.attributes:
            # FIXME: why does k_sys_work_q not resolve an address in the DWARF
            # data??? Every single instance it finds is an extern definition
            # but not the actual instance in system_work_q.c
            # Is there something weird about how lib-y stuff is linked?
            if name == "k_sys_work_q" and not work_q_found and name in syms:
                addr = syms[name]
                work_q_found = True
            else:
                continue
        else:
            if "DW_AT_location" not in die.attributes:
                debug_die(die, "No location information for object '%s'; possibly stack allocated"
                        % name)
                continue

            loc = die.attributes["DW_AT_location"]
            if loc.form != "DW_FORM_exprloc":
                debug_die(die, "kernel object '%s' unexpected location format" % name)
                continue

            opcode = loc.value[0]
            if opcode != DW_OP_addr:

                # Check if frame pointer offset DW_OP_fbreg
                if opcode == DW_OP_fbreg:
                    debug_die(die, "kernel object '%s' found on stack" % name)
                else:
                    debug_die(die, "kernel object '%s' unexpected exprloc opcode %s"
                            % (name, hex(opcode)))
                continue

            addr = (loc.value[1] | (loc.value[2] << 8) | (loc.value[3] << 16) |
                    (loc.value[4] << 24))

        if addr == 0:
            # Never linked; gc-sections deleted it
            continue

        if ((addr < kram_start or addr >= kram_end)
                and (addr < krom_start or addr >= krom_end)):

            debug_die(die, "object '%s' found in invalid location %s" %
                    (name, hex(addr)));
            continue

        type_obj = type_env[type_offset]
        objs = type_obj.get_kobjects(addr)
        all_objs.update(objs)

        debug("symbol '%s' at %s contains %d object(s)" % (name, hex(addr),
              len(objs)))

    # Step 4: objs is a dictionary mapping variable memory addresses to their
    # associated type objects. Now that we have seen all variables and can
    # properly look up API structs, convert this into a dictionary mapping
    # variables to the C enumeration of what kernel object type it is.
    ret = {}
    for addr, ko in all_objs.items():
        # API structs don't get into the gperf table
        if ko.api:
            continue

        if ko.name != "device":
            # Not a device struct so we immediately know its type
            ret[addr] = kobject_to_enum(ko.name)
            continue

        # Device struct. Need to get the address of its API struct, if it has
        # one.
        apiaddr = device_get_api_addr(elf, addr)
        if apiaddr not in all_objs:
            # API struct does not correspond to a known subsystem, skip it
            continue

        apiobj = all_objs[apiaddr]
        ret[addr] = subsystem_to_enum(apiobj.name)

    debug("found %d kernel object instances total" % len(ret))
    return ret


header = """%compare-lengths
%define lookup-function-name _k_object_lookup
%language=ANSI-C
%global-table
%struct-type
%{
#include <kernel.h>
#include <syscall_handler.h>
#include <string.h>
%}
struct _k_object;
%%
"""


# Different versions of gperf have different prototypes for the lookup function,
# best to implement the wrapper here. The pointer value itself is turned into
# a string, we told gperf to expect binary strings that are not NULL-terminated.
footer = """%%
struct _k_object *_k_object_find(void *obj)
{
    return _k_object_lookup((const char *)obj, sizeof(void *));
}

void _k_object_wordlist_foreach(_wordlist_cb_func_t func, void *context)
{
    int i;

    for (i = MIN_HASH_VALUE; i <= MAX_HASH_VALUE; i++) {
        if (wordlist[i].name) {
            func(&wordlist[i], context);
        }
    }
}
"""


def write_gperf_table(fp, objs, static_begin, static_end):
    fp.write(header)

    for obj_addr, obj_type in objs.items():
        # pre-initialized objects fall within this memory range, they are
        # either completely initialized at build time, or done automatically
        # at boot during some PRE_KERNEL_* phase
        initialized = obj_addr >= static_begin and obj_addr < static_end

        byte_str = struct.pack("<I" if args.little_endian else ">I", obj_addr)
        fp.write("\"")
        for byte in byte_str:
            val = "\\x%02x" % byte
            fp.write(val)

        fp.write("\",{},%s,%s\n" % (obj_type,
                 "K_OBJ_FLAG_INITIALIZED" if initialized else "0"))

    fp.write(footer)


def get_symbols(obj):
    for section in obj.iter_sections():
        if isinstance(section, SymbolTableSection):
            return {sym.name: sym.entry.st_value
                    for sym in section.iter_symbols()}

    raise LookupError("Could not find symbol table")


def parse_args():
    global args

    parser = argparse.ArgumentParser(description = __doc__,
            formatter_class = argparse.RawDescriptionHelpFormatter)

    parser.add_argument("-k", "--kernel", required=True,
            help="Input zephyr ELF binary")
    parser.add_argument("-o", "--output", required=True,
            help="Output list of kernel object addresses for gperf use")
    parser.add_argument("-v", "--verbose", action="store_true",
            help="Print extra debugging information")
    args = parser.parse_args()


def main():
    parse_args()

    with open(args.kernel, "rb") as fp:
        elf = ELFFile(fp)
        args.little_endian = elf.little_endian
        syms = get_symbols(elf)
        objs = find_kobjects(elf, syms)

    with open(args.output, "w") as fp:
        write_gperf_table(fp, objs, syms["_static_kernel_objects_begin"],
                syms["_static_kernel_objects_end"])

if __name__ == "__main__":
    main()

