DECL|CHAR_SIZE_MAX|macro|CHAR_SIZE_MAX
DECL|MAX_DATA|macro|MAX_DATA
DECL|cmd_gatt_discover|function|int cmd_gatt_discover(int argc, char *argv[])
DECL|cmd_gatt_exchange_mtu|function|int cmd_gatt_exchange_mtu(int argc, char *argv[])
DECL|cmd_gatt_mread|function|int cmd_gatt_mread(int argc, char *argv[])
DECL|cmd_gatt_read|function|int cmd_gatt_read(int argc, char *argv[])
DECL|cmd_gatt_register_test_svc|function|int cmd_gatt_register_test_svc(int argc, char *argv[])
DECL|cmd_gatt_show_db|function|int cmd_gatt_show_db(int argc, char *argv[])
DECL|cmd_gatt_subscribe|function|int cmd_gatt_subscribe(int argc, char *argv[])
DECL|cmd_gatt_unregister_test_svc|function|int cmd_gatt_unregister_test_svc(int argc, char *argv[])
DECL|cmd_gatt_unsubscribe|function|int cmd_gatt_unsubscribe(int argc, char *argv[])
DECL|cmd_gatt_write_cmd_metrics|function|int cmd_gatt_write_cmd_metrics(int argc, char *argv[])
DECL|cmd_gatt_write_without_rsp|function|int cmd_gatt_write_without_rsp(int argc, char *argv[])
DECL|cmd_gatt_write|function|int cmd_gatt_write(int argc, char *argv[])
DECL|discover_func|function|static u8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *params)
DECL|discover_params|variable|discover_params
DECL|echo_enabled|variable|echo_enabled
DECL|exchange_func|function|static void exchange_func(struct bt_conn *conn, u8_t err, struct bt_gatt_exchange_params *params)
DECL|exchange_params|variable|exchange_params
DECL|gatt_write_buf|variable|gatt_write_buf
DECL|met_attrs|variable|met_attrs
DECL|met_char_uuid|variable|met_char_uuid
DECL|met_char_value|variable|met_char_value
DECL|met_svc_uuid|variable|met_svc_uuid
DECL|met_svc|variable|met_svc
DECL|notify_func|function|static u8_t notify_func(struct bt_conn *conn, struct bt_gatt_subscribe_params *params, const void *data, u16_t length)
DECL|print_attr|function|static u8_t print_attr(const struct bt_gatt_attr *attr, void *user_data)
DECL|print_chrc_props|function|static void print_chrc_props(u8_t properties)
DECL|read_func|function|static u8_t read_func(struct bt_conn *conn, u8_t err, struct bt_gatt_read_params *params, const void *data, u16_t length)
DECL|read_long_vnd|function|static ssize_t read_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_met|function|static ssize_t read_met(struct bt_conn *conn, const struct bt_gatt_attr *attr,void *buf, u16_t len, u16_t offset)
DECL|read_params|variable|read_params
DECL|read_vnd|function|static ssize_t read_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr,void *buf, u16_t len, u16_t offset)
DECL|subscribe_params|variable|subscribe_params
DECL|uuid|variable|uuid
DECL|vnd1_attrs|variable|vnd1_attrs
DECL|vnd1_ccc_cfg_changed|function|static void vnd1_ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|vnd1_ccc_cfg|variable|vnd1_ccc_cfg
DECL|vnd1_echo_uuid|variable|vnd1_echo_uuid
DECL|vnd1_svc|variable|vnd1_svc
DECL|vnd1_uuid|variable|vnd1_uuid
DECL|vnd_attrs|variable|vnd_attrs
DECL|vnd_auth_uuid|variable|vnd_auth_uuid
DECL|vnd_long_uuid1|variable|vnd_long_uuid1
DECL|vnd_long_uuid2|variable|vnd_long_uuid2
DECL|vnd_long_value1|variable|vnd_long_value1
DECL|vnd_long_value2|variable|vnd_long_value2
DECL|vnd_svc|variable|vnd_svc
DECL|vnd_uuid|variable|vnd_uuid
DECL|vnd_value|variable|vnd_value
DECL|write_count|variable|write_count
DECL|write_func|function|static void write_func(struct bt_conn *conn, u8_t err, struct bt_gatt_write_params *params)
DECL|write_len|variable|write_len
DECL|write_long_vnd|function|static ssize_t write_long_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_met|function|static ssize_t write_met(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_params|variable|write_params
DECL|write_rate|variable|write_rate
DECL|write_vnd1|function|static ssize_t write_vnd1(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_vnd|function|static ssize_t write_vnd(struct bt_conn *conn, const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
