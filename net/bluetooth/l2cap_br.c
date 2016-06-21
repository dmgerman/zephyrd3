DECL|BR_CHAN|macro|BR_CHAN
DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_L2CAP_FLAG_INFO_DONE|enumerator|BT_L2CAP_FLAG_INFO_DONE, /* remote l2cap info is done */
DECL|BT_L2CAP_FLAG_INFO_PENDING|enumerator|BT_L2CAP_FLAG_INFO_PENDING, /* retrieving remote l2cap info */
DECL|L2CAP_BR_DEFAULT_MTU|macro|L2CAP_BR_DEFAULT_MTU
DECL|L2CAP_BR_DYN_CID_END|macro|L2CAP_BR_DYN_CID_END
DECL|L2CAP_BR_DYN_CID_START|macro|L2CAP_BR_DYN_CID_START
DECL|L2CAP_BR_MIN_MTU|macro|L2CAP_BR_MIN_MTU
DECL|L2CAP_BR_PSM_END|macro|L2CAP_BR_PSM_END
DECL|L2CAP_BR_PSM_SDP|macro|L2CAP_BR_PSM_SDP
DECL|L2CAP_BR_PSM_START|macro|L2CAP_BR_PSM_START
DECL|L2CAP_FEAT_FIXED_CHAN_MASK|macro|L2CAP_FEAT_FIXED_CHAN_MASK
DECL|br_channels|variable|br_channels
DECL|br_servers|variable|br_servers
DECL|br_sig|variable|br_sig
DECL|bt_l2cap_br_chan_connect|function|int bt_l2cap_br_chan_connect(struct bt_conn *conn, struct bt_l2cap_chan *chan, uint16_t psm)
DECL|bt_l2cap_br_chan_disconnect|function|int bt_l2cap_br_chan_disconnect(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_br_chan_send|function|int bt_l2cap_br_chan_send(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_l2cap_br_connected|function|void bt_l2cap_br_connected(struct bt_conn *conn)
DECL|bt_l2cap_br_fixed_chan_register|function|static void bt_l2cap_br_fixed_chan_register(struct bt_l2cap_fixed_chan *chan)
DECL|bt_l2cap_br_init|function|void bt_l2cap_br_init(void)
DECL|bt_l2cap_br_lookup_rx_cid|function|struct bt_l2cap_chan *bt_l2cap_br_lookup_rx_cid(struct bt_conn *conn,uint16_t cid)
DECL|bt_l2cap_br_lookup_tx_cid|function|static struct bt_l2cap_chan *bt_l2cap_br_lookup_tx_cid(struct bt_conn *conn, uint16_t cid)
DECL|bt_l2cap_br_pool|variable|bt_l2cap_br_pool
DECL|bt_l2cap_br_server_register|function|int bt_l2cap_br_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap_br|struct|struct bt_l2cap_br {
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|flags|member|atomic_t flags[1];
DECL|info_feat_mask|member|uint32_t info_feat_mask;
DECL|info_fixed_chan|member|uint8_t info_fixed_chan;
DECL|info_ident|member|uint8_t info_ident;
DECL|l2cap_br_accept|function|static int l2cap_br_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_br_chan_add|function|static bool l2cap_br_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_br_chan_alloc_cid|function|l2cap_br_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_br_chan_del|function|static void l2cap_br_chan_del(struct bt_l2cap_chan *chan)
DECL|l2cap_br_conf_add_mtu|function|static void l2cap_br_conf_add_mtu(struct net_buf *buf, const uint16_t mtu)
DECL|l2cap_br_conf_rsp|function|static void l2cap_br_conf_rsp(struct bt_l2cap_br *l2cap, uint8_t ident, uint16_t len, struct net_buf *buf)
DECL|l2cap_br_conf|function|static void l2cap_br_conf(struct bt_l2cap_chan *chan)
DECL|l2cap_br_conn_req|function|static void l2cap_br_conn_req(struct bt_l2cap_br *l2cap, uint8_t ident, struct net_buf *buf)
DECL|l2cap_br_connected|function|static void l2cap_br_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_br_disconn_req|function|static void l2cap_br_disconn_req(struct bt_l2cap_br *l2cap, uint8_t ident, struct net_buf *buf)
DECL|l2cap_br_disconnected|function|static void l2cap_br_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_br_get_ident|function|static uint8_t l2cap_br_get_ident(void)
DECL|l2cap_br_get_info|function|static void l2cap_br_get_info(struct bt_l2cap_br *l2cap, uint16_t info_type)
DECL|l2cap_br_info_req|function|static int l2cap_br_info_req(struct bt_l2cap_br *l2cap, uint8_t ident, struct net_buf *buf)
DECL|l2cap_br_info_rsp|function|static int l2cap_br_info_rsp(struct bt_l2cap_br *l2cap, uint8_t ident, struct net_buf *buf)
DECL|l2cap_br_recv|function|static void l2cap_br_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_br_remove_tx_cid|function|static struct bt_l2cap_br_chan *l2cap_br_remove_tx_cid(struct bt_conn *conn, uint16_t cid)
DECL|l2cap_br_send_reject|function|static void l2cap_br_send_reject(struct bt_conn *conn, uint8_t ident, uint16_t reason, void *data, uint8_t data_len)
DECL|l2cap_br_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_br_server_lookup_psm(uint16_t psm)
