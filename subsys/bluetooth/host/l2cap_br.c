DECL|BR_CHAN_RTX|macro|BR_CHAN_RTX
DECL|BR_CHAN|macro|BR_CHAN
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|L2CAP_BR_CFG_TIMEOUT|macro|L2CAP_BR_CFG_TIMEOUT
DECL|L2CAP_BR_CID_DYN_END|macro|L2CAP_BR_CID_DYN_END
DECL|L2CAP_BR_CID_DYN_START|macro|L2CAP_BR_CID_DYN_START
DECL|L2CAP_BR_CID_IS_DYN|macro|L2CAP_BR_CID_IS_DYN
DECL|L2CAP_BR_CONN_TIMEOUT|macro|L2CAP_BR_CONN_TIMEOUT
DECL|L2CAP_BR_DEFAULT_MTU|macro|L2CAP_BR_DEFAULT_MTU
DECL|L2CAP_BR_DISCONN_TIMEOUT|macro|L2CAP_BR_DISCONN_TIMEOUT
DECL|L2CAP_BR_INFO_TIMEOUT|macro|L2CAP_BR_INFO_TIMEOUT
DECL|L2CAP_BR_MAX_MTU|macro|L2CAP_BR_MAX_MTU
DECL|L2CAP_BR_MIN_MTU|macro|L2CAP_BR_MIN_MTU
DECL|L2CAP_BR_PSM_END|macro|L2CAP_BR_PSM_END
DECL|L2CAP_BR_PSM_SDP|macro|L2CAP_BR_PSM_SDP
DECL|L2CAP_BR_PSM_START|macro|L2CAP_BR_PSM_START
DECL|L2CAP_CONN_SECURITY_PASSED|enumerator|L2CAP_CONN_SECURITY_PASSED,
DECL|L2CAP_CONN_SECURITY_PENDING|enumerator|L2CAP_CONN_SECURITY_PENDING
DECL|L2CAP_CONN_SECURITY_REJECT|enumerator|L2CAP_CONN_SECURITY_REJECT,
DECL|L2CAP_FEAT_FIXED_CHAN_MASK|macro|L2CAP_FEAT_FIXED_CHAN_MASK
DECL|L2CAP_FLAG_CONN_ACCEPTOR|enumerator|L2CAP_FLAG_CONN_ACCEPTOR, /* getting incoming connection req */
DECL|L2CAP_FLAG_CONN_LCONF_DONE|enumerator|L2CAP_FLAG_CONN_LCONF_DONE, /* local config accepted by remote */
DECL|L2CAP_FLAG_CONN_PENDING|enumerator|L2CAP_FLAG_CONN_PENDING, /* remote sent pending result in rsp */
DECL|L2CAP_FLAG_CONN_RCONF_DONE|enumerator|L2CAP_FLAG_CONN_RCONF_DONE, /* remote config accepted by local */
DECL|L2CAP_FLAG_FIXED_CONNECTED|enumerator|L2CAP_FLAG_FIXED_CONNECTED, /* fixed connected */
DECL|L2CAP_FLAG_SIG_INFO_DONE|enumerator|L2CAP_FLAG_SIG_INFO_DONE, /* remote l2cap info is done */
DECL|L2CAP_FLAG_SIG_INFO_PENDING|enumerator|L2CAP_FLAG_SIG_INFO_PENDING, /* retrieving remote l2cap info */
DECL|br_fixed_channels|variable|br_fixed_channels
DECL|br_servers|variable|br_servers
DECL|bt_l2cap_br_chan_connect|function|int bt_l2cap_br_chan_connect(struct bt_conn *conn, struct bt_l2cap_chan *chan, u16_t psm)
DECL|bt_l2cap_br_chan_disconnect|function|int bt_l2cap_br_chan_disconnect(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_br_chan_send|function|int bt_l2cap_br_chan_send(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_l2cap_br_connected|function|void bt_l2cap_br_connected(struct bt_conn *conn)
DECL|bt_l2cap_br_fixed_chan_register|function|void bt_l2cap_br_fixed_chan_register(struct bt_l2cap_fixed_chan *chan)
DECL|bt_l2cap_br_init|function|void bt_l2cap_br_init(void)
DECL|bt_l2cap_br_lookup_rx_cid|function|struct bt_l2cap_chan *bt_l2cap_br_lookup_rx_cid(struct bt_conn *conn,u16_t cid)
DECL|bt_l2cap_br_lookup_tx_cid|function|struct bt_l2cap_chan *bt_l2cap_br_lookup_tx_cid(struct bt_conn *conn,u16_t cid)
DECL|bt_l2cap_br_pool|variable|bt_l2cap_br_pool
DECL|bt_l2cap_br_recv|function|void bt_l2cap_br_recv(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_l2cap_br_server_register|function|int bt_l2cap_br_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap_br|struct|struct bt_l2cap_br {
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|check_fixed_channel|function|static void check_fixed_channel(struct bt_l2cap_chan *chan)
DECL|connect_fixed_channel|function|static void connect_fixed_channel(struct bt_l2cap_br_chan *chan)
DECL|connect_optional_fixed_channels|function|static void connect_optional_fixed_channels(struct bt_l2cap_br *l2cap)
DECL|get_fixed_channels_mask|function|static u8_t get_fixed_channels_mask(void)
DECL|info_feat_mask|member|u32_t info_feat_mask;
DECL|info_fixed_chan|member|u8_t info_fixed_chan;
DECL|info_ident|member|u8_t info_ident;
DECL|l2cap_br_accept|function|static int l2cap_br_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_br_chan_add|function|static bool l2cap_br_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan, bt_l2cap_chan_destroy_t destroy)
DECL|l2cap_br_chan_alloc_cid|function|l2cap_br_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_br_chan_cleanup|function|static void l2cap_br_chan_cleanup(struct bt_l2cap_chan *chan)
DECL|l2cap_br_chan_destroy|function|static void l2cap_br_chan_destroy(struct bt_l2cap_chan *chan)
DECL|l2cap_br_chan_send_req|function|static void l2cap_br_chan_send_req(struct bt_l2cap_br_chan *chan, struct net_buf *buf, s32_t timeout)
DECL|l2cap_br_conf_add_mtu|function|static void l2cap_br_conf_add_mtu(struct net_buf *buf, const u16_t mtu)
DECL|l2cap_br_conf_opt_mtu|function|static u16_t l2cap_br_conf_opt_mtu(struct bt_l2cap_chan *chan, struct net_buf *buf, size_t len)
DECL|l2cap_br_conf_req|function|static void l2cap_br_conf_req(struct bt_l2cap_br *l2cap, u8_t ident, u16_t len, struct net_buf *buf)
DECL|l2cap_br_conf_rsp|function|static void l2cap_br_conf_rsp(struct bt_l2cap_br *l2cap, u8_t ident, u16_t len, struct net_buf *buf)
DECL|l2cap_br_conf|function|static void l2cap_br_conf(struct bt_l2cap_chan *chan)
DECL|l2cap_br_conn_pend|function|static void l2cap_br_conn_pend(struct bt_l2cap_chan *chan, u8_t status)
DECL|l2cap_br_conn_req_reply|function|static int l2cap_br_conn_req_reply(struct bt_l2cap_chan *chan, u16_t result)
DECL|l2cap_br_conn_req|function|static void l2cap_br_conn_req(struct bt_l2cap_br *l2cap, u8_t ident, struct net_buf *buf)
DECL|l2cap_br_conn_rsp|function|static void l2cap_br_conn_rsp(struct bt_l2cap_br *l2cap, u8_t ident, struct net_buf *buf)
DECL|l2cap_br_conn_security_result|enum|enum l2cap_br_conn_security_result {
DECL|l2cap_br_conn_security|function|l2cap_br_conn_security(struct bt_l2cap_chan *chan, const u16_t psm)
DECL|l2cap_br_connected|function|static void l2cap_br_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_br_disconn_req|function|static void l2cap_br_disconn_req(struct bt_l2cap_br *l2cap, u8_t ident, struct net_buf *buf)
DECL|l2cap_br_disconn_rsp|function|static void l2cap_br_disconn_rsp(struct bt_l2cap_br *l2cap, u8_t ident, struct net_buf *buf)
DECL|l2cap_br_disconnected|function|static void l2cap_br_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_br_encrypt_change|function|void l2cap_br_encrypt_change(struct bt_conn *conn, u8_t hci_status)
DECL|l2cap_br_get_ident|function|static u8_t l2cap_br_get_ident(void)
DECL|l2cap_br_get_info|function|static void l2cap_br_get_info(struct bt_l2cap_br *l2cap, u16_t info_type)
DECL|l2cap_br_info_req|function|static int l2cap_br_info_req(struct bt_l2cap_br *l2cap, u8_t ident, struct net_buf *buf)
DECL|l2cap_br_info_rsp|function|static int l2cap_br_info_rsp(struct bt_l2cap_br *l2cap, u8_t ident, struct net_buf *buf)
DECL|l2cap_br_recv|function|static int l2cap_br_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_br_remove_tx_cid|function|static struct bt_l2cap_br_chan *l2cap_br_remove_tx_cid(struct bt_conn *conn, u16_t cid)
DECL|l2cap_br_rtx_timeout|function|static void l2cap_br_rtx_timeout(struct k_work *work)
DECL|l2cap_br_send_conn_rsp|function|static void l2cap_br_send_conn_rsp(struct bt_conn *conn, u16_t scid, u16_t dcid, u8_t ident, u16_t result)
DECL|l2cap_br_send_reject|function|static void l2cap_br_send_reject(struct bt_conn *conn, u8_t ident, u16_t reason, void *data, u8_t data_len)
DECL|l2cap_br_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_br_server_lookup_psm(u16_t psm)
