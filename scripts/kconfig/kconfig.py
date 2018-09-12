#!/usr/bin/env python3
# Modified from: https://github.com/ulfalizer/Kconfiglib/blob/master/examples/merge_config.py
import argparse
import os
import sys
import textwrap

from kconfiglib import Kconfig, Symbol, BOOL, STRING, TRISTATE, TRI_TO_STR

# Warnings that won't be turned into errors (but that will still be printed),
# identified by a substring of the warning. The warning texts from Kconfiglib
# are guaranteed to not change.
WARNING_WHITELIST = (
    # Warning generated when a symbol with unsatisfied dependencies is being
    # selected. These should be investigated, but whitelist them for now.
    "y-selected",
)

def fatal(warning):
    # Returns True if 'warning' is not whitelisted and should be turned into an
    # error

    for wl_warning in WARNING_WHITELIST:
        if wl_warning in warning:
            return False

    # Only allow enabled (printed) warnings to be fatal
    return enabled(warning)


def enabled(warning):
    # Returns True if 'warning' should be printed

    # Some prj.conf files seem to deliberately override settings from the board
    # configuration (e.g. samples/bluetooth/hci_usb/prj.conf, with GPIO=y).
    # Disable the warning about a symbol being assigned more than once.
    return "set more than once" not in warning


def main():
    parse_args()

    print("Parsing Kconfig tree in {}".format(args.kconfig_root))
    kconf = Kconfig(args.kconfig_root, warn_to_stderr=False)

    # Enable warnings for assignments to undefined symbols
    kconf.enable_undef_warnings()

    for i, config in enumerate(args.conf_fragments):
        print(("Loading {} as base" if i == 0 else "Merging {}")
              .format(config))
        # replace=False creates a merged configuration
        kconf.load_config(config, replace=False)

    # Print warnings for symbols whose actual value doesn't match the assigned
    # value
    for sym in kconf.unique_defined_syms:
        # Was the symbol assigned to? Choice symbols are checked separately.
        if sym.user_value is not None and not sym.choice:
            verify_assigned_sym_value(sym)

    # Print warnings for choices whose actual selection doesn't match the user
    # selection
    for choice in kconf.unique_choices:
        if choice.user_selection:
            verify_assigned_choice_value(choice)

    # Hack: Force all symbols to be evaluated, to catch warnings generated
    # during evaluation. Wait till the end to write the actual output files, so
    # that we don't generate any output if there are warnings-turned-errors.
    #
    # Kconfiglib caches calculated symbol values internally, so this is still
    # fast.
    kconf.write_config(os.devnull)

    # We could roll this into the loop below, but it's nice to always print all
    # warnings, even if one of them turns out to be fatal
    for warning in kconf.warnings:
        if enabled(warning):
            print("\n" + warning, file=sys.stderr)

    # Turn all warnings except for explicity whitelisted ones into errors. In
    # particular, this will turn assignments to undefined Kconfig variables
    # into errors.
    #
    # A warning is generated by this script whenever a symbol gets a different
    # value than the one it was assigned. Keep that one as just a warning for
    # now as well.
    for warning in kconf.warnings:
        if fatal(warning):
            sys.exit("\n" + textwrap.fill(
                "Error: Aborting due to non-whitelisted Kconfig "
                "warning '{}'.\nNote: If this warning doesn't point "
                "to an actual problem, you can add it to the "
                "whitelist at the top of {}."
                .format(warning, sys.argv[0]),
                100) + "\n")

    # Write the merged configuration and the C header
    kconf.write_config(args.dotconfig)
    kconf.write_autoconf(args.autoconf)


# Message printed when a promptless symbol is assigned (and doesn't get the
# assigned value)
PROMPTLESS_HINT = """
This symbol has no prompt, meaning assignments in configuration files have no
effect on it. It can only be set indirectly, via Kconfig defaults (e.g. in a
Kconfig.defconfig file) or through being 'select'ed or 'imply'd (note: try to
avoid Kconfig 'select's except for trivial promptless "helper" symbols without
dependencies, as it ignores dependencies and forces symbols on)."""

# Message about where to look up symbol information
SYM_INFO_HINT = """
You can check symbol information (including dependencies) in the 'menuconfig'
interface (see the Application Development Primer section of the manual), or in
the Kconfig reference at
http://docs.zephyrproject.org/latest/reference/kconfig/CONFIG_{}.html (which is
updated regularly from the master branch). See the 'Setting configuration
values' section of the Board Porting Guide as well."""

PROMPTLESS_HINT_EXTRA = """
It covers Kconfig.defconfig files."""

def verify_assigned_sym_value(sym):
    # Verifies that the value assigned to 'sym' "took" (matches the value the
    # symbol actually got), printing a warning otherwise

    # Tristate values are represented as 0, 1, 2. Having them as
    # "n", "m", "y" is more convenient here, so convert.
    if sym.type in (BOOL, TRISTATE):
        user_value = TRI_TO_STR[sym.user_value]
    else:
        user_value = sym.user_value

    if user_value != sym.str_value:
        msg = "warning: {} was assigned the value '{}' but got the " \
              "value '{}'." \
              .format(name_and_loc(sym), user_value, sym.str_value)

        if promptless(sym): msg += PROMPTLESS_HINT
        msg += SYM_INFO_HINT.format(sym.name)
        if promptless(sym): msg += PROMPTLESS_HINT_EXTRA

        # Use a large fill() width to try to avoid linebreaks in the symbol
        # reference link
        print("\n" + textwrap.fill(msg, 100), file=sys.stderr)


def verify_assigned_choice_value(choice):
    # Verifies that the choice symbol that was selected (by setting it to y)
    # ended up as the selection, printing a warning otherwise.
    #
    # We check choice symbols separately to avoid warnings when two different
    # choice symbols within the same choice are set to y. This might happen if
    # a choice selection from a board defconfig is overriden in a prj.conf, for
    # example. The last choice symbol set to y becomes the selection (and all
    # other choice symbols get the value n).
    #
    # Without special-casing choices, we'd detect that the first symbol set to
    # y ended up as n, and print a spurious warning.

    if choice.user_selection is not choice.selection:
        msg = "warning: the choice symbol {} was selected (set =y), but {} " \
              "ended up as the choice selection. {}" \
              .format(name_and_loc(choice.user_selection),
                      name_and_loc(choice.selection) if choice.selection
                          else "no symbol",
                      SYM_INFO_HINT.format(choice.user_selection.name))

        print("\n" + textwrap.fill(msg, 100), file=sys.stderr)


def name_and_loc(sym):
    # Helper for printing the name and Kconfig file location(s) for a symbol

    if not sym.nodes:
        return sym.name + " (undefined)"

    return "{} (defined at {})".format(
        sym.name,
        ", ".join("{}:{}".format(node.filename, node.linenr)
                  for node in sym.nodes))


def promptless(sym):
    # Returns True if 'sym' has no prompt. Since the symbol might be defined in
    # multiple locations, we need to check all locations.

    return not any(node.prompt for node in sym.nodes)


def parse_args():
    global args

    parser = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter
    )

    parser.add_argument("kconfig_root")
    parser.add_argument("dotconfig")
    parser.add_argument("autoconf")
    parser.add_argument("conf_fragments", metavar='conf', type=str, nargs='+')

    args = parser.parse_args()


if __name__ == "__main__":
    main()
