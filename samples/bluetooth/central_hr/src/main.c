DECL|SLEEPTICKS|macro|SLEEPTICKS
DECL|SLEEPTIME|macro|SLEEPTIME
DECL|ad_parse|function|static void ad_parse(const uint8_t *data, uint8_t data_len, bool (*func)(uint8_t type, const uint8_t *data, uint8_t data_len, void *user_data), void *user_data)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, uint8_t conn_err)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t type, const uint8_t *ad, uint8_t len)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, uint8_t reason)
DECL|discover_func|function|static uint8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|discover_params|variable|discover_params
DECL|eir_found|function|static bool eir_found(uint8_t type, const uint8_t *data, uint8_t data_len, void *user_data)
DECL|mainloop|function|void mainloop(void)
DECL|notify_func|function|static uint8_t notify_func(struct bt_conn *conn, struct bt_gatt_subscribe_params *params, const void *data, uint16_t length)
DECL|subscribe_params|variable|subscribe_params
DECL|uuid|variable|uuid
