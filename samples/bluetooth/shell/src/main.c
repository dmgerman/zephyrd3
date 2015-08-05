DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|ad|variable|ad
DECL|attrs|variable|attrs
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb|variable|auth_cb
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|cmd_active_scan_on|function|static void cmd_active_scan_on(void)
DECL|cmd_advertise|function|static void cmd_advertise(int argc, char *argv[])
DECL|cmd_authentication|function|static void cmd_authentication(int argc, char *argv[])
DECL|cmd_connect_le|function|static void cmd_connect_le(int argc, char *argv[])
DECL|cmd_disconnect|function|static void cmd_disconnect(int argc, char *argv[])
DECL|cmd_gatt_discover|function|static void cmd_gatt_discover(int argc, char *argv[])
DECL|cmd_gatt_exchange_mtu|function|static void cmd_gatt_exchange_mtu(int argc, char *argv[])
DECL|cmd_gatt_mread|function|void cmd_gatt_mread(int argc, char *argv[])
DECL|cmd_gatt_read|function|static void cmd_gatt_read(int argc, char *argv[])
DECL|cmd_gatt_subscribe|function|static void cmd_gatt_subscribe(int argc, char *argv[])
DECL|cmd_gatt_unsubscribe|function|static void cmd_gatt_unsubscribe(int argc, char *argv[])
DECL|cmd_gatt_write_without_rsp|function|static void cmd_gatt_write_without_rsp(int argc, char *argv[])
DECL|cmd_gatt_write|function|static void cmd_gatt_write(int argc, char *argv[])
DECL|cmd_init|function|static void cmd_init(int argc, char *argv[])
DECL|cmd_scan_off|function|static void cmd_scan_off(void)
DECL|cmd_scan|function|static void cmd_scan(int argc, char *argv[])
DECL|cmd_security|function|static void cmd_security(int argc, char *argv[])
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t evtype, const uint8_t *ad, uint8_t len)
DECL|device_name_uuid|variable|device_name_uuid
DECL|disconnected|function|static void disconnected(struct bt_conn *conn)
DECL|discover_destroy|function|static void discover_destroy(void *user_data)
DECL|discover_func|function|static uint8_t discover_func(const struct bt_gatt_attr *attr, void *user_data)
DECL|discover_params|variable|discover_params
DECL|exchange_rsp|function|static void exchange_rsp(struct bt_conn *conn, uint8_t err)
DECL|gap_uuid|variable|gap_uuid
DECL|mainloop|function|void mainloop(void)
DECL|name_chrc|variable|name_chrc
DECL|read_func|function|static void read_func(struct bt_conn *conn, int err, const void *data, uint16_t length)
DECL|read_name|function|static int read_name(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|sd|variable|sd
DECL|str2bt_addr_le|function|static int str2bt_addr_le(const char *str, const char *type, bt_addr_le_t *addr)
DECL|subscribe_destroy|function|static void subscribe_destroy(void *user_data)
DECL|subscribe_func|function|static void subscribe_func(struct bt_conn *conn, int err, const void *data, uint16_t length)
DECL|subscribe_params|variable|subscribe_params
DECL|uuid|variable|uuid
DECL|write_func|function|static void write_func(struct bt_conn *conn, uint8_t err)
DECL|xtoi|function|static int xtoi(const char *str)
