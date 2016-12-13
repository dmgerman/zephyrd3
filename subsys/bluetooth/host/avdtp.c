DECL|AVDTP_CHAN|macro|AVDTP_CHAN
DECL|AVDTP_KWORK|macro|AVDTP_KWORK
DECL|AVDTP_TIMEOUT|macro|AVDTP_TIMEOUT
DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|CONFIG_BLUETOOTH_AVDTP_CONN|macro|CONFIG_BLUETOOTH_AVDTP_CONN
DECL|avdtp_timeout|function|static void avdtp_timeout(struct k_work *work)
DECL|bt_avdtp_connect|function|int bt_avdtp_connect(struct bt_conn *conn, struct bt_avdtp *session)
DECL|bt_avdtp_disconnect|function|int bt_avdtp_disconnect(struct bt_avdtp *session)
DECL|bt_avdtp_init|function|int bt_avdtp_init(void)
DECL|bt_avdtp_l2cap_accept|function|int bt_avdtp_l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_avdtp_l2cap_connected|function|void bt_avdtp_l2cap_connected(struct bt_l2cap_chan *chan)
DECL|bt_avdtp_l2cap_disconnected|function|void bt_avdtp_l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_avdtp_l2cap_encrypt_changed|function|void bt_avdtp_l2cap_encrypt_changed(struct bt_l2cap_chan *chan, uint8_t status)
DECL|bt_avdtp_l2cap_recv|function|void bt_avdtp_l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_avdtp_pool|variable|bt_avdtp_pool
DECL|bt_avdtp_register_sep|function|int bt_avdtp_register_sep(uint8_t media_type, uint8_t role, struct bt_avdtp_seid_lsep *lsep)
DECL|bt_avdtp_register|function|int bt_avdtp_register(struct bt_avdtp_event_cb *cb)
DECL|event_cb|variable|event_cb
DECL|lseps|variable|lseps
