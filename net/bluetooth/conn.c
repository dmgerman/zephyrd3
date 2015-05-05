DECL|MAX_CONN_COUNT|macro|MAX_CONN_COUNT
DECL|bt_conn_add|function|struct bt_conn *bt_conn_add(struct bt_dev *dev, uint16_t handle)
DECL|bt_conn_create_pdu|function|struct bt_buf *bt_conn_create_pdu(struct bt_conn *conn)
DECL|bt_conn_del|function|void bt_conn_del(struct bt_conn *conn)
DECL|bt_conn_get|function|struct bt_conn *bt_conn_get(struct bt_conn *conn)
DECL|bt_conn_lookup|function|struct bt_conn *bt_conn_lookup(uint16_t handle)
DECL|bt_conn_put|function|void bt_conn_put(struct bt_conn *conn)
DECL|bt_conn_recv|function|void bt_conn_recv(struct bt_conn *conn, struct bt_buf *buf, uint8_t flags)
DECL|bt_conn_reset_rx_state|function|static void bt_conn_reset_rx_state(struct bt_conn *conn)
DECL|bt_conn_send|function|void bt_conn_send(struct bt_conn *conn, struct bt_buf *buf)
DECL|conn_rx_fiber|function|static void conn_rx_fiber(int arg1, int arg2)
DECL|conn_tx_fiber|function|static void conn_tx_fiber(int arg1, int arg2)
DECL|conns|variable|conns
