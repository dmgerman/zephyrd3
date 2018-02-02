DECL|__SETTINGS_PRIV_H_|macro|__SETTINGS_PRIV_H_
DECL|csi_load|member|int (*csi_load)(struct settings_store *cs, load_cb cb, void *cb_arg);
DECL|csi_save_end|member|int (*csi_save_end)(struct settings_store *cs);
DECL|csi_save_start|member|int (*csi_save_start)(struct settings_store *cs);
DECL|csi_save|member|int (*csi_save)(struct settings_store *cs, const char *name,
DECL|load_cb|typedef|typedef void (*load_cb)(char *name, char *val, void *cb_arg);
DECL|settings_store_itf|struct|struct settings_store_itf {
