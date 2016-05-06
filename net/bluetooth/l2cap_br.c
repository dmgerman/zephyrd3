DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|L2CAP_BR_DYN_CID_END|macro|L2CAP_BR_DYN_CID_END
DECL|L2CAP_BR_DYN_CID_START|macro|L2CAP_BR_DYN_CID_START
DECL|L2CAP_BR_MIN_MTU|macro|L2CAP_BR_MIN_MTU
DECL|L2CAP_BR_PSM_END|macro|L2CAP_BR_PSM_END
DECL|L2CAP_BR_PSM_START|macro|L2CAP_BR_PSM_START
DECL|L2CAP_FEAT_FIXED_CHAN_MASK|macro|L2CAP_FEAT_FIXED_CHAN_MASK
DECL|br_channels|variable|br_channels
DECL|br_servers|variable|br_servers
DECL|br_sig|variable|br_sig
DECL|bt_l2cap_br_connected|function|void bt_l2cap_br_connected(struct bt_conn *conn)
DECL|bt_l2cap_br_fixed_chan_register|function|static void bt_l2cap_br_fixed_chan_register(struct bt_l2cap_fixed_chan *chan)
DECL|bt_l2cap_br_init|function|void bt_l2cap_br_init(void)
DECL|bt_l2cap_br_pool|variable|bt_l2cap_br_pool
DECL|bt_l2cap_br_server_register|function|int bt_l2cap_br_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap|struct|struct bt_l2cap {
DECL|chan|member|struct bt_l2cap_chan chan;
DECL|ident|member|uint8_t ident;
DECL|l2cap_br_accept|function|static int l2cap_br_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_br_chan_add|function|static int l2cap_br_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_br_chan_alloc_cid|function|static void l2cap_br_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_br_connected|function|static void l2cap_br_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_br_disconnected|function|static void l2cap_br_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_br_info_req|function|static int l2cap_br_info_req(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|l2cap_br_recv|function|static void l2cap_br_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_br_send_reject|function|static void l2cap_br_send_reject(struct bt_conn *conn, uint8_t ident, uint16_t reason)
DECL|l2cap_br_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_br_server_lookup_psm(uint16_t psm)
