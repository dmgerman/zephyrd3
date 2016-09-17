DECL|CHANNELS|macro|CHANNELS
DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|DATA_MTU|macro|DATA_MTU
DECL|SERVERS|macro|SERVERS
DECL|accept|function|static int accept(struct bt_conn *conn, struct bt_l2cap_chan **l2cap_chan)
DECL|alloc_buf_cb|function|static struct net_buf *alloc_buf_cb(struct bt_l2cap_chan *chan)
DECL|chan_id|member|uint8_t chan_id; /* Internal number that identifies L2CAP channel. */
DECL|channels|variable|channels
DECL|channel|struct|static struct channel {
DECL|connected_cb|function|static void connected_cb(struct bt_l2cap_chan *l2cap_chan)
DECL|connect|function|static void connect(uint8_t *data, uint16_t len)
DECL|data_fifo|variable|data_fifo
DECL|disconnected_cb|function|static void disconnected_cb(struct bt_l2cap_chan *l2cap_chan)
DECL|disconnect|function|static void disconnect(uint8_t *data, uint16_t len)
DECL|get_free_channel|function|static struct channel *get_free_channel()
DECL|get_free_server|function|static struct bt_l2cap_server *get_free_server(void)
DECL|is_free_psm|function|static bool is_free_psm(uint16_t psm)
DECL|l2cap_ops|variable|l2cap_ops
DECL|le|member|struct bt_l2cap_le_chan le;
DECL|listen|function|static void listen(uint8_t *data, uint16_t len)
DECL|recv_cb_buf|variable|recv_cb_buf
DECL|recv_cb|function|static void recv_cb(struct bt_l2cap_chan *l2cap_chan, struct net_buf *buf)
DECL|send_data|function|static void send_data(uint8_t *data, uint16_t len)
DECL|servers|variable|servers
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|tester_handle_l2cap|function|void tester_handle_l2cap(uint8_t opcode, uint8_t index, uint8_t *data, uint16_t len)
DECL|tester_init_l2cap|function|uint8_t tester_init_l2cap(void)
