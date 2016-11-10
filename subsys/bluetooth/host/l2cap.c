DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_L2CAP_MAX_LE_MPS|macro|BT_L2CAP_MAX_LE_MPS
DECL|BT_L2CAP_MAX_LE_MTU|macro|BT_L2CAP_MAX_LE_MTU
DECL|L2CAP_CONN_TIMEOUT|macro|L2CAP_CONN_TIMEOUT
DECL|L2CAP_DISC_TIMEOUT|macro|L2CAP_DISC_TIMEOUT
DECL|L2CAP_LE_CID_DYN_END|macro|L2CAP_LE_CID_DYN_END
DECL|L2CAP_LE_CID_DYN_START|macro|L2CAP_LE_CID_DYN_START
DECL|L2CAP_LE_CID_IS_DYN|macro|L2CAP_LE_CID_IS_DYN
DECL|L2CAP_LE_CREDITS_THRESHOLD|macro|L2CAP_LE_CREDITS_THRESHOLD
DECL|L2CAP_LE_MAX_CREDITS|macro|L2CAP_LE_MAX_CREDITS
DECL|L2CAP_LE_MIN_MTU|macro|L2CAP_LE_MIN_MTU
DECL|L2CAP_LE_PSM_END|macro|L2CAP_LE_PSM_END
DECL|L2CAP_LE_PSM_START|macro|L2CAP_LE_PSM_START
DECL|LE_CHAN_RTX|macro|LE_CHAN_RTX
DECL|__l2cap_chan|function|static struct bt_l2cap_le_chan *__l2cap_chan(struct bt_conn *conn, struct bt_l2cap_chan *ch, enum l2cap_conn_list_action action)
DECL|__l2cap_lookup_ident|function|__l2cap_lookup_ident(struct bt_conn *conn, uint16_t ident, bool remove)
DECL|bt_l2cap_chan_add|function|void bt_l2cap_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan, bt_l2cap_chan_destroy_t destroy)
DECL|bt_l2cap_chan_connect|function|int bt_l2cap_chan_connect(struct bt_conn *conn, struct bt_l2cap_chan *chan, uint16_t psm)
DECL|bt_l2cap_chan_del|function|void bt_l2cap_chan_del(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_chan_disconnect|function|int bt_l2cap_chan_disconnect(struct bt_l2cap_chan *chan)
DECL|bt_l2cap_chan_send|function|int bt_l2cap_chan_send(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_l2cap_chan_set_state_debug|function|void bt_l2cap_chan_set_state_debug(struct bt_l2cap_chan *chan, bt_l2cap_chan_state_t state, const char *func, int line)
DECL|bt_l2cap_chan_set_state|function|void bt_l2cap_chan_set_state(struct bt_l2cap_chan *chan, bt_l2cap_chan_state_t state)
DECL|bt_l2cap_chan_state_str|function|const char *bt_l2cap_chan_state_str(bt_l2cap_chan_state_t state)
DECL|bt_l2cap_connected|function|void bt_l2cap_connected(struct bt_conn *conn)
DECL|bt_l2cap_create_pdu|function|struct net_buf *bt_l2cap_create_pdu(struct k_fifo *fifo, size_t reserve)
DECL|bt_l2cap_disconnected|function|void bt_l2cap_disconnected(struct bt_conn *conn)
DECL|bt_l2cap_encrypt_change|function|void bt_l2cap_encrypt_change(struct bt_conn *conn, uint8_t hci_status)
DECL|bt_l2cap_init|function|void bt_l2cap_init(void)
DECL|bt_l2cap_le_fixed_chan_register|function|void bt_l2cap_le_fixed_chan_register(struct bt_l2cap_fixed_chan *chan)
DECL|bt_l2cap_le_lookup_rx_cid|function|struct bt_l2cap_chan *bt_l2cap_le_lookup_rx_cid(struct bt_conn *conn,uint16_t cid)
DECL|bt_l2cap_le_lookup_tx_cid|function|struct bt_l2cap_chan *bt_l2cap_le_lookup_tx_cid(struct bt_conn *conn,uint16_t cid)
DECL|bt_l2cap_pool|variable|bt_l2cap_pool
DECL|bt_l2cap_recv|function|void bt_l2cap_recv(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_l2cap_send|function|void bt_l2cap_send(struct bt_conn *conn, uint16_t cid, struct net_buf *buf)
DECL|bt_l2cap_server_register|function|int bt_l2cap_server_register(struct bt_l2cap_server *server)
DECL|bt_l2cap_update_conn_param|function|int bt_l2cap_update_conn_param(struct bt_conn *conn, const struct bt_le_conn_param *param)
DECL|bt_l2cap|struct|struct bt_l2cap {
DECL|chan|member|struct bt_l2cap_le_chan chan;
DECL|get_ident|function|static uint8_t get_ident(void)
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_alloc_frag|function|static struct net_buf *l2cap_alloc_frag(struct bt_l2cap_le_chan *chan)
DECL|l2cap_chan_add|function|static bool l2cap_chan_add(struct bt_conn *conn, struct bt_l2cap_chan *chan, bt_l2cap_chan_destroy_t destroy)
DECL|l2cap_chan_alloc_cid|function|static struct bt_l2cap_le_chan *l2cap_chan_alloc_cid(struct bt_conn *conn, struct bt_l2cap_chan *chan)
DECL|l2cap_chan_create_seg|function|static struct net_buf *l2cap_chan_create_seg(struct bt_l2cap_le_chan *ch, struct net_buf *buf, size_t sdu_hdr_len)
DECL|l2cap_chan_destroy|function|static void l2cap_chan_destroy(struct bt_l2cap_chan *chan)
DECL|l2cap_chan_le_recv_sdu|function|static void l2cap_chan_le_recv_sdu(struct bt_l2cap_le_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_le_recv|function|static void l2cap_chan_le_recv(struct bt_l2cap_le_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_le_send_sdu|function|static int l2cap_chan_le_send_sdu(struct bt_l2cap_le_chan *ch, struct net_buf *buf)
DECL|l2cap_chan_le_send|function|static int l2cap_chan_le_send(struct bt_l2cap_le_chan *ch, struct net_buf *buf, uint16_t sdu_hdr_len)
DECL|l2cap_chan_recv|function|static void l2cap_chan_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_chan_rx_give_credits|function|static void l2cap_chan_rx_give_credits(struct bt_l2cap_le_chan *chan, uint16_t credits)
DECL|l2cap_chan_rx_init|function|static void l2cap_chan_rx_init(struct bt_l2cap_le_chan *chan)
DECL|l2cap_chan_send_req|function|static void l2cap_chan_send_req(struct bt_l2cap_le_chan *chan,struct net_buf *buf, uint32_t ticks)
DECL|l2cap_chan_tx_give_credits|function|static void l2cap_chan_tx_give_credits(struct bt_l2cap_le_chan *chan, uint16_t credits)
DECL|l2cap_chan_tx_init|function|static void l2cap_chan_tx_init(struct bt_l2cap_le_chan *chan)
DECL|l2cap_chan_update_credits|function|static void l2cap_chan_update_credits(struct bt_l2cap_le_chan *chan)
DECL|l2cap_change_security|function|static int l2cap_change_security(struct bt_l2cap_le_chan *chan, uint16_t err)
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_create_le_sig_pdu|function|static struct net_buf *l2cap_create_le_sig_pdu(uint8_t code, uint8_t ident, uint16_t len)
DECL|l2cap_detach_chan|macro|l2cap_detach_chan
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_le_conn_req|function|static int l2cap_le_conn_req(struct bt_l2cap_le_chan *ch)
DECL|l2cap_le_connect|function|static int l2cap_le_connect(struct bt_conn *conn, struct bt_l2cap_le_chan *ch, uint16_t psm)
DECL|l2cap_le_encrypt_change|function|static void l2cap_le_encrypt_change(struct bt_l2cap_chan *chan, uint8_t status)
DECL|l2cap_lookup_chan|macro|l2cap_lookup_chan
DECL|l2cap_lookup_ident|macro|l2cap_lookup_ident
DECL|l2cap_recv|function|static void l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_remove_ident|macro|l2cap_remove_ident
DECL|l2cap_remove_tx_cid|function|static struct bt_l2cap_le_chan *l2cap_remove_tx_cid(struct bt_conn *conn, uint16_t cid)
DECL|l2cap_rtx_timeout|function|static void l2cap_rtx_timeout(struct nano_work *work)
DECL|l2cap_send_reject|function|static void l2cap_send_reject(struct bt_conn *conn, uint8_t ident, uint16_t reason, void *data, uint8_t data_len)
DECL|l2cap_server_lookup_psm|function|static struct bt_l2cap_server *l2cap_server_lookup_psm(uint16_t psm)
DECL|le_channels|variable|le_channels
DECL|le_conn_param_rsp|function|static void le_conn_param_rsp(struct bt_l2cap *l2cap, struct net_buf *buf)
DECL|le_conn_param_update_req|function|static void le_conn_param_update_req(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|le_conn_req|function|static void le_conn_req(struct bt_l2cap *l2cap, uint8_t ident,struct net_buf *buf)
DECL|le_conn_rsp|function|static void le_conn_rsp(struct bt_l2cap *l2cap, uint8_t ident,struct net_buf *buf)
DECL|le_credits|function|static void le_credits(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|le_data|variable|le_data
DECL|le_disconn_req|function|static void le_disconn_req(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|le_disconn_rsp|function|static void le_disconn_rsp(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|le_sig|variable|le_sig
DECL|reject_cmd|function|static void reject_cmd(struct bt_l2cap *l2cap, uint8_t ident, struct net_buf *buf)
DECL|servers|variable|servers
