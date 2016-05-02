DECL|AD_COMPLETE_NAME|macro|AD_COMPLETE_NAME
DECL|AD_SHORT_NAME|macro|AD_SHORT_NAME
DECL|CREDITS|macro|CREDITS
DECL|DATA_MTU|macro|DATA_MTU
DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|ad_discov|variable|ad_discov
DECL|appearance_value|variable|appearance_value
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_all|variable|auth_cb_all
DECL|auth_cb_display_yes_no|variable|auth_cb_display_yes_no
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_cb_input|variable|auth_cb_input
DECL|auth_pairing_confirm|function|static void auth_pairing_confirm(struct bt_conn *conn)
DECL|auth_passkey_confirm|function|static void auth_passkey_confirm(struct bt_conn *conn, unsigned int passkey)
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|auth_passkey_entry|function|static void auth_passkey_entry(struct bt_conn *conn)
DECL|auth_pincode_entry|function|static void auth_pincode_entry(struct bt_conn *conn, bool highsec)
DECL|br_device_found|function|static void br_device_found(const bt_addr_t *addr, int8_t rssi, const uint8_t cod[3], const uint8_t eir[240])
DECL|br_discovery_complete|function|static void br_discovery_complete(struct bt_br_discovery_result *results, size_t count)
DECL|br_discovery_results|variable|br_discovery_results
DECL|bt_ready|function|static void bt_ready(int err)
DECL|char2hex|function|static int char2hex(const char *c, uint8_t *x)
DECL|cmd_active_scan_on|function|static void cmd_active_scan_on(void)
DECL|cmd_advertise|function|static void cmd_advertise(int argc, char *argv[])
DECL|cmd_auth_cancel|function|static void cmd_auth_cancel(int argc, char *argv[])
DECL|cmd_auth_pairing_confirm|function|static void cmd_auth_pairing_confirm(int argc, char *argv[])
DECL|cmd_auth_passkey_confirm|function|static void cmd_auth_passkey_confirm(int argc, char *argv[])
DECL|cmd_auth_passkey|function|static void cmd_auth_passkey(int argc, char *argv[])
DECL|cmd_auth_pincode|function|static void cmd_auth_pincode(int argc, char *argv[])
DECL|cmd_auth|function|static void cmd_auth(int argc, char *argv[])
DECL|cmd_auto_conn|function|static void cmd_auto_conn(int argc, char *argv[])
DECL|cmd_bredr_connectable|function|static void cmd_bredr_connectable(int argc, char *argv[])
DECL|cmd_bredr_discoverable|function|static void cmd_bredr_discoverable(int argc, char *argv[])
DECL|cmd_bredr_discovery|function|static void cmd_bredr_discovery(int argc, char *argv[])
DECL|cmd_connect_bredr|function|static void cmd_connect_bredr(int argc, char *argv[])
DECL|cmd_connect_le|function|static void cmd_connect_le(int argc, char *argv[])
DECL|cmd_disconnect|function|static void cmd_disconnect(int argc, char *argv[])
DECL|cmd_gatt_discover|function|static void cmd_gatt_discover(int argc, char *argv[])
DECL|cmd_gatt_exchange_mtu|function|static void cmd_gatt_exchange_mtu(int argc, char *argv[])
DECL|cmd_gatt_mread|function|static void cmd_gatt_mread(int argc, char *argv[])
DECL|cmd_gatt_read|function|static void cmd_gatt_read(int argc, char *argv[])
DECL|cmd_gatt_subscribe|function|static void cmd_gatt_subscribe(int argc, char *argv[])
DECL|cmd_gatt_unsubscribe|function|static void cmd_gatt_unsubscribe(int argc, char *argv[])
DECL|cmd_gatt_write_signed|function|static void cmd_gatt_write_signed(int argc, char *argv[])
DECL|cmd_gatt_write_without_rsp|function|static void cmd_gatt_write_without_rsp(int argc, char *argv[])
DECL|cmd_gatt_write|function|static void cmd_gatt_write(int argc, char *argv[])
DECL|cmd_init|function|static void cmd_init(int argc, char *argv[])
DECL|cmd_l2cap_connect|function|static void cmd_l2cap_connect(int argc, char *argv[])
DECL|cmd_l2cap_disconnect|function|static void cmd_l2cap_disconnect(int argc, char *argv[])
DECL|cmd_l2cap_register|function|static void cmd_l2cap_register(int argc, char *argv[])
DECL|cmd_l2cap_send|function|static void cmd_l2cap_send(int argc, char *argv[])
DECL|cmd_scan_off|function|static void cmd_scan_off(void)
DECL|cmd_scan|function|static void cmd_scan(int argc, char *argv[])
DECL|cmd_security|function|static void cmd_security(int argc, char *argv[])
DECL|cmd_select|function|static void cmd_select(int argc, char *argv[])
DECL|commands|variable|commands
DECL|conn_addr_str|function|static void conn_addr_str(struct bt_conn *conn, char *addr, size_t len)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, uint8_t err)
DECL|current_prompt|function|static const char *current_prompt(void)
DECL|data_fifo|variable|data_fifo
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t evtype, const uint8_t *ad, uint8_t len)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, uint8_t reason)
DECL|discover_func|function|static uint8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|discover_params|variable|discover_params
DECL|exchange_rsp|function|static void exchange_rsp(struct bt_conn *conn, uint8_t err)
DECL|identity_resolved|function|static void identity_resolved(struct bt_conn *conn, const bt_addr_le_t *rpa, const bt_addr_le_t *identity)
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_alloc_buf|function|static struct net_buf *l2cap_alloc_buf(struct bt_l2cap_chan *chan)
DECL|l2cap_chan|variable|l2cap_chan
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_ops|variable|l2cap_ops
DECL|l2cap_recv|function|static void l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|mainloop|function|void mainloop(void)
DECL|notify_func|function|static uint8_t notify_func(struct bt_conn *conn, struct bt_gatt_subscribe_params *params, const void *data, uint16_t length)
DECL|pairing_conn|variable|pairing_conn
DECL|print_chrc_props|function|static void print_chrc_props(uint8_t properties)
DECL|read_func|function|static uint8_t read_func(struct bt_conn *conn, uint8_t err, struct bt_gatt_read_params *params, const void *data, uint16_t length)
DECL|read_params|variable|read_params
DECL|sd|variable|sd
DECL|security_changed|function|static void security_changed(struct bt_conn *conn, bt_security_t level)
DECL|server|variable|server
DECL|str2bt_addr_le|function|static int str2bt_addr_le(const char *str, const char *type, bt_addr_le_t *addr)
DECL|str2bt_addr|function|static int str2bt_addr(const char *str, bt_addr_t *addr)
DECL|subscribe_params|variable|subscribe_params
DECL|uuid|variable|uuid
DECL|write_func|function|static void write_func(struct bt_conn *conn, uint8_t err)
