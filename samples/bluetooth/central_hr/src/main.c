DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t conn_err)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, s8_t rssi, u8_t type, struct net_buf_simple *ad)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|discover_func|function|static u8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|discover_params|variable|discover_params
DECL|eir_found|function|static bool eir_found(struct bt_data *data, void *user_data)
DECL|main|function|void main(void)
DECL|notify_func|function|static u8_t notify_func(struct bt_conn *conn, struct bt_gatt_subscribe_params *params, const void *data, u16_t length)
DECL|subscribe_params|variable|subscribe_params
DECL|uuid|variable|uuid
