DECL|att_exec_write_req|function|static void att_exec_write_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_find_info_req|function|static void att_find_info_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_find_type_req|function|static void att_find_type_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_mtu_req|function|static void att_mtu_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_prepare_write_req|function|static void att_prepare_write_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_blob_req|function|static void att_read_blob_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_group_req|function|static void att_read_group_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_mult_req|function|static void att_read_mult_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_req|function|static void att_read_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_read_type_req|function|static void att_read_type_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_signed_write_cmd|function|static void att_signed_write_cmd(struct bt_conn *conn, struct bt_buf *data)
DECL|att_write_cmd|function|static void att_write_cmd(struct bt_conn *conn, struct bt_buf *data)
DECL|att_write_req|function|static void att_write_req(struct bt_conn *conn, struct bt_buf *data)
DECL|bt_att_create_pdu|function|struct bt_buf *bt_att_create_pdu(struct bt_conn *conn, uint8_t op, size_t len)
DECL|bt_att_recv|function|void bt_att_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|range_is_valid|function|static bool range_is_valid(uint16_t start, uint16_t end, uint16_t *err)
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_conn *conn, uint8_t req, uint16_t handle, uint8_t err)
DECL|uuid_create|function|static bool uuid_create(struct bt_uuid *uuid, uint8_t *data, uint8_t len)
