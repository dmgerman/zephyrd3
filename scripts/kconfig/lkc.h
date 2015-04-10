DECL|CONFIG_prefix|function|static inline const char *CONFIG_prefix(void)
DECL|CONFIG_|macro|CONFIG_
DECL|CONFIG_|macro|CONFIG_
DECL|CONFIG_|macro|CONFIG_
DECL|LKC_H|macro|LKC_H
DECL|LOCALEDIR|macro|LOCALEDIR
DECL|N_|macro|N_
DECL|PACKAGE|macro|PACKAGE
DECL|P|macro|P
DECL|P|macro|P
DECL|SRCTREE|macro|SRCTREE
DECL|TF_COMMAND|macro|TF_COMMAND
DECL|TF_OPTION|macro|TF_OPTION
DECL|TF_PARAM|macro|TF_PARAM
DECL|T_OPT_ALLNOCONFIG_Y|macro|T_OPT_ALLNOCONFIG_Y
DECL|T_OPT_DEFCONFIG_LIST|macro|T_OPT_DEFCONFIG_LIST
DECL|T_OPT_ENV|macro|T_OPT_ENV
DECL|T_OPT_MODULES|macro|T_OPT_MODULES
DECL|_|macro|_
DECL|bind_textdomain_codeset|function|static inline char *bind_textdomain_codeset(const char *dn, char *c) { return c; }
DECL|bindtextdomain|function|static inline void bindtextdomain(const char *name, const char *dir) {}
DECL|conf_def_mode|enum|enum conf_def_mode {
DECL|conf_printer|struct|struct conf_printer {
DECL|def_default|enumerator|def_default,
DECL|def_mod|enumerator|def_mod,
DECL|def_no|enumerator|def_no,
DECL|def_random|enumerator|def_random
DECL|def_yes|enumerator|def_yes,
DECL|flags|member|unsigned int flags;
DECL|gettext|function|static inline const char *gettext(const char *txt) { return txt; }
DECL|gstr|struct|struct gstr {
DECL|kconf_id|struct|struct kconf_id {
DECL|len|member|size_t len;
DECL|max_width|member|int max_width;
DECL|name|member|int name;
DECL|print_comment|member|void (*print_comment)(FILE *, const char *, void *);
DECL|print_symbol|member|void (*print_symbol)(FILE *, struct symbol *, const char *, void *);
DECL|stype|member|enum symbol_type stype;
DECL|sym_get_choice_value|function|static inline struct symbol *sym_get_choice_value(struct symbol *sym)
DECL|sym_get_tristate_value|function|static inline tristate sym_get_tristate_value(struct symbol *sym)
DECL|sym_has_value|function|static inline bool sym_has_value(struct symbol *sym)
DECL|sym_is_choice_value|function|static inline bool sym_is_choice_value(struct symbol *sym)
DECL|sym_is_choice|function|static inline bool sym_is_choice(struct symbol *sym)
DECL|sym_is_optional|function|static inline bool sym_is_optional(struct symbol *sym)
DECL|sym_set_choice_value|function|static inline bool sym_set_choice_value(struct symbol *ch, struct symbol *chval)
DECL|s|member|char *s;
DECL|textdomain|function|static inline void textdomain(const char *domainname) {}
DECL|token|member|int token;
DECL|xfwrite|function|static inline void xfwrite(const void *str, size_t len, size_t count, FILE *out)
