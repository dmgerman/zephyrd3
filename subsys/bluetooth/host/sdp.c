DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|BT_SDP_ITER_CONTINUE|enumerator|BT_SDP_ITER_CONTINUE,
DECL|BT_SDP_ITER_STOP|enumerator|BT_SDP_ITER_STOP,
DECL|GET_PARAM|macro|GET_PARAM
DECL|IN_RANGE|macro|IN_RANGE
DECL|MAX_NUM_ATT_ID_FILTER|macro|MAX_NUM_ATT_ID_FILTER
DECL|SDP_CHAN|macro|SDP_CHAN
DECL|SDP_CLIENT_CHAN|macro|SDP_CLIENT_CHAN
DECL|SDP_CLIENT_MTU|macro|SDP_CLIENT_MTU
DECL|SDP_CONT_STATE_LEN_SIZE|macro|SDP_CONT_STATE_LEN_SIZE
DECL|SDP_DATA_ELEM_NEST_LEVEL_MAX|macro|SDP_DATA_ELEM_NEST_LEVEL_MAX
DECL|SDP_DATA_MTU|macro|SDP_DATA_MTU
DECL|SDP_INVALID|macro|SDP_INVALID
DECL|SDP_MTU|macro|SDP_MTU
DECL|SDP_PSM|macro|SDP_PSM
DECL|SDP_SA_CONT_STATE_SIZE|macro|SDP_SA_CONT_STATE_SIZE
DECL|SDP_SERVICE_HANDLE_BASE|macro|SDP_SERVICE_HANDLE_BASE
DECL|SDP_SSA_CONT_STATE_SIZE|macro|SDP_SSA_CONT_STATE_SIZE
DECL|SDP_SS_CONT_STATE_SIZE|macro|SDP_SS_CONT_STATE_SIZE
DECL|UUID_NOT_RESOLVED|enumerator|UUID_NOT_RESOLVED,
DECL|UUID_RESOLVED|enumerator|UUID_RESOLVED,
DECL|att_list_len|member|u16_t att_list_len;
DECL|att_list_size|member|u16_t att_list_size;
DECL|attr_id|member|u16_t attr_id;
DECL|attr_id|member|u16_t attr_id;
DECL|bt_sdp_accept|function|static int bt_sdp_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_sdp_attr_func_t|typedef|typedef u8_t (*bt_sdp_attr_func_t)(struct bt_sdp_attribute *attr,
DECL|bt_sdp_attr_item|struct|struct bt_sdp_attr_item {
DECL|bt_sdp_client_pool|variable|bt_sdp_client_pool
DECL|bt_sdp_client|struct|struct bt_sdp_client {
DECL|bt_sdp_connected|function|static void bt_sdp_connected(struct bt_l2cap_chan *chan)
DECL|bt_sdp_create_pdu|function|static struct net_buf *bt_sdp_create_pdu(void)
DECL|bt_sdp_disconnected|function|static void bt_sdp_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_sdp_discover|function|int bt_sdp_discover(struct bt_conn *conn, const struct bt_sdp_discover_params *params)
DECL|bt_sdp_foreach_attr|function|static u8_t bt_sdp_foreach_attr(struct bt_sdp_record *record, u8_t idx,bt_sdp_attr_func_t func, void *user_data)
DECL|bt_sdp_foreach_svc|function|static struct bt_sdp_record *bt_sdp_foreach_svc(bt_sdp_svc_func_t func,void *user_data)
DECL|bt_sdp_get_attr|function|static int bt_sdp_get_attr(const struct net_buf *buf, struct bt_sdp_attr_item *attr, u16_t attr_id)
DECL|bt_sdp_get_features|function|int bt_sdp_get_features(const struct net_buf *buf, u16_t *features)
DECL|bt_sdp_get_profile_version|function|int bt_sdp_get_profile_version(const struct net_buf *buf, u16_t profile, u16_t *version)
DECL|bt_sdp_get_proto_param|function|int bt_sdp_get_proto_param(const struct net_buf *buf, enum bt_sdp_proto proto, u16_t *param)
DECL|bt_sdp_init|function|void bt_sdp_init(void)
DECL|bt_sdp_pool|variable|bt_sdp_pool
DECL|bt_sdp_recv|function|static int bt_sdp_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_sdp_register_service|function|int bt_sdp_register_service(struct bt_sdp_record *service)
DECL|bt_sdp_send|function|static void bt_sdp_send(struct bt_l2cap_chan *chan, struct net_buf *buf,u8_t op, u16_t tid)
DECL|bt_sdp_svc_func_t|typedef|typedef u8_t (*bt_sdp_svc_func_t)(struct bt_sdp_record *rec,
DECL|bt_sdp_uuid_desc|struct|struct bt_sdp_uuid_desc {
DECL|bt_sdp|struct|struct bt_sdp {
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|chan|member|struct bt_l2cap_br_chan chan;
DECL|cont_state_size|member|u8_t cont_state_size;
DECL|copy_attribute|function|static u32_t copy_attribute(struct bt_sdp_data_elem *elem, struct net_buf *buf, u8_t nest_level)
DECL|create_attr_list|function|static u16_t create_attr_list(struct bt_sdp *sdp, struct bt_sdp_record *record, u32_t *filter, u8_t num_filters, u16_t max_att_len, u8_t cont_state_size, u8_t next_att, struct search_state *state, struct net_buf *rsp_buf)
DECL|cstate|member|struct bt_sdp_pdu_cstate cstate;
DECL|current_svc|member|u8_t current_svc;
DECL|db|variable|db
DECL|filter|member|u32_t *filter;
DECL|find_handle|function|static u8_t find_handle(struct bt_sdp_record *rec, void *user_data)
DECL|find_services|function|static u16_t find_services(struct net_buf *buf, struct bt_sdp_record **matching_recs)
DECL|func|member|u16_t (*func)(struct bt_sdp *sdp, struct net_buf *buf, u16_t tid);
DECL|get_att_search_list|function|static u16_t get_att_search_list(struct net_buf *buf, u32_t *filter, u8_t *num_filters)
DECL|get_record_len|function|static u16_t get_record_len(struct net_buf *buf)
DECL|handlers|variable|handlers
DECL|insert_record|function|static u8_t insert_record(struct bt_sdp_record *rec, void *user_data)
DECL|last_att|member|u8_t last_att;
DECL|len|member|u16_t len;
DECL|max_att_len|member|u16_t max_att_len;
DECL|new_service|member|bool new_service;
DECL|num_filters|member|u8_t num_filters;
DECL|num_services|variable|num_services
DECL|op_code|member|u8_t op_code;
DECL|params_len|member|u16_t params_len;
DECL|params|member|u8_t *params;
DECL|param|member|const struct bt_sdp_discover_params *param;
DECL|parse_data_elem|function|static u16_t parse_data_elem(struct net_buf *buf,struct bt_sdp_data_elem *data_elem)
DECL|partial_resp_queue|member|struct k_fifo partial_resp_queue;
DECL|pkt_full|member|bool pkt_full;
DECL|rec_buf|member|struct net_buf *rec_buf;
DECL|rec|member|struct bt_sdp_record *rec;
DECL|reqs|member|sys_slist_t reqs;
DECL|rsp_buf|member|struct net_buf *rsp_buf;
DECL|sdp_client_alloc_buf|function|static struct net_buf *sdp_client_alloc_buf(struct bt_l2cap_chan *chan)
DECL|sdp_client_chan_connect|function|static int sdp_client_chan_connect(struct bt_sdp_client *session)
DECL|sdp_client_chan_ops|variable|sdp_client_chan_ops
DECL|sdp_client_connected|function|static void sdp_client_connected(struct bt_l2cap_chan *chan)
DECL|sdp_client_disconnected|function|static void sdp_client_disconnected(struct bt_l2cap_chan *chan)
DECL|sdp_client_get_session|function|static struct bt_sdp_client *sdp_client_get_session(struct bt_conn *conn)
DECL|sdp_client_get_total|function|static u16_t sdp_client_get_total(struct bt_sdp_client *session, struct net_buf *buf, u16_t *total)
DECL|sdp_client_new_session|function|static struct bt_sdp_client *sdp_client_new_session(struct bt_conn *conn)
DECL|sdp_client_notify_result|function|static void sdp_client_notify_result(struct bt_sdp_client *session, enum uuid_state state)
DECL|sdp_client_params_iterator|function|static void sdp_client_params_iterator(struct bt_sdp_client *session)
DECL|sdp_client_receive|function|static int sdp_client_receive(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|sdp_client_ssa_search|function|static int sdp_client_ssa_search(struct bt_sdp_client *session)
DECL|sdp_get_attr_value_len|function|static ssize_t sdp_get_attr_value_len(const u8_t *data, size_t len)
DECL|sdp_get_int_len|function|static inline ssize_t sdp_get_int_len(const u8_t *data, size_t len)
DECL|sdp_get_param_item|function|static int sdp_get_param_item(struct bt_sdp_uuid_desc *pd_item, u16_t *param)
DECL|sdp_get_seq_len_item|function|static ssize_t sdp_get_seq_len_item(u8_t **data, size_t len)
DECL|sdp_get_seq_len|function|static inline ssize_t sdp_get_seq_len(const u8_t *data, size_t len)
DECL|sdp_get_str_len|function|static inline ssize_t sdp_get_str_len(const u8_t *data, size_t len)
DECL|sdp_get_uuid_data|function|static int sdp_get_uuid_data(const struct bt_sdp_attr_item *attr, struct bt_sdp_uuid_desc *pd, u16_t proto_profile)
DECL|sdp_get_uuid_len|function|static inline ssize_t sdp_get_uuid_len(const u8_t *data, size_t len)
DECL|sdp_svc_att_req|function|static u16_t sdp_svc_att_req(struct bt_sdp *sdp, struct net_buf *buf, u16_t tid)
DECL|sdp_svc_search_att_req|function|static u16_t sdp_svc_search_att_req(struct bt_sdp *sdp, struct net_buf *buf, u16_t tid)
DECL|sdp_svc_search_req|function|static u16_t sdp_svc_search_req(struct bt_sdp *sdp, struct net_buf *buf,u16_t tid)
DECL|sdp|member|struct bt_sdp *sdp;
DECL|search_state|struct|struct search_state {
DECL|search_uuid|function|static u32_t search_uuid(struct bt_sdp_data_elem *elem, struct bt_uuid *uuid, bool *found, u8_t nest_level)
DECL|select_attrs_data|struct|struct select_attrs_data {
DECL|select_attrs|function|static u8_t select_attrs(struct bt_sdp_attribute *attr, u8_t att_idx, void *user_data)
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_l2cap_chan *chan, u16_t err, u16_t tid)
DECL|seq|member|struct bt_sdp_data_elem_seq *seq;
DECL|state|member|struct search_state *state;
DECL|tid|member|u16_t tid;
DECL|uuid16|member|struct bt_uuid_16 uuid16;
DECL|uuid32|member|struct bt_uuid_32 uuid32;
DECL|uuid_state|enum|enum uuid_state {
DECL|uuid|member|struct bt_uuid uuid;
DECL|val|member|u8_t *val;
