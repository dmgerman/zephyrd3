DECL|LINE_GROWTH|macro|LINE_GROWTH
DECL|add_byte|function|static int add_byte(int c, char **lineptr, size_t slen, size_t *n)
DECL|compat_getline|function|static ssize_t compat_getline(char **lineptr, size_t *n, FILE *stream)
DECL|conf_changed_callback|variable|conf_changed_callback
DECL|conf_default_message_callback|function|static void conf_default_message_callback(const char *fmt, va_list ap)
DECL|conf_defname|variable|conf_defname
DECL|conf_expand_value|function|static char *conf_expand_value(const char *in)
DECL|conf_filename|variable|conf_filename
DECL|conf_get_autoconfig_name|function|const char *conf_get_autoconfig_name(void)
DECL|conf_get_changed|function|bool conf_get_changed(void)
DECL|conf_get_configname|function|const char *conf_get_configname(void)
DECL|conf_get_default_confname|function|char *conf_get_default_confname(void)
DECL|conf_lineno|variable|conf_lineno
DECL|conf_message_callback|variable|conf_message_callback
DECL|conf_message|function|static void conf_message(const char *fmt, ...)
DECL|conf_read_simple|function|int conf_read_simple(const char *name, int def)
DECL|conf_read|function|int conf_read(const char *name)
DECL|conf_set_all_new_symbols|function|bool conf_set_all_new_symbols(enum conf_def_mode mode)
DECL|conf_set_changed_callback|function|void conf_set_changed_callback(void (*fn)(void))
DECL|conf_set_message_callback|function|void conf_set_message_callback(void (*fn) (const char *fmt, va_list ap))
DECL|conf_set_sym_val|function|static int conf_set_sym_val(struct symbol *sym, int def, int def_flags, char *p)
DECL|conf_split_config|function|static int conf_split_config(void)
DECL|conf_unsaved|variable|conf_unsaved
DECL|conf_warnings|variable|conf_warnings
DECL|conf_warning|function|static void conf_warning(const char *fmt, ...)
DECL|conf_write_autoconf|function|int conf_write_autoconf(void)
DECL|conf_write_defconfig|function|int conf_write_defconfig(const char *filename)
DECL|conf_write_heading|function|conf_write_heading(FILE *fp, struct conf_printer *printer, void *printer_arg)
DECL|conf_write_symbol|function|static void conf_write_symbol(FILE *fp, struct symbol *sym, struct conf_printer *printer, void *printer_arg)
DECL|conf_write|function|int conf_write(const char *name)
DECL|header_print_comment|function|header_print_comment(FILE *fp, const char *value, void *arg)
DECL|header_print_symbol|function|header_print_symbol(FILE *fp, struct symbol *sym, const char *value, void *arg)
DECL|header_printer_cb|variable|header_printer_cb
DECL|kconfig_print_comment|function|kconfig_print_comment(FILE *fp, const char *value, void *arg)
DECL|kconfig_print_symbol|function|kconfig_print_symbol(FILE *fp, struct symbol *sym, const char *value, void *arg)
DECL|kconfig_printer_cb|variable|kconfig_printer_cb
DECL|randomize_choice_values|function|static bool randomize_choice_values(struct symbol *csym)
DECL|set_all_choice_values|function|void set_all_choice_values(struct symbol *csym)
DECL|sym_add_change_count|function|void sym_add_change_count(int count)
DECL|sym_change_count|variable|sym_change_count
DECL|sym_set_change_count|function|void sym_set_change_count(int count)
DECL|tristate_print_symbol|function|tristate_print_symbol(FILE *fp, struct symbol *sym, const char *value, void *arg)
DECL|tristate_printer_cb|variable|tristate_printer_cb
