DECL|APPEARANCE|macro|APPEARANCE
DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|ad|variable|ad
DECL|attrs|variable|attrs
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn)
DECL|identity_resolved|function|static void identity_resolved(struct bt_conn *conn, const bt_addr_le_t *rpa, const bt_addr_le_t *identity)
DECL|mainloop|function|void mainloop(void)
DECL|read_appearance|function|static int read_appearance(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_string|function|static int read_string(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|sd|variable|sd
DECL|security_changed|function|static void security_changed(struct bt_conn *conn, bt_security_t level)
