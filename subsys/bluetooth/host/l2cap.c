DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|L2CAP_CONN_TIMEOUT|macro|L2CAP_CONN_TIMEOUT
DECL|L2CAP_DISC_TIMEOUT|macro|L2CAP_DISC_TIMEOUT
DECL|L2CAP_LE_CID_DYN_END|macro|L2CAP_LE_CID_DYN_END
DECL|L2CAP_LE_CID_DYN_START|macro|L2CAP_LE_CID_DYN_START
DECL|L2CAP_LE_CID_IS_DYN|macro|L2CAP_LE_CID_IS_DYN
DECL|L2CAP_LE_CREDITS_THRESHOLD|macro|L2CAP_LE_CREDITS_THRESHOLD
DECL|L2CAP_LE_MAX_CREDITS|macro|L2CAP_LE_MAX_CREDITS
DECL|L2CAP_LE_MAX_CREDITS|macro|L2CAP_LE_MAX_CREDITS
DECL|L2CAP_LE_MIN_MTU|macro|L2CAP_LE_MIN_MTU
DECL|L2CAP_LE_PSM_DYN_END|macro|L2CAP_LE_PSM_DYN_END
DECL|L2CAP_LE_PSM_DYN_START|macro|L2CAP_LE_PSM_DYN_START
DECL|L2CAP_LE_PSM_FIXED_END|macro|L2CAP_LE_PSM_FIXED_END
DECL|L2CAP_LE_PSM_FIXED_START|macro|L2CAP_LE_PSM_FIXED_START
DECL|L2CAP_MAX_LE_MPS|macro|L2CAP_MAX_LE_MPS
DECL|L2CAP_MAX_LE_MTU|macro|L2CAP_MAX_LE_MTU
DECL|LE_CHAN_RTX|macro|LE_CHAN_RTX
DECL|__l2cap_lookup_ident|function|__l2cap_lookup_ident(struct bt_conn *conn, u16_t ident, bool remove)
DECL|bt_l2cap_chan_add|function|void bt_l2cap_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan, bt_l2cap_chan_destroy_t destroy)
DECL|bt_l2cap_chan_connect|function|int bt_l2cap_chan_connect(struct bt_conn *conn, struct bt_l2cap_chan *chan, u16_t psm)
DECL|bt_l2cap_chan_del|function|void bt_l2cap_chan_del(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_chan_disconnect|function|int bt_l2cap_chan_disconnect(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_chan_remove|function|void bt_l2cap_chan_remove(struct bt_conn *conn, struct bt_l2cap_chan *ch)
DECL|bt_l2cap_chan_send|function|int bt_l2cap_chan_send(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_l2cap_chan_set_state_debug|function|void bt_l2cap_chan_set_state_debug(struct bt_l2cap_chan *chan, bt_l2cap_chan_state_t state, const char *func, int line)
DECL|bt_l2cap_chan_set_state|function|void bt_l2cap_chan_set_state(struct bt_l2cap_chan *chan, bt_l2cap_chan_state_t state)
DECL|bt_l2cap_chan_state_str|function|const char *bt_l2cap_chan_state_str(bt_l2cap_chan_state_t state)
DECL|bt_l2cap_connected|function|void bt_l2cap_connected(struct bt_conn *conn)
DECL|bt_l2cap_create_pdu|function|struct net_buf *bt_l2cap_create_pdu(struct net_buf_pool *pool, size_t reserve)
DECL|bt_l2cap_disconnected|function|void bt_l2cap_disconnected(struct bt_conn *conn)
DECL|bt_l2cap_encrypt_change|function|void bt_l2cap_encrypt_change(struct bt_conn *conn, u8_t hci_status)
DECL|bt_l2cap_init|function|void bt_l2cap_init(void)
DECL|bt_l2cap_le_fixed_chan_register|function|void bt_l2cap_le_fixed_chan_register(struct bt_l2cap_fixed_chan *chan)
DECL|bt_l2cap_le_lookup_rx_cid|function|struct bt_l2cap_chan *bt_l2cap_le_lookup_rx_cid(struct bt_conn *conn,u16_t cid)
DECL|bt_l2cap_le_lookup_tx_cid|function|struct bt_l2cap_chan *bt_l2cap_le_lookup_tx_cid(struct bt_conn *conn,u16_t cid)
DECL|bt_l2cap_pool|variable|bt_l2cap_pool
DECL|bt_l2cap_recv|function|void bt_l2cap_recv(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_l2cap_send_cb|function|void bt_l2cap_send_cb(struct bt_conn *conn, u16_t cid, struct net_buf *buf, bt_conn_tx_cb_t cb)
DECL|bt_l2cap_server_register|function|int bt_l2cap_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap_update_conn_param|function|int bt_l2cap_update_conn_param(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_l2cap|struct|struct bt_l2cap {
DECL|chan|member|struct bt_l2cap_le_chan chan;
DECL|get_ident|function|static u8_t get_ident(void)
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_alloc_frag|function|static struct net_buf *l2cap_alloc_frag(struct bt_l2cap_le_chan *chan)
DECL|l2cap_alloc_seg|function|static inline struct net_buf *l2cap_alloc_seg(struct net_buf *buf)
DECL|l2cap_chan_add|function|static bool l2cap_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan, bt_l2cap_chan_destroy_t destroy)
DECL|l2cap_chan_alloc_cid|function|static struct bt_l2cap_le_chan *l2cap_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_chan_create_seg|function|static struct net_buf *l2cap_chan_create_seg(struct bt_l2cap_le_chan *ch, struct net_buf *buf, size_t sdu_hdr_len)
DECL|l2cap_chan_destroy|function|static void l2cap_chan_destroy(struct bt_l2cap_chan *chan)
DECL|l2cap_chan_le_get_tx_buf|function|static struct net_buf *l2cap_chan_le_get_tx_buf(struct bt_l2cap_le_chan *ch)
DECL|l2cap_chan_le_recv_sdu|function|static void l2cap_chan_le_recv_sdu(struct bt_l2cap_le_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_le_recv|function|static void l2cap_chan_le_recv(struct bt_l2cap_le_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_le_send_resume|function|static void l2cap_chan_le_send_resume(struct bt_l2cap_le_chan *ch)
DECL|l2cap_chan_le_send_sdu|function|static int l2cap_chan_le_send_sdu(struct bt_l2cap_le_chan *ch, struct net_buf **buf, int sent)
DECL|l2cap_chan_le_send|function|static int l2cap_chan_le_send(struct bt_l2cap_le_chan *ch, struct net_buf *buf, u16_t sdu_hdr_len)
DECL|l2cap_chan_recv|function|static void l2cap_chan_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_rx_give_credits|function|static void l2cap_chan_rx_give_credits(struct bt_l2cap_le_chan *chan, u16_t credits)
DECL|l2cap_chan_rx_init|function|static void l2cap_chan_rx_init(struct bt_l2cap_le_chan *chan)
DECL|l2cap_chan_send_req|function|static void l2cap_chan_send_req(struct bt_l2cap_le_chan *chan,struct net_buf *buf, s32_t timeout)
DECL|l2cap_chan_tx_give_credits|function|static void l2cap_chan_tx_give_credits(struct bt_l2cap_le_chan *chan, u16_t credits)
DECL|l2cap_chan_tx_init|function|static void l2cap_chan_tx_init(struct bt_l2cap_le_chan *chan)
DECL|l2cap_chan_update_credits|function|static void l2cap_chan_update_credits(struct bt_l2cap_le_chan *chan, struct net_buf *buf)
DECL|l2cap_change_security|function|static int l2cap_change_security(struct bt_l2cap_le_chan *chan, u16_t err)
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_create_le_sig_pdu|function|static struct net_buf *l2cap_create_le_sig_pdu(struct net_buf *buf, u8_t code, u8_t ident, u16_t len)
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_le_conn_req|function|static int l2cap_le_conn_req(struct bt_l2cap_le_chan *ch)
DECL|l2cap_le_connect|function|static int l2cap_le_connect(struct bt_conn *conn, struct bt_l2cap_le_chan *ch, u16_t psm)
DECL|l2cap_le_encrypt_change|function|static void l2cap_le_encrypt_change(struct bt_l2cap_chan *chan, u8_t status)
DECL|l2cap_lookup_ident|macro|l2cap_lookup_ident
DECL|l2cap_recv|function|static void l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_remove_ident|macro|l2cap_remove_ident
DECL|l2cap_remove_tx_cid|function|static struct bt_l2cap_le_chan *l2cap_remove_tx_cid(struct bt_conn *conn, u16_t cid)
DECL|l2cap_rtx_timeout|function|static void l2cap_rtx_timeout(struct k_work *work)
DECL|l2cap_send_reject|function|static void l2cap_send_reject(struct bt_conn *conn, u8_t ident, u16_t reason, void *data, u8_t data_len)
DECL|l2cap_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_server_lookup_psm(u16_t psm)
DECL|le_channels|variable|le_channels
DECL|le_conn_param_rsp|function|static void le_conn_param_rsp(struct bt_l2cap *l2cap, struct net_buf *buf)
DECL|le_conn_param_update_req|function|static void le_conn_param_update_req(struct bt_l2cap *l2cap, u8_t ident, struct net_buf *buf)
DECL|le_conn_req|function|static void le_conn_req(struct bt_l2cap *l2cap, u8_t ident,struct net_buf *buf)
DECL|le_conn_rsp|function|static void le_conn_rsp(struct bt_l2cap *l2cap, u8_t ident,struct net_buf *buf)
DECL|le_credits|function|static void le_credits(struct bt_l2cap *l2cap, u8_t ident, struct net_buf *buf)
DECL|le_disconn_req|function|static void le_disconn_req(struct bt_l2cap *l2cap, u8_t ident, struct net_buf *buf)
DECL|le_disconn_rsp|function|static void le_disconn_rsp(struct bt_l2cap *l2cap, u8_t ident, struct net_buf *buf)
DECL|reject_cmd|function|static void reject_cmd(struct bt_l2cap *l2cap, u8_t ident, struct net_buf *buf)
DECL|servers|variable|servers
