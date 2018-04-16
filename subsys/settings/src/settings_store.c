DECL|is_dup|member|int is_dup;
DECL|name|member|const char *name;
DECL|settings_dst_register|function|void settings_dst_register(struct settings_store *cs)
DECL|settings_dup_check_arg|struct|struct settings_dup_check_arg {
DECL|settings_dup_check_cb|function|static void settings_dup_check_cb(char *name, char *val, void *cb_arg)
DECL|settings_load_cb|function|static void settings_load_cb(char *name, char *val, void *cb_arg)
DECL|settings_load_srcs|variable|settings_load_srcs
DECL|settings_load|function|int settings_load(void)
DECL|settings_save_dst|variable|settings_save_dst
DECL|settings_save_one|function|int settings_save_one(const char *name, char *value)
DECL|settings_save|function|int settings_save(void)
DECL|settings_src_register|function|void settings_src_register(struct settings_store *cs)
DECL|settings_store_init|function|void settings_store_init(void)
DECL|val|member|const char *val;
