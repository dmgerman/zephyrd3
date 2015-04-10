DECL|LKC_DIRECT_LINK|macro|LKC_DIRECT_LINK
DECL|modules_sym|variable|modules_sym
DECL|modules_val|variable|modules_val
DECL|prop_alloc|function|struct property *prop_alloc(enum prop_type type, struct symbol *sym)
DECL|prop_get_symbol|function|struct symbol *prop_get_symbol(struct property *prop)
DECL|prop_get_type_name|function|const char *prop_get_type_name(enum prop_type type)
DECL|sym_add_default|function|void sym_add_default(struct symbol *sym, const char *def)
DECL|sym_calc_choice|function|static struct symbol *sym_calc_choice(struct symbol *sym)
DECL|sym_calc_value|function|void sym_calc_value(struct symbol *sym)
DECL|sym_calc_visibility|function|static void sym_calc_visibility(struct symbol *sym)
DECL|sym_check_deps|function|struct symbol *sym_check_deps(struct symbol *sym)
DECL|sym_check_expr_deps|function|static struct symbol *sym_check_expr_deps(struct expr *e)
DECL|sym_clear_all_valid|function|void sym_clear_all_valid(void)
DECL|sym_defconfig_list|variable|sym_defconfig_list
DECL|sym_find|function|struct symbol *sym_find(const char *name)
DECL|sym_get_choice_prop|function|struct property *sym_get_choice_prop(struct symbol *sym)
DECL|sym_get_default_prop|function|struct property *sym_get_default_prop(struct symbol *sym)
DECL|sym_get_range_prop|function|struct property *sym_get_range_prop(struct symbol *sym)
DECL|sym_get_range_val|function|static int sym_get_range_val(struct symbol *sym, int base)
DECL|sym_get_string_value|function|const char *sym_get_string_value(struct symbol *sym)
DECL|sym_get_type|function|enum symbol_type sym_get_type(struct symbol *sym)
DECL|sym_init|function|void sym_init(void)
DECL|sym_is_changable|function|bool sym_is_changable(struct symbol *sym)
DECL|sym_lookup|function|struct symbol *sym_lookup(const char *name, int isconst)
DECL|sym_re_search|function|struct symbol **sym_re_search(const char *pattern)
DECL|sym_set_all_changed|function|void sym_set_all_changed(void)
DECL|sym_set_changed|function|void sym_set_changed(struct symbol *sym)
DECL|sym_set_string_value|function|bool sym_set_string_value(struct symbol *sym, const char *newval)
DECL|sym_set_tristate_value|function|bool sym_set_tristate_value(struct symbol *sym, tristate val)
DECL|sym_string_valid|function|bool sym_string_valid(struct symbol *sym, const char *str)
DECL|sym_string_within_range|function|bool sym_string_within_range(struct symbol *sym, const char *str)
DECL|sym_toggle_tristate_value|function|tristate sym_toggle_tristate_value(struct symbol *sym)
DECL|sym_tristate_within_range|function|bool sym_tristate_within_range(struct symbol *sym, tristate val)
DECL|sym_type_name|function|const char *sym_type_name(enum symbol_type type)
DECL|sym_validate_range|function|static void sym_validate_range(struct symbol *sym)
DECL|symbol_empty|variable|symbol_empty
DECL|symbol_mod|variable|symbol_mod
DECL|symbol_no|variable|symbol_no
DECL|symbol_yes|variable|symbol_yes
