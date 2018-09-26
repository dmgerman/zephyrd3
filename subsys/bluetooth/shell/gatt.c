DECL|CHAR_SIZE_MAX|macro|CHAR_SIZE_MAX
DECL|HELP_NONE|macro|HELP_NONE
DECL|MAX_DATA|macro|MAX_DATA
DECL|SHELL_CREATE_STATIC_SUBCMD_SET|function|SHELL_CREATE_STATIC_SUBCMD_SET(gatt_cmds) {
DECL|cmd_discover|function|static void cmd_discover(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_exchange_mtu|function|static void cmd_exchange_mtu(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_gatt|function|static void cmd_gatt(const struct shell *shell, size_t argc, char **argv)
DECL|cmd_metrics|function|static void cmd_metrics(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_mread|function|static void cmd_mread(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_read|function|static void cmd_read(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_register_test_svc|function|static void cmd_register_test_svc(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_show_db|function|static void cmd_show_db(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_subscribe|function|static void cmd_subscribe(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_unregister_test_svc|function|static void cmd_unregister_test_svc(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_unsubscribe|function|static void cmd_unsubscribe(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_write_without_rsp|function|static void cmd_write_without_rsp(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_write|function|static void cmd_write(const struct shell *shell, size_t argc, char *argv[])
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
DECL|print_chrc_props|function|static void print_chrc_props(const struct shell *shell, u8_t properties)
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
