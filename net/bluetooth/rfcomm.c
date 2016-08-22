DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|RFCOMM_CHANNEL_END|macro|RFCOMM_CHANNEL_END
DECL|RFCOMM_CHANNEL_START|macro|RFCOMM_CHANNEL_START
DECL|RFCOMM_DEFAULT_CREDIT|macro|RFCOMM_DEFAULT_CREDIT
DECL|RFCOMM_DEFAULT_MTU|macro|RFCOMM_DEFAULT_MTU
DECL|RFCOMM_MIN_MTU|macro|RFCOMM_MIN_MTU
DECL|RFCOMM_SESSION|macro|RFCOMM_SESSION
DECL|bt_rfcomm_init|function|void bt_rfcomm_init(void)
DECL|bt_rfcomm_pool|variable|bt_rfcomm_pool
DECL|bt_rfcomm_server_register|function|int bt_rfcomm_server_register(struct bt_rfcomm_server *server)
DECL|rfcomm_accept|function|static int rfcomm_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|rfcomm_calc_fcs|function|static uint8_t rfcomm_calc_fcs(uint16_t len, const uint8_t *data)
DECL|rfcomm_check_fcs|function|static bool rfcomm_check_fcs(uint16_t len, const uint8_t *data, uint8_t recvd_fcs)
DECL|rfcomm_connected|function|static void rfcomm_connected(struct bt_l2cap_chan *chan)
DECL|rfcomm_crc_table|variable|rfcomm_crc_table
DECL|rfcomm_disconnected|function|static void rfcomm_disconnected(struct bt_l2cap_chan *chan)
DECL|rfcomm_dlc_accept|function|static int rfcomm_dlc_accept(struct bt_rfcomm_session *session, uint8_t dlci, struct bt_rfcomm_dlc **dlc)
DECL|rfcomm_dlc_connected|function|static void rfcomm_dlc_connected(struct bt_rfcomm_dlc *dlc)
DECL|rfcomm_dlcs_lookup_dlci|function|static struct bt_rfcomm_dlc *rfcomm_dlcs_lookup_dlci(struct bt_rfcomm_dlc *dlcs, uint8_t dlci)
DECL|rfcomm_handle_msc|function|static void rfcomm_handle_msc(struct bt_rfcomm_session *session, struct net_buf *buf, uint8_t cr)
DECL|rfcomm_handle_msg|function|static void rfcomm_handle_msg(struct bt_rfcomm_session *session, struct net_buf *buf)
DECL|rfcomm_handle_pn|function|static void rfcomm_handle_pn(struct bt_rfcomm_session *session, struct net_buf *buf, uint8_t cr)
DECL|rfcomm_handle_sabm|function|static void rfcomm_handle_sabm(struct bt_rfcomm_session *session, uint8_t dlci)
DECL|rfcomm_make_uih_msg|function|static struct net_buf *rfcomm_make_uih_msg(struct bt_rfcomm_dlc *dlc, uint8_t cr, uint8_t type, uint8_t len)
DECL|rfcomm_recv|function|static void rfcomm_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|rfcomm_send_msc|function|static int rfcomm_send_msc(struct bt_rfcomm_dlc *dlc, uint8_t cr)
DECL|rfcomm_send_pn|function|static int rfcomm_send_pn(struct bt_rfcomm_dlc *dlc, uint8_t cr)
DECL|rfcomm_send_ua|function|static int rfcomm_send_ua(struct bt_rfcomm_session *session, uint8_t dlci)
DECL|rfcomm_server_lookup_channel|function|static struct bt_rfcomm_server *rfcomm_server_lookup_channel(uint8_t channel)
DECL|rfcomm_session|variable|rfcomm_session
DECL|servers|variable|servers
