DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|bt_settings_decode_key|function|int bt_settings_decode_key(char *key, bt_addr_le_t *addr)
DECL|bt_settings_encode_key|function|void bt_settings_encode_key(char *path, size_t path_size, const char *subsys, bt_addr_le_t *addr, const char *key)
DECL|bt_settings_init|function|int bt_settings_init(void)
DECL|bt_settings|variable|bt_settings
DECL|commit|function|static int commit(void)
DECL|export|function|static int export(int (*func)(const char *name, char *val), enum settings_export_tgt tgt)
DECL|generate_irk|function|static void generate_irk(void)
DECL|generate_static_addr|function|static void generate_static_addr(void)
DECL|set|function|static int set(int argc, char **argv, char *val)
