DECL|ad|variable|ad
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|identity_resolved|function|static void identity_resolved(struct bt_conn *conn, const bt_addr_le_t *rpa, const bt_addr_le_t *identity)
DECL|main|function|void main(void)
DECL|pairing_complete|function|static void pairing_complete(struct bt_conn *conn, bool bonded)
DECL|pairing_failed|function|static void pairing_failed(struct bt_conn *conn)
DECL|security_changed|function|static void security_changed(struct bt_conn *conn, bt_security_t level)
