DECL|AVDTP_CHAN|macro|AVDTP_CHAN
DECL|AVDTP_GET_MSG_TYPE|macro|AVDTP_GET_MSG_TYPE
DECL|AVDTP_GET_PKT_TYPE|macro|AVDTP_GET_PKT_TYPE
DECL|AVDTP_GET_SIG_ID|macro|AVDTP_GET_SIG_ID
DECL|AVDTP_GET_TR_ID|macro|AVDTP_GET_TR_ID
DECL|AVDTP_KWORK|macro|AVDTP_KWORK
DECL|AVDTP_MSG_POISTION|macro|AVDTP_MSG_POISTION
DECL|AVDTP_PKT_POSITION|macro|AVDTP_PKT_POSITION
DECL|AVDTP_SIGID_MASK|macro|AVDTP_SIGID_MASK
DECL|AVDTP_TID_POSITION|macro|AVDTP_TID_POSITION
DECL|AVDTP_TIMEOUT|macro|AVDTP_TIMEOUT
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|avdtp_create_pdu|function|static struct net_buf *avdtp_create_pdu(u8_t msg_type,u8_t pkt_type, u8_t sig_id)
DECL|avdtp_send|function|static int avdtp_send(struct bt_avdtp *session, struct net_buf *buf, struct bt_avdtp_req *req)
DECL|avdtp_timeout|function|static void avdtp_timeout(struct k_work *work)
DECL|bt_avdtp_connect|function|int bt_avdtp_connect(struct bt_conn *conn, struct bt_avdtp *session)
DECL|bt_avdtp_disconnect|function|int bt_avdtp_disconnect(struct bt_avdtp *session)
DECL|bt_avdtp_discover|function|int bt_avdtp_discover(struct bt_avdtp *session, struct bt_avdtp_discover_params *param)
DECL|bt_avdtp_init|function|int bt_avdtp_init(void)
DECL|bt_avdtp_l2cap_accept|function|int bt_avdtp_l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_avdtp_l2cap_connected|function|void bt_avdtp_l2cap_connected(struct bt_l2cap_chan *chan)
DECL|bt_avdtp_l2cap_disconnected|function|void bt_avdtp_l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_avdtp_l2cap_encrypt_changed|function|void bt_avdtp_l2cap_encrypt_changed(struct bt_l2cap_chan *chan, u8_t status)
DECL|bt_avdtp_l2cap_recv|function|int bt_avdtp_l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_avdtp_register_sep|function|int bt_avdtp_register_sep(u8_t media_type, u8_t role, struct bt_avdtp_seid_lsep *lsep)
DECL|bt_avdtp_register|function|int bt_avdtp_register(struct bt_avdtp_event_cb *cb)
DECL|event_cb|variable|event_cb
DECL|func|member|void (*func)(struct bt_avdtp *session, struct net_buf *buf,
DECL|handler|variable|handler
DECL|lseps|variable|lseps
DECL|sig_id|member|u8_t sig_id;
