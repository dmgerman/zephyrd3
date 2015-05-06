DECL|att_find_info_req|function|static void att_find_info_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_find_type_req|function|static void att_find_type_req(struct bt_conn *conn, struct bt_buf *data)
DECL|att_mtu_req|function|static void att_mtu_req(struct bt_conn *conn, struct bt_buf *data)
DECL|bt_att_create_pdu|function|struct bt_buf *bt_att_create_pdu(struct bt_conn *conn, uint8_t op, size_t len)
DECL|bt_att_recv|function|void bt_att_recv(struct bt_conn *conn, struct bt_buf *buf)
DECL|send_err_rsp|function|static void send_err_rsp(struct bt_conn *conn, uint8_t req, uint16_t handle, uint8_t err)
