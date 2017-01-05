DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|GET_PARAM|macro|GET_PARAM
DECL|SDP_CHAN|macro|SDP_CHAN
DECL|SDP_CLIENT_CHAN|macro|SDP_CLIENT_CHAN
DECL|SDP_CLIENT_MTU|macro|SDP_CLIENT_MTU
DECL|SDP_DATA_MTU|macro|SDP_DATA_MTU
DECL|SDP_MTU|macro|SDP_MTU
DECL|SDP_PSM|macro|SDP_PSM
DECL|SDP_SERVICE_HANDLE_BASE|macro|SDP_SERVICE_HANDLE_BASE
DECL|UUID_NOT_RESOLVED|enumerator|UUID_NOT_RESOLVED,
DECL|UUID_RESOLVED|enumerator|UUID_RESOLVED,
DECL|attr_id|member|uint16_t attr_id;
DECL|attr_id|member|uint16_t attr_id;
DECL|bt_sdp_accept|function|static int bt_sdp_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_sdp_attr_item|struct|struct bt_sdp_attr_item {
DECL|bt_sdp_client_pool|variable|bt_sdp_client_pool
DECL|bt_sdp_client|struct|struct bt_sdp_client {
DECL|bt_sdp_connected|function|static void bt_sdp_connected(struct bt_l2cap_chan *chan)
DECL|bt_sdp_create_pdu|function|struct net_buf *bt_sdp_create_pdu(void)
DECL|bt_sdp_disconnected|function|static void bt_sdp_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_sdp_discover|function|int bt_sdp_discover(struct bt_conn *conn, const struct bt_sdp_discover_params *params)
DECL|bt_sdp_get_attr|function|static int bt_sdp_get_attr(const struct net_buf *buf, struct bt_sdp_attr_item *attr, uint16_t attr_id)
DECL|bt_sdp_get_proto_param|function|int bt_sdp_get_proto_param(const struct net_buf *buf, enum bt_sdp_proto proto, uint16_t *param)
DECL|bt_sdp_init|function|void bt_sdp_init(void)
DECL|bt_sdp_pool|variable|bt_sdp_pool
DECL|bt_sdp_recv|function|static void bt_sdp_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_sdp_register_service|function|int bt_sdp_register_service(struct bt_sdp_record *service)
DECL|bt_sdp_send|function|static void bt_sdp_send(struct bt_l2cap_chan *chan, struct net_buf *buf,uint8_t op, uint16_t tid)
DECL|bt_sdp_uuid_desc|struct|struct bt_sdp_uuid_desc {
DECL|bt_sdp|struct|struct bt_sdp {
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|cstate|member|struct bt_sdp_pdu_cstate cstate;
DECL|db|variable|db
DECL|func|member|uint16_t (*func)(struct bt_sdp *sdp, struct net_buf *buf,
DECL|get_record_len|function|static uint16_t get_record_len(struct net_buf *buf)
DECL|handlers|variable|handlers
DECL|len|member|uint16_t len;
DECL|num_services|variable|num_services
DECL|op_code|member|uint8_t op_code;
DECL|params_len|member|uint16_t params_len;
DECL|params|member|uint8_t *params;
DECL|param|member|const struct bt_sdp_discover_params *param;
DECL|partial_resp_queue|member|struct k_fifo partial_resp_queue;
DECL|rec_buf|member|struct net_buf *rec_buf;
DECL|reqs|member|sys_slist_t reqs;
DECL|sdp_client_alloc_buf|function|static struct net_buf *sdp_client_alloc_buf(struct bt_l2cap_chan *chan)
DECL|sdp_client_chan_connect|function|static int sdp_client_chan_connect(struct bt_sdp_client *session)
DECL|sdp_client_chan_ops|variable|sdp_client_chan_ops
DECL|sdp_client_connected|function|static void sdp_client_connected(struct bt_l2cap_chan *chan)
DECL|sdp_client_disconnected|function|static void sdp_client_disconnected(struct bt_l2cap_chan *chan)
DECL|sdp_client_get_session|function|static struct bt_sdp_client *sdp_client_get_session(struct bt_conn *conn)
DECL|sdp_client_get_total|function|static uint16_t sdp_client_get_total(struct bt_sdp_client *session, struct net_buf *buf, uint16_t *total)
DECL|sdp_client_new_session|function|static struct bt_sdp_client *sdp_client_new_session(struct bt_conn *conn)
DECL|sdp_client_notify_result|function|static void sdp_client_notify_result(struct bt_sdp_client *session, enum uuid_state state)
DECL|sdp_client_params_iterator|function|static void sdp_client_params_iterator(struct bt_sdp_client *session)
DECL|sdp_client_receive|function|static void sdp_client_receive(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|sdp_client_ssa_search|function|static int sdp_client_ssa_search(struct bt_sdp_client *session)
DECL|sdp_get_attr_value_len|function|static ssize_t sdp_get_attr_value_len(const uint8_t *data, size_t len)
DECL|sdp_get_int_len|function|static inline ssize_t sdp_get_int_len(const uint8_t *data, size_t len)
DECL|sdp_get_param_item|function|static int sdp_get_param_item(struct bt_sdp_uuid_desc *pd_item, uint16_t *param)
DECL|sdp_get_seq_len_item|function|static ssize_t sdp_get_seq_len_item(uint8_t **data, size_t len)
DECL|sdp_get_seq_len|function|static inline ssize_t sdp_get_seq_len(const uint8_t *data, size_t len)
DECL|sdp_get_str_len|function|static inline ssize_t sdp_get_str_len(const uint8_t *data, size_t len)
DECL|sdp_get_uuid_data|function|static int sdp_get_uuid_data(const struct bt_sdp_attr_item *attr, struct bt_sdp_uuid_desc *pd, uint16_t proto_profile)
DECL|sdp_get_uuid_len|function|static inline ssize_t sdp_get_uuid_len(const uint8_t *data, size_t len)
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_l2cap_chan *chan, uint16_t err, uint16_t tid)
DECL|tid|member|uint16_t tid;
DECL|uuid16|member|struct bt_uuid_16 uuid16;
DECL|uuid32|member|struct bt_uuid_32 uuid32;
DECL|uuid_state|enum|enum uuid_state {
DECL|uuid|member|struct bt_uuid uuid;
DECL|val|member|uint8_t *val;
