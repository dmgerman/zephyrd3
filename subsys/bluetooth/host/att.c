DECL|ATT_CHAN|macro|ATT_CHAN
DECL|ATT_CMD_MASK|macro|ATT_CMD_MASK
DECL|ATT_COMMAND|enumerator|ATT_COMMAND,
DECL|ATT_CONFIRMATION|enumerator|ATT_CONFIRMATION,
DECL|ATT_DISCONNECTED|enumerator|ATT_DISCONNECTED,
DECL|ATT_INDICATION|enumerator|ATT_INDICATION,
DECL|ATT_NOTIFICATION|enumerator|ATT_NOTIFICATION,
DECL|ATT_NUM_FLAGS|enumerator|ATT_NUM_FLAGS,
DECL|ATT_PENDING_CFM|enumerator|ATT_PENDING_CFM,
DECL|ATT_PENDING_RSP|enumerator|ATT_PENDING_RSP,
DECL|ATT_REQUEST|enumerator|ATT_REQUEST,
DECL|ATT_REQ|macro|ATT_REQ
DECL|ATT_RESPONSE|enumerator|ATT_RESPONSE,
DECL|ATT_TIMEOUT|macro|ATT_TIMEOUT
DECL|ATT_UNKNOWN|enumerator|ATT_UNKNOWN,
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|BT_GATT_PERM_AUTHEN_MASK|macro|BT_GATT_PERM_AUTHEN_MASK
DECL|BT_GATT_PERM_ENCRYPT_MASK|macro|BT_GATT_PERM_ENCRYPT_MASK
DECL|BT_GATT_PERM_READ_MASK|macro|BT_GATT_PERM_READ_MASK
DECL|BT_GATT_PERM_WRITE_MASK|macro|BT_GATT_PERM_WRITE_MASK
DECL|__packed|enum|typedef enum __packed {
DECL|att_cb|function|static bt_conn_tx_cb_t att_cb(struct net_buf *buf)
DECL|att_cfm_sent|function|static void att_cfm_sent(struct bt_conn *conn)
DECL|att_chan_get|function|static struct bt_att *att_chan_get(struct bt_conn *conn)
DECL|att_change_security|function|static int att_change_security(struct bt_conn *conn, u8_t err)
DECL|att_confirm|function|static u8_t att_confirm(struct bt_att *att, struct net_buf *buf)
DECL|att_error_rsp|function|static u8_t att_error_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_exec_write_req|function|static u8_t att_exec_write_req(struct bt_att *att, struct net_buf *buf)
DECL|att_exec_write_rsp|function|static u8_t att_exec_write_rsp(struct bt_att *att, u8_t flags)
DECL|att_find_info_req|function|static u8_t att_find_info_req(struct bt_att *att, struct net_buf *buf)
DECL|att_find_info_rsp|function|static u8_t att_find_info_rsp(struct bt_att *att, u16_t start_handle, u16_t end_handle)
DECL|att_find_type_req|function|static u8_t att_find_type_req(struct bt_att *att, struct net_buf *buf)
DECL|att_find_type_rsp|function|static u8_t att_find_type_rsp(struct bt_att *att, u16_t start_handle, u16_t end_handle, const void *value, u8_t value_len)
DECL|att_get|function|static struct bt_att *att_get(struct bt_conn *conn)
DECL|att_handle_exec_write_rsp|function|static u8_t att_handle_exec_write_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_find_info_rsp|function|static u8_t att_handle_find_info_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_find_type_rsp|function|static u8_t att_handle_find_type_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_prepare_write_rsp|function|static u8_t att_handle_prepare_write_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_read_blob_rsp|function|static u8_t att_handle_read_blob_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_read_group_rsp|function|static u8_t att_handle_read_group_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_read_mult_rsp|function|static u8_t att_handle_read_mult_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_read_rsp|function|static u8_t att_handle_read_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_read_type_rsp|function|static u8_t att_handle_read_type_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handle_rsp|function|static u8_t att_handle_rsp(struct bt_att *att, void *pdu, u16_t len, u8_t err)
DECL|att_handle_write_rsp|function|static u8_t att_handle_write_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_handler|struct|static const struct att_handler {
DECL|att_indicate|function|static u8_t att_indicate(struct bt_att *att, struct net_buf *buf)
DECL|att_is_connected|function|static inline bool att_is_connected(struct bt_att *att)
DECL|att_mtu_req|function|static u8_t att_mtu_req(struct bt_att *att, struct net_buf *buf)
DECL|att_mtu_rsp|function|static u8_t att_mtu_rsp(struct bt_att *att, struct net_buf *buf)
DECL|att_notify|function|static u8_t att_notify(struct bt_att *att, struct net_buf *buf)
DECL|att_op_get_type|function|static att_type_t att_op_get_type(u8_t op)
DECL|att_pdu_sent|function|static void att_pdu_sent(struct bt_conn *conn)
DECL|att_prep_write_rsp|function|static u8_t att_prep_write_rsp(struct bt_att *att, u16_t handle, u16_t offset, const void *value, u8_t len)
DECL|att_prepare_write_req|function|static u8_t att_prepare_write_req(struct bt_att *att, struct net_buf *buf)
DECL|att_process|function|static void att_process(struct bt_att *att)
DECL|att_read_blob_req|function|static u8_t att_read_blob_req(struct bt_att *att, struct net_buf *buf)
DECL|att_read_group_req|function|static u8_t att_read_group_req(struct bt_att *att, struct net_buf *buf)
DECL|att_read_group_rsp|function|static u8_t att_read_group_rsp(struct bt_att *att, struct bt_uuid *uuid, u16_t start_handle, u16_t end_handle)
DECL|att_read_mult_req|function|static u8_t att_read_mult_req(struct bt_att *att, struct net_buf *buf)
DECL|att_read_req|function|static u8_t att_read_req(struct bt_att *att, struct net_buf *buf)
DECL|att_read_rsp|function|static u8_t att_read_rsp(struct bt_att *att, u8_t op, u8_t rsp, u16_t handle, u16_t offset)
DECL|att_read_type_req|function|static u8_t att_read_type_req(struct bt_att *att, struct net_buf *buf)
DECL|att_read_type_rsp|function|static u8_t att_read_type_rsp(struct bt_att *att, struct bt_uuid *uuid, u16_t start_handle, u16_t end_handle)
DECL|att_req_destroy|function|static void att_req_destroy(struct bt_att_req *req)
DECL|att_req_sent|function|static void att_req_sent(struct bt_conn *conn)
DECL|att_reset|function|static void att_reset(struct bt_att *att)
DECL|att_rsp_sent|function|static void att_rsp_sent(struct bt_conn *conn)
DECL|att_send_req|function|static int att_send_req(struct bt_att *att, struct bt_att_req *req)
DECL|att_signed_write_cmd|function|static u8_t att_signed_write_cmd(struct bt_att *att, struct net_buf *buf)
DECL|att_timeout|function|static void att_timeout(struct k_work *work)
DECL|att_type_t|typedef|} att_type_t;
DECL|att_write_cmd|function|static u8_t att_write_cmd(struct bt_att *att, struct net_buf *buf)
DECL|att_write_req|function|static u8_t att_write_req(struct bt_att *att, struct net_buf *buf)
DECL|att_write_rsp|function|static u8_t att_write_rsp(struct bt_conn *conn, u8_t op, u8_t rsp, u16_t handle, u16_t offset, const void *value, u8_t len)
DECL|att|member|struct bt_att *att;
DECL|att|member|struct bt_att *att;
DECL|att|member|struct bt_att *att;
DECL|att|member|struct bt_att *att;
DECL|att|member|struct bt_att *att;
DECL|bt_att_accept|function|static int bt_att_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|bt_att_connected|function|static void bt_att_connected(struct bt_l2cap_chan *chan)
DECL|bt_att_create_pdu|function|struct net_buf *bt_att_create_pdu(struct bt_conn *conn, u8_t op, size_t len)
DECL|bt_att_disconnected|function|static void bt_att_disconnected(struct bt_l2cap_chan *chan)
DECL|bt_att_encrypt_change|function|static void bt_att_encrypt_change(struct bt_l2cap_chan *chan, u8_t hci_status)
DECL|bt_att_get_mtu|function|u16_t bt_att_get_mtu(struct bt_conn *conn)
DECL|bt_att_init|function|void bt_att_init(void)
DECL|bt_att_recv|function|static int bt_att_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|bt_att_req_cancel|function|void bt_att_req_cancel(struct bt_conn *conn, struct bt_att_req *req)
DECL|bt_att_req_send|function|int bt_att_req_send(struct bt_conn *conn, struct bt_att_req *req)
DECL|bt_att_send|function|int bt_att_send(struct bt_conn *conn, struct net_buf *buf)
DECL|bt_attr_data|struct|struct bt_attr_data {
DECL|bt_att|struct|struct bt_att {
DECL|bt_req_pool|variable|bt_req_pool
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|chan|member|struct bt_l2cap_le_chan chan;
DECL|check_perm|function|static u8_t check_perm(struct bt_conn *conn, const struct bt_gatt_attr *attr, u8_t mask)
DECL|conn|member|struct bt_conn *conn;
DECL|conn|member|struct bt_conn *conn;
DECL|err_to_att|function|static u8_t err_to_att(int err)
DECL|err|member|u8_t err;
DECL|err|member|u8_t err;
DECL|err|member|u8_t err;
DECL|err|member|u8_t err;
DECL|err|member|u8_t err;
DECL|expect_len|member|u8_t expect_len;
DECL|find_info_cb|function|static u8_t find_info_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|find_info_data|struct|struct find_info_data {
DECL|find_type_cb|function|static u8_t find_type_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|find_type_data|struct|struct find_type_data {
DECL|func|member|u8_t (*func)(struct bt_att *att, struct net_buf *buf);
DECL|group|member|struct bt_att_group_data *group;
DECL|group|member|struct bt_att_handle_group *group;
DECL|handlers|variable|handlers
DECL|handle|member|u16_t handle;
DECL|info128|member|struct bt_att_info_128 *info128;
DECL|info16|member|struct bt_att_info_16 *info16;
DECL|item|member|struct bt_att_data *item;
DECL|len|member|u8_t len;
DECL|len|member|u8_t len;
DECL|offset|member|u16_t offset;
DECL|offset|member|u16_t offset;
DECL|offset|member|u16_t offset;
DECL|offset|member|u16_t offset;
DECL|op|member|u8_t op;
DECL|op|member|u8_t op;
DECL|prep_data|struct|struct prep_data {
DECL|prep_queue|member|struct k_fifo prep_queue;
DECL|prep_write_cb|function|static u8_t prep_write_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|range_is_valid|function|static bool range_is_valid(u16_t start, u16_t end, u16_t *err)
DECL|read_cb|function|static u8_t read_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|read_data|struct|struct read_data {
DECL|read_group_cb|function|static u8_t read_group_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|read_group_data|struct|struct read_group_data {
DECL|read_type_cb|function|static u8_t read_type_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|read_type_data|struct|struct read_type_data {
DECL|reqs|member|sys_slist_t reqs;
DECL|req|member|struct bt_att_req *req;
DECL|rsp|member|struct bt_att_find_info_rsp *rsp;
DECL|rsp|member|struct bt_att_read_group_rsp *rsp;
DECL|rsp|member|struct bt_att_read_rsp *rsp;
DECL|rsp|member|struct bt_att_read_type_rsp *rsp;
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_conn *conn, u8_t req, u16_t handle, u8_t err)
DECL|timeout_work|member|struct k_delayed_work timeout_work;
DECL|tx_sem|member|struct k_sem tx_sem;
DECL|type|member|att_type_t type;
DECL|uuid_create|function|static bool uuid_create(struct bt_uuid *uuid, struct net_buf *buf)
DECL|uuid|member|struct bt_uuid *uuid;
DECL|uuid|member|struct bt_uuid *uuid;
DECL|value_len|member|u8_t value_len;
DECL|value|member|const void *value;
DECL|value|member|const void *value;
DECL|value|member|const void *value;
DECL|write_cb|function|static u8_t write_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|write_data|struct|struct write_data {
