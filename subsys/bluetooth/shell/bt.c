DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|HELP_ADDR_LE|macro|HELP_ADDR_LE
DECL|HELP_NONE|macro|HELP_NONE
DECL|NAME_LEN|macro|NAME_LEN
DECL|SHELL_CREATE_STATIC_SUBCMD_SET|function|SHELL_CREATE_STATIC_SUBCMD_SET(bt_cmds) {
DECL|ad_discov|variable|ad_discov
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_all|variable|auth_cb_all
DECL|auth_cb_confirm|variable|auth_cb_confirm
DECL|auth_cb_display_yes_no|variable|auth_cb_display_yes_no
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_cb_input|variable|auth_cb_input
DECL|auth_pairing_complete|function|static void auth_pairing_complete(struct bt_conn *conn, bool bonded)
DECL|auth_pairing_confirm|function|static void auth_pairing_confirm(struct bt_conn *conn)
DECL|auth_pairing_failed|function|static void auth_pairing_failed(struct bt_conn *conn)
DECL|auth_passkey_confirm|function|static void auth_passkey_confirm(struct bt_conn *conn, unsigned int passkey)
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|auth_passkey_entry|function|static void auth_passkey_entry(struct bt_conn *conn)
DECL|auth_pincode_entry|function|static void auth_pincode_entry(struct bt_conn *conn, bool highsec)
DECL|bt_ready|function|static void bt_ready(int err)
DECL|char2hex|function|static int char2hex(const char *c, u8_t *x)
DECL|cmd_active_scan_on|function|static int cmd_active_scan_on(const struct shell *shell, int dups)
DECL|cmd_advertise|function|static int cmd_advertise(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_auth_cancel|function|static int cmd_auth_cancel(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_auth_pairing_confirm|function|static int cmd_auth_pairing_confirm(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_auth_passkey_confirm|function|static int cmd_auth_passkey_confirm(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_auth_passkey|function|static int cmd_auth_passkey(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_auth|function|static int cmd_auth(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_auto_conn|function|static int cmd_auto_conn(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_bondable|function|static int cmd_bondable(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_bt|function|static int cmd_bt(const struct shell *shell, size_t argc, char **argv)
DECL|cmd_chan_map|function|static int cmd_chan_map(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_clear|function|static int cmd_clear(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_conn_update|function|static int cmd_conn_update(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_connect_le|function|static int cmd_connect_le(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_directed_adv|function|static int cmd_directed_adv(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_disconnect|function|static int cmd_disconnect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_fixed_passkey|function|static int cmd_fixed_passkey(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_hci_cmd|function|static int cmd_hci_cmd(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_id_create|function|static int cmd_id_create(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_id_delete|function|static int cmd_id_delete(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_id_reset|function|static int cmd_id_reset(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_id_select|function|static int cmd_id_select(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_id_show|function|static int cmd_id_show(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_init|function|static int cmd_init(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_name|function|static int cmd_name(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_oob|function|static int cmd_oob(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_passive_scan_on|function|static int cmd_passive_scan_on(const struct shell *shell, int dups)
DECL|cmd_scan_off|function|static int cmd_scan_off(const struct shell *shell)
DECL|cmd_scan|function|static int cmd_scan(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_security|function|static int cmd_security(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_select|function|static int cmd_select(const struct shell *shell, size_t argc, char *argv[])
DECL|conn_addr_str|function|void conn_addr_str(struct bt_conn *conn, char *addr, size_t len)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|ctx_shell|variable|ctx_shell
DECL|data_cb|function|static bool data_cb(struct bt_data *data, void *user_data)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, s8_t rssi, u8_t evtype, struct net_buf_simple *buf)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|hexdump|function|void hexdump(const struct shell *shell, const u8_t *data, size_t len)
DECL|hexstr2array|function|static int hexstr2array(const char *str, u8_t *array, u8_t size)
DECL|identity_resolved|function|static void identity_resolved(struct bt_conn *conn, const bt_addr_le_t *rpa, const bt_addr_le_t *identity)
DECL|le_param_req|function|static bool le_param_req(struct bt_conn *conn, struct bt_le_conn_param *param)
DECL|le_param_updated|function|static void le_param_updated(struct bt_conn *conn, u16_t interval, u16_t latency, u16_t timeout)
DECL|pairing_conn|variable|pairing_conn
DECL|security_changed|function|static void security_changed(struct bt_conn *conn, bt_security_t level)
DECL|selected_id|variable|selected_id
DECL|str2bt_addr_le|function|static int str2bt_addr_le(const char *str, const char *type, bt_addr_le_t *addr)
DECL|str2bt_addr|function|int str2bt_addr(const char *str, bt_addr_t *addr)
