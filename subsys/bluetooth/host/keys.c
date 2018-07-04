DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|bt_keys_add_type|function|void bt_keys_add_type(struct bt_keys *keys, int type)
DECL|bt_keys_clear_all|function|void bt_keys_clear_all(void)
DECL|bt_keys_clear|function|void bt_keys_clear(struct bt_keys *keys)
DECL|bt_keys_find_addr|function|struct bt_keys *bt_keys_find_addr(u8_t id, const bt_addr_le_t *addr)
DECL|bt_keys_find_irk|function|struct bt_keys *bt_keys_find_irk(u8_t id, const bt_addr_le_t *addr)
DECL|bt_keys_find|function|struct bt_keys *bt_keys_find(int type, u8_t id, const bt_addr_le_t *addr)
DECL|bt_keys_foreach|function|void bt_keys_foreach(int type, void (*func)(struct bt_keys *keys))
DECL|bt_keys_get_addr|function|struct bt_keys *bt_keys_get_addr(u8_t id, const bt_addr_le_t *addr)
DECL|bt_keys_get_type|function|struct bt_keys *bt_keys_get_type(int type, u8_t id, const bt_addr_le_t *addr)
DECL|bt_keys_store|function|int bt_keys_store(struct bt_keys *keys)
DECL|key_pool|variable|key_pool
DECL|keys_commit|function|static int keys_commit(void)
DECL|keys_set|function|static int keys_set(int argc, char **argv, char *val)
