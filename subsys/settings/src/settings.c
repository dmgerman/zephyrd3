DECL|BASE64_ENCODE_SIZE|macro|BASE64_ENCODE_SIZE
DECL|dec_to_s64|function|static s64_t dec_to_s64(char *p_str, char **e_ptr)
DECL|s64_to_dec|function|static void s64_to_dec(char *ptr, int buf_len, s64_t value, int base)
DECL|settings_bytes_from_str|function|int settings_bytes_from_str(char *val_str, void *vp, int *len)
DECL|settings_cmd_inited|variable|settings_cmd_inited
DECL|settings_commit|function|int settings_commit(char *name)
DECL|settings_get_value|function|char *settings_get_value(char *name, char *buf, int buf_len)
DECL|settings_handler_lookup|function|struct settings_handler *settings_handler_lookup(char *name)
DECL|settings_handlers|variable|settings_handlers
DECL|settings_init|function|void settings_init(void)
DECL|settings_parse_and_lookup|function|static struct settings_handler *settings_parse_and_lookup(char *name, int *name_argc, char *name_argv[])
DECL|settings_parse_name|function|int settings_parse_name(char *name, int *name_argc, char *name_argv[])
DECL|settings_register|function|int settings_register(struct settings_handler *handler)
DECL|settings_set_value|function|int settings_set_value(char *name, char *val_str)
DECL|settings_str_from_bytes|function|char *settings_str_from_bytes(void *vp, int vp_len, char *buf, int buf_len)
DECL|settings_str_from_value|function|char *settings_str_from_value(enum settings_type type, void *vp, char *buf, int buf_len)
DECL|settings_value_from_str|function|int settings_value_from_str(char *val_str, enum settings_type type, void *vp, int maxlen)
DECL|u64_to_dec|function|static void u64_to_dec(char *ptr, int buf_len, u64_t value, int base)
