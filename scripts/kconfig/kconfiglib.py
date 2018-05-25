# Copyright (c) 2011-2018, Ulf Magnusson
# SPDX-License-Identifier: ISC

"""
Overview
========

Kconfiglib is a Python 2/3 library for scripting and extracting information
from Kconfig (https://www.kernel.org/doc/Documentation/kbuild/kconfig-language.txt)
configuration systems.

See the homepage at https://github.com/ulfalizer/Kconfiglib for a longer
overview.

Using Kconfiglib on the Linux kernel with the Makefile targets
==============================================================

For the Linux kernel, a handy interface is provided by the
scripts/kconfig/Makefile patch, which can be applied with either 'git am' or
the 'patch' utility:

  $ wget -qO- https://raw.githubusercontent.com/ulfalizer/Kconfiglib/master/makefile.patch | git am
  $ wget -qO- https://raw.githubusercontent.com/ulfalizer/Kconfiglib/master/makefile.patch | patch -p1

Warning: Not passing -p1 to patch will cause the wrong file to be patched.

Please tell me if the patch does not apply. It should be trivial to apply
manually, as it's just a block of text that needs to be inserted near the other
*conf: targets in scripts/kconfig/Makefile.

Look further down for a motivation for the Makefile patch and for instructions
on how you can use Kconfiglib without it.

If you do not wish to install Kconfiglib via pip, the Makefile patch is set up
so that you can also just clone Kconfiglib into the kernel root:

  $ git clone git://github.com/ulfalizer/Kconfiglib.git
  $ git am Kconfiglib/makefile.patch  (or 'patch -p1 < Kconfiglib/makefile.patch')

Warning: The directory name Kconfiglib/ is significant in this case, because
it's added to PYTHONPATH by the new targets in makefile.patch.

The targets added by the Makefile patch are described in the following
sections.


make [ARCH=<arch>] iscriptconfig
--------------------------------

This target gives an interactive Python prompt where a Kconfig instance has
been preloaded and is available in 'kconf'. To change the Python interpreter
used, pass PYTHONCMD=<executable> to make. The default is "python".

To get a feel for the API, try evaluating and printing the symbols in
kconf.defined_syms, and explore the MenuNode menu tree starting at
kconf.top_node by following 'next' and 'list' pointers.

The item contained in a menu node is found in MenuNode.item (note that this can
be one of the constants kconfiglib.MENU and kconfiglib.COMMENT), and all
symbols and choices have a 'nodes' attribute containing their menu nodes
(usually only one). Printing a menu node will print its item, in Kconfig
format.

If you want to look up a symbol by name, use the kconf.syms dictionary.


make scriptconfig SCRIPT=<script> [SCRIPT_ARG=<arg>]
----------------------------------------------------

This target runs the Python script given by the SCRIPT parameter on the
configuration. sys.argv[1] holds the name of the top-level Kconfig file
(currently always "Kconfig" in practice), and sys.argv[2] holds the SCRIPT_ARG
argument, if given.

See the examples/ subdirectory for example scripts.


Using Kconfiglib without the Makefile targets
=============================================

The make targets are only needed for a trivial reason: The Kbuild makefiles
export environment variables which are referenced inside the Kconfig files
(via e.g. 'source "arch/$SRCARCH/Kconfig").

In practice, the only variables referenced (as of writing, and for many years)
are ARCH, SRCARCH, and KERNELVERSION. To run Kconfiglib without the Makefile
patch, do this:

  $ ARCH=x86 SRCARCH=x86 KERNELVERSION=`make kernelversion` python
  >>> import kconfiglib
  >>> kconf = kconfiglib.Kconfig()  # filename defaults to "Kconfig"

Search the top-level Makefile for "Additional ARCH settings" to see other
possibilities for ARCH and SRCARCH. Kconfiglib will print a warning if an unset
environment variable is referenced inside the Kconfig files.


Intro to symbol values
======================

Kconfiglib has the same assignment semantics as the C implementation.

Any symbol can be assigned a value by the user (via Kconfig.load_config() or
Symbol.set_value()), but this user value is only respected if the symbol is
visible, which corresponds to it (currently) being visible in the menuconfig
interface.

For symbols with prompts, the visibility of the symbol is determined by the
condition on the prompt. Symbols without prompts are never visible, so setting
a user value on them is pointless. A warning will be printed by default if
Symbol.set_value() is called on a promptless symbol. Assignments to promptless
symbols are normal within a .config file, so no similar warning will be printed
by load_config().

Dependencies from parents and 'if'/'depends on' are propagated to properties,
including prompts, so these two configurations are logically equivalent:

(1)

  menu "menu"
  depends on A

  if B

  config FOO
      tristate "foo" if D
      default y
      depends on C

  endif

  endmenu

(2)

  menu "menu"
  depends on A

  config FOO
      tristate "foo" if A && B && C && D
      default y if A && B && C

  endmenu

In this example, A && B && C && D (the prompt condition) needs to be non-n for
FOO to be visible (assignable). If its value is m, the symbol can only be
assigned the value m: The visibility sets an upper bound on the value that can
be assigned by the user, and any higher user value will be truncated down.

'default' properties are independent of the visibility, though a 'default' will
often get the same condition as the prompt due to dependency propagation.
'default' properties are used if the symbol is not visible or has no user
value.

Symbols with no user value (or that have a user value but are not visible) and
no (active) 'default' default to n for bool/tristate symbols, and to the empty
string for other symbol types.

'select' works similarly to symbol visibility, but sets a lower bound on the
value of the symbol. The lower bound is determined by the value of the
select*ing* symbol. 'select' does not respect visibility, so non-visible
symbols can be forced to a particular (minimum) value by a select as well.

For non-bool/tristate symbols, it only matters whether the visibility is n or
non-n: m visibility acts the same as y visibility.

Conditions on 'default' and 'select' work in mostly intuitive ways. If the
condition is n, the 'default' or 'select' is disabled. If it is m, the
'default' or 'select' value (the value of the selecting symbol) is truncated
down to m.

When writing a configuration with Kconfig.write_config(), only symbols that are
visible, have an (active) default, or are selected will get written out (note
that this includes all symbols that would accept user values). Kconfiglib
matches the .config format produced by the C implementations down to the
character. This eases testing.

For a visible bool/tristate symbol FOO with value n, this line is written to
.config:

    # CONFIG_FOO is not set

The point is to remember the user n selection (which might differ from the
default value the symbol would get), while at the same sticking to the rule
that undefined corresponds to n (.config uses Makefile format, making the line
above a comment). When the .config file is read back in, this line will be
treated the same as the following assignment:

    CONFIG_FOO=n

In Kconfiglib, the set of (currently) assignable values for a bool/tristate
symbol appear in Symbol.assignable. For other symbol types, just check if
sym.visibility is non-0 (non-n) to see whether the user value will have an
effect.


Intro to the menu tree
======================

The menu structure, as seen in e.g. menuconfig, is represented by a tree of
MenuNode objects. The top node of the configuration corresponds to an implicit
top-level menu, the title of which is shown at the top in the standard
menuconfig interface. (The title with variables expanded is available in
Kconfig.mainmenu_text in Kconfiglib.)

The top node is found in Kconfig.top_node. From there, you can visit child menu
nodes by following the 'list' pointer, and any following menu nodes by
following the 'next' pointer. Usually, a non-None 'list' pointer indicates a
menu or Choice, but menu nodes for symbols can sometimes have a non-None 'list'
pointer too due to submenus created implicitly from dependencies.

MenuNode.item is either a Symbol or a Choice object, or one of the constants
MENU and COMMENT. The prompt of the menu node can be found in MenuNode.prompt,
which also holds the title for menus and comments. For Symbol and Choice,
MenuNode.help holds the help text (if any, otherwise None).

Most symbols will only have a single menu node. A symbol defined in multiple
locations will have one menu node for each location. The list of menu nodes for
a Symbol or Choice can be found in the Symbol/Choice.nodes attribute.

Note that prompts and help texts for symbols and choices are stored in their
menu node(s) rather than in the Symbol or Choice objects themselves. This makes
it possible to define a symbol in multiple locations with a different prompt or
help text in each location. To get the help text or prompt for a symbol with a
single menu node, do sym.nodes[0].help and sym.nodes[0].prompt, respectively.
The prompt is a (text, condition) tuple, where condition determines the
visibility (see 'Intro to expressions' below).

This organization mirrors the C implementation. MenuNode is called
'struct menu' there, but I thought "menu" was a confusing name.

It is possible to give a Choice a name and define it in multiple locations,
hence why Choice.nodes is also a list.

As a convenience, the properties added at a particular definition location are
available on the MenuNode itself, in e.g. MenuNode.defaults. This is helpful
when generating documentation, so that symbols/choices defined in multiple
locations can be shown with the correct properties at each location.


Intro to expressions
====================

Expressions can be evaluated with the expr_value() function and printed with
the expr_str() function (these are used internally as well). Evaluating an
expression always yields a tristate value, where n, m, and y are represented as
0, 1, and 2, respectively.

The following table should help you figure out how expressions are represented.
A, B, C, ... are symbols (Symbol instances), NOT is the kconfiglib.NOT
constant, etc.

Expression            Representation
----------            --------------
A                     A
"A"                   A (constant symbol)
!A                    (NOT, A)
A && B                (AND, A, B)
A && B && C           (AND, A, (AND, B, C))
A || B                (OR, A, B)
A || (B && C && D)    (OR, A, (AND, B, (AND, C, D)))
A = B                 (EQUAL, A, B)
A != "foo"            (UNEQUAL, A, foo (constant symbol))
A && B = C && D       (AND, A, (AND, (EQUAL, B, C), D))
n                     Kconfig.n (constant symbol)
m                     Kconfig.m (constant symbol)
y                     Kconfig.y (constant symbol)
"y"                   Kconfig.y (constant symbol)

Strings like "foo" in 'default "foo"' or 'depends on SYM = "foo"' are
represented as constant symbols, so the only values that appear in expressions
are symbols***. This mirrors the C implementation.

***For choice symbols, the parent Choice will appear in expressions as well,
but it's usually invisible as the value interfaces of Symbol and Choice are
identical. This mirrors the C implementation and makes different choice modes
"just work".

Manual evaluation examples:

  - The value of A && B is min(A.tri_value, B.tri_value)

  - The value of A || B is max(A.tri_value, B.tri_value)

  - The value of !A is 2 - A.tri_value

  - The value of A = B is 2 (y) if A.str_value == B.str_value, and 0 (n)
    otherwise. Note that str_value is used here instead of tri_value.

    For constant (as well as undefined) symbols, str_value matches the name of
    the symbol. This mirrors the C implementation and explains why
    'depends on SYM = "foo"' above works as expected.

n/m/y are automatically converted to the corresponding constant symbols
"n"/"m"/"y" (Kconfig.n/m/y) during parsing.

Kconfig.const_syms is a dictionary like Kconfig.syms but for constant symbols.

If a condition is missing (e.g., <cond> when the 'if <cond>' is removed from
'default A if <cond>'), it is actually Kconfig.y. The standard __str__()
functions just avoid printing 'if y' conditions to give cleaner output.


Kconfig extensions
==================

Kconfiglib implements two Kconfig extensions related to 'source':

'source' with relative path
---------------------------

The library implements a custom 'rsource' statement that allows to import
Kconfig file by specifying path relative to directory of the currently parsed
file, instead of path relative to project root.
This extension is not supported by Linux kernel tools (yet).

Consider following directory tree:

  Project
  +--Kconfig
  |
  +--src
     +--Kconfig
     |
     +--SubSystem1
        +--Kconfig
        |
        +--ModuleA
           +--Kconfig

In above example, src/SubSystem1/Kconfig imports Kconfig for ModuleA.
With default 'source' it looks like:

  source "src/SubSystem1/ModuleA/Kconfig"

Using 'rsource' it can be rewritten as:

  rsource "ModuleA/Kconfig"

If absolute path is given to 'rsource' then it follows behavior of 'source'.


Globbed sourcing with 'gsource' and 'grsource'
----------------------------------------------

The 'gsource' statement works like 'source', but takes a glob pattern and
sources all matching Kconfig files. For example, the following statement might
source 'sub1/foofoofoo' and 'sub2/foobarfoo':

  gsource "sub[12]/foo*foo"

The glob patterns accepted are the same as for the standard glob.glob()
function.

If no file matches the pattern, gsource is a no-op, and hence doubles as an
include-if-exists function when given a plain filename (similar to '-include'
in 'make'). It might help to think of the 'g' as "generalized" in that case.

'grsource' is the 'rsource' version of 'gsource' and globs relative to the
directory of the current Kconfig file.


Feedback
========

Send bug reports, suggestions, and questions to ulfalizer a.t Google's email
service, or open a ticket on the GitHub page.
"""
import errno
import glob
import os
import platform
import re
import sys
import textwrap

# File layout:
#
# Public classes
# Public functions
# Internal functions
# Public global constants
# Internal global constants

# Line length: 79 columns

#
# Public classes
#

class Kconfig(object):
    """
    Represents a Kconfig configuration, e.g. for x86 or ARM. This is the set of
    symbols, choices, and menu nodes appearing in the configuration. Creating
    any number of Kconfig objects (including for different architectures) is
    safe. Kconfiglib doesn't keep any global state.

    The following attributes are available. They should be treated as
    read-only, and some are implemented through @property magic.

    syms:
      A dictionary with all symbols in the configuration, indexed by name. Also
      includes all symbols that are referenced in expressions but never
      defined, except for constant (quoted) symbols.

      Undefined symbols can be recognized by Symbol.nodes being empty -- see
      the 'Intro to the menu tree' section in the module docstring.

    const_syms:
      A dictionary like 'syms' for constant (quoted) symbols

    named_choices:
      A dictionary like 'syms' for named choices (choice FOO)

    defined_syms:
      A list with all defined symbols, in the same order as they appear in the
      Kconfig files. Provided as a convenience.

    n/m/y:
      The predefined constant symbols n/m/y. Also available in const_syms.

    modules:
      The Symbol instance for the modules symbol. Currently hardcoded to
      MODULES, which is backwards compatible. Kconfiglib will warn if
      'option modules' is set on some other symbol. Tell me if you need proper
      'option modules' support.

      'modules' is never None. If the MODULES symbol is not explicitly defined,
      its tri_value will be 0 (n), as expected.

      A simple way to enable modules is to do 'kconf.modules.set_value(2)'
      (provided the MODULES symbol is defined and visible). Modules are
      disabled by default in the kernel Kconfig files as of writing, though
      nearly all defconfig files enable them (with 'CONFIG_MODULES=y').

    defconfig_list:
      The Symbol instance for the 'option defconfig_list' symbol, or None if no
      defconfig_list symbol exists. The defconfig filename derived from this
      symbol can be found in Kconfig.defconfig_filename.

    defconfig_filename:
      The filename given by the defconfig_list symbol. This is taken from the
      first 'default' with a satisfied condition where the specified file
      exists (can be opened for reading). If a defconfig file foo/defconfig is
      not found and $srctree was set when the Kconfig was created,
      $srctree/foo/defconfig is looked up as well.

      References to Kconfig symbols ("$FOO") in the 'default' properties of the
      defconfig_filename symbol are are expanded before the file is looked up.

      'defconfig_filename' is None if either no defconfig_list symbol exists,
      or if the defconfig_list symbol has no 'default' with a satisfied
      condition that specifies a file that exists.

      Gotcha: scripts/kconfig/Makefile might pass --defconfig=<defconfig> to
      scripts/kconfig/conf when running e.g. 'make defconfig'. This option
      overrides the defconfig_list symbol, meaning defconfig_filename might not
      always match what 'make defconfig' would use.

    top_node:
      The menu node (see the MenuNode class) of the implicit top-level menu.
      Acts as the root of the menu tree.

    mainmenu_text:
      The prompt (title) of the top_node menu, with Kconfig variable references
      ("$FOO") expanded. Defaults to "Linux Kernel Configuration" (like in the
      C tools). Can be changed with the 'mainmenu' statement (see
      kconfig-language.txt).

    warnings:
      A list of strings containing all warnings that have been generated. This
      allows flexibility in how warnings are printed and processed.

      See the 'warn_to_stderr' parameter to Kconfig.__init__() and the
      Kconfig.enable/disable_stderr_warnings() functions as well. Note that
      warnings still get added to Kconfig.warnings when 'warn_to_stderr' is
      True.

      Just as for warnings printed to stderr, only optional warnings that are
      enabled will get added to Kconfig.warnings. See the various
      Kconfig.enable/disable_*_warnings() functions.

    srctree:
      The value of the $srctree environment variable when the configuration was
      loaded, or None if $srctree wasn't set. Kconfig and .config files are
      looked up relative to $srctree if they are not found in the base path
      (unless absolute paths are used). This is used to support out-of-tree
      builds. The C tools use this environment variable in the same way.

      Changing $srctree after creating the Kconfig instance has no effect. Only
      the value when the configuration is loaded matters. This avoids surprises
      if multiple configurations are loaded with different values for $srctree.

    config_prefix:
      The value of the $CONFIG_ environment variable when the configuration was
      loaded. This is the prefix used (and expected) on symbol names in .config
      files and C headers. Defaults to "CONFIG_". Used in the same way in the C
      tools.

      Like for srctree, only the value of $CONFIG_ when the configuration is
      loaded matters.
    """
    __slots__ = (
        "_choices",
        "_encoding",
        "_set_re_match",
        "_unset_re_match",
        "_warn_for_no_prompt",
        "_warn_for_redun_assign",
        "_warn_for_undef_assign",
        "_warn_to_stderr",
        "_warnings_enabled",
        "config_prefix",
        "const_syms",
        "defconfig_list",
        "defined_syms",
        "m",
        "modules",
        "n",
        "named_choices",
        "srctree",
        "syms",
        "top_node",
        "warnings",
        "y",

        # Parsing-related
        "_parsing_kconfigs",
        "_file",
        "_filename",
        "_linenr",
        "_filestack",
        "_line",
        "_saved_line",
        "_tokens",
        "_tokens_i",
        "_has_tokens",
    )

    #
    # Public interface
    #

    def __init__(self, filename="Kconfig", warn=True, warn_to_stderr=True,
                 encoding="utf-8"):
        """
        Creates a new Kconfig object by parsing Kconfig files. Raises
        KconfigSyntaxError on syntax errors. Note that Kconfig files are not
        the same as .config files (which store configuration symbol values).

        filename (default: "Kconfig"):
          The base Kconfig file. For the Linux kernel, you'll want "Kconfig"
          from the top-level directory, as environment variables will make sure
          the right Kconfig is included from there (arch/$SRCARCH/Kconfig as of
          writing).

          If you are using Kconfiglib via 'make scriptconfig', the filename of
          the base base Kconfig file will be in sys.argv[1]. It's currently
          always "Kconfig" in practice.

          The $srctree environment variable is used to look up Kconfig files if
          set. See the class documentation.

        warn (default: True):
          True if warnings related to this configuration should be generated.
          This can be changed later with Kconfig.enable/disable_warnings(). It
          is provided as a constructor argument since warnings might be
          generated during parsing.

          See the other Kconfig.enable_*_warnings() functions as well, which
          enable or suppress certain warnings when warnings are enabled.

          All generated warnings are added to the Kconfig.warnings list. See
          the class documentation.

        warn_to_stderr (default: True):
          True if warnings should be printed to stderr in addition to being
          added to Kconfig.warnings.

          This can be changed later with
          Kconfig.enable/disable_stderr_warnings().

        encoding (default: "utf-8"):
          The encoding to use when reading and writing files. If None, the
          encoding specified in the current locale will be used.

          The "utf-8" default avoids exceptions on systems that are configured
          to use the C locale, which implies an ASCII encoding.

          This parameter has no effect on Python 2, due to implementation
          issues (regular strings turning into Unicode strings, which are
          distinct in Python 2). Python 2 doesn't decode regular strings
          anyway.

          Related PEP: https://www.python.org/dev/peps/pep-0538/
        """
        self.srctree = os.environ.get("srctree")

        self.config_prefix = os.environ.get("CONFIG_")
        if self.config_prefix is None:
            self.config_prefix = "CONFIG_"

        # Regular expressions for parsing .config files, with the match()
        # method assigned directly as a small optimization (microscopic in this
        # case, but it's consistent with the other regexes)

        self._set_re_match = \
            re.compile(r"{}([^=]+)=(.*)".format(self.config_prefix),
                       _RE_ASCII).match

        self._unset_re_match = \
            re.compile(r"# {}([^ ]+) is not set".format(self.config_prefix),
                       _RE_ASCII).match


        self.warnings = []

        self._warnings_enabled = warn
        self._warn_to_stderr = warn_to_stderr
        self._warn_for_undef_assign = False
        self._warn_for_redun_assign = True


        self._encoding = encoding


        self.syms = {}
        self.const_syms = {}
        self.defined_syms = []
        self.named_choices = {}
        # List containing all choices. Not sure it's helpful to expose this.
        self._choices = []

        for nmy in "n", "m", "y":
            sym = Symbol()
            sym.kconfig = self
            sym.name = nmy
            sym.is_constant = True
            sym.orig_type = TRISTATE
            sym._cached_tri_val = STR_TO_TRI[nmy]

            self.const_syms[nmy] = sym

        self.n = self.const_syms["n"]
        self.m = self.const_syms["m"]
        self.y = self.const_syms["y"]

        # Make n/m/y well-formed symbols
        for nmy in "n", "m", "y":
            sym = self.const_syms[nmy]
            sym.rev_dep = sym.weak_rev_dep = sym.direct_dep = self.n

        # This is used to determine whether previously unseen symbols should be
        # registered. They shouldn't be if we parse expressions after parsing,
        # as part of Kconfig.eval_string().
        self._parsing_kconfigs = True

        self.modules = self._lookup_sym("MODULES")
        self.defconfig_list = None

        # The only predefined symbol besides n/m/y. DEFCONFIG_LIST uses this as
        # of writing.
        uname_sym = self._lookup_const_sym("UNAME_RELEASE")
        uname_sym.orig_type = STRING
        # env_var doubles as the SYMBOL_AUTO flag from the C implementation, so
        # just set it to something. The naming breaks a bit here.
        uname_sym.env_var = "<uname release>"
        uname_sym.defaults.append(
            (self._lookup_const_sym(platform.uname()[2]), self.y))
        self.syms["UNAME_RELEASE"] = uname_sym

        self.top_node = MenuNode()
        self.top_node.kconfig = self
        self.top_node.item = MENU
        self.top_node.is_menuconfig = True
        self.top_node.visibility = self.y
        self.top_node.prompt = ("Linux Kernel Configuration", self.y)
        self.top_node.parent = None
        self.top_node.dep = self.y
        self.top_node.filename = filename
        self.top_node.linenr = 1

        # Parse the Kconfig files

        # These implement a single line of "unget" for the parser
        self._saved_line = None
        self._has_tokens = False

        # Keeps track of the location in the parent Kconfig files. Kconfig
        # files usually source other Kconfig files.
        self._filestack = []

        # The current parsing location
        self._filename = filename
        self._linenr = 0

        self._file = self._open(filename)

        try:
            self._parse_block(None, self.top_node, self.top_node)
        except UnicodeDecodeError as e:
            _decoding_error(e, self._filename)

        self.top_node.list = self.top_node.next
        self.top_node.next = None

        self._parsing_kconfigs = False

        # Do various post-processing of the menu tree
        self._finalize_tree(self.top_node, self.y)


        # Do sanity checks. Some of these depend on everything being
        # finalized.

        for sym in self.defined_syms:
            _check_sym_sanity(sym)

        for choice in self._choices:
            _check_choice_sanity(choice)


        # Build Symbol._dependents for all symbols
        self._build_dep()

        self._warn_for_no_prompt = True

    @property
    def mainmenu_text(self):
        """
        See the class documentation.
        """
        return _expand(self.top_node.prompt[0])

    @property
    def defconfig_filename(self):
        """
        See the class documentation.
        """
        if not self.defconfig_list:
            return None

        for filename, cond in self.defconfig_list.defaults:
            if expr_value(cond):
                try:
                    with self._open(_expand(filename.str_value)) as f:
                        return f.name
                except IOError:
                    continue

        return None

    def load_config(self, filename, replace=True):
        """
        Loads symbol values from a file in the .config format. Equivalent to
        calling Symbol.set_value() to set each of the values.

        "# CONFIG_FOO is not set" within a .config file sets the user value of
        FOO to n. The C tools work the same way.

        The Symbol.user_value attribute can be inspected afterwards to see what
        value the symbol was assigned in the .config file (if any). The user
        value might differ from Symbol.str/tri_value if there are unsatisfied
        dependencies.

        filename:
          The file to load. Respects $srctree if set (see the class
          documentation).

        replace (default: True):
          True if all existing user values should be cleared before loading the
          .config.
        """
        # Disable the warning about assigning to symbols without prompts. This
        # is normal and expected within a .config file.
        self._warn_for_no_prompt = False

        # This stub only exists to make sure _warn_for_no_prompt gets reenabled
        try:
            self._load_config(filename, replace)
        except UnicodeDecodeError as e:
            _decoding_error(e, filename)
        finally:
            self._warn_for_no_prompt = True

    def _load_config(self, filename, replace):
        with self._open(filename) as f:
            if replace:
                # If we're replacing the configuration, keep track of which
                # symbols and choices got set so that we can unset the rest
                # later. This avoids invalidating everything and is faster.
                # Another benefit is that invalidation must be rock solid for
                # it to work, making it a good test.

                for sym in self.defined_syms:
                    sym._was_set = False

                for choice in self._choices:
                    choice._was_set = False

            # Small optimizations
            set_re_match = self._set_re_match
            unset_re_match = self._unset_re_match
            syms = self.syms

            for linenr, line in enumerate(f, 1):
                # The C tools ignore trailing whitespace
                line = line.rstrip()

                set_match = set_re_match(line)
                if set_match:
                    name, val = set_match.groups()
                    if name not in syms:
                        self._warn_undef_assign_load(name, val, filename,
                                                     linenr)
                        continue

                    sym = syms[name]
                    if not sym.nodes:
                        self._warn_undef_assign_load(name, val, filename,
                                                     linenr)
                        continue

                    if sym.orig_type in (BOOL, TRISTATE):
                        # The C implementation only checks the first character
                        # to the right of '=', for whatever reason
                        if not ((sym.orig_type == BOOL and
                                 val.startswith(("n", "y"))) or \
                                (sym.orig_type == TRISTATE and
                                 val.startswith(("n", "m", "y")))):
                            self._warn("'{}' is not a valid value for the {} "
                                       "symbol {}. Assignment ignored."
                                       .format(val, TYPE_TO_STR[sym.orig_type],
                                               _name_and_loc(sym)),
                                       filename, linenr)
                            continue

                        val = val[0]

                        if sym.choice and val != "n":
                            # During .config loading, we infer the mode of the
                            # choice from the kind of values that are assigned
                            # to the choice symbols

                            prev_mode = sym.choice.user_value
                            if prev_mode is not None and \
                               TRI_TO_STR[prev_mode] != val:

                                self._warn("both m and y assigned to symbols "
                                           "within the same choice",
                                           filename, linenr)

                            # Set the choice's mode
                            sym.choice.set_value(val)

                    elif sym.orig_type == STRING:
                        string_match = _conf_string_re_match(val)
                        if not string_match:
                            self._warn("malformed string literal in "
                                       "assignment to {}. Assignment ignored."
                                       .format(_name_and_loc(sym)),
                                       filename, linenr)
                            continue

                        val = unescape(string_match.group(1))

                else:
                    unset_match = unset_re_match(line)
                    if not unset_match:
                        # Print a warning for lines that match neither
                        # set_re_match() nor unset_re_match() and that are not
                        # blank lines or comments. 'line' has already been
                        # rstrip()'d, so blank lines show up as "" here.
                        if line and not line.lstrip().startswith("#"):
                            self._warn("ignoring malformed line '{}'"
                                       .format(line),
                                       filename, linenr)

                        continue

                    name = unset_match.group(1)
                    if name not in syms:
                        self._warn_undef_assign_load(name, "n", filename,
                                                     linenr)
                        continue

                    sym = syms[name]
                    if sym.orig_type not in (BOOL, TRISTATE):
                        continue

                    val = "n"

                # Done parsing the assignment. Set the value.

                if sym._was_set:
                    # Use strings for bool/tristate user values in the warning
                    if sym.orig_type in (BOOL, TRISTATE):
                        display_user_val = TRI_TO_STR[sym.user_value]
                    else:
                        display_user_val = sym.user_value

                    warn_msg = '{} set more than once. Old value: "{}", new value: "{}".'.format(
                        _name_and_loc(sym), display_user_val, val
                    )

                    if display_user_val == val:
                        self._warn_redun_assign(warn_msg, filename, linenr)
                    else:
                        self._warn(             warn_msg, filename, linenr)

                sym.set_value(val)

        if replace:
            # If we're replacing the configuration, unset the symbols that
            # didn't get set

            for sym in self.defined_syms:
                if not sym._was_set:
                    sym.unset_value()

            for choice in self._choices:
                if not choice._was_set:
                    choice.unset_value()

    def write_autoconf(self, filename,
                       header="/* Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib) */\n"):
        r"""
        Writes out symbol values as a C header file, matching the format used
        by include/generated/autoconf.h in the kernel.

        The ordering of the #defines matches the one generated by
        write_config(). The order in the C implementation depends on the hash
        table implementation as of writing, and so won't match.

        filename:
          Self-explanatory.

        header (default: "/* Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib) */\n"):
          Text that will be inserted verbatim at the beginning of the file. You
          would usually want it enclosed in '/* */' to make it a C comment,
          and include a final terminating newline.
        """
        with self._open_enc(filename, "w") as f:
            f.write(header)

            # Avoid duplicates -- see write_config()
            for sym in self.defined_syms:
                sym._written = False

            for sym in self.defined_syms:
                if not sym._written:
                    sym._written = True
                    # Note: _write_to_conf is determined when the value is
                    # calculated. This is a hidden function call due to
                    # property magic.
                    val = sym.str_value
                    if sym._write_to_conf:
                        if sym.orig_type in (BOOL, TRISTATE):
                            if val != "n":
                                f.write("#define {}{}{} 1\n"
                                        .format(self.config_prefix, sym.name,
                                                "_MODULE" if val == "m" else ""))

                        elif sym.orig_type == STRING:
                            f.write('#define {}{} "{}"\n'
                                    .format(self.config_prefix, sym.name,
                                            escape(val)))

                        elif sym.orig_type in (INT, HEX):
                            if sym.orig_type == HEX and \
                               not val.startswith(("0x", "0X")):
                                val = "0x" + val

                            f.write("#define {}{} {}\n"
                                    .format(self.config_prefix, sym.name, val))

                        else:
                            _internal_error("Internal error while creating C "
                                            'header: unknown type "{}".'
                                            .format(sym.orig_type))

    def write_config(self, filename,
                     header="# Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib)\n"):
        r"""
        Writes out symbol values in the .config format. The format matches the
        C implementation, including ordering.

        Symbols appear in the same order in generated .config files as they do
        in the Kconfig files. For symbols defined in multiple locations, a
        single assignment is written out corresponding to the first location
        where the symbol is defined.

        See the 'Intro to symbol values' section in the module docstring to
        understand which symbols get written out.

        filename:
          Self-explanatory.

        header (default: "# Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib)\n"):
          Text that will be inserted verbatim at the beginning of the file. You
          would usually want each line to start with '#' to make it a comment,
          and include a final terminating newline.
        """
        with self._open_enc(filename, "w") as f:
            f.write(header)

            # Symbol._written is set to True when a symbol config string is
            # fetched, so that symbols defined in multiple locations only get
            # one .config entry. We reset it prior to writing out a new
            # .config. It only needs to be reset for defined symbols, because
            # undefined symbols will never be written out (because they do not
            # appear in the menu tree rooted at Kconfig.top_node).
            #
            # The C tools reuse _write_to_conf for this, but we cache
            # _write_to_conf together with the value and don't invalidate
            # cached values when writing .config files, so that won't work.
            for sym in self.defined_syms:
                sym._written = False

            node = self.top_node.list
            if not node:
                # Empty configuration
                return

            while 1:
                item = node.item
                if isinstance(item, Symbol):
                    if not item._written:
                        item._written = True
                        f.write(item.config_string)

                elif expr_value(node.dep) and \
                     ((item == MENU and expr_value(node.visibility)) or
                       item == COMMENT):

                    f.write("\n#\n# {}\n#\n".format(node.prompt[0]))

                # Iterative tree walk using parent pointers

                if node.list:
                    node = node.list
                elif node.next:
                    node = node.next
                else:
                    while node.parent:
                        node = node.parent
                        if node.next:
                            node = node.next
                            break
                    else:
                        return

    def write_min_config(self, filename,
                         header="# Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib)\n"):
        """
        Writes out a "minimal" configuration file, omitting symbols whose value
        matches their default value. The format matches the one produced by
        'make savedefconfig'.

        The resulting configuration file is incomplete, but a complete
        configuration can be derived from it by loading it. Minimal
        configuration files can serve as a more manageable configuration format
        compared to a "full" .config file, especially when configurations files
        are merged or edited by hand.

        filename:
          Self-explanatory.

        header (default: "# Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib)\n"):
          Text that will be inserted verbatim at the beginning of the file. You
          would usually want each line to start with '#' to make it a comment,
          and include a final terminating newline.
        """
        with self._open_enc(filename, "w") as f:
            f.write(header)

            # Avoid duplicates -- see write_config()
            for sym in self.defined_syms:
                sym._written = False

            for sym in self.defined_syms:
                if not sym._written:
                    sym._written = True

                    # Skip symbols that cannot be changed. Only check
                    # non-choice symbols, as selects don't affect choice
                    # symbols.
                    if not sym.choice and \
                       sym.visibility <= expr_value(sym.rev_dep):
                        continue

                    # Skip symbols whose value matches their default
                    if sym.str_value == sym._str_default():
                        continue

                    # Skip symbols that would be selected by default in a
                    # choice, unless the choice is optional or the symbol type
                    # isn't bool (it might be possible to set the choice mode
                    # to n or the symbol to m in those cases).
                    if sym.choice and \
                       not sym.choice.is_optional and \
                       sym.choice._get_selection_from_defaults() is sym and \
                       sym.orig_type == BOOL and \
                       sym.tri_value == 2:
                        continue

                    f.write(sym.config_string)

    def sync_deps(self, path):
        """
        Creates or updates a directory structure that can be used to avoid
        doing a full rebuild whenever the configuration is changed, mirroring
        include/config/ in the kernel.

        This function is intended to be called during each build, before
        compiling source files that depend on configuration symbols.

        path:
          Path to directory

        sync_deps(path) does the following:

          1. If the directory <path> does not exist, it is created.

          2. If <path>/auto.conf exists, old symbol values are loaded from it,
             which are then compared against the current symbol values. If a
             symbol has changed value (would generate different output in
             autoconf.h compared to before), the change is signaled by
             touch'ing a file corresponding to the symbol.

             The first time sync_deps() is run on a directory, <path>/auto.conf
             won't exist, and no old symbol values will be available. This
             logically has the same effect as updating the entire
             configuration.

             The path to a symbol's file is calculated from the symbol's name
             by replacing all '_' with '/' and appending '.h'. For example, the
             symbol FOO_BAR_BAZ gets the file <path>/foo/bar/baz.h, and FOO
             gets the file <path>/foo.h.

             This scheme matches the C tools. The point is to avoid having a
             single directory with a huge number of files, which the underlying
             filesystem might not handle well.

          3. A new auto.conf with the current symbol values is written, to keep
             track of them for the next build.


        The last piece of the puzzle is knowing what symbols each source file
        depends on. Knowing that, dependencies can be added from source files
        to the files corresponding to the symbols they depends on. The source
        file will then get recompiled (only) when the symbol value changes
        (provided sync_deps() is run first during each build).

        The tool in the kernel that extracts symbol dependencies from source
        files is scripts/basic/fixdep.c. Missing symbol files also correspond
        to "not changed", which fixdep deals with by using the $(wildcard) Make
        function when adding symbol prerequisites to source files.

        In case you need a different scheme for your project, the sync_deps()
        implementation can be used as a template."""
        if not os.path.exists(path):
            os.mkdir(path, 0o755)

        # This setup makes sure that at least the current working directory
        # gets reset if things fail
        prev_dir = os.getcwd()
        try:
            # cd'ing into the symbol file directory simplifies
            # _sync_deps() and saves some work
            os.chdir(path)
            self._sync_deps()
        finally:
            os.chdir(prev_dir)

    def _sync_deps(self):
        # Load old values from auto.conf, if any
        self._load_old_vals()

        for sym in self.defined_syms:
            # Note: _write_to_conf is determined when the value is
            # calculated. This is a hidden function call due to
            # property magic.
            val = sym.str_value

            # Note: n tristate values do not get written to auto.conf and
            # autoconf.h, making a missing symbol logically equivalent to n

            if sym._write_to_conf:
                if sym._old_val is None and \
                   sym.orig_type in (BOOL, TRISTATE) and \
                   val == "n":
                    # No old value (the symbol was missing or n), new value n.
                    # No change.
                    continue

                if val == sym._old_val:
                    # New value matches old. No change.
                    continue

            elif sym._old_val is None:
                # The symbol wouldn't appear in autoconf.h (because
                # _write_to_conf is false), and it wouldn't have appeared in
                # autoconf.h previously either (because it didn't appear in
                # auto.conf). No change.
                continue

            # 'sym' has a new value. Flag it.

            sym_path = sym.name.lower().replace("_", os.sep) + ".h"
            sym_path_dir = os.path.dirname(sym_path)
            if sym_path_dir and not os.path.exists(sym_path_dir):
                os.makedirs(sym_path_dir, 0o755)

            # A kind of truncating touch, mirroring the C tools
            os.close(os.open(
                sym_path, os.O_WRONLY | os.O_CREAT | os.O_TRUNC, 0o644))

        # Remember the current values as the "new old" values.
        #
        # This call could go anywhere after the call to _load_old_vals(), but
        # putting it last means _sync_deps() can be safely rerun if it fails
        # before this point.
        self._write_old_vals()

    def _write_old_vals(self):
        # Helper for writing auto.conf. Basically just a simplified
        # write_config() that doesn't write any comments (including
        # '# CONFIG_FOO is not set' comments). The format matches the C
        # implementation, though the ordering is arbitrary there (depends on
        # the hash table implementation).
        #
        # A separate helper function is neater than complicating write_config()
        # by passing a flag to it, plus we only need to look at symbols here.

        with self._open_enc("auto.conf", "w") as f:
            for sym in self.defined_syms:
                sym._written = False

            for sym in self.defined_syms:
                if not sym._written:
                    sym._written = True
                    if not (sym.orig_type in (BOOL, TRISTATE) and
                            not sym.tri_value):
                        f.write(sym.config_string)

    def _load_old_vals(self):
        # Loads old symbol values from auto.conf into a dedicated
        # Symbol._old_val field. Mirrors load_config().
        #
        # The extra field could be avoided with some trickery involving dumping
        # symbol values and restoring them later, but this is simpler and
        # faster. The C tools also use a dedicated field for this purpose.

        for sym in self.defined_syms:
            sym._old_val = None

        if not os.path.exists("auto.conf"):
            # No old values
            return

        with self._open_enc("auto.conf", _UNIVERSAL_NEWLINES_MODE) as f:
            for line in f:
                set_match = self._set_re_match(line)
                if not set_match:
                    # We only expect CONFIG_FOO=... (and possibly a header
                    # comment) in auto.conf
                    continue

                name, val = set_match.groups()
                if name in self.syms:
                    sym = self.syms[name]

                    if sym.orig_type == STRING:
                        string_match = _conf_string_re_match(val)
                        if not string_match:
                            continue
                        val = unescape(string_match.group(1))

                    self.syms[name]._old_val = val

    def eval_string(self, s):
        """
        Returns the tristate value of the expression 's', represented as 0, 1,
        and 2 for n, m, and y, respectively. Raises KconfigSyntaxError if
        syntax errors are detected in 's'. Warns if undefined symbols are
        referenced.

        As an example, if FOO and BAR are tristate symbols at least one of
        which has the value y, then config.eval_string("y && (FOO || BAR)")
        returns 2 (y).

        To get the string value of non-bool/tristate symbols, use
        Symbol.str_value. eval_string() always returns a tristate value, and
        all non-bool/tristate symbols have the tristate value 0 (n).

        The expression parsing is consistent with how parsing works for
        conditional ('if ...') expressions in the configuration, and matches
        the C implementation. m is rewritten to 'm && MODULES', so
        eval_string("m") will return 0 (n) unless modules are enabled.
        """
        # The parser is optimized to be fast when parsing Kconfig files (where
        # an expression can never appear at the beginning of a line). We have
        # to monkey-patch things a bit here to reuse it.

        self._filename = None

        self._line = "if " + s
        self._tokenize()
        # Remove the "if " to avoid giving confusing error messages
        self._line = s
        # Remove the _T_IF token
        del self._tokens[0]

        return expr_value(self._parse_expr(True))  # transform_m

    def unset_values(self):
        """
        Resets the user values of all symbols, as if Kconfig.load_config() or
        Symbol.set_value() had never been called.
        """
        self._warn_for_no_prompt = False
        try:
            # set_value() already rejects undefined symbols, and they don't
            # need to be invalidated (because their value never changes), so we
            # can just iterate over defined symbols
            for sym in self.defined_syms:
                sym.unset_value()

            for choice in self._choices:
                choice.unset_value()
        finally:
            self._warn_for_no_prompt = True

    def enable_warnings(self):
        """
        See Kconfig.__init__().
        """
        self._warnings_enabled = True

    def disable_warnings(self):
        """
        See Kconfig.__init__().
        """
        self._warnings_enabled = False

    def enable_stderr_warnings(self):
        """
        See Kconfig.__init__().
        """
        self._warn_to_stderr = True

    def disable_stderr_warnings(self):
        """
        See Kconfig.__init__().
        """
        self._warn_to_stderr = False

    def enable_undef_warnings(self):
        """
        Enables warnings for assignments to undefined symbols. Disabled by
        default since they tend to be spammy for Kernel configurations (and
        mostly suggests cleanups).
        """
        self._warn_for_undef_assign = True

    def disable_undef_warnings(self):
        """
        See enable_undef_assign().
        """
        self._warn_for_undef_assign = False

    def enable_redun_warnings(self):
        """
        Enables warnings for duplicated assignments in .config files that all
        set the same value.

        These warnings are enabled by default. Disabling them might be helpful
        in certain cases when merging configurations.
        """
        self._warn_for_redun_assign = True

    def disable_redun_warnings(self):
        """
        See enable_redun_warnings().
        """
        self._warn_for_redun_assign = False

    def __repr__(self):
        """
        Returns a string with information about the Kconfig object when it is
        evaluated on e.g. the interactive Python prompt.
        """
        return "<{}>".format(", ".join((
            "configuration with {} symbols".format(len(self.syms)),
            'main menu prompt "{}"'.format(self.mainmenu_text),
            "srctree not set" if self.srctree is None else
                'srctree "{}"'.format(self.srctree),
            'config symbol prefix "{}"'.format(self.config_prefix),
            "warnings " +
                ("enabled" if self._warnings_enabled else "disabled"),
            "printing of warnings to stderr " +
                ("enabled" if self._warn_to_stderr else "disabled"),
            "undef. symbol assignment warnings " +
                ("enabled" if self._warn_for_undef_assign else "disabled"),
            "redundant symbol assignment warnings " +
                ("enabled" if self._warn_for_redun_assign else "disabled")
        )))

    #
    # Private methods
    #


    #
    # File reading
    #

    def _open(self, filename):
        # First tries to open 'filename', then '$srctree/filename' if $srctree
        # was set when the configuration was loaded

        try:
            return self._open_enc(filename, _UNIVERSAL_NEWLINES_MODE)
        except IOError as e:
            if not os.path.isabs(filename) and self.srctree is not None:
                filename = os.path.join(self.srctree, filename)
                try:
                    return self._open_enc(filename, _UNIVERSAL_NEWLINES_MODE)
                except IOError as e2:
                    # This is needed for Python 3, because e2 is deleted after
                    # the try block:
                    #
                    # https://docs.python.org/3/reference/compound_stmts.html#the-try-statement
                    e = e2

            raise IOError(textwrap.fill(
                "Could not open '{}' ({}: {}). Perhaps the $srctree "
                "environment variable (which was {}) is set incorrectly. Note "
                "that the current value of $srctree is saved when the Kconfig "
                "instance is created (for consistency and to cleanly "
                "separate instances)."
                .format(filename, errno.errorcode[e.errno], e.strerror,
                        "unset" if self.srctree is None else
                        '"{}"'.format(self.srctree)),
                80))

    def _enter_file(self, filename):
        # Jumps to the beginning of a sourced Kconfig file, saving the previous
        # position and file object

        # Check for recursive 'source'
        for _, name, _ in self._filestack:
            if name == filename:
                # KconfigParseError might have been a better name, but too late
                raise KconfigSyntaxError(
                    "\n{}:{}: Recursive 'source' of '{}' detected. Check that "
                    "environment variables are set correctly.\n"
                    "Backtrace:\n{}"
                    .format(self._filename, self._linenr, filename,
                            "\n".join("{}:{}".format(name, linenr)
                                      for _, name, linenr
                                      in reversed(self._filestack))))

        self._filestack.append((self._file, self._filename, self._linenr))
        try:
            self._file = self._open(filename)
        except IOError as e:
            # Extend the error message a bit in this case
            raise IOError(textwrap.fill(
                "{}:{}: {} Also note that Kconfiglib expands references to "
                "environment variables directly (via os.path.expandvars()), "
                "meaning you do not need \"bounce\" symbols with "
                "'option env=\"FOO\"'. For compatibility with the C tools, "
                "name the bounce symbols the same as the environment variable "
                "they reference (like the Linux kernel does). This change is "
                "likely to soon appear in the C tools as well, and simplifies "
                "the parsing implementation (symbols no longer need to be "
                "evaluated during parsing)."
                .format(self._filename, self._linenr, str(e)),
                80))

        self._filename = filename
        self._linenr = 0

    def _leave_file(self):
        # Returns from a Kconfig file to the file that sourced it

        self._file.close()
        self._file, self._filename, self._linenr = self._filestack.pop()

    def _next_line(self):
        # Fetches and tokenizes the next line from the current Kconfig file.
        # Returns False at EOF and True otherwise.

        # _saved_line provides a single line of "unget", currently only used
        # for help texts.
        #
        # This also works as expected if _saved_line is "", indicating EOF:
        # "" is falsy, and readline() returns "" over and over at EOF.
        if self._saved_line:
            self._line = self._saved_line
            self._saved_line = None
        else:
            self._line = self._file.readline()
            if not self._line:
                return False
            self._linenr += 1

        # Handle line joining
        while self._line.endswith("\\\n"):
            self._line = self._line[:-2] + self._file.readline()
            self._linenr += 1

        self._tokenize()
        return True


    #
    # Tokenization
    #

    def _lookup_sym(self, name):
        # Fetches the symbol 'name' from the symbol table, creating and
        # registering it if it does not exist. If '_parsing_kconfigs' is False,
        # it means we're in eval_string(), and new symbols won't be registered.

        if name in self.syms:
            return self.syms[name]

        sym = Symbol()
        sym.kconfig = self
        sym.name = name
        sym.is_constant = False
        sym.rev_dep = sym.weak_rev_dep = sym.direct_dep = self.n

        if self._parsing_kconfigs:
            self.syms[name] = sym
        else:
            self._warn("no symbol {} in configuration".format(name))

        return sym

    def _lookup_const_sym(self, name):
        # Like _lookup_sym(), for constant (quoted) symbols

        if name in self.const_syms:
            return self.const_syms[name]

        sym = Symbol()
        sym.kconfig = self
        sym.name = name
        sym.is_constant = True
        sym.rev_dep = sym.weak_rev_dep = sym.direct_dep = self.n

        if self._parsing_kconfigs:
            self.const_syms[name] = sym

        return sym

    def _tokenize(self):
        # Parses Kconfig._line, putting the tokens in Kconfig._tokens.
        # Registers any new symbols encountered with _lookup(_const)_sym().
        #
        # Tries to be reasonably speedy by processing chunks of text via
        # regexes and string operations where possible. This is the biggest
        # hotspot during parsing.

        s = self._line

        # Token index (minus one). Set for later -- not further updated here.
        self._tokens_i = -1

        # See comment at _initial_token_re_match definition
        initial_token_match = _initial_token_re_match(s)
        if not initial_token_match:
            self._tokens = (None,)
            return

        # Tricky implementation detail: While parsing a token, 'token' refers
        # to the previous token. See _STRING_LEX for why this is needed.
        token = _get_keyword(initial_token_match.group(1))

        if token == _T_HELP:
            # Avoid junk after "help", e.g. "---", being registered as a
            # symbol
            self._tokens = (token, None)
            return

        if token is None:
            self._parse_error("expected keyword as first token")

        self._tokens = [token]
        # The current index in the string being tokenized
        i = initial_token_match.end()

        # Main tokenization loop (for tokens past the first one)
        while i < len(s):
            # Test for an identifier/keyword first. This is the most common
            # case.
            id_keyword_match = _id_keyword_re_match(s, i)
            if id_keyword_match:
                # We have an identifier or keyword

                # Jump past it
                i = id_keyword_match.end()

                # Check what it is. lookup_sym() will take care of allocating
                # new symbols for us the first time we see them. Note that
                # 'token' still refers to the previous token.

                name = id_keyword_match.group(1)
                keyword = _get_keyword(name)
                if keyword is not None:
                    # It's a keyword
                    token = keyword

                elif token not in _STRING_LEX:
                    # It's a non-const symbol, except we translate n, m, and y
                    # into the corresponding constant symbols, like the C
                    # implementation
                    token = self.const_syms[name] \
                            if name in ("n", "m", "y") else \
                            self._lookup_sym(name)

                else:
                    # It's a case of missing quotes. For example, the
                    # following is accepted:
                    #
                    #   menu unquoted_title
                    #
                    #   config A
                    #       tristate unquoted_prompt
                    #
                    #   endmenu
                    token = name

            else:
                # Not keyword/non-const symbol

                # Note: _id_keyword_match and _initial_token_match strip
                # trailing whitespace, making it safe to assume s[i] is the
                # start of a token here. We manually strip trailing whitespace
                # below as well.
                #
                # An old version stripped whitespace in this spot instead, but
                # that leads to some redundancy and would cause
                # _id_keyword_match to be tried against just "\n" fairly often
                # (because file.readlines() keeps newlines).

                c = s[i]
                i += 1

                if c in "\"'":
                    # String literal/constant symbol
                    if "\\" not in s:
                        # Fast path: If the line contains no backslashes, we
                        # can just find the matching quote.

                        end = s.find(c, i)
                        if end == -1:
                            self._parse_error("unterminated string")

                        val = s[i:end]
                        i = end + 1
                    else:
                        # Slow path for lines with backslashes (very rare,
                        # performance irrelevant)

                        quote = c
                        val = ""

                        while 1:
                            if i >= len(s):
                                self._parse_error("unterminated string")

                            c = s[i]
                            if c == quote:
                                break

                            if c == "\\":
                                if i + 1 >= len(s):
                                    self._parse_error("unterminated string")

                                val += s[i + 1]
                                i += 2
                            else:
                                val += c
                                i += 1

                        i += 1

                    # This is the only place where we don't survive with a
                    # single token of lookback: 'option env="FOO"' does not
                    # refer to a constant symbol named "FOO".
                    token = val \
                            if token in _STRING_LEX or \
                                self._tokens[0] == _T_OPTION else \
                            self._lookup_const_sym(val)

                elif c == "&":
                    # Invalid characters are ignored (backwards-compatible)
                    if i >= len(s) or s[i] != "&":
                        continue

                    token = _T_AND
                    i += 1

                elif c == "|":
                    # Invalid characters are ignored (backwards-compatible)
                    if i >= len(s) or s[i] != "|":
                        continue

                    token = _T_OR
                    i += 1

                elif c == "!":
                    if i < len(s) and s[i] == "=":
                        token = _T_UNEQUAL
                        i += 1
                    else:
                        token = _T_NOT

                elif c == "=":
                    token = _T_EQUAL

                elif c == "(":
                    token = _T_OPEN_PAREN

                elif c == ")":
                    token = _T_CLOSE_PAREN

                elif c == "#":
                    break

                # Very rare
                elif c == "<":
                    if i < len(s) and s[i] == "=":
                        token = _T_LESS_EQUAL
                        i += 1
                    else:
                        token = _T_LESS

                # Very rare
                elif c == ">":
                    if i < len(s) and s[i] == "=":
                        token = _T_GREATER_EQUAL
                        i += 1
                    else:
                        token = _T_GREATER

                else:
                    # Invalid characters are ignored (backwards-compatible)
                    continue

                # Skip trailing whitespace
                while i < len(s) and s[i].isspace():
                    i += 1

            self._tokens.append(token)

        # None-terminating token streams makes the token fetching functions
        # simpler/faster
        self._tokens.append(None)

    def _next_token(self):
        self._tokens_i += 1
        return self._tokens[self._tokens_i]

    def _peek_token(self):
        return self._tokens[self._tokens_i + 1]

    # The functions below are just _next_token() with extra syntax checking.
    # Inlining _next_token() and _peek_token() into them saves a few % of
    # parsing time.
    #
    # See the 'Intro to expressions' section for what a constant symbol is.

    def _expect_sym(self):
        self._tokens_i += 1
        token = self._tokens[self._tokens_i]

        if not isinstance(token, Symbol):
            self._parse_error("expected symbol")

        return token

    def _expect_nonconst_sym(self):
        self._tokens_i += 1
        token = self._tokens[self._tokens_i]

        if not isinstance(token, Symbol) or token.is_constant:
            self._parse_error("expected nonconstant symbol")

        return token

    def _expect_nonconst_sym_and_eol(self):
        self._tokens_i += 1
        token = self._tokens[self._tokens_i]

        if not isinstance(token, Symbol) or token.is_constant:
            self._parse_error("expected nonconstant symbol")

        if self._tokens[self._tokens_i + 1] is not None:
            self._parse_error("extra tokens at end of line")

        return token

    def _expect_str(self):
        self._tokens_i += 1
        token = self._tokens[self._tokens_i]

        if not isinstance(token, str):
            self._parse_error("expected string")

        return token

    def _expect_str_and_eol(self):
        self._tokens_i += 1
        token = self._tokens[self._tokens_i]

        if not isinstance(token, str):
            self._parse_error("expected string")

        if self._tokens[self._tokens_i + 1] is not None:
            self._parse_error("extra tokens at end of line")

        return token


    def _check_token(self, token):
        # If the next token is 'token', removes it and returns True

        if self._tokens[self._tokens_i + 1] == token:
            self._tokens_i += 1
            return True
        return False


    #
    # Parsing
    #

    def _make_and(self, e1, e2):
        # Constructs an AND (&&) expression. Performs trivial simplification.

        if e1 is self.y:
            return e2

        if e2 is self.y:
            return e1

        if e1 is self.n or e2 is self.n:
            return self.n

        return (AND, e1, e2)

    def _make_or(self, e1, e2):
        # Constructs an OR (||) expression. Performs trivial simplification.

        if e1 is self.n:
            return e2

        if e2 is self.n:
            return e1

        if e1 is self.y or e2 is self.y:
            return self.y

        return (OR, e1, e2)

    def _parse_block(self, end_token, parent, prev):
        # Parses a block, which is the contents of either a file or an if,
        # menu, or choice statement.
        #
        # end_token:
        #   The token that ends the block, e.g. _T_ENDIF ("endif") for ifs.
        #   None for files.
        #
        # parent:
        #   The parent menu node, corresponding to a menu, Choice, or 'if'.
        #   'if's are flattened after parsing.
        #
        # prev:
        #   The previous menu node. New nodes will be added after this one (by
        #   modifying their 'next' pointer).
        #
        #   'prev' is reused to parse a list of child menu nodes (for a menu or
        #   Choice): After parsing the children, the 'next' pointer is assigned
        #   to the 'list' pointer to "tilt up" the children above the node.
        #
        # Returns the final menu node in the block (or 'prev' if the block is
        # empty). This allows chaining.

        # We might already have tokens from parsing a line to check if it's a
        # property and discovering it isn't. self._has_tokens functions as a
        # kind of "unget".
        while self._has_tokens or self._next_line():
            self._has_tokens = False

            t0 = self._next_token()
            if t0 is None:
                continue

            if t0 in (_T_CONFIG, _T_MENUCONFIG):
                # The tokenizer allocates Symbol objects for us
                sym = self._expect_nonconst_sym_and_eol()
                self.defined_syms.append(sym)

                node = MenuNode()
                node.kconfig = self
                node.item = sym
                node.is_menuconfig = (t0 == _T_MENUCONFIG)
                node.prompt = node.help = node.list = None
                node.parent = parent
                node.filename = self._filename
                node.linenr = self._linenr

                sym.nodes.append(node)

                self._parse_properties(node)

                if node.is_menuconfig and not node.prompt:
                    self._warn("the menuconfig symbol {} has no prompt"
                               .format(_name_and_loc(node.item)))

                # Tricky Python semantics: This assign prev.next before prev
                prev.next = prev = node

            elif t0 == _T_SOURCE:
                self._enter_file(_expand(self._expect_str_and_eol()))
                prev = self._parse_block(None, parent, prev)
                self._leave_file()

            elif t0 == _T_RSOURCE:
                self._enter_file(os.path.join(
                    os.path.dirname(self._filename),
                    _expand(self._expect_str_and_eol())
                ))
                prev = self._parse_block(None, parent, prev)
                self._leave_file()

            elif t0 in (_T_GSOURCE, _T_GRSOURCE):
                pattern = _expand(self._expect_str_and_eol())
                if t0 == _T_GRSOURCE:
                    # Relative gsource
                    pattern = os.path.join(os.path.dirname(self._filename),
                                           pattern)

                # If $srctree is set, glob relative to it
                if self.srctree is not None:
                    pattern = os.path.join(self.srctree, pattern)

                # Sort the glob results to ensure a consistent ordering of
                # Kconfig symbols, which indirectly ensures a consistent
                # ordering in e.g. .config files
                for filename in sorted(glob.iglob(pattern)):
                    if self.srctree is not None and not os.path.isabs(filename):
                        # Strip the $srctree prefix from the filename and let
                        # the normal $srctree logic find the file. This makes
                        # the globbed filenames appear without a $srctree
                        # prefix in MenuNode.filename, which is consistent with
                        # how 'source' and 'rsource' work. We get the same
                        # behavior as if the files had been 'source'd one by
                        # one.
                        filename = os.path.relpath(filename, self.srctree)

                    self._enter_file(filename)
                    prev = self._parse_block(None, parent, prev)
                    self._leave_file()

            elif t0 == end_token:
                # We have reached the end of the block. Terminate the final
                # node and return it.
                prev.next = None
                return prev

            elif t0 == _T_IF:
                node = MenuNode()
                node.item = node.prompt = None
                node.parent = parent
                node.filename = self._filename
                node.linenr = self._linenr

                node.dep = self._parse_expr(True)

                self._parse_block(_T_ENDIF, node, node)
                node.list = node.next

                prev.next = prev = node

            elif t0 == _T_MENU:
                node = MenuNode()
                node.kconfig = self
                node.item = MENU
                node.is_menuconfig = True
                node.prompt = (self._expect_str_and_eol(), self.y)
                node.visibility = self.y
                node.parent = parent
                node.filename = self._filename
                node.linenr = self._linenr

                self._parse_properties(node)
                self._parse_block(_T_ENDMENU, node, node)
                node.list = node.next

                prev.next = prev = node

            elif t0 == _T_COMMENT:
                node = MenuNode()
                node.kconfig = self
                node.item = COMMENT
                node.is_menuconfig = False
                node.prompt = (self._expect_str_and_eol(), self.y)
                node.list = None
                node.parent = parent
                node.filename = self._filename
                node.linenr = self._linenr

                self._parse_properties(node)

                prev.next = prev = node

            elif t0 == _T_CHOICE:
                name = self._next_token()
                if name is None:
                    choice = Choice()
                    choice.direct_dep = self.n

                    self._choices.append(choice)
                else:
                    # Named choice
                    choice = self.named_choices.get(name)
                    if not choice:
                        choice = Choice()
                        choice.name = name
                        choice.direct_dep = self.n

                        self._choices.append(choice)
                        self.named_choices[name] = choice

                choice.kconfig = self

                node = MenuNode()
                node.kconfig = self
                node.item = choice
                node.is_menuconfig = True
                node.prompt = node.help = None
                node.parent = parent
                node.filename = self._filename
                node.linenr = self._linenr

                self._parse_properties(node)
                self._parse_block(_T_ENDCHOICE, node, node)
                node.list = node.next

                choice.nodes.append(node)

                prev.next = prev = node

            elif t0 == _T_MAINMENU:
                self.top_node.prompt = (self._expect_str_and_eol(), self.y)
                self.top_node.filename = self._filename
                self.top_node.linenr = self._linenr

            else:
                self._parse_error("unrecognized construct")

        # End of file reached. Terminate the final node and return it.

        if end_token is not None:
            raise KconfigSyntaxError("Unexpected end of file " +
                                     self._filename)

        prev.next = None
        return prev

    def _parse_cond(self):
        # Parses an optional 'if <expr>' construct and returns the parsed
        # <expr>, or self.y if the next token is not _T_IF

        expr = self._parse_expr(True) if self._check_token(_T_IF) else self.y
        if self._peek_token() is not None:
            self._parse_error("extra tokens at end of line")
        return expr

    def _parse_properties(self, node):
        # Parses and adds properties to the MenuNode 'node' (type, 'prompt',
        # 'default's, etc.) Properties are later copied up to symbols and
        # choices in a separate pass after parsing, in _propagate_deps().
        #
        # An older version of this code added properties directly to symbols
        # and choices instead of to their menu nodes (and handled dependency
        # propagation simultaneously), but that loses information on where a
        # property is added when a symbol or choice is defined in multiple
        # locations. Some Kconfig configuration systems rely heavily on such
        # symbols, and better docs can be generated by keeping track of where
        # properties are added.
        #
        # node:
        #   The menu node we're parsing properties on

        # Dependencies from 'depends on'. Will get propagated to the properties
        # below.
        node.dep = self.y

        # Properties added at this location. A local 'depends on' only applies
        # to these, in case a symbol is defined in multiple locations.
        node.defaults = []
        node.selects = []
        node.implies = []
        node.ranges = []

        while self._next_line():
            t0 = self._next_token()
            if t0 is None:
                continue

            if t0 in _TYPE_TOKENS:
                self._set_type(node, _TOKEN_TO_TYPE[t0])
                if self._peek_token() is not None:
                    self._parse_prompt(node)

            elif t0 == _T_DEPENDS:
                if not self._check_token(_T_ON):
                    self._parse_error('expected "on" after "depends"')

                node.dep = self._make_and(node.dep, self._parse_expr(True))

            elif t0 == _T_HELP:
                self._parse_help(node)

            elif t0 == _T_SELECT:
                if not isinstance(node.item, Symbol):
                    self._parse_error("only symbols can select")

                node.selects.append((self._expect_nonconst_sym(),
                                     self._parse_cond()))

            elif t0 == _T_IMPLY:
                if not isinstance(node.item, Symbol):
                    self._parse_error("only symbols can imply")

                node.implies.append((self._expect_nonconst_sym(),
                                     self._parse_cond()))

            elif t0 == _T_DEFAULT:
                node.defaults.append((self._parse_expr(False),
                                      self._parse_cond()))

            elif t0 in (_T_DEF_BOOL, _T_DEF_TRISTATE):
                self._set_type(node, _TOKEN_TO_TYPE[t0])
                node.defaults.append((self._parse_expr(False),
                                      self._parse_cond()))

            elif t0 == _T_PROMPT:
                self._parse_prompt(node)

            elif t0 == _T_RANGE:
                node.ranges.append((self._expect_sym(),
                                    self._expect_sym(),
                                    self._parse_cond()))

            elif t0 == _T_OPTION:
                if self._check_token(_T_ENV):
                    if not self._check_token(_T_EQUAL):
                        self._parse_error('expected "=" after "env"')

                    env_var = self._expect_str_and_eol()
                    node.item.env_var = env_var

                    if env_var in os.environ:
                        node.defaults.append(
                            (self._lookup_const_sym(os.environ[env_var]),
                             self.y))
                    else:
                        self._warn("{1} has 'option env=\"{0}\"', "
                                   "but the environment variable {0} is not "
                                   "set".format(node.item.name, env_var),
                                   self._filename, self._linenr)

                    if env_var != node.item.name:
                        self._warn("Kconfiglib expands environment variables "
                                   "in strings directly, meaning you do not "
                                   "need 'option env=...' \"bounce\" symbols. "
                                   "For compatibility with the C tools, "
                                   "rename {} to {} (so that the symbol name "
                                   "matches the environment variable name)."
                                   .format(node.item.name, env_var),
                                   self._filename, self._linenr)

                elif self._check_token(_T_DEFCONFIG_LIST):
                    if not self.defconfig_list:
                        self.defconfig_list = node.item
                    else:
                        self._warn("'option defconfig_list' set on multiple "
                                   "symbols ({0} and {1}). Only {0} will be "
                                   "used.".format(self.defconfig_list.name,
                                                  node.item.name),
                                   self._filename, self._linenr)

                elif self._check_token(_T_MODULES):
                    # To reduce warning spam, only warn if 'option modules' is
                    # set on some symbol that isn't MODULES, which should be
                    # safe. I haven't run into any projects that make use
                    # modules besides the kernel yet, and there it's likely to
                    # keep being called "MODULES".
                    if node.item is not self.modules:
                        self._warn("the 'modules' option is not supported. "
                                   "Let me know if this is a problem for you, "
                                   "as it wouldn't be that hard to implement. "
                                   "Note that modules are supported -- "
                                   "Kconfiglib just assumes the symbol name "
                                   "MODULES, like older versions of the C "
                                   "implementation did when 'option modules' "
                                   "wasn't used.",
                                   self._filename, self._linenr)

                elif self._check_token(_T_ALLNOCONFIG_Y):
                    if not isinstance(node.item, Symbol):
                        self._parse_error("the 'allnoconfig_y' option is only "
                                          "valid for symbols")

                    node.item.is_allnoconfig_y = True

                else:
                    self._parse_error("unrecognized option")

            elif t0 == _T_VISIBLE:
                if not self._check_token(_T_IF):
                    self._parse_error('expected "if" after "visible"')

                node.visibility = \
                    self._make_and(node.visibility, self._parse_expr(True))

            elif t0 == _T_OPTIONAL:
                if not isinstance(node.item, Choice):
                    self._parse_error('"optional" is only valid for choices')

                node.item.is_optional = True

            else:
                # Reuse the tokens for the non-property line later
                self._has_tokens = True
                self._tokens_i = -1
                return

    def _set_type(self, node, new_type):
        if node.item.orig_type not in (UNKNOWN, new_type):
            self._warn("{} defined with multiple types, {} will be used"
                       .format(_name_and_loc(node.item),
                               TYPE_TO_STR[new_type]))

        node.item.orig_type = new_type

    def _parse_prompt(self, node):
        # 'prompt' properties override each other within a single definition of
        # a symbol, but additional prompts can be added by defining the symbol
        # multiple times
        if node.prompt:
            self._warn("{} defined with multiple prompts in single location"
                       .format(_name_and_loc(node.item)))

        prompt = self._expect_str()
        if prompt != prompt.strip():
            self._warn("{} has leading or trailing whitespace in its prompt"
                       .format(_name_and_loc(node.item)))

            # This avoid issues for e.g. reStructuredText documentation, where
            # '*prompt *' is invalid
            prompt = prompt.strip()

        node.prompt = (prompt, self._parse_cond())

    def _parse_help(self, node):
        # Find first non-blank (not all-space) line and get its indentation

        if node.help is not None:
            self._warn("{} defined with more than one help text -- only the "
                       "last one will be used"
                       .format(_name_and_loc(node.item)))

        # Small optimization. This code is pretty hot.
        readline = self._file.readline

        while 1:
            line = readline()
            self._linenr += 1
            if not line or not line.isspace():
                break

        if not line:
            self._warn("{} has 'help' but empty help text"
                       .format(_name_and_loc(node.item)))

            node.help = ""
            return

        indent = _indentation(line)
        if indent == 0:
            # If the first non-empty lines has zero indent, there is no help
            # text
            self._warn("{} has 'help' but empty help text"
                       .format(_name_and_loc(node.item)))

            node.help = ""
            self._saved_line = line  # "Unget" the line
            return

        # The help text goes on till the first non-empty line with less indent
        # than the first line

        help_lines = []
        # Small optimizations
        add_help_line = help_lines.append
        indentation = _indentation

        while line and (line.isspace() or indentation(line) >= indent):
            # De-indent 'line' by 'indent' spaces and rstrip() it to remove any
            # newlines (which gets rid of other trailing whitespace too, but
            # that's fine).
            #
            # This prepares help text lines in a speedy way: The [indent:]
            # might already remove trailing newlines for lines shorter than
            # indent (e.g. empty lines). The rstrip() makes it consistent,
            # meaning we can join the lines with "\n" later.
            add_help_line(line.expandtabs()[indent:].rstrip())

            line = readline()
            self._linenr += 1

        node.help = "\n".join(help_lines).rstrip() + "\n"
        self._saved_line = line  # "Unget" the line

    def _parse_expr(self, transform_m):
        # Parses an expression from the tokens in Kconfig._tokens using a
        # simple top-down approach. See the module docstring for the expression
        # format.
        #
        # transform_m:
        #   True if m should be rewritten to m && MODULES. See the
        #   Kconfig.eval_string() documentation.

        # Grammar:
        #
        #   expr:     and_expr ['||' expr]
        #   and_expr: factor ['&&' and_expr]
        #   factor:   <symbol> ['='/'!='/'<'/... <symbol>]
        #             '!' factor
        #             '(' expr ')'
        #
        # It helps to think of the 'expr: and_expr' case as a single-operand OR
        # (no ||), and of the 'and_expr: factor' case as a single-operand AND
        # (no &&). Parsing code is always a bit tricky.

        # Mind dump: parse_factor() and two nested loops for OR and AND would
        # work as well. The straightforward implementation there gives a
        # (op, (op, (op, A, B), C), D) parse for A op B op C op D. Representing
        # expressions as (op, [list of operands]) instead goes nicely with that
        # version, but is wasteful for short expressions and complicates
        # expression evaluation and other code that works on expressions (more
        # complicated code likely offsets any performance gain from less
        # recursion too). If we also try to optimize the list representation by
        # merging lists when possible (e.g. when ANDing two AND expressions),
        # we end up allocating a ton of lists instead of reusing expressions,
        # which is bad.

        and_expr = self._parse_and_expr(transform_m)

        # Return 'and_expr' directly if we have a "single-operand" OR.
        # Otherwise, parse the expression on the right and make an OR node.
        # This turns A || B || C || D into (OR, A, (OR, B, (OR, C, D))).
        return and_expr \
               if not self._check_token(_T_OR) else \
               (OR, and_expr, self._parse_expr(transform_m))

    def _parse_and_expr(self, transform_m):
        factor = self._parse_factor(transform_m)

        # Return 'factor' directly if we have a "single-operand" AND.
        # Otherwise, parse the right operand and make an AND node. This turns
        # A && B && C && D into (AND, A, (AND, B, (AND, C, D))).
        return factor \
               if not self._check_token(_T_AND) else \
               (AND, factor, self._parse_and_expr(transform_m))

    def _parse_factor(self, transform_m):
        token = self._next_token()

        if isinstance(token, Symbol):
            # Plain symbol or relation

            next_token = self._peek_token()
            if next_token not in _RELATIONS:
                # Plain symbol

                # For conditional expressions ('depends on <expr>',
                # '... if <expr>', etc.), m is rewritten to m && MODULES.
                if transform_m and token is self.m:
                    return (AND, self.m, self.modules)

                return token

            # Relation
            #
            # _T_EQUAL, _T_UNEQUAL, etc., deliberately have the same values as
            # EQUAL, UNEQUAL, etc., so we can just use the token directly
            return (self._next_token(), token, self._expect_sym())

        if token == _T_NOT:
            # token == _T_NOT == NOT
            return (token, self._parse_factor(transform_m))

        if token == _T_OPEN_PAREN:
            expr_parse = self._parse_expr(transform_m)
            if self._check_token(_T_CLOSE_PAREN):
                return expr_parse

        self._parse_error("malformed expression")

    #
    # Caching and invalidation
    #

    def _build_dep(self):
        # Populates the Symbol/Choice._dependents sets, which contain all other
        # items (symbols and choices) that immediately depend on the item in
        # the sense that changing the value of the item might affect the value
        # of the dependent items. This is used for caching/invalidation.
        #
        # The calculated sets might be larger than necessary as we don't do any
        # complex analysis of the expressions.

        # Only calculate _dependents for defined symbols. Constant and
        # undefined symbols could theoretically be selected/implied, but it
        # wouldn't change their value, so it's not a true dependency.
        for sym in self.defined_syms:
            # Symbols depend on the following:

            # The prompt conditions
            for node in sym.nodes:
                if node.prompt:
                    _make_depend_on(sym, node.prompt[1])

            # The default values and their conditions
            for value, cond in sym.defaults:
                _make_depend_on(sym, value)
                _make_depend_on(sym, cond)

            # The reverse and weak reverse dependencies
            _make_depend_on(sym, sym.rev_dep)
            _make_depend_on(sym, sym.weak_rev_dep)

            # The ranges along with their conditions
            for low, high, cond in sym.ranges:
                _make_depend_on(sym, low)
                _make_depend_on(sym, high)
                _make_depend_on(sym, cond)

            # The direct dependencies. This is usually redundant, as the direct
            # dependencies get propagated to properties, but it's needed to get
            # invalidation solid for 'imply', which only checks the direct
            # dependencies (even if there are no properties to propagate it
            # to).
            _make_depend_on(sym, sym.direct_dep)

            # In addition to the above, choice symbols depend on the choice
            # they're in, but that's handled automatically since the Choice is
            # propagated to the conditions of the properties before
            # _build_dep() runs.

        for choice in self._choices:
            # Choices depend on the following:

            # The prompt conditions
            for node in choice.nodes:
                if node.prompt:
                    _make_depend_on(choice, node.prompt[1])

            # The default symbol conditions
            for _, cond in choice.defaults:
                _make_depend_on(choice, cond)

            # The choice symbols themselves, because the y mode selection might
            # change if a choice symbol's visibility changes
            for sym in choice.syms:
                sym._dependents.add(choice)

    def _invalidate_all(self):
        # Undefined symbols never change value and don't need to be
        # invalidated, so we can just iterate over defined symbols.
        # Invalidating constant symbols would break things horribly.
        for sym in self.defined_syms:
            sym._invalidate()

        for choice in self._choices:
            choice._invalidate()


    #
    # Post-parsing menu tree processing, including dependency propagation and
    # implicit submenu creation
    #

    def _finalize_tree(self, node, visible_if):
        # Propagates properties and dependencies, creates implicit menus (see
        # kconfig-language.txt), removes 'if' nodes, and finalizes choices.
        # This pretty closely mirrors menu_finalize() from the C
        # implementation, with some minor tweaks (MenuNode holds lists of
        # properties instead of each property having a MenuNode pointer, for
        # example).
        #
        # node:
        #   The current "parent" menu node, from which we propagate
        #   dependencies
        #
        # visible_if:
        #   Dependencies from 'visible if' on parent menus. These are added to
        #   the prompts of symbols and choices.

        if node.list:
            # The menu node is a choice, menu, or if. Finalize each child in
            # it.

            if node.item == MENU:
                visible_if = self._make_and(visible_if, node.visibility)

            self._propagate_deps(node, visible_if)

            cur = node.list
            while cur:
                self._finalize_tree(cur, visible_if)
                cur = cur.next

        elif isinstance(node.item, Symbol):
            # The menu node is a symbol. See if we can create an implicit menu
            # rooted at it and finalize each child in that menu if so, like for
            # the choice/menu/if case above.
            cur = node
            while cur.next and _auto_menu_dep(node, cur.next):
                # This also makes implicit submenu creation work recursively,
                # with implicit menus inside implicit menus
                self._finalize_tree(cur.next, visible_if)
                cur = cur.next
                cur.parent = node

            if cur is not node:
                # Found symbols that should go in an implicit submenu. Tilt
                # them up above us.
                node.list = node.next
                node.next = cur.next
                cur.next = None


        if node.list:
            # We have a parent node with individually finalized child nodes. Do
            # final steps to finalize this "level" in the menu tree.
            _flatten(node.list)
            _remove_ifs(node)

        # Empty choices (node.list None) are possible, so this needs to go
        # outside
        if isinstance(node.item, Choice):
            _finalize_choice(node)

    def _propagate_deps(self, node, visible_if):
        # This function combines two tasks:
        #
        #   1) Copy properties from menu nodes to symbols and choices
        #
        #   2) Propagate dependencies from 'if' and 'depends on' to all
        #      properties
        #
        # See _parse_properties() as well.

        # If the parent node holds a Choice, we use the Choice itself as the
        # parent dependency. This makes sense as the value (mode) of the choice
        # limits the visibility of the contained choice symbols. The C
        # implementation works the same way.
        #
        # Due to the similar interface, Choice works as a drop-in replacement
        # for Symbol here.
        basedep = node.item if isinstance(node.item, Choice) else node.dep

        cur = node.list
        while cur:
            cur.dep = dep = self._make_and(cur.dep, basedep)

            # Propagate dependencies to prompt
            if cur.prompt:
                cur.prompt = (cur.prompt[0],
                              self._make_and(cur.prompt[1], dep))

            if isinstance(cur.item, (Symbol, Choice)):
                sc = cur.item

                # See the Symbol class docstring
                sc.direct_dep = self._make_or(sc.direct_dep, dep)

                # TODO: Profile this code and see if the 'if's are worthwhile.
                # Another potential optimization would be to assign the lists
                # from the MenuNode directly instead of using extend() in cases
                # where a symbol/choice only has a single MenuNode (the
                # majority of cases).

                # Propagate 'visible if' dependencies to the prompt
                if cur.prompt:
                    cur.prompt = (cur.prompt[0],
                                  self._make_and(cur.prompt[1], visible_if))

                # Propagate dependencies to defaults

                if cur.defaults:
                    cur.defaults = [(default, self._make_and(cond, dep))
                                    for default, cond in cur.defaults]
                    sc.defaults.extend(cur.defaults)

                # Propagate dependencies to ranges

                if cur.ranges:
                    cur.ranges = [(low, high, self._make_and(cond, dep))
                                  for low, high, cond in cur.ranges]
                    sc.ranges.extend(cur.ranges)

                # Propagate dependencies to selects

                if cur.selects:
                    cur.selects = [(target, self._make_and(cond, dep))
                                   for target, cond in cur.selects]
                    sc.selects.extend(cur.selects)

                    # Modify the reverse dependencies of the selected symbol
                    for target, cond in cur.selects:
                        target.rev_dep = self._make_or(
                            target.rev_dep,
                            self._make_and(sc, cond))

                # Propagate dependencies to implies

                if cur.implies:
                    cur.implies = [(target, self._make_and(cond, dep))
                                   for target, cond in cur.implies]
                    sc.implies.extend(cur.implies)

                    # Modify the weak reverse dependencies of the implied
                    # symbol
                    for target, cond in cur.implies:
                        target.weak_rev_dep = self._make_or(
                            target.weak_rev_dep,
                            self._make_and(sc, cond))


            cur = cur.next

    #
    # Misc.
    #

    def _parse_error(self, msg):
        if self._filename is None:
            loc = ""
        else:
            loc = "{}:{}: ".format(self._filename, self._linenr)

        raise KconfigSyntaxError(
            "{}Couldn't parse '{}': {}".format(loc, self._line.rstrip(), msg))

    def _open_enc(self, filename, mode):
        # open() wrapper for forcing the encoding on Python 3. Forcing the
        # encoding on Python 2 turns strings into Unicode strings, which gets
        # messy. Python 2 doesn't decode regular strings anyway.

        return open(filename, mode) if _IS_PY2 else \
               open(filename, mode, encoding=self._encoding)

    def _warn(self, msg, filename=None, linenr=None):
        # For printing general warnings

        if self._warnings_enabled:
            msg = "warning: " + msg
            if filename is not None:
                msg = "{}:{}: {}".format(filename, linenr, msg)

            self.warnings.append(msg)
            if self._warn_to_stderr:
                sys.stderr.write(msg + "\n")

    def _warn_undef_assign(self, msg, filename=None, linenr=None):
        # See the class documentation

        if self._warn_for_undef_assign:
            self._warn(msg, filename, linenr)

    def _warn_undef_assign_load(self, name, val, filename, linenr):
        # Special version for load_config()

        self._warn_undef_assign(
            'attempt to assign the value "{}" to the undefined symbol {}'
            .format(val, name), filename, linenr)

    def _warn_redun_assign(self, msg, filename=None, linenr=None):
        # See the class documentation

        if self._warn_for_redun_assign:
            self._warn(msg, filename, linenr)

class Symbol(object):
    """
    Represents a configuration symbol:

      (menu)config FOO
          ...

    The following attributes are available. They should be viewed as read-only,
    and some are implemented through @property magic (but are still efficient
    to access due to internal caching).

    Note: Prompts, help texts, and locations are stored in the Symbol's
    MenuNode(s) rather than in the Symbol itself. Check the MenuNode class and
    the Symbol.nodes attribute. This organization matches the C tools.

    name:
      The name of the symbol, e.g. "FOO" for 'config FOO'.

    type:
      The type of the symbol. One of BOOL, TRISTATE, STRING, INT, HEX, UNKNOWN.
      UNKNOWN is for undefined symbols, (non-special) constant symbols, and
      symbols defined without a type.

      When running without modules (MODULES having the value n), TRISTATE
      symbols magically change type to BOOL. This also happens for symbols
      within choices in "y" mode. This matches the C tools, and makes sense for
      menuconfig-like functionality.

    orig_type:
      The type as given in the Kconfig file, without any magic applied. Used
      when printing the symbol.

    str_value:
      The value of the symbol as a string. Gives the value for string/int/hex
      symbols. For bool/tristate symbols, gives "n", "m", or "y".

      This is the symbol value that's used in relational expressions
      (A = B, A != B, etc.)

      Gotcha: For int/hex symbols, the exact format of the value must often be
      preserved (e.g., when writing a .config file), hence why you can't get it
      directly as an int. Do int(int_sym.str_value) or
      int(hex_sym.str_value, 16) to get the integer value.

    tri_value:
      The tristate value of the symbol as an integer. One of 0, 1, 2,
      representing n, m, y. Always 0 (n) for non-bool/tristate symbols.

      This is the symbol value that's used outside of relation expressions
      (A, !A, A && B, A || B).

    assignable:
      A tuple containing the tristate user values that can currently be
      assigned to the symbol (that would be respected), ordered from lowest (0,
      representing n) to highest (2, representing y). This corresponds to the
      selections available in the menuconfig interface. The set of assignable
      values is calculated from the symbol's visibility and selects/implies.

      Returns the empty set for non-bool/tristate symbols and for symbols with
      visibility n. The other possible values are (0, 2), (0, 1, 2), (1, 2),
      (1,), and (2,). A (1,) or (2,) result means the symbol is visible but
      "locked" to m or y through a select, perhaps in combination with the
      visibility. menuconfig represents this as -M- and -*-, respectively.

      For string/hex/int symbols, check if Symbol.visibility is non-0 (non-n)
      instead to determine if the value can be changed.

      Some handy 'assignable' idioms:

        # Is 'sym' an assignable (visible) bool/tristate symbol?
        if sym.assignable:
            # What's the highest value it can be assigned? [-1] in Python
            # gives the last element.
            sym_high = sym.assignable[-1]

            # The lowest?
            sym_low = sym.assignable[0]

            # Can the symbol be set to at least m?
            if sym.assignable[-1] >= 1:
                ...

        # Can the symbol be set to m?
        if 1 in sym.assignable:
            ...

    visibility:
      The visibility of the symbol. One of 0, 1, 2, representing n, m, y. See
      the module documentation for an overview of symbol values and visibility.

    user_value:
      The user value of the symbol. None if no user value has been assigned
      (via Kconfig.load_config() or Symbol.set_value()).

      Holds 0, 1, or 2 for bool/tristate symbols, and a string for the other
      symbol types.

      WARNING: Do not assign directly to this. It will break things. Use
      Symbol.set_value().

    config_string:
      The .config assignment string that would get written out for the symbol
      by Kconfig.write_config(). Returns the empty string if no .config
      assignment would get written out. In general, visible symbols, symbols
      with (active) defaults, and selected symbols get written out.

    nodes:
      A list of MenuNodes for this symbol. Will contain a single MenuNode for
      most symbols. Undefined and constant symbols have an empty nodes list.
      Symbols defined in multiple locations get one node for each location.

    choice:
      Holds the parent Choice for choice symbols, and None for non-choice
      symbols. Doubles as a flag for whether a symbol is a choice symbol.

    defaults:
      List of (default, cond) tuples for the symbol's 'default' properties. For
      example, 'default A && B if C || D' is represented as
      ((AND, A, B), (OR, C, D)). If no condition was given, 'cond' is
      self.kconfig.y.

      Note that 'depends on' and parent dependencies are propagated to
      'default' conditions.

    selects:
      List of (symbol, cond) tuples for the symbol's 'select' properties. For
      example, 'select A if B && C' is represented as (A, (AND, B, C)). If no
      condition was given, 'cond' is self.kconfig.y.

      Note that 'depends on' and parent dependencies are propagated to 'select'
      conditions.

    implies:
      Like 'selects', for imply.

    ranges:
      List of (low, high, cond) tuples for the symbol's 'range' properties. For
      example, 'range 1 2 if A' is represented as (1, 2, A). If there is no
      condition, 'cond' is self.config.y.

      Note that 'depends on' and parent dependencies are propagated to 'range'
      conditions.

      Gotcha: 1 and 2 above will be represented as (undefined) Symbols rather
      than plain integers. Undefined symbols get their name as their string
      value, so this works out. The C tools work the same way.

    rev_dep:
      Reverse dependency expression from other symbols selecting this symbol.
      Multiple selections get ORed together. A condition on a select is ANDed
      with the selecting symbol.

      For example, if A has 'select FOO' and B has 'select FOO if C', then
      FOO's rev_dep will be (OR, A, (AND, B, C)).

    weak_rev_dep:
      Like rev_dep, for imply.

    direct_dep:
      The 'depends on' dependencies. If a symbol is defined in multiple
      locations, the dependencies at each location are ORed together.

      Internally, this is used to implement 'imply', which only applies if the
      implied symbol has expr_value(self.direct_dep) != 0. 'depends on' and
      parent dependencies are automatically propagated to the conditions of
      properties, so normally it's redundant to check the direct dependencies.

    env_var:
      If the Symbol has an 'option env="FOO"' option, this contains the name
      ("FOO") of the environment variable. None for symbols without no
      'option env'.

      'option env="FOO"' acts like a 'default' property whose value is the
      value of $FOO.

      env_var is set to "<uname release>" for the predefined symbol
      UNAME_RELEASE, which holds the 'release' field from uname.

      Symbols with 'option env' are never written out to .config files, even if
      they are visible. env_var corresponds to a flag called SYMBOL_AUTO in the
      C implementation.

    is_allnoconfig_y:
      True if the symbol has 'option allnoconfig_y' set on it. This has no
      effect internally (except when printing symbols), but can be checked by
      scripts.

    is_constant:
      True if the symbol is a constant (quoted) symbol.

    kconfig:
      The Kconfig instance this symbol is from.
    """
    __slots__ = (
        "_cached_assignable",
        "_cached_str_val",
        "_cached_tri_val",
        "_cached_vis",
        "_dependents",
        "_old_val",
        "_was_set",
        "_write_to_conf",
        "_written",
        "choice",
        "defaults",
        "direct_dep",
        "env_var",
        "implies",
        "is_allnoconfig_y",
        "is_constant",
        "kconfig",
        "name",
        "nodes",
        "orig_type",
        "ranges",
        "rev_dep",
        "selects",
        "user_value",
        "weak_rev_dep",
    )

    #
    # Public interface
    #

    @property
    def type(self):
        """
        See the class documentation.
        """
        if self.orig_type == TRISTATE and \
           ((self.choice and self.choice.tri_value == 2) or
            not self.kconfig.modules.tri_value):
            return BOOL

        return self.orig_type

    @property
    def str_value(self):
        """
        See the class documentation.
        """
        if self._cached_str_val is not None:
            return self._cached_str_val

        if self.orig_type in (BOOL, TRISTATE):
            # Also calculates the visibility, so invalidation safe
            self._cached_str_val = TRI_TO_STR[self.tri_value]
            return self._cached_str_val

        # As a quirk of Kconfig, undefined symbols get their name as their
        # string value. This is why things like "FOO = bar" work for seeing if
        # FOO has the value "bar".
        if self.orig_type == UNKNOWN:
            self._cached_str_val = self.name
            return self.name

        val = ""
        # Warning: See Symbol._rec_invalidate(), and note that this is a hidden
        # function call (property magic)
        vis = self.visibility

        self._write_to_conf = (vis != 0)

        if self.orig_type in (INT, HEX):
            # The C implementation checks the user value against the range in a
            # separate code path (post-processing after loading a .config).
            # Checking all values here instead makes more sense for us. It
            # requires that we check for a range first.

            base = _TYPE_TO_BASE[self.orig_type]

            # Check if a range is in effect
            for low_expr, high_expr, cond in self.ranges:
                if expr_value(cond):
                    has_active_range = True

                    # The zeros are from the C implementation running strtoll()
                    # on empty strings
                    low = int(low_expr.str_value, base) if \
                      _is_base_n(low_expr.str_value, base) else 0
                    high = int(high_expr.str_value, base) if \
                      _is_base_n(high_expr.str_value, base) else 0

                    break
            else:
                has_active_range = False

            # Defaults are used if the symbol is invisible, lacks a user value,
            # or has an out-of-range user value.
            use_defaults = True

            if vis and self.user_value:
                user_val = int(self.user_value, base)
                if has_active_range and not low <= user_val <= high:
                    num2str = str if base == 10 else hex
                    self.kconfig._warn(
                        "user value {} on the {} symbol {} ignored due to "
                        "being outside the active range ([{}, {}]) -- falling "
                        "back on defaults"
                        .format(num2str(user_val), TYPE_TO_STR[self.orig_type],
                                _name_and_loc(self),
                                num2str(low), num2str(high)))
                else:
                    # If the user value is well-formed and satisfies range
                    # contraints, it is stored in exactly the same form as
                    # specified in the assignment (with or without "0x", etc.)
                    val = self.user_value
                    use_defaults = False

            if use_defaults:
                # No user value or invalid user value. Look at defaults.
                found = False
                for val_expr, cond in self.defaults:
                    if expr_value(cond):
                        self._write_to_conf = True

                        val = val_expr.str_value

                        if _is_base_n(val, base):
                            val_num = int(val, base)
                        else:
                            val_num = 0  # strtoll() on empty string
                        found = True
                        #break
                if not found:
                    val_num = 0  # strtoll() on empty string

                # This clamping procedure runs even if there's no default
                if has_active_range:
                    clamp = None
                    if val_num < low:
                        clamp = low
                    elif val_num > high:
                        clamp = high

                    if clamp is not None:
                        # The value is rewritten to a standard form if it is
                        # clamped
                        val = str(clamp) \
                              if self.orig_type == INT else \
                              hex(clamp)

        elif self.orig_type == STRING:
            if vis and self.user_value is not None:
                # If the symbol is visible and has a user value, use that
                val = self.user_value
            else:
                # Otherwise, look at defaults
                for val_expr, cond in self.defaults:
                    if expr_value(cond):
                        val = val_expr.str_value
                        self._write_to_conf = True
                        #break

        # env_var corresponds to SYMBOL_AUTO in the C implementation, and is
        # also set on the defconfig_list symbol there. Test for the
        # defconfig_list symbol explicitly instead here, to avoid a nonsensical
        # env_var setting and the defconfig_list symbol being printed
        # incorrectly. This code is pretty cold anyway.
        if self.env_var is not None or self is self.kconfig.defconfig_list:
            self._write_to_conf = False

        self._cached_str_val = val
        return val

    @property
    def tri_value(self):
        """
        See the class documentation.
        """
        if self._cached_tri_val is not None:
            return self._cached_tri_val

        if self.orig_type not in (BOOL, TRISTATE):
            self._cached_tri_val = 0
            return 0

        # Warning: See Symbol._rec_invalidate(), and note that this is a hidden
        # function call (property magic)
        vis = self.visibility
        self._write_to_conf = (vis != 0)

        val = 0

        if not self.choice:
            # Non-choice symbol

            if vis and self.user_value is not None:
                # If the symbol is visible and has a user value, use that
                val = min(self.user_value, vis)

            else:
                # Otherwise, look at defaults and weak reverse dependencies
                # (implies)

                for default, cond in self.defaults:
                    cond_val = expr_value(cond)
                    if cond_val:
                        val = min(expr_value(default), cond_val)
                        if val:
                            self._write_to_conf = True
                        #break

                # Weak reverse dependencies are only considered if our
                # direct dependencies are met
                weak_rev_dep_val = expr_value(self.weak_rev_dep)
                if weak_rev_dep_val and expr_value(self.direct_dep):
                    val = max(weak_rev_dep_val, val)
                    self._write_to_conf = True

            # Reverse (select-related) dependencies take precedence
            rev_dep_val = expr_value(self.rev_dep)
            if rev_dep_val:
                val = max(rev_dep_val, val)
                self._write_to_conf = True

                if not expr_value(self.direct_dep):
                    self._warn_select_unsatisfied_deps()

            # m is promoted to y for (1) bool symbols and (2) symbols with a
            # weak_rev_dep (from imply) of y
            if val == 1 and \
               (self.type == BOOL or expr_value(self.weak_rev_dep) == 2):
                val = 2

        elif vis == 2:
            # Visible choice symbol in y-mode choice. The choice mode limits
            # the visibility of choice symbols, so it's sufficient to just
            # check the visibility of the choice symbols themselves.
            val = 2 if self.choice.selection is self else 0

        elif vis and self.user_value:
            # Visible choice symbol in m-mode choice, with set non-0 user value
            val = 1

        self._cached_tri_val = val
        return val

    @property
    def assignable(self):
        """
        See the class documentation.
        """
        if self._cached_assignable is None:
            self._cached_assignable = self._assignable()

        return self._cached_assignable

    @property
    def visibility(self):
        """
        See the class documentation.
        """
        if self._cached_vis is None:
            self._cached_vis = _visibility(self)

        return self._cached_vis

    @property
    def config_string(self):
        """
        See the class documentation.
        """
        # Note: _write_to_conf is determined when the value is calculated. This
        # is a hidden function call due to property magic.
        val = self.str_value
        if not self._write_to_conf:
            return ""

        if self.orig_type in (BOOL, TRISTATE):
            return "{}{}={}\n" \
                   .format(self.kconfig.config_prefix, self.name, val) \
                   if val != "n" else \
                   "# {}{} is not set\n" \
                   .format(self.kconfig.config_prefix, self.name)

        if self.orig_type in (INT, HEX):
            return "{}{}={}\n" \
                   .format(self.kconfig.config_prefix, self.name, val)

        if self.orig_type == STRING:
            return '{}{}="{}"\n' \
                   .format(self.kconfig.config_prefix, self.name, escape(val))

        _internal_error("Internal error while creating .config: unknown "
                        'type "{}".'.format(self.orig_type))

    def set_value(self, value):
        """
        Sets the user value of the symbol.

        Equal in effect to assigning the value to the symbol within a .config
        file. For bool and tristate symbols, use the 'assignable' attribute to
        check which values can currently be assigned. Setting values outside
        'assignable' will cause Symbol.user_value to differ from
        Symbol.str/tri_value (be truncated down or up).

        Setting a choice symbol to 2 (y) sets Choice.user_selection to the
        choice symbol in addition to setting Symbol.user_value.
        Choice.user_selection is considered when the choice is in y mode (the
        "normal" mode).

        Other symbols that depend (possibly indirectly) on this symbol are
        automatically recalculated to reflect the assigned value.

        value:
          The user value to give to the symbol. For bool and tristate symbols,
          n/m/y can be specified either as 0/1/2 (the usual format for tristate
          values in Kconfiglib) or as one of the strings "n"/"m"/"y". For other
          symbol types, pass a string.

          Values that are invalid for the type (such as "foo" or 1 (m) for a
          BOOL or "0x123" for an INT) are ignored and won't be stored in
          Symbol.user_value. Kconfiglib will print a warning by default for
          invalid assignments, and set_value() will return False.

        Returns True if the value is valid for the type of the symbol, and
        False otherwise. This only looks at the form of the value. For BOOL and
        TRISTATE symbols, check the Symbol.assignable attribute to see what
        values are currently in range and would actually be reflected in the
        value of the symbol. For other symbol types, check whether the
        visibility is non-n.
        """
        # If the new user value matches the old, nothing changes, and we can
        # save some work.
        #
        # This optimization is skipped for choice symbols: Setting a choice
        # symbol's user value to y might change the state of the choice, so it
        # wouldn't be safe (symbol user values always match the values set in a
        # .config file or via set_value(), and are never implicitly updated).
        if value == self.user_value and not self.choice:
            self._was_set = True
            return True

        # Check if the value is valid for our type
        if not ((self.orig_type == BOOL     and value in (0, 2, "n", "y")        ) or
                (self.orig_type == TRISTATE and value in (0, 1, 2, "n", "m", "y")) or
                (self.orig_type == STRING   and isinstance(value, str)           ) or
                (self.orig_type == INT      and isinstance(value, str)
                                            and _is_base_n(value, 10)            ) or
                (self.orig_type == HEX      and isinstance(value, str)
                                            and _is_base_n(value, 16)
                                            and int(value, 16) >= 0)):

            # Display tristate values as n, m, y in the warning
            self.kconfig._warn(
                "the value {} is invalid for {}, which has type {} -- "
                "assignment ignored"
                .format(TRI_TO_STR[value] if value in (0, 1, 2) else
                            "'{}'".format(value),
                        _name_and_loc(self),
                        TYPE_TO_STR[self.orig_type]))

            return False

        if self.env_var is not None:
            self.kconfig._warn("ignored attempt to assign user value to "
                               "{}, which is set from the environment"
                               .format(_name_and_loc(self)))
            return False

        if self.orig_type in (BOOL, TRISTATE) and value in ("n", "m", "y"):
            value = STR_TO_TRI[value]

        self.user_value = value
        self._was_set = True

        if self.choice and value == 2:
            # Setting a choice symbol to y makes it the user selection of the
            # choice. Like for symbol user values, the user selection is not
            # guaranteed to match the actual selection of the choice, as
            # dependencies come into play.
            self.choice.user_selection = self
            self.choice._was_set = True
            self.choice._rec_invalidate()
        else:
            self._rec_invalidate_if_has_prompt()

        return True

    def unset_value(self):
        """
        Resets the user value of the symbol, as if the symbol had never gotten
        a user value via Kconfig.load_config() or Symbol.set_value().
        """
        if self.user_value is not None:
            self.user_value = None
            self._rec_invalidate_if_has_prompt()

    def __repr__(self):
        """
        Returns a string with information about the symbol (including its name,
        value, visibility, and location(s)) when it is evaluated on e.g. the
        interactive Python prompt.
        """
        fields = []

        fields.append("symbol " + self.name)
        fields.append(TYPE_TO_STR[self.type])

        for node in self.nodes:
            if node.prompt:
                fields.append('"{}"'.format(node.prompt[0]))

        # Only add quotes for non-bool/tristate symbols
        fields.append("value " +
                      (self.str_value
                       if self.orig_type in (BOOL, TRISTATE) else
                       '"{}"'.format(self.str_value)))

        if not self.is_constant:
            # These aren't helpful to show for constant symbols

            if self.user_value is not None:
                # Only add quotes for non-bool/tristate symbols
                fields.append("user value " +
                              (TRI_TO_STR[self.user_value]
                               if self.orig_type in (BOOL, TRISTATE) else
                               '"{}"'.format(self.user_value)))

            fields.append("visibility " + TRI_TO_STR[self.visibility])

            if self.choice:
                fields.append("choice symbol")

            if self.is_allnoconfig_y:
                fields.append("allnoconfig_y")

            if self is self.kconfig.defconfig_list:
                fields.append("is the defconfig_list symbol")

            if self.env_var is not None:
                fields.append("from environment variable " + self.env_var)

            if self is self.kconfig.modules:
                fields.append("is the modules symbol")

            fields.append("direct deps " +
                          TRI_TO_STR[expr_value(self.direct_dep)])

        if self.nodes:
            for node in self.nodes:
                fields.append("{}:{}".format(node.filename, node.linenr))
        else:
            if self.is_constant:
                fields.append("constant")
            else:
                fields.append("undefined")

        return "<{}>".format(", ".join(fields))

    def __str__(self):
        """
        Returns a string representation of the symbol when it is printed,
        matching the Kconfig format, with parent dependencies propagated.

        The string is constructed by joining the strings returned by
        MenuNode.__str__() for each of the symbol's menu nodes, so symbols
        defined in multiple locations will return a string with all
        definitions.

        An empty string is returned for undefined and constant symbols.
        """
        return "\n".join(str(node) for node in self.nodes)

    #
    # Private methods
    #

    def __init__(self):
        """
        Symbol constructor -- not intended to be called directly by Kconfiglib
        clients.
        """
        # These attributes are always set on the instance from outside and
        # don't need defaults:
        #   _written
        #   kconfig
        #   direct_dep
        #   is_constant
        #   name
        #   rev_dep
        #   weak_rev_dep

        self.orig_type = UNKNOWN
        self.defaults = []
        self.selects = []
        self.implies = []
        self.ranges = []

        self.nodes = []

        self.user_value = \
        self.choice = \
        self.env_var = \
        self._cached_str_val = self._cached_tri_val = self._cached_vis = \
        self._cached_assignable = None

        # _write_to_conf is calculated along with the value. If True, the
        # Symbol gets a .config entry.

        self.is_allnoconfig_y = \
        self._was_set = \
        self._write_to_conf = False

        # See Kconfig._build_dep()
        self._dependents = set()

    def _assignable(self):
        # Worker function for the 'assignable' attribute

        if self.orig_type not in (BOOL, TRISTATE):
            return ()

        # Warning: See Symbol._rec_invalidate(), and note that this is a hidden
        # function call (property magic)
        vis = self.visibility

        if not vis:
            return ()

        rev_dep_val = expr_value(self.rev_dep)

        if vis == 2:
            if self.choice:
                return (2,)

            if not rev_dep_val:
                if self.type == BOOL or expr_value(self.weak_rev_dep) == 2:
                    return (0, 2)
                return (0, 1, 2)

            if rev_dep_val == 2:
                return (2,)

            # rev_dep_val == 1

            if self.type == BOOL or expr_value(self.weak_rev_dep) == 2:
                return (2,)
            return (1, 2)

        # vis == 1

        # Must be a tristate here, because bool m visibility gets promoted to y

        if not rev_dep_val:
            return (0, 1) if expr_value(self.weak_rev_dep) != 2 else (0, 2)

        if rev_dep_val == 2:
            return (2,)

        # vis == rev_dep_val == 1

        return (1,)

    def _invalidate(self):
        # Marks the symbol as needing to be recalculated

        self._cached_str_val = self._cached_tri_val = self._cached_vis = \
            self._cached_assignable = None

    def _rec_invalidate(self):
        # Invalidates the symbol and all items that (possibly) depend on it

        if self is self.kconfig.modules:
            # Invalidating MODULES has wide-ranging effects
            self.kconfig._invalidate_all()
        else:
            self._invalidate()

            for item in self._dependents:
                # _cached_vis doubles as a flag that tells us whether 'item'
                # has cached values, because it's calculated as a side effect
                # of calculating all other (non-constant) cached values.
                #
                # If item._cached_vis is None, it means there can't be cached
                # values on other items that depend on 'item', because if there
                # were, some value on 'item' would have been calculated and
                # item._cached_vis set as a side effect. It's therefore safe to
                # stop the invalidation at symbols with _cached_vis None.
                #
                # This approach massively speeds up scripts that set a lot of
                # values, vs simply invalidating all possibly dependent symbols
                # (even when you already have a list of all the dependent
                # symbols, because some symbols get huge dependency trees).
                #
                # This gracefully handles dependency loops too, which is nice
                # for choices, where the choice depends on the choice symbols
                # and vice versa.
                if item._cached_vis is not None:
                    item._rec_invalidate()

    def _rec_invalidate_if_has_prompt(self):
        # Invalidates the symbol and its dependent symbols, but only if the
        # symbol has a prompt. User values never have an effect on promptless
        # symbols, so we skip invalidation for them as an optimization.
        #
        # This also prevents constant (quoted) symbols from being invalidated
        # if set_value() is called on them, which would cause them to lose
        # their value and break things.
        #
        # Prints a warning if the symbol has no prompt. In some contexts (e.g.
        # when loading a .config files) assignments to promptless symbols are
        # normal and expected, so the warning can be disabled.

        for node in self.nodes:
            if node.prompt:
                self._rec_invalidate()
                return

        if self.kconfig._warn_for_no_prompt:
            self.kconfig._warn(_name_and_loc(self) + " has no prompt, meaning "
                               "user values have no effect on it")

    def _str_default(self):
        # write_min_config() helper function. Returns the value the symbol
        # would get from defaults if it didn't have a user value. Uses exactly
        # the same algorithm as the C implementation (though a bit cleaned up),
        # for compatibility.

        if self.orig_type in (BOOL, TRISTATE):
            val = 0

            # Defaults, selects, and implies do not affect choice symbols
            if not self.choice:
                for default, cond in self.defaults:
                    cond_val = expr_value(cond)
                    if cond_val:
                        val = min(expr_value(default), cond_val)
                        break

                val = max(expr_value(self.rev_dep),
                          expr_value(self.weak_rev_dep),
                          val)

                # Transpose mod to yes if type is bool (possibly due to modules
                # being disabled)
                if val == 1 and self.type == BOOL:
                    val = 2

            return TRI_TO_STR[val]

        if self.orig_type in (STRING, INT, HEX):
            for default, cond in self.defaults:
                if expr_value(cond):
                    return default.str_value

        return ""

    def _warn_select_unsatisfied_deps(self):
        # Helper for printing an informative warning when a symbol with
        # unsatisfied direct dependencies (dependencies from 'depends on', ifs,
        # and menus) is selected by some other symbol

        msg = "{} has unsatisfied direct dependencies ({}), but is " \
              "currently being selected by the following symbols:" \
              .format(_name_and_loc(self), expr_str(self.direct_dep))

        # The reverse dependencies from each select are ORed together
        for select in split_expr(self.rev_dep, OR):
            select_val = expr_value(select)
            if not select_val:
                # Only include selects that are not n
                continue

            # - 'select A if B' turns into A && B
            # - 'select A' just turns into A
            #
            # In both cases, we can split on AND and pick the first operand
            selecting_sym = split_expr(select, AND)[0]

            msg += "\n - {}, with value {}, direct dependencies {} " \
                   "(value: {})" \
                   .format(_name_and_loc(selecting_sym),
                           selecting_sym.str_value,
                           expr_str(selecting_sym.direct_dep),
                           TRI_TO_STR[expr_value(selecting_sym.direct_dep)])

            if isinstance(select, tuple):
                msg += ", and select condition {} (value: {})" \
                       .format(expr_str(select[2]),
                               TRI_TO_STR[expr_value(select[2])])

        self.kconfig._warn(msg)

class Choice(object):
    """
    Represents a choice statement:

      choice
          ...
      endchoice

    The following attributes are available on Choice instances. They should be
    treated as read-only, and some are implemented through @property magic (but
    are still efficient to access due to internal caching).

    Note: Prompts, help texts, and locations are stored in the Choice's
    MenuNode(s) rather than in the Choice itself. Check the MenuNode class and
    the Choice.nodes attribute. This organization matches the C tools.

    name:
      The name of the choice, e.g. "FOO" for 'choice FOO', or None if the
      Choice has no name. I can't remember ever seeing named choices in
      practice, but the C tools support them too.

    type:
      The type of the choice. One of BOOL, TRISTATE, UNKNOWN. UNKNOWN is for
      choices defined without a type where none of the contained symbols have a
      type either (otherwise the choice inherits the type of the first symbol
      defined with a type).

      When running without modules (CONFIG_MODULES=n), TRISTATE choices
      magically change type to BOOL. This matches the C tools, and makes sense
      for menuconfig-like functionality.

    orig_type:
      The type as given in the Kconfig file, without any magic applied. Used
      when printing the choice.

    tri_value:
      The tristate value (mode) of the choice. A choice can be in one of three
      modes:

        0 (n) - The choice is disabled and no symbols can be selected. For
                visible choices, this mode is only possible for choices with
                the 'optional' flag set (see kconfig-language.txt).

        1 (m) - Any number of choice symbols can be set to m, the rest will
                be n.

        2 (y) - One symbol will be y, the rest n.

      Only tristate choices can be in m mode. The visibility of the choice is
      an upper bound on the mode, and the mode in turn is an upper bound on the
      visibility of the choice symbols.

      To change the mode, use Choice.set_value().

      Implementation note:
        The C tools internally represent choices as a type of symbol, with
        special-casing in many code paths. This is why there is a lot of
        similarity to Symbol. The value (mode) of a choice is really just a
        normal symbol value, and an implicit reverse dependency forces its
        lower bound to m for visible non-optional choices (the reverse
        dependency is 'm && <visibility>').

        Symbols within choices get the choice propagated as a dependency to
        their properties. This turns the mode of the choice into an upper bound
        on e.g. the visibility of choice symbols, and explains the gotcha
        related to printing choice symbols mentioned in the module docstring.

        Kconfiglib uses a separate Choice class only because it makes the code
        and interface less confusing (especially in a user-facing interface).
        Corresponding attributes have the same name in the Symbol and Choice
        classes, for consistency and compatibility.

    assignable:
      See the symbol class documentation. Gives the assignable values (modes).

    visibility:
      See the Symbol class documentation. Acts on the value (mode).

    selection:
      The Symbol instance of the currently selected symbol. None if the Choice
      is not in y mode or has no selected symbol (due to unsatisfied
      dependencies on choice symbols).

      WARNING: Do not assign directly to this. It will break things. Call
      sym.set_value(2) on the choice symbol you want to select instead.

    user_value:
      The value (mode) selected by the user through Choice.set_value(). Either
      0, 1, or 2, or None if the user hasn't selected a mode. See
      Symbol.user_value.

      WARNING: Do not assign directly to this. It will break things. Use
      Choice.set_value() instead.

    user_selection:
      The symbol selected by the user (by setting it to y). Ignored if the
      choice is not in y mode, but still remembered so that the choice "snaps
      back" to the user selection if the mode is changed back to y. This might
      differ from 'selection' due to unsatisfied dependencies.

      WARNING: Do not assign directly to this. It will break things. Call
      sym.set_value(2) on the choice symbol to be selected instead.

    syms:
      List of symbols contained in the choice.

      Gotcha: If a symbol depends on the previous symbol within a choice so
      that an implicit menu is created, it won't be a choice symbol, and won't
      be included in 'syms'. There are real-world examples of this, and it was
      a PITA to support in older versions of Kconfiglib that didn't implement
      the menu structure.

    nodes:
      A list of MenuNodes for this choice. In practice, the list will probably
      always contain a single MenuNode, but it is possible to give a choice a
      name and define it in multiple locations (I've never even seen a named
      choice though).

    defaults:
      List of (symbol, cond) tuples for the choice's 'defaults' properties. For
      example, 'default A if B && C' is represented as (A, (AND, B, C)). If
      there is no condition, 'cond' is self.config.y.

      Note that 'depends on' and parent dependencies are propagated to
      'default' conditions.

    direct_dep:
      See Symbol.direct_dep.

    is_optional:
      True if the choice has the 'optional' flag set on it and can be in
      n mode.

    kconfig:
      The Kconfig instance this choice is from.
    """
    __slots__ = (
        "_cached_assignable",
        "_cached_selection",
        "_cached_vis",
        "_dependents",
        "_was_set",
        "defaults",
        "direct_dep",
        "is_constant",
        "is_optional",
        "kconfig",
        "name",
        "nodes",
        "orig_type",
        "syms",
        "user_selection",
        "user_value",
    )

    #
    # Public interface
    #

    @property
    def type(self):
        """
        Returns the type of the choice. See Symbol.type.
        """
        if self.orig_type == TRISTATE and not self.kconfig.modules.tri_value:
            return BOOL

        return self.orig_type

    @property
    def str_value(self):
        """
        See the class documentation.
        """
        return TRI_TO_STR[self.tri_value]

    @property
    def tri_value(self):
        """
        See the class documentation.
        """
        # This emulates a reverse dependency of 'm && visibility' for
        # non-optional choices, which is how the C implementation does it

        val = 0 if self.is_optional else 1

        if self.user_value is not None:
            val = max(val, self.user_value)

        # Warning: See Symbol._rec_invalidate(), and note that this is a hidden
        # function call (property magic)
        val = min(val, self.visibility)

        # Promote m to y for boolean choices
        return 2 if val == 1 and self.type == BOOL else val

    @property
    def assignable(self):
        """
        See the class documentation.
        """
        if self._cached_assignable is None:
            self._cached_assignable = self._assignable()

        return self._cached_assignable

    @property
    def visibility(self):
        """
        See the class documentation.
        """
        if self._cached_vis is None:
            self._cached_vis = _visibility(self)

        return self._cached_vis

    @property
    def selection(self):
        """
        See the class documentation.
        """
        if self._cached_selection is _NO_CACHED_SELECTION:
            self._cached_selection = self._selection()

        return self._cached_selection

    def set_value(self, value):
        """
        Sets the user value (mode) of the choice. Like for Symbol.set_value(),
        the visibility might truncate the value. Choices without the 'optional'
        attribute (is_optional) can never be in n mode, but 0/"n" is still
        accepted since it's not a malformed value (though it will have no
        effect).

        Returns True if the value is valid for the type of the choice, and
        False otherwise. This only looks at the form of the value. Check the
        Choice.assignable attribute to see what values are currently in range
        and would actually be reflected in the mode of the choice.
        """
        if value == self.user_value:
            # We know the value must be valid if it was successfully set
            # previously
            self._was_set = True
            return True

        if not ((self.orig_type == BOOL     and value in (0, 2, "n", "y")        ) or
                (self.orig_type == TRISTATE and value in (0, 1, 2, "n", "m", "y"))):

            # Display tristate values as n, m, y in the warning
            self.kconfig._warn(
                "the value {} is invalid for {}, which has type {} -- "
                "assignment ignored"
                .format(TRI_TO_STR[value] if value in (0, 1, 2) else
                            "'{}'".format(value),
                        _name_and_loc(self),
                        TYPE_TO_STR[self.orig_type]))

            return False

        if value in ("n", "m", "y"):
            value = STR_TO_TRI[value]

        self.user_value = value
        self._was_set = True
        self._rec_invalidate()

        return True

    def unset_value(self):
        """
        Resets the user value (mode) and user selection of the Choice, as if
        the user had never touched the mode or any of the choice symbols.
        """
        if self.user_value is not None or self.user_selection:
            self.user_value = self.user_selection = None
            self._rec_invalidate()

    def __repr__(self):
        """
        Returns a string with information about the choice when it is evaluated
        on e.g. the interactive Python prompt.
        """
        fields = []

        fields.append("choice" if self.name is None else \
                      "choice " + self.name)
        fields.append(TYPE_TO_STR[self.type])

        for node in self.nodes:
            if node.prompt:
                fields.append('"{}"'.format(node.prompt[0]))

        fields.append("mode " + self.str_value)

        if self.user_value is not None:
            fields.append('user mode {}'.format(TRI_TO_STR[self.user_value]))

        if self.selection:
            fields.append("{} selected".format(self.selection.name))

        if self.user_selection:
            user_sel_str = "{} selected by user" \
                           .format(self.user_selection.name)

            if self.selection is not self.user_selection:
                user_sel_str += " (overridden)"

            fields.append(user_sel_str)

        fields.append("visibility " + TRI_TO_STR[self.visibility])

        if self.is_optional:
            fields.append("optional")

        for node in self.nodes:
            fields.append("{}:{}".format(node.filename, node.linenr))

        return "<{}>".format(", ".join(fields))

    def __str__(self):
        """
        Returns a string representation of the choice when it is printed,
        matching the Kconfig format (though without the contained choice
        symbols).

        See Symbol.__str__() as well.
        """
        return "\n".join(str(node) for node in self.nodes)

    #
    # Private methods
    #

    def __init__(self):
        """
        Choice constructor -- not intended to be called directly by Kconfiglib
        clients.
        """
        # These attributes are always set on the instance from outside and
        # don't need defaults:
        #   direct_dep
        #   kconfig

        self.orig_type = UNKNOWN
        self.syms = []
        self.defaults = []

        self.nodes = []

        self.name = \
        self.user_value = self.user_selection = \
        self._cached_vis = self._cached_assignable = None

        self._cached_selection = _NO_CACHED_SELECTION

        # is_constant is checked by _make_depend_on(). Just set it to avoid
        # having to special-case choices.
        self.is_constant = self.is_optional = False

        # See Kconfig._build_dep()
        self._dependents = set()

    def _assignable(self):
        # Worker function for the 'assignable' attribute

        # Warning: See Symbol._rec_invalidate(), and note that this is a hidden
        # function call (property magic)
        vis = self.visibility

        if not vis:
            return ()

        if vis == 2:
            if not self.is_optional:
                return (2,) if self.type == BOOL else (1, 2)
            return (0, 2) if self.type == BOOL else (0, 1, 2)

        # vis == 1

        return (0, 1) if self.is_optional else (1,)

    def _selection(self):
        # Worker function for the 'selection' attribute

        # Warning: See Symbol._rec_invalidate(), and note that this is a hidden
        # function call (property magic)
        if self.tri_value != 2:
            # Not in y mode, so no selection
            return None

        # Use the user selection if it's visible
        if self.user_selection and self.user_selection.visibility:
            return self.user_selection

        # Otherwise, check if we have a default
        return self._get_selection_from_defaults()

    def _get_selection_from_defaults(self):
        # Check if we have a default
        for sym, cond in self.defaults:
            # The default symbol must be visible too
            if expr_value(cond) and sym.visibility:
                return sym

        # Otherwise, pick the first visible symbol, if any
        for sym in self.syms:
            if sym.visibility:
                return sym

        # Couldn't find a selection
        return None

    def _invalidate(self):
        self._cached_vis = self._cached_assignable = None
        self._cached_selection = _NO_CACHED_SELECTION

    def _rec_invalidate(self):
        # See Symbol._rec_invalidate()

        self._invalidate()

        for item in self._dependents:
            if item._cached_vis is not None:
                item._rec_invalidate()

class MenuNode(object):
    """
    Represents a menu node in the configuration. This corresponds to an entry
    in e.g. the 'make menuconfig' interface, though non-visible choices, menus,
    and comments also get menu nodes. If a symbol or choice is defined in
    multiple locations, it gets one menu node for each location.

    The top-level menu node, corresponding to the implicit top-level menu, is
    available in Kconfig.top_node.

    The menu nodes for a Symbol or Choice can be found in the
    Symbol/Choice.nodes attribute. Menus and comments are represented as plain
    menu nodes, with their text stored in the prompt attribute (prompt[0]).
    This mirrors the C implementation.

    The following attributes are available on MenuNode instances. They should
    be viewed as read-only.

    item:
      Either a Symbol, a Choice, or one of the constants MENU and COMMENT.
      Menus and comments are represented as plain menu nodes. Ifs are collapsed
      (matching the C implementation) and do not appear in the final menu tree.

    next:
      The following menu node. None if there is no following node.

    list:
      The first child menu node. None if there are no children.

      Choices and menus naturally have children, but Symbols can also have
      children because of menus created automatically from dependencies (see
      kconfig-language.txt).

    parent:
      The parent menu node. None if there is no parent.

    prompt:
      A (string, cond) tuple with the prompt for the menu node and its
      conditional expression (which is self.kconfig.y if there is no
      condition). None if there is no prompt.

      For symbols and choices, the prompt is stored in the MenuNode rather than
      the Symbol or Choice instance. For menus and comments, the prompt holds
      the text.

    defaults:
      The 'default' properties for this particular menu node. See
      symbol.defaults.

      When evaluating defaults, you should use Symbol/Choice.defaults instead,
      as it include properties from all menu nodes (a symbol/choice can have
      multiple definition locations/menu nodes). MenuNode.defaults is meant for
      documentation generation.

    selects:
      Like MenuNode.defaults, for selects.

    implies:
      Like MenuNode.defaults, for implies.

    ranges:
      Like MenuNode.defaults, for ranges.

    help:
      The help text for the menu node for Symbols and Choices. None if there is
      no help text. Always stored in the node rather than the Symbol or Choice.
      It is possible to have a separate help text at each location if a symbol
      is defined in multiple locations.

    dep:
      The 'depends on' dependencies for the menu node, or self.kconfig.y if
      there are no dependencies. Parent dependencies are propagated to this
      attribute, and this attribute is then in turn propagated to the
      properties of symbols and choices.

      If a symbol or choice is defined in multiple locations, only the
      properties defined at a particular location get the corresponding
      MenuNode.dep dependencies propagated to them.

    visibility:
      The 'visible if' dependencies for the menu node (which must represent a
      menu), or self.kconfig.y if there are no 'visible if' dependencies.
      'visible if' dependencies are recursively propagated to the prompts of
      symbols and choices within the menu.

    is_menuconfig:
      Set to True if the children of the menu node should be displayed in a
      separate menu. This is the case for the following items:

        - Menus (node.item == MENU)

        - Choices

        - Symbols defined with the 'menuconfig' keyword. The children come from
          implicitly created submenus, and should be displayed in a separate
          menu rather than being indented.

      'is_menuconfig' is just a hint on how to display the menu node. It's
      ignored internally by Kconfiglib, except when printing symbols.

    filename/linenr:
      The location where the menu node appears.

    kconfig:
      The Kconfig instance the menu node is from.
    """
    __slots__ = (
        "dep",
        "filename",
        "help",
        "is_menuconfig",
        "item",
        "kconfig",
        "linenr",
        "list",
        "next",
        "parent",
        "prompt",
        "visibility",

        # Properties
        "defaults",
        "selects",
        "implies",
        "ranges"
    )

    def __repr__(self):
        """
        Returns a string with information about the menu node when it is
        evaluated on e.g. the interactive Python prompt.
        """
        fields = []

        if isinstance(self.item, Symbol):
            fields.append("menu node for symbol " + self.item.name)

        elif isinstance(self.item, Choice):
            s = "menu node for choice"
            if self.item.name is not None:
                s += " " + self.item.name
            fields.append(s)

        elif self.item == MENU:
            fields.append("menu node for menu")

        elif self.item == COMMENT:
            fields.append("menu node for comment")

        elif self.item is None:
            fields.append("menu node for if (should not appear in the final "
                          " tree)")

        else:
            raise InternalError("unable to determine type in "
                                "MenuNode.__repr__()")

        if self.prompt:
            fields.append('prompt "{}" (visibility {})'
                          .format(self.prompt[0],
                                  TRI_TO_STR[expr_value(self.prompt[1])]))

        if isinstance(self.item, Symbol) and self.is_menuconfig:
            fields.append("is menuconfig")

        fields.append("deps " + TRI_TO_STR[expr_value(self.dep)])

        if self.item == MENU:
            fields.append("'visible if' deps " + \
                          TRI_TO_STR[expr_value(self.visibility)])

        if isinstance(self.item, (Symbol, Choice)) and self.help is not None:
            fields.append("has help")

        if self.list:
            fields.append("has child")

        if self.next:
            fields.append("has next")

        fields.append("{}:{}".format(self.filename, self.linenr))

        return "<{}>".format(", ".join(fields))

    def __str__(self):
        """
        Returns a string representation of the menu node, matching the Kconfig
        format.

        The output could (almost) be fed back into a Kconfig parser to redefine
        the object associated with the menu node. See the module documentation
        for a gotcha related to choice symbols.

        For symbols and choices with multiple menu nodes (multiple definition
        locations), properties that aren't associated with a particular menu
        node are shown on all menu nodes ('option env=...', 'optional' for
        choices, etc.).
        """

        return self._menu_comment_node_str() \
               if self.item in (MENU, COMMENT) else \
               self._sym_choice_node_str()

    def _menu_comment_node_str(self):
        s = '{} "{}"\n'.format("menu" if self.item == MENU else "comment",
                               self.prompt[0])

        if self.dep is not self.kconfig.y:
            s += "\tdepends on {}\n".format(expr_str(self.dep))

        if self.item == MENU and self.visibility is not self.kconfig.y:
            s += "\tvisible if {}\n".format(expr_str(self.visibility))

        return s

    def _sym_choice_node_str(self):
        lines = []

        def indent_add(s):
            lines.append("\t" + s)

        def indent_add_cond(s, cond):
            if cond is not self.kconfig.y:
                s += " if " + expr_str(cond)
            indent_add(s)

        if isinstance(self.item, (Symbol, Choice)):
            sc = self.item

            if isinstance(sc, Symbol):
                lines.append(
                    ("menuconfig " if self.is_menuconfig else "config ")
                    + sc.name)
            else:
                lines.append(
                    "choice" if sc.name is None else "choice " + sc.name)

            if sc.orig_type != UNKNOWN:
                indent_add(TYPE_TO_STR[sc.orig_type])

            if self.prompt:
                indent_add_cond(
                    'prompt "{}"'.format(escape(self.prompt[0])),
                    self.prompt[1])

            if isinstance(sc, Symbol):
                if sc.is_allnoconfig_y:
                    indent_add("option allnoconfig_y")

                if sc is sc.kconfig.defconfig_list:
                    indent_add("option defconfig_list")

                if sc.env_var is not None:
                    indent_add('option env="{}"'.format(sc.env_var))

                if sc is sc.kconfig.modules:
                    indent_add("option modules")

                for low, high, cond in self.ranges:
                    indent_add_cond(
                        "range {} {}".format(expr_str(low), expr_str(high)),
                        cond)

            for default, cond in self.defaults:
                indent_add_cond("default " + expr_str(default), cond)

            if isinstance(sc, Choice) and sc.is_optional:
                indent_add("optional")

            if isinstance(sc, Symbol):
                for select, cond in self.selects:
                    indent_add_cond("select " + expr_str(select), cond)

                for imply, cond in self.implies:
                    indent_add_cond("imply " + expr_str(imply), cond)

            if self.dep is not sc.kconfig.y:
                indent_add("depends on " + expr_str(self.dep))

            if self.help is not None:
                indent_add("help")
                for line in self.help.splitlines():
                    indent_add("  " + line)

        return "\n".join(lines) + "\n"

class KconfigSyntaxError(Exception):
    """
    Exception raised for syntax errors.
    """
    pass

class InternalError(Exception):
    """
    Exception raised for internal errors.
    """
    pass

#
# Public functions
#

def expr_value(expr):
    """
    Evaluates the expression 'expr' to a tristate value. Returns 0 (n), 1 (m),
    or 2 (y).

    'expr' must be an already-parsed expression from a Symbol, Choice, or
    MenuNode property. To evaluate an expression represented as a string, use
    Kconfig.eval_string().

    Passing subexpressions of expressions to this function works as expected.
    """
    if not isinstance(expr, tuple):
        return expr.tri_value

    if expr[0] == AND:
        v1 = expr_value(expr[1])
        # Short-circuit the n case as an optimization (~5% faster
        # allnoconfig.py and allyesconfig.py, as of writing)
        return 0 if not v1 else min(v1, expr_value(expr[2]))

    if expr[0] == OR:
        v1 = expr_value(expr[1])
        # Short-circuit the y case as an optimization
        return 2 if v1 == 2 else max(v1, expr_value(expr[2]))

    if expr[0] == NOT:
        return 2 - expr_value(expr[1])

    if expr[0] in _RELATIONS:
        # Implements <, <=, >, >= comparisons as well. These were added to
        # kconfig in 31847b67 (kconfig: allow use of relations other than
        # (in)equality).

        oper, op1, op2 = expr

        # If both operands are strings...
        if op1.orig_type == STRING and op2.orig_type == STRING:
            # ...then compare them lexicographically
            comp = _strcmp(op1.str_value, op2.str_value)
        else:
            # Otherwise, try to compare them as numbers
            try:
                comp = _sym_to_num(op1) - _sym_to_num(op2)
            except ValueError:
                # Fall back on a lexicographic comparison if the operands don't
                # parse as numbers
                comp = _strcmp(op1.str_value, op2.str_value)

        if   oper == EQUAL:         res = comp == 0
        elif oper == UNEQUAL:       res = comp != 0
        elif oper == LESS:          res = comp < 0
        elif oper == LESS_EQUAL:    res = comp <= 0
        elif oper == GREATER:       res = comp > 0
        elif oper == GREATER_EQUAL: res = comp >= 0

        return 2*res

    _internal_error("Internal error while evaluating expression: "
                    "unknown operation {}.".format(expr[0]))

def expr_str(expr):
    """
    Returns the string representation of the expression 'expr', as in a Kconfig
    file.

    Passing subexpressions of expressions to this function works as expected.
    """
    if isinstance(expr, Symbol):
        if expr.is_constant:
            return '"{}"'.format(escape(expr.name))
        return expr.name

    if isinstance(expr, Choice):
        if expr.name is not None:
            return "<choice {}>".format(expr.name)
        return "<choice>"

    if expr[0] == NOT:
        if isinstance(expr[1], tuple):
            return "!({})".format(expr_str(expr[1]))
        return "!" + expr_str(expr[1])  # Symbol

    if expr[0] == AND:
        return "{} && {}".format(_parenthesize(expr[1], OR),
                                 _parenthesize(expr[2], OR))

    if expr[0] == OR:
        # This turns A && B || C && D into "(A && B) || (C && D)", which is
        # redundant, but more readable
        return "{} || {}".format(_parenthesize(expr[1], AND),
                                 _parenthesize(expr[2], AND))

    # Relation
    return "{} {} {}".format(expr_str(expr[1]),
                             _REL_TO_STR[expr[0]],
                             expr_str(expr[2]))

def split_expr(expr, op):
    """
    Returns a list containing the top-level AND or OR operands in the
    expression 'expr', in the same (left-to-right) order as they appear in
    the expression.

    This can be handy e.g. for splitting (weak) reverse dependencies
    from 'select' and 'imply' into individual selects/implies.

    op:
      Either AND to get AND operands, or OR to get OR operands.

      (Having this as an operand might be more future-safe than having two
      hardcoded functions.)


    Pseudo-code examples:

      split_expr( A                    , OR  )  ->  [A]
      split_expr( A && B               , OR  )  ->  [A && B]
      split_expr( A || B               , OR  )  ->  [A, B]
      split_expr( A || B               , AND )  ->  [A || B]
      split_expr( A || B || (C && D)   , OR  )  ->  [A, B, C && D]

      # Second || is not at the top level
      split_expr( A || (B && (C || D)) , OR )  ->  [A, B && (C || D)]

      # Parentheses don't matter as long as we stay at the top level (don't
      # encounter any non-'op' nodes)
      split_expr( (A || B) || C        , OR )  ->  [A, B, C]
      split_expr( A || (B || C)        , OR )  ->  [A, B, C]
    """
    res = []

    def rec(subexpr):
        if isinstance(subexpr, tuple) and subexpr[0] == op:
            rec(subexpr[1])
            rec(subexpr[2])
        else:
            res.append(subexpr)

    rec(expr)
    return res

def escape(s):
    r"""
    Escapes the string 's' in the same fashion as is done for display in
    Kconfig format and when writing strings to a .config file. " and \ are
    replaced by \" and \\, respectively.
    """
    # \ must be escaped before " to avoid double escaping
    return s.replace("\\", r"\\").replace('"', r'\"')

# unescape() helper
_unescape_re_sub = re.compile(r"\\(.)").sub

def unescape(s):
    r"""
    Unescapes the string 's'. \ followed by any character is replaced with just
    that character. Used internally when reading .config files.
    """
    return _unescape_re_sub(r"\1", s)

#
# Internal functions
#

def _visibility(sc):
    # Symbols and Choices have a "visibility" that acts as an upper bound on
    # the values a user can set for them, corresponding to the visibility in
    # e.g. 'make menuconfig'. This function calculates the visibility for the
    # Symbol or Choice 'sc' -- the logic is nearly identical.

    vis = 0

    for node in sc.nodes:
        if node.prompt:
            vis = max(vis, expr_value(node.prompt[1]))

    if isinstance(sc, Symbol) and sc.choice:
        if sc.choice.orig_type == TRISTATE and sc.orig_type != TRISTATE and \
           sc.choice.tri_value != 2:
            # Non-tristate choice symbols are only visible in y mode
            return 0

        if sc.orig_type == TRISTATE and vis == 1 and sc.choice.tri_value == 2:
            # Choice symbols with m visibility are not visible in y mode
            return 0

    # Promote m to y if we're dealing with a non-tristate (possibly due to
    # modules being disabled)
    if vis == 1 and sc.type != TRISTATE:
        return 2

    return vis

def _make_depend_on(sym, expr):
    # Adds 'sym' as a dependency to all symbols in 'expr'. Constant symbols in
    # 'expr' are skipped as they can never change value anyway.

    if not isinstance(expr, tuple):
        if not expr.is_constant:
            expr._dependents.add(sym)

    elif expr[0] in (AND, OR):
        _make_depend_on(sym, expr[1])
        _make_depend_on(sym, expr[2])

    elif expr[0] == NOT:
        _make_depend_on(sym, expr[1])

    elif expr[0] in _RELATIONS:
        if not expr[1].is_constant:
            expr[1]._dependents.add(sym)
        if not expr[2].is_constant:
            expr[2]._dependents.add(sym)

    else:
        _internal_error("Internal error while fetching symbols from an "
                        "expression with token stream {}.".format(expr))

def _expand(s):
    # The predefined UNAME_RELEASE symbol is expanded in one of the 'default's
    # of the DEFCONFIG_LIST symbol in the Linux kernel. This function maintains
    # compatibility with it even though environment variables in strings are
    # now expanded directly.

    # platform.uname() has an internal cache, so this is speedy enough
    return os.path.expandvars(s.replace("$UNAME_RELEASE", platform.uname()[2]))

def _parenthesize(expr, type_):
    # expr_str() helper. Adds parentheses around expressions of type 'type_'.

    if isinstance(expr, tuple) and expr[0] == type_:
        return "({})".format(expr_str(expr))
    return expr_str(expr)

def _indentation(line):
    # Returns the length of the line's leading whitespace, treating tab stops
    # as being spaced 8 characters apart.

    line = line.expandtabs()
    return len(line) - len(line.lstrip())

def _is_base_n(s, n):
    try:
        int(s, n)
        return True
    except ValueError:
        return False

def _strcmp(s1, s2):
    # strcmp()-alike that returns -1, 0, or 1

    return (s1 > s2) - (s1 < s2)

def _sym_to_num(sym):
    # expr_value() helper for converting a symbol to a number. Raises
    # ValueError for symbols that can't be converted.

    # For BOOL and TRISTATE, n/m/y count as 0/1/2. This mirrors 9059a3493ef
    # ("kconfig: fix relational operators for bool and tristate symbols") in
    # the C implementation.
    return sym.tri_value if sym.orig_type in (BOOL, TRISTATE) else \
           int(sym.str_value, _TYPE_TO_BASE[sym.orig_type])

def _internal_error(msg):
    raise InternalError(
        msg +
        "\nSorry! You may want to send an email to ulfalizer a.t Google's "
        "email service to tell me about this. Include the message above and "
        "the stack trace and describe what you were doing.")

def _decoding_error(e, filename):
    # Gives the filename and context for UnicodeDecodeError's, which are a pain
    # to debug otherwise. 'e' is the UnicodeDecodeError object.

    raise KconfigSyntaxError(
        "\n"
        "Malformed {} in {}\n"
        "Context: {}\n"
        "Problematic data: {}\n"
        "Reason: {}".format(
            e.encoding, filename,
            e.object[max(e.start - 40, 0):e.end + 40],
            e.object[e.start:e.end],
            e.reason))

def _name_and_loc(sc):
    # Helper for giving the symbol/choice name and location(s) in e.g. warnings

    name = sc.name or "<choice>"

    if not sc.nodes:
        return name + " (undefined)"

    return "{} (defined at {})".format(
        name,
        ", ".join("{}:{}".format(node.filename, node.linenr)
                  for node in sc.nodes))


# Menu manipulation

def _expr_depends_on(expr, sym):
    # Reimplementation of expr_depends_symbol() from mconf.c. Used to determine
    # if a submenu should be implicitly created. This also influences which
    # items inside choice statements are considered choice items.

    if not isinstance(expr, tuple):
        return expr is sym

    if expr[0] in (EQUAL, UNEQUAL):
        # Check for one of the following:
        # sym = m/y, m/y = sym, sym != n, n != sym

        left, right = expr[1:]

        if right is sym:
            left, right = right, left
        elif left is not sym:
            return False

        return (expr[0] == EQUAL and right is sym.kconfig.m or \
                                     right is sym.kconfig.y) or \
               (expr[0] == UNEQUAL and right is sym.kconfig.n)

    return expr[0] == AND and \
           (_expr_depends_on(expr[1], sym) or
            _expr_depends_on(expr[2], sym))

def _auto_menu_dep(node1, node2):
    # Returns True if node2 has an "automatic menu dependency" on node1. If
    # node2 has a prompt, we check its condition. Otherwise, we look directly
    # at node2.dep.

    # If node2 has no prompt, use its menu node dependencies instead
    return _expr_depends_on(node2.prompt[1] if node2.prompt else node2.dep,
                            node1.item)

def _flatten(node):
    # "Flattens" menu nodes without prompts (e.g. 'if' nodes and non-visible
    # symbols with children from automatic menu creation) so that their
    # children appear after them instead. This gives a clean menu structure
    # with no unexpected "jumps" in the indentation.

    while node:
        if node.list and not node.prompt:
            last_node = node.list
            while 1:
                last_node.parent = node.parent
                if not last_node.next:
                    break
                last_node = last_node.next

            last_node.next = node.next
            node.next = node.list
            node.list = None

        node = node.next

def _remove_ifs(node):
    # Removes 'if' nodes (which can be recognized by MenuNode.item being None),
    # which are assumed to already have been flattened. The C implementation
    # doesn't bother to do this, but we expose the menu tree directly, and it
    # makes it nicer to work with.

    first = node.list
    while first and first.item is None:
        first = first.next

    cur = first
    while cur:
        if cur.next and cur.next.item is None:
            cur.next = cur.next.next
        cur = cur.next

    node.list = first

def _finalize_choice(node):
    # Finalizes a choice, marking each symbol whose menu node has the choice as
    # the parent as a choice symbol, and automatically determining types if not
    # specified.

    choice = node.item

    cur = node.list
    while cur:
        if isinstance(cur.item, Symbol):
            cur.item.choice = choice
            choice.syms.append(cur.item)
        cur = cur.next

    # If no type is specified for the choice, its type is that of
    # the first choice item with a specified type
    if choice.orig_type == UNKNOWN:
        for item in choice.syms:
            if item.orig_type != UNKNOWN:
                choice.orig_type = item.orig_type
                break

    # Each choice item of UNKNOWN type gets the type of the choice
    for sym in choice.syms:
        if sym.orig_type == UNKNOWN:
            sym.orig_type = choice.orig_type

def _check_sym_sanity(sym):
    # Checks various symbol properties that are handiest to check after
    # parsing. Only generates errors and warnings.

    if sym.orig_type in (BOOL, TRISTATE):
        # A helper function could be factored out here, but keep it
        # speedy/straightforward for now. bool/tristate symbols are by far the
        # most common, and most lack selects and implies.

        for target_sym, _ in sym.selects:
            if target_sym.orig_type not in (BOOL, TRISTATE, UNKNOWN):
                sym.kconfig._warn("{} selects the {} symbol {}, which is not "
                                  "bool or tristate"
                                  .format(_name_and_loc(sym),
                                          TYPE_TO_STR[target_sym.orig_type],
                                          _name_and_loc(target_sym)))

        for target_sym, _ in sym.implies:
            if target_sym.orig_type not in (BOOL, TRISTATE, UNKNOWN):
                sym.kconfig._warn("{} implies the {} symbol {}, which is not "
                                  "bool or tristate"
                                  .format(_name_and_loc(sym),
                                          TYPE_TO_STR[target_sym.orig_type],
                                          _name_and_loc(target_sym)))

    elif sym.orig_type in (STRING, INT, HEX):
        for default, _ in sym.defaults:
            if not isinstance(default, Symbol):
                raise KconfigSyntaxError(
                    "the {} symbol {} has a malformed default {} -- expected "
                    "a single symbol"
                    .format(TYPE_TO_STR[sym.orig_type], _name_and_loc(sym),
                            expr_str(default)))

            if sym.orig_type == STRING:
                if not default.is_constant and not default.nodes and \
                   default.name != default.name.upper():
                    # 'default foo' on a string symbol could be either a symbol
                    # reference or someone leaving out the quotes. Guess that
                    # the quotes were left out if 'foo' isn't all-uppercase
                    # (and no symbol named 'foo' exists).
                    sym.kconfig._warn("style: quotes recommended around "
                                      "default value for string symbol "
                                      + _name_and_loc(sym))

            elif sym.orig_type in (INT, HEX) and \
               not _int_hex_ok(default, sym.orig_type):

                sym.kconfig._warn("the {0} symbol {1} has a non-{0} default {2}"
                                  .format(TYPE_TO_STR[sym.orig_type],
                                          _name_and_loc(sym),
                                          _name_and_loc(default)))

        if sym.selects or sym.implies:
            sym.kconfig._warn("the {} symbol {} has selects or implies"
                              .format(TYPE_TO_STR[sym.orig_type],
                                      _name_and_loc(sym)))

    else:  # UNKNOWN
        sym.kconfig._warn("{} defined without a type"
                          .format(_name_and_loc(sym)))


    if sym.ranges:
        if sym.orig_type not in (INT, HEX):
            sym.kconfig._warn(
                "the {} symbol {} has ranges, but is not int or hex"
                .format(TYPE_TO_STR[sym.orig_type], _name_and_loc(sym)))
        else:
            for low, high, _ in sym.ranges:
                if not _int_hex_ok(low, sym.orig_type) or \
                   not _int_hex_ok(high, sym.orig_type):

                   sym.kconfig._warn("the {0} symbol {1} has a non-{0} range "
                                     "[{2}, {3}]"
                                     .format(TYPE_TO_STR[sym.orig_type],
                                             _name_and_loc(sym),
                                             _name_and_loc(low),
                                             _name_and_loc(high)))


def _int_hex_ok(sym, type_):
    # Returns True if the (possibly constant) symbol 'sym' is valid as a value
    # for a symbol of type type_ (INT or HEX)

    # 'not sym.nodes' implies a constant or undefined symbol, e.g. a plain
    # "123"
    if not sym.nodes:
        return _is_base_n(sym.name, _TYPE_TO_BASE[type_])

    return sym.orig_type == type_

def _check_choice_sanity(choice):
    # Checks various choice properties that are handiest to check after
    # parsing. Only generates errors and warnings.

    if choice.orig_type not in (BOOL, TRISTATE):
        choice.kconfig._warn("{} defined with type {}"
                             .format(_name_and_loc(choice),
                                     TYPE_TO_STR[choice.orig_type]))

    for node in choice.nodes:
        if node.prompt:
            break
    else:
        choice.kconfig._warn("{} defined without a prompt"
                             .format(_name_and_loc(choice)))

    for default, _ in choice.defaults:
        if not isinstance(default, Symbol):
            raise KconfigSyntaxError(
                "{} has a malformed default {}"
                .format(_name_and_loc(choice), expr_str(default)))

        if default.choice is not choice:
            choice.kconfig._warn("the default selection {} of {} is not "
                                 "contained in the choice"
                                 .format(_name_and_loc(default),
                                         _name_and_loc(choice)))

    for sym in choice.syms:
        if sym.defaults:
            sym.kconfig._warn("default on the choice symbol {} will have "
                              "no effect".format(_name_and_loc(sym)))

        if sym.rev_dep is not sym.kconfig.n:
            _warn_choice_select_imply(sym, sym.rev_dep, "selected")

        if sym.weak_rev_dep is not sym.kconfig.n:
            _warn_choice_select_imply(sym, sym.weak_rev_dep, "implied")

        for node in sym.nodes:
            if node.parent.item is choice:
                if not node.prompt:
                    sym.kconfig._warn("the choice symbol {} has no prompt"
                                      .format(_name_and_loc(sym)))

            elif node.prompt:
                sym.kconfig._warn("the choice symbol {} is defined with a "
                                  "prompt outside the choice"
                                  .format(_name_and_loc(sym)))

def _warn_choice_select_imply(sym, expr, expr_type):
    msg = "the choice symbol {} is {} by the following symbols, which has " \
          "no effect: ".format(_name_and_loc(sym), expr_type)

    # si = select/imply
    for si in split_expr(expr, OR):
        msg += "\n - " + _name_and_loc(split_expr(si, AND)[0])

    sym.kconfig._warn(msg)

#
# Public global constants
#

# Integers representing symbol types
(
    BOOL,
    HEX,
    INT,
    STRING,
    TRISTATE,
    UNKNOWN
) = range(6)

# Integers representing menu and comment menu nodes
(
    MENU,
    COMMENT,
) = range(2)

# Converts a symbol/choice type to a string
TYPE_TO_STR = {
    UNKNOWN:  "unknown",
    BOOL:     "bool",
    TRISTATE: "tristate",
    STRING:   "string",
    HEX:      "hex",
    INT:      "int",
}

TRI_TO_STR = {
    0: "n",
    1: "m",
    2: "y",
}

STR_TO_TRI = {
    "n": 0,
    "m": 1,
    "y": 2,
}

#
# Internal global constants (plus public expression type
# constants)
#

# Are we running on Python 2?
_IS_PY2 = sys.version_info[0] < 3

# Tokens
(
    _T_ALLNOCONFIG_Y,
    _T_AND,
    _T_BOOL,
    _T_CHOICE,
    _T_CLOSE_PAREN,
    _T_COMMENT,
    _T_CONFIG,
    _T_DEFAULT,
    _T_DEFCONFIG_LIST,
    _T_DEF_BOOL,
    _T_DEF_TRISTATE,
    _T_DEPENDS,
    _T_ENDCHOICE,
    _T_ENDIF,
    _T_ENDMENU,
    _T_ENV,
    _T_EQUAL,
    _T_GREATER,
    _T_GREATER_EQUAL,
    _T_GRSOURCE,
    _T_GSOURCE,
    _T_HELP,
    _T_HEX,
    _T_IF,
    _T_IMPLY,
    _T_INT,
    _T_LESS,
    _T_LESS_EQUAL,
    _T_MAINMENU,
    _T_MENU,
    _T_MENUCONFIG,
    _T_MODULES,
    _T_NOT,
    _T_ON,
    _T_OPEN_PAREN,
    _T_OPTION,
    _T_OPTIONAL,
    _T_OR,
    _T_PROMPT,
    _T_RANGE,
    _T_RSOURCE,
    _T_SELECT,
    _T_SOURCE,
    _T_STRING,
    _T_TRISTATE,
    _T_UNEQUAL,
    _T_VISIBLE,
) = range(47)

# Public integers representing expression types
#
# Having these match the value of the corresponding tokens removes the need
# for conversion
AND           = _T_AND
OR            = _T_OR
NOT           = _T_NOT
EQUAL         = _T_EQUAL
UNEQUAL       = _T_UNEQUAL
LESS          = _T_LESS
LESS_EQUAL    = _T_LESS_EQUAL
GREATER       = _T_GREATER
GREATER_EQUAL = _T_GREATER_EQUAL

# Keyword to token map, with the get() method assigned directly as a small
# optimization
_get_keyword = {
    "allnoconfig_y":  _T_ALLNOCONFIG_Y,
    "bool":           _T_BOOL,
    "boolean":        _T_BOOL,
    "choice":         _T_CHOICE,
    "comment":        _T_COMMENT,
    "config":         _T_CONFIG,
    "def_bool":       _T_DEF_BOOL,
    "def_tristate":   _T_DEF_TRISTATE,
    "default":        _T_DEFAULT,
    "defconfig_list": _T_DEFCONFIG_LIST,
    "depends":        _T_DEPENDS,
    "endchoice":      _T_ENDCHOICE,
    "endif":          _T_ENDIF,
    "endmenu":        _T_ENDMENU,
    "env":            _T_ENV,
    "grsource":       _T_GRSOURCE,
    "gsource":        _T_GSOURCE,
    "help":           _T_HELP,
    "hex":            _T_HEX,
    "if":             _T_IF,
    "imply":          _T_IMPLY,
    "int":            _T_INT,
    "mainmenu":       _T_MAINMENU,
    "menu":           _T_MENU,
    "menuconfig":     _T_MENUCONFIG,
    "modules":        _T_MODULES,
    "on":             _T_ON,
    "option":         _T_OPTION,
    "optional":       _T_OPTIONAL,
    "prompt":         _T_PROMPT,
    "range":          _T_RANGE,
    "rsource":        _T_RSOURCE,
    "select":         _T_SELECT,
    "source":         _T_SOURCE,
    "string":         _T_STRING,
    "tristate":       _T_TRISTATE,
    "visible":        _T_VISIBLE,
}.get

# Tokens after which strings are expected. This is used to tell strings from
# constant symbol references during tokenization, both of which are enclosed in
# quotes.
#
# Identifier-like lexemes ("missing quotes") are also treated as strings after
# these tokens. _T_CHOICE is included to avoid symbols being registered for
# named choices.
_STRING_LEX = frozenset((
    _T_BOOL,
    _T_CHOICE,
    _T_COMMENT,
    _T_GRSOURCE,
    _T_GSOURCE,
    _T_HEX,
    _T_INT,
    _T_MAINMENU,
    _T_MENU,
    _T_PROMPT,
    _T_RSOURCE,
    _T_SOURCE,
    _T_STRING,
    _T_TRISTATE,
))

# Tokens for types, excluding def_bool, def_tristate, etc., for quick
# checks during parsing
_TYPE_TOKENS = frozenset((
    _T_BOOL,
    _T_TRISTATE,
    _T_INT,
    _T_HEX,
    _T_STRING,
))

# Use ASCII regex matching on Python 3. It's already the default on Python 2.
_RE_ASCII = 0 if _IS_PY2 else re.ASCII

# Note: This hack is no longer needed as of upstream commit c226456
# (kconfig: warn of unhandled characters in Kconfig commands). It
# is kept around for backwards compatibility.
#
# The initial word on a line is parsed specially. Let
# command_chars = [A-Za-z0-9_]. Then
#  - leading non-command_chars characters are ignored, and
#  - the first token consists the following one or more
#    command_chars characters.
# This is why things like "----help--" are accepted.
#
# In addition to the initial token, the regex also matches trailing whitespace
# so that we can jump straight to the next token (or to the end of the line if
# there's just a single token).
#
# As an optimization, this regex fails to match for lines containing just a
# comment.
_initial_token_re_match = \
    re.compile(r"[^A-Za-z0-9_#]*([A-Za-z0-9_]+)\s*", _RE_ASCII).match

# Matches an identifier/keyword, also eating trailing whitespace
_id_keyword_re_match = re.compile(r"([A-Za-z0-9_/.-]+)\s*", _RE_ASCII).match

# Matches a valid right-hand side for an assignment to a string symbol in a
# .config file, including escaped characters. Extracts the contents.
_conf_string_re_match = re.compile(r'"((?:[^\\"]|\\.)*)"', _RE_ASCII).match

# Token to type mapping
_TOKEN_TO_TYPE = {
    _T_BOOL:         BOOL,
    _T_DEF_BOOL:     BOOL,
    _T_DEF_TRISTATE: TRISTATE,
    _T_HEX:          HEX,
    _T_INT:          INT,
    _T_STRING:       STRING,
    _T_TRISTATE:     TRISTATE,
}

# Constant representing that there's no cached choice selection. This is
# distinct from a cached None (no selection). We create a unique object (any
# will do) for it so we can test with 'is'.
_NO_CACHED_SELECTION = object()

# Used in comparisons. 0 means the base is inferred from the format of the
# string.
_TYPE_TO_BASE = {
    HEX:      16,
    INT:      10,
    STRING:   0,
    UNKNOWN:  0,
}

# Note: These constants deliberately equal the corresponding tokens (_T_EQUAL,
# _T_UNEQUAL, etc.), which removes the need for conversion
_RELATIONS = frozenset((
    EQUAL,
    UNEQUAL,
    LESS,
    LESS_EQUAL,
    GREATER,
    GREATER_EQUAL,
))

_REL_TO_STR = {
    EQUAL:         "=",
    UNEQUAL:       "!=",
    LESS:          "<",
    LESS_EQUAL:    "<=",
    GREATER:       ">",
    GREATER_EQUAL: ">=",
}

# Enable universal newlines mode on Python 2 to ease interoperability between
# Linux and Windows. It's already the default on Python 3.
#
# The "U" flag would currently work for both Python 2 and 3, but it's
# deprecated on Python 3, so play it future-safe.
#
# A simpler solution would be to use io.open(), which defaults to universal
# newlines on both Python 2 and 3 (and is an alias for open() on Python 3), but
# it's appreciably slower on Python 2:
#
#   Parsing x86 Kconfigs on Python 2
#
#   with open(..., "rU"):
#
#     real  0m0.930s
#     user  0m0.905s
#     sys   0m0.025s
#
#   with io.open():
#
#     real  0m1.069s
#     user  0m1.040s
#     sys   0m0.029s
#
# There's no appreciable performance difference between "r" and "rU" for
# parsing performance on Python 2.
_UNIVERSAL_NEWLINES_MODE = "rU" if _IS_PY2 else "r"
