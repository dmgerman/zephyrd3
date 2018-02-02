DECL|SETTINGS_FCB_VERS|macro|SETTINGS_FCB_VERS
DECL|cb_arg|member|void *cb_arg;
DECL|cb|member|load_cb cb;
DECL|settings_fcb_append|function|static int settings_fcb_append(struct settings_fcb *cf, char *buf, int len)
DECL|settings_fcb_compress|function|static void settings_fcb_compress(struct settings_fcb *cf)
DECL|settings_fcb_dst|function|int settings_fcb_dst(struct settings_fcb *cf)
DECL|settings_fcb_itf|variable|settings_fcb_itf
DECL|settings_fcb_load_cb_arg|struct|struct settings_fcb_load_cb_arg {
DECL|settings_fcb_load_cb|function|static int settings_fcb_load_cb(struct fcb_entry_ctx *entry_ctx, void *arg)
DECL|settings_fcb_load|function|static int settings_fcb_load(struct settings_store *cs, load_cb cb, void *cb_arg)
DECL|settings_fcb_save|function|static int settings_fcb_save(struct settings_store *cs, const char *name, const char *value)
DECL|settings_fcb_src|function|int settings_fcb_src(struct settings_fcb *cf)
DECL|settings_fcb_var_read|function|static int settings_fcb_var_read(struct fcb_entry_ctx *entry_ctx, char *buf, char **name, char **val)
