DECL|SLEEPTICKS|macro|SLEEPTICKS
DECL|SLEEPTIME|macro|SLEEPTIME
DECL|ad_parse|function|static void ad_parse(const uint8_t *data, uint8_t len, bool (*func)(const struct bt_eir *eir, void *user_data), void *user_data)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t type, const uint8_t *ad, uint8_t len)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn)
DECL|eir_found|function|static bool eir_found(const struct bt_eir *eir, void *user_data)
DECL|mainloop|function|void mainloop(void)
