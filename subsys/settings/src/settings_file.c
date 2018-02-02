DECL|settings_file_compress|function|void settings_file_compress(struct settings_file *cf)
DECL|settings_file_create_or_replace|function|static int settings_file_create_or_replace(struct fs_file_t *zfp, const char *file_name)
DECL|settings_file_dst|function|int settings_file_dst(struct settings_file *cf)
DECL|settings_file_itf|variable|settings_file_itf
DECL|settings_file_load|function|static int settings_file_load(struct settings_store *cs, load_cb cb, void *cb_arg)
DECL|settings_file_save|function|static int settings_file_save(struct settings_store *cs, const char *name, const char *value)
DECL|settings_file_src|function|int settings_file_src(struct settings_file *cf)
DECL|settings_getnext_line|function|int settings_getnext_line(struct fs_file_t *file, char *buf, int blen, off_t *loc)
DECL|settings_tmpfile|function|static void settings_tmpfile(char *dst, const char *src, char *pfx)
