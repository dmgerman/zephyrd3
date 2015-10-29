DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_L2CAP_MAX_LE_MPS|macro|BT_L2CAP_MAX_LE_MPS
DECL|L2CAP_LE_CREDITS_THRESHOLD|macro|L2CAP_LE_CREDITS_THRESHOLD
DECL|L2CAP_LE_DYN_CID_END|macro|L2CAP_LE_DYN_CID_END
DECL|L2CAP_LE_DYN_CID_START|macro|L2CAP_LE_DYN_CID_START
DECL|L2CAP_LE_MAX_CREDITS|macro|L2CAP_LE_MAX_CREDITS
DECL|L2CAP_LE_MIN_MTU|macro|L2CAP_LE_MIN_MTU
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|avail_acl_out|variable|avail_acl_out
DECL|bt_l2cap_connected|function|void bt_l2cap_connected(struct bt_conn *conn)
DECL|bt_l2cap_create_pdu|function|struct net_buf *bt_l2cap_create_pdu(struct bt_conn *conn)
DECL|bt_l2cap_disconnected|function|void bt_l2cap_disconnected(struct bt_conn *conn)
DECL|bt_l2cap_encrypt_change|function|void bt_l2cap_encrypt_change(struct bt_conn *conn)
DECL|bt_l2cap_fixed_chan_register|function|void bt_l2cap_fixed_chan_register(struct bt_l2cap_fixed_chan *chan)
DECL|bt_l2cap_init|function|int bt_l2cap_init(void)
DECL|bt_l2cap_lookup_rx_cid|function|struct bt_l2cap_chan *bt_l2cap_lookup_rx_cid(struct bt_conn *conn, uint16_t cid)
DECL|bt_l2cap_lookup_tx_cid|function|struct bt_l2cap_chan *bt_l2cap_lookup_tx_cid(struct bt_conn *conn, uint16_t cid)
DECL|bt_l2cap_pool|variable|bt_l2cap_pool
DECL|bt_l2cap_recv|function|void bt_l2cap_recv(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_l2cap_send|function|void bt_l2cap_send(struct bt_conn *conn, uint16_t cid, struct net_buf *buf)
DECL|bt_l2cap_server_register|function|int bt_l2cap_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap_update_conn_param|function|int bt_l2cap_update_conn_param(struct bt_conn *conn)
DECL|bt_l2cap|struct|struct bt_l2cap {
DECL|channels|variable|channels
DECL|chan|member|struct bt_l2cap_chan chan;
DECL|get_ident|function|static uint8_t get_ident(struct bt_conn *conn)
DECL|ident|member|uint8_t ident;
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_chan_add|function|static void l2cap_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_chan_alloc_cid|function|static void l2cap_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_chan_get|function|static struct bt_l2cap *l2cap_chan_get(struct bt_conn *conn)
DECL|l2cap_chan_le_recv|function|static void l2cap_chan_le_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_recv|function|static void l2cap_chan_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_update_credits|function|static void l2cap_chan_update_credits(struct bt_l2cap_chan *chan)
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_recv|function|static void l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_remove_tx_cid|function|static struct bt_l2cap_chan *l2cap_remove_tx_cid(struct bt_conn *conn, uint16_t cid)
DECL|l2cap_send_reject|function|static void l2cap_send_reject(struct bt_conn *conn, uint8_t ident, uint16_t reason)
DECL|l2cap_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_server_lookup_psm(uint16_t psm)
DECL|le_conn_param_rsp|function|static void le_conn_param_rsp(struct bt_l2cap *l2cap, struct net_buf *buf)
DECL|le_conn_param_update_req|function|static void le_conn_param_update_req(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|le_conn_req|function|static void le_conn_req(struct bt_l2cap *l2cap, uint8_t ident,struct net_buf *buf)
DECL|le_disconn_req|function|static void le_disconn_req(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|servers|variable|servers
