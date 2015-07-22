DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|att_find_info_rsp|function|static void att_find_info_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|att_find_type_rsp|function|static void att_find_type_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|att_read_rsp|function|static void att_read_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|att_read_type_rsp|function|static void att_read_type_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|att_write_ccc_rsp|function|static void att_write_ccc_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|att_write_rsp|function|static void att_write_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|attr_count|variable|attr_count
DECL|bt_gatt_attr_read_ccc|function|int bt_gatt_attr_read_ccc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read_cep|function|int bt_gatt_attr_read_cep(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read_chrc|function|int bt_gatt_attr_read_chrc(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read_include|function|int bt_gatt_attr_read_include(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read_service|function|int bt_gatt_attr_read_service(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_attr_read|function|int bt_gatt_attr_read(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint8_t buf_len, uint16_t offset, const void *value, uint8_t value_len)
DECL|bt_gatt_attr_write_ccc|function|int bt_gatt_attr_write_ccc(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, uint8_t len, uint16_t offset)
DECL|bt_gatt_cancel|function|void bt_gatt_cancel(struct bt_conn *conn)
DECL|bt_gatt_connected|function|void bt_gatt_connected(struct bt_conn *conn)
DECL|bt_gatt_disconnected|function|void bt_gatt_disconnected(struct bt_conn *conn)
DECL|bt_gatt_discover_characteristic|function|int bt_gatt_discover_characteristic(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|bt_gatt_discover_descriptor|function|int bt_gatt_discover_descriptor(struct bt_conn *conn,struct bt_gatt_discover_params *params)
DECL|bt_gatt_discover|function|int bt_gatt_discover(struct bt_conn *conn, struct bt_gatt_discover_params *params)
DECL|bt_gatt_exchange_mtu|function|int bt_gatt_exchange_mtu(struct bt_conn *conn, bt_gatt_rsp_func_t func)
DECL|bt_gatt_foreach_attr|function|void bt_gatt_foreach_attr(uint16_t start_handle, uint16_t end_handle, bt_gatt_attr_func_t func, void *user_data)
DECL|bt_gatt_notification|function|void bt_gatt_notification(struct bt_conn *conn, uint16_t handle, const void *data, uint16_t length)
DECL|bt_gatt_notify|function|void bt_gatt_notify(uint16_t handle, const void *data, size_t len)
DECL|bt_gatt_read_multiple|function|int bt_gatt_read_multiple(struct bt_conn *conn, const uint16_t *handles, size_t count, bt_gatt_read_func_t func)
DECL|bt_gatt_read|function|int bt_gatt_read(struct bt_conn *conn, uint16_t handle, uint16_t offset, bt_gatt_read_func_t func)
DECL|bt_gatt_register|function|void bt_gatt_register(const struct bt_gatt_attr *attrs, size_t count)
DECL|bt_gatt_subscribe|function|int bt_gatt_subscribe(struct bt_conn *conn, uint16_t handle, struct bt_gatt_subscribe_params *params)
DECL|bt_gatt_write|function|int bt_gatt_write(struct bt_conn *conn, uint16_t handle, const void *data, uint16_t length, bt_gatt_rsp_func_t func)
DECL|connected_cb|function|static uint8_t connected_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|data|member|const void *data;
DECL|db|variable|db
DECL|disconnected_cb|function|static uint8_t disconnected_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|end_handle|member|uint16_t end_handle;
DECL|gatt_ccc_changed|function|static void gatt_ccc_changed(struct _bt_gatt_ccc *ccc)
DECL|gatt_chrc|struct|struct gatt_chrc {
DECL|gatt_incl|struct|struct gatt_incl {
DECL|gatt_mtu_rsp|function|static void gatt_mtu_rsp(struct bt_conn *conn, uint8_t err, const void *pdu, uint16_t length, void *user_data)
DECL|gatt_read_blob|function|static int gatt_read_blob(struct bt_conn *conn, uint16_t handle, uint16_t offset, bt_gatt_read_func_t func)
DECL|gatt_send|function|static int gatt_send(struct bt_conn *conn, struct bt_buf *buf, bt_att_func_t func, void *user_data, bt_att_destroy_t destroy)
DECL|gatt_subscription_add|function|static void gatt_subscription_add(struct bt_conn *conn, struct bt_gatt_subscribe_params *params)
DECL|gatt_write_ccc|function|static int gatt_write_ccc(struct bt_conn *conn, uint16_t handle, uint16_t value, bt_att_func_t func, struct bt_gatt_subscribe_params *params)
DECL|gatt_write_cmd|function|static int gatt_write_cmd(struct bt_conn *conn, uint16_t handle, const void *data, uint16_t length)
DECL|handle|member|uint8_t handle;
DECL|len|member|size_t len;
DECL|notify_cb|function|static uint8_t notify_cb(const struct bt_gatt_attr *attr, void *user_data)
DECL|notify_data|struct|struct notify_data {
DECL|properties|member|uint8_t properties;
DECL|start_handle|member|uint16_t start_handle;
DECL|subscriptions|variable|subscriptions
DECL|uuid16|member|uint16_t uuid16;
DECL|uuid16|member|uint16_t uuid16;
DECL|uuid|member|uint8_t uuid[16];
DECL|uuid|member|uint8_t uuid[16];
DECL|value_handle|member|uint16_t value_handle;
