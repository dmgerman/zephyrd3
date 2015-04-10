DECL|LKC_DIRECT_LINK|macro|LKC_DIRECT_LINK
DECL|current_file|variable|current_file
DECL|file_list|variable|file_list
DECL|last_entry_ptr|variable|last_entry_ptr
DECL|menu_add_dep|function|void menu_add_dep(struct expr *dep)
DECL|menu_add_entry|function|void menu_add_entry(struct symbol *sym)
DECL|menu_add_expr|function|void menu_add_expr(enum prop_type type, struct expr *expr, struct expr *dep)
DECL|menu_add_menu|function|struct menu *menu_add_menu(void)
DECL|menu_add_option|function|void menu_add_option(int token, char *arg)
DECL|menu_add_prompt|function|struct property *menu_add_prompt(enum prop_type type, char *prompt, struct expr *dep)
DECL|menu_add_prop|function|struct property *menu_add_prop(enum prop_type type, char *prompt, struct expr *expr, struct expr *dep)
DECL|menu_add_symbol|function|void menu_add_symbol(enum prop_type type, struct symbol *sym, struct expr *dep)
DECL|menu_check_dep|function|struct expr *menu_check_dep(struct expr *e)
DECL|menu_end_entry|function|void menu_end_entry(void)
DECL|menu_end_menu|function|void menu_end_menu(void)
DECL|menu_finalize|function|void menu_finalize(struct menu *parent)
DECL|menu_get_help|function|const char *menu_get_help(struct menu *menu)
DECL|menu_get_parent_menu|function|struct menu *menu_get_parent_menu(struct menu *menu)
DECL|menu_get_prompt|function|const char *menu_get_prompt(struct menu *menu)
DECL|menu_get_root_menu|function|struct menu *menu_get_root_menu(struct menu *menu)
DECL|menu_has_help|function|bool menu_has_help(struct menu *menu)
DECL|menu_init|function|void menu_init(void)
DECL|menu_is_visible|function|bool menu_is_visible(struct menu *menu)
DECL|menu_range_valid_sym|function|static int menu_range_valid_sym(struct symbol *sym, struct symbol *sym2)
DECL|menu_set_type|function|void menu_set_type(int type)
DECL|menu_warn|function|static void menu_warn(struct menu *menu, const char *fmt, ...)
DECL|prop_warn|function|static void prop_warn(struct property *prop, const char *fmt, ...)
DECL|rootmenu|variable|rootmenu
DECL|sym_check_prop|function|void sym_check_prop(struct symbol *sym)
