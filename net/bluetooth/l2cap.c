DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|L2CAP_CID_START|macro|L2CAP_CID_START
DECL|L2CAP_LE_CID_END|macro|L2CAP_LE_CID_END
DECL|L2CAP_LE_MAX_CREDITS|macro|L2CAP_LE_MAX_CREDITS
DECL|L2CAP_LE_MIN_MTU|macro|L2CAP_LE_MIN_MTU
DECL|bt_l2cap_chan_register|function|void bt_l2cap_chan_register(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_connected|function|void bt_l2cap_connected(struct bt_conn *conn)
DECL|bt_l2cap_create_pdu|function|struct bt_buf *bt_l2cap_create_pdu(struct bt_conn *conn)
DECL|bt_l2cap_disconnected|function|void bt_l2cap_disconnected(struct bt_conn *conn)
DECL|bt_l2cap_encrypt_change|function|void bt_l2cap_encrypt_change(struct bt_conn *conn)
DECL|bt_l2cap_init|function|int bt_l2cap_init(void)
DECL|bt_l2cap_recv|function|void bt_l2cap_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|bt_l2cap_send|function|void bt_l2cap_send(struct bt_conn *conn, uint16_t cid, struct bt_buf *buf)
DECL|bt_l2cap_server_register|function|int bt_l2cap_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap_update_conn_param|function|int bt_l2cap_update_conn_param(struct bt_conn *conn)
DECL|channels|variable|channels
DECL|get_ident|function|static uint8_t get_ident(struct bt_conn *conn)
DECL|l2cap_chan_add|function|static void l2cap_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_chan_alloc_cid|function|static void l2cap_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_chan_lookup_dcid|function|static struct bt_l2cap_chan *l2cap_chan_lookup_dcid(struct bt_conn *conn, uint16_t dcid)
DECL|l2cap_chan_lookup_scid|function|static struct bt_l2cap_chan *l2cap_chan_lookup_scid(struct bt_conn *conn, uint16_t scid)
DECL|l2cap_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_server_lookup_psm(uint16_t psm)
DECL|le_conn_param_rsp|function|static void le_conn_param_rsp(struct bt_conn *conn, struct bt_buf *buf)
DECL|le_conn_param_update_req|function|static void le_conn_param_update_req(struct bt_conn *conn, uint8_t ident, struct bt_buf *buf)
DECL|le_conn_req|function|static void le_conn_req(struct bt_conn *conn, uint8_t ident, struct bt_buf *buf)
DECL|le_sig|function|static void le_sig(struct bt_conn *conn, struct bt_buf *buf)
DECL|rej_not_understood|function|static void rej_not_understood(struct bt_conn *conn, uint8_t ident)
DECL|servers|variable|servers
