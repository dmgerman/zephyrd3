DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|bt_conn_add|function|struct bt_conn *bt_conn_add(struct bt_dev *dev, const bt_addr_le_t *peer, uint8_t role)
DECL|bt_conn_get_dst|function|const bt_addr_le_t *bt_conn_get_dst(const struct bt_conn *conn)
DECL|bt_conn_get|function|struct bt_conn *bt_conn_get(struct bt_conn *conn)
DECL|bt_conn_lookup_addr_le|function|struct bt_conn *bt_conn_lookup_addr_le(const bt_addr_le_t *peer)
DECL|bt_conn_lookup_handle|function|struct bt_conn *bt_conn_lookup_handle(uint16_t handle)
DECL|bt_conn_put|function|void bt_conn_put(struct bt_conn *conn)
DECL|bt_conn_recv|function|void bt_conn_recv(struct bt_conn *conn, struct bt_buf *buf, uint8_t flags)
DECL|bt_conn_reset_rx_state|function|static void bt_conn_reset_rx_state(struct bt_conn *conn)
DECL|bt_conn_send|function|void bt_conn_send(struct bt_conn *conn, struct bt_buf *buf)
DECL|bt_conn_set_state|function|void bt_conn_set_state(struct bt_conn *conn, bt_conn_state_t state)
DECL|bt_security|function|int bt_security(struct bt_conn *conn, bt_security_t sec)
DECL|conn_tx_fiber|function|static void conn_tx_fiber(int arg1, int arg2)
DECL|conns|variable|conns
DECL|state2str|function|static const char *state2str(bt_conn_state_t state)
