DECL|check_top|variable|check_top
DECL|dep_stack_insert|function|static void dep_stack_insert(struct dep_stack *stack, struct symbol *sym)
DECL|dep_stack_remove|function|static void dep_stack_remove(void)
DECL|dep_stack|struct|static struct dep_stack {
DECL|eo|member|off_t so, eo;
DECL|expr|member|struct expr *expr;
DECL|modules_sym|variable|modules_sym
DECL|modules_val|variable|modules_val
DECL|next|member|struct dep_stack *prev, *next;
DECL|prev|member|struct dep_stack *prev, *next;
DECL|prop_add_env|function|static void prop_add_env(const char *env)
DECL|prop_alloc|function|struct property *prop_alloc(enum prop_type type, struct symbol *sym)
DECL|prop_get_symbol|function|struct symbol *prop_get_symbol(struct property *prop)
DECL|prop_get_type_name|function|const char *prop_get_type_name(enum prop_type type)
DECL|prop|member|struct property *prop;
DECL|so|member|off_t so, eo;
DECL|strhash|function|static unsigned strhash(const char *s)
DECL|sym_add_default|function|static void sym_add_default(struct symbol *sym, const char *def)
DECL|sym_calc_choice|function|static struct symbol *sym_calc_choice(struct symbol *sym)
DECL|sym_calc_value|function|void sym_calc_value(struct symbol *sym)
DECL|sym_calc_visibility|function|static void sym_calc_visibility(struct symbol *sym)
DECL|sym_check_choice_deps|function|static struct symbol *sym_check_choice_deps(struct symbol *choice)
DECL|sym_check_deps|function|struct symbol *sym_check_deps(struct symbol *sym)
DECL|sym_check_expr_deps|function|static struct symbol *sym_check_expr_deps(struct expr *e)
DECL|sym_check_print_recursive|function|static void sym_check_print_recursive(struct symbol *last_sym)
DECL|sym_check_sym_deps|function|static struct symbol *sym_check_sym_deps(struct symbol *sym)
DECL|sym_choice_default|function|struct symbol *sym_choice_default(struct symbol *sym)
DECL|sym_clear_all_valid|function|void sym_clear_all_valid(void)
DECL|sym_defconfig_list|variable|sym_defconfig_list
DECL|sym_env_list|variable|sym_env_list
DECL|sym_escape_string_value|function|const char *sym_escape_string_value(const char *in)
DECL|sym_expand_string_value|function|const char *sym_expand_string_value(const char *in)
DECL|sym_find|function|struct symbol *sym_find(const char *name)
DECL|sym_get_choice_prop|function|struct property *sym_get_choice_prop(struct symbol *sym)
DECL|sym_get_default_prop|function|struct property *sym_get_default_prop(struct symbol *sym)
DECL|sym_get_env_prop|function|struct property *sym_get_env_prop(struct symbol *sym)
DECL|sym_get_range_prop|function|static struct property *sym_get_range_prop(struct symbol *sym)
DECL|sym_get_range_val|function|static long long sym_get_range_val(struct symbol *sym, int base)
DECL|sym_get_string_default|function|const char *sym_get_string_default(struct symbol *sym)
DECL|sym_get_string_value|function|const char *sym_get_string_value(struct symbol *sym)
DECL|sym_get_type|function|enum symbol_type sym_get_type(struct symbol *sym)
DECL|sym_init|function|void sym_init(void)
DECL|sym_is_changable|function|bool sym_is_changable(struct symbol *sym)
DECL|sym_lookup|function|struct symbol *sym_lookup(const char *name, int flags)
DECL|sym_match|struct|struct sym_match {
DECL|sym_re_search|function|struct symbol **sym_re_search(const char *pattern)
DECL|sym_rel_comp|function|static int sym_rel_comp(const void *sym1, const void *sym2)
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
DECL|sym|member|struct symbol *sym;
DECL|sym|member|struct symbol *sym;
