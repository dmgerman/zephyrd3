DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|att_exec_write_req|function|static void att_exec_write_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_find_info_req|function|static void att_find_info_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_find_type_req|function|static void att_find_type_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_mtu_req|function|static void att_mtu_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_prepare_write_req|function|static void att_prepare_write_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_blob_req|function|static void att_read_blob_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_group_req|function|static void att_read_group_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_group_rsp|function|static void att_read_group_rsp(struct bt_conn *conn, struct bt_uuid *uuid, uint16_t start_handle, uint16_t end_handle)
DECL|att_read_mult_req|function|static void att_read_mult_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_req|function|static void att_read_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_type_req|function|static void att_read_type_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_signed_write_cmd|function|static void att_signed_write_cmd(struct bt_conn *conn, struct bt_buf *data)
DECL|att_write_cmd|function|static void att_write_cmd(struct bt_conn *conn, struct bt_buf *data)
DECL|att_write_req|function|static void att_write_req(struct bt_conn *conn, struct bt_buf *data)
DECL|bt_att_connected|function|static void bt_att_connected(struct bt_conn *conn)
DECL|bt_att_create_pdu|function|struct bt_buf *bt_att_create_pdu(struct bt_conn *conn, uint8_t op, size_t len)
DECL|bt_att_disconnected|function|static void bt_att_disconnected(struct bt_conn *conn)
DECL|bt_att_init|function|void bt_att_init(void)
DECL|bt_att_pool|variable|bt_att_pool
DECL|bt_att_recv|function|static void bt_att_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|bt_att|struct|struct bt_att {
DECL|buf|member|struct bt_buf *buf;
DECL|conn|member|struct bt_conn *conn;
DECL|conn|member|struct bt_conn *conn;
DECL|group|member|struct bt_att_group_data *group;
DECL|mtu|member|uint16_t mtu;
DECL|primary_uuid|variable|primary_uuid
DECL|range_is_valid|function|static bool range_is_valid(uint16_t start, uint16_t end, uint16_t *err)
DECL|read_group_cb|function|static uint8_t read_group_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|read_group_data|struct|struct read_group_data {
DECL|rsp|member|struct bt_att_read_group_rsp *rsp;
DECL|secondary_uuid|variable|secondary_uuid
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_conn *conn, uint8_t req, uint16_t handle, uint8_t err)
DECL|uuid_create|function|static bool uuid_create(struct bt_uuid *uuid, struct bt_buf *data)
DECL|uuid|member|struct bt_uuid *uuid;
