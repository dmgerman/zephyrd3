DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_L2CAP_CONN_PARAM_ACCEPTED|macro|BT_L2CAP_CONN_PARAM_ACCEPTED
DECL|BT_L2CAP_CONN_PARAM_REJECTED|macro|BT_L2CAP_CONN_PARAM_REJECTED
DECL|LE_CONN_LATENCY|macro|LE_CONN_LATENCY
DECL|LE_CONN_MAX_INTERVAL|macro|LE_CONN_MAX_INTERVAL
DECL|LE_CONN_MIN_INTERVAL|macro|LE_CONN_MIN_INTERVAL
DECL|LE_CONN_TIMEOUT|macro|LE_CONN_TIMEOUT
DECL|bt_l2cap_chan_register|function|void bt_l2cap_chan_register(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_connected|function|void bt_l2cap_connected(struct bt_conn *conn)
DECL|bt_l2cap_create_pdu|function|struct bt_buf *bt_l2cap_create_pdu(struct bt_conn *conn)
DECL|bt_l2cap_disconnected|function|void bt_l2cap_disconnected(struct bt_conn *conn)
DECL|bt_l2cap_encrypt_change|function|void bt_l2cap_encrypt_change(struct bt_conn *conn)
DECL|bt_l2cap_init|function|int bt_l2cap_init(void)
DECL|bt_l2cap_recv|function|void bt_l2cap_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|bt_l2cap_send|function|void bt_l2cap_send(struct bt_conn *conn, uint16_t cid, struct bt_buf *buf)
DECL|bt_l2cap_update_conn_param|function|int bt_l2cap_update_conn_param(struct bt_conn *conn)
DECL|channels|variable|channels
DECL|get_ident|function|static uint8_t get_ident(struct bt_conn *conn)
DECL|le_conn_param_rsp|function|static void le_conn_param_rsp(struct bt_conn *conn, struct bt_buf *buf)
DECL|le_conn_param_update_req|function|static void le_conn_param_update_req(struct bt_conn *conn, uint8_t ident, struct bt_buf *buf)
DECL|le_sig|function|static void le_sig(struct bt_conn *conn, struct bt_buf *buf)
DECL|le_validate_conn_params|function|static uint16_t le_validate_conn_params(uint16_t min, uint16_t max,uint16_t latency, uint16_t timeout)
DECL|rej_not_understood|function|static void rej_not_understood(struct bt_conn *conn, uint8_t ident)
