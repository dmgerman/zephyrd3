DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|SDP_CHAN|macro|SDP_CHAN
DECL|SDP_DATA_MTU|macro|SDP_DATA_MTU
DECL|SDP_MTU|macro|SDP_MTU
DECL|SDP_PSM|macro|SDP_PSM
DECL|SDP_SERVICE_HANDLE_BASE|macro|SDP_SERVICE_HANDLE_BASE
DECL|bt_sdp_accept|function|static int bt_sdp_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_sdp_connected|function|static void bt_sdp_connected(struct bt_l2cap_chan *chan)
DECL|bt_sdp_create_pdu|function|struct net_buf *bt_sdp_create_pdu(void)
DECL|bt_sdp_disconnected|function|static void bt_sdp_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_sdp_init|function|void bt_sdp_init(void)
DECL|bt_sdp_pool|variable|bt_sdp_pool
DECL|bt_sdp_recv|function|static void bt_sdp_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_sdp_register_service|function|int bt_sdp_register_service(struct bt_sdp_record *service)
DECL|bt_sdp_send|function|static void bt_sdp_send(struct bt_l2cap_chan *chan, struct net_buf *buf,uint8_t op, uint16_t tid)
DECL|bt_sdp|struct|struct bt_sdp {
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|db|variable|db
DECL|func|member|uint16_t (*func)(struct bt_sdp *sdp, struct net_buf *buf,
DECL|handlers|variable|handlers
DECL|num_services|variable|num_services
DECL|op_code|member|uint8_t op_code;
DECL|partial_resp_queue|member|struct nano_fifo partial_resp_queue;
DECL|sdp_buf|variable|sdp_buf
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_l2cap_chan *chan, uint16_t err, uint16_t tid)
