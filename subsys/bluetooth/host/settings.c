DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|ID_DATA_LEN|macro|ID_DATA_LEN
DECL|ID_SIZE_MAX|macro|ID_SIZE_MAX
DECL|ID_SIZE_MAX|macro|ID_SIZE_MAX
DECL|bt_settings_decode_key|function|int bt_settings_decode_key(char *key, bt_addr_le_t *addr)
DECL|bt_settings_encode_key|function|void bt_settings_encode_key(char *path, size_t path_size, const char *subsys, bt_addr_le_t *addr, const char *key)
DECL|bt_settings_init|function|int bt_settings_init(void)
DECL|bt_settings_save_id|function|void bt_settings_save_id(void)
DECL|bt_settings|variable|bt_settings
DECL|commit|function|static int commit(void)
DECL|export|function|static int export(int (*func)(const char *name, char *val), enum settings_export_tgt tgt)
DECL|save_id|function|static void save_id(struct k_work *work)
DECL|set|function|static int set(int argc, char **argv, char *val)
