DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|RFCOMM_CHANNEL_END|macro|RFCOMM_CHANNEL_END
DECL|RFCOMM_CHANNEL_START|macro|RFCOMM_CHANNEL_START
DECL|RFCOMM_DEFAULT_MTU|macro|RFCOMM_DEFAULT_MTU
DECL|RFCOMM_MIN_MTU|macro|RFCOMM_MIN_MTU
DECL|RFCOMM_SESSION|macro|RFCOMM_SESSION
DECL|bt_rfcomm_init|function|void bt_rfcomm_init(void)
DECL|bt_rfcomm_pool|variable|bt_rfcomm_pool
DECL|bt_rfcomm_server_register|function|int bt_rfcomm_server_register(struct bt_rfcomm_server *server)
DECL|rfcomm_accept|function|static int rfcomm_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|rfcomm_connected|function|static void rfcomm_connected(struct bt_l2cap_chan *chan)
DECL|rfcomm_disconnected|function|static void rfcomm_disconnected(struct bt_l2cap_chan *chan)
DECL|rfcomm_recv|function|static void rfcomm_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|rfcomm_server_lookup_channel|function|static struct bt_rfcomm_server *rfcomm_server_lookup_channel(uint8_t channel)
DECL|rfcomm_session|variable|rfcomm_session
DECL|servers|variable|servers
