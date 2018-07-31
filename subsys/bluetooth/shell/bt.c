DECL|BT_SHELL_MODULE|macro|BT_SHELL_MODULE
DECL|CREDITS|macro|CREDITS
DECL|DATA_BREDR_MTU|macro|DATA_BREDR_MTU
DECL|DATA_MTU|macro|DATA_MTU
DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|HELP_ADDR_LE|macro|HELP_ADDR_LE
DECL|HELP_NONE|macro|HELP_NONE
DECL|NAME_LEN|macro|NAME_LEN
DECL|SDP_CLIENT_USER_BUF_LEN|macro|SDP_CLIENT_USER_BUF_LEN
DECL|ad_discov|variable|ad_discov
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_all|variable|auth_cb_all
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
DECL|br_device_found|function|static void br_device_found(const bt_addr_t *addr, s8_t rssi, const u8_t cod[3], const u8_t eir[240])
DECL|br_discovery_complete|function|static void br_discovery_complete(struct bt_br_discovery_result *results, size_t count)
DECL|br_discovery_results|variable|br_discovery_results
DECL|br_server|variable|br_server
DECL|bt_commands|variable|bt_commands
DECL|bt_ready|function|static void bt_ready(int err)
DECL|char2hex|function|static int char2hex(const char *c, u8_t *x)
DECL|cmd_active_scan_on|function|static void cmd_active_scan_on(int dups)
DECL|cmd_advertise|function|static int cmd_advertise(int argc, char *argv[])
DECL|cmd_auth_cancel|function|static int cmd_auth_cancel(int argc, char *argv[])
DECL|cmd_auth_pairing_confirm|function|static int cmd_auth_pairing_confirm(int argc, char *argv[])
DECL|cmd_auth_passkey_confirm|function|static int cmd_auth_passkey_confirm(int argc, char *argv[])
DECL|cmd_auth_passkey|function|static int cmd_auth_passkey(int argc, char *argv[])
DECL|cmd_auth_pincode|function|static int cmd_auth_pincode(int argc, char *argv[])
DECL|cmd_auth|function|static int cmd_auth(int argc, char *argv[])
DECL|cmd_auto_conn|function|static int cmd_auto_conn(int argc, char *argv[])
DECL|cmd_bredr_connectable|function|static int cmd_bredr_connectable(int argc, char *argv[])
DECL|cmd_bredr_discoverable|function|static int cmd_bredr_discoverable(int argc, char *argv[])
DECL|cmd_bredr_discovery|function|static int cmd_bredr_discovery(int argc, char *argv[])
DECL|cmd_bredr_l2cap_register|function|static int cmd_bredr_l2cap_register(int argc, char *argv[])
DECL|cmd_bredr_oob|function|static int cmd_bredr_oob(int argc, char *argv[])
DECL|cmd_bredr_rfcomm_register|function|static int cmd_bredr_rfcomm_register(int argc, char *argv[])
DECL|cmd_bredr_sdp_find_record|function|static int cmd_bredr_sdp_find_record(int argc, char *argv[])
DECL|cmd_clear|function|static int cmd_clear(int argc, char *argv[])
DECL|cmd_conn_update|function|static int cmd_conn_update(int argc, char *argv[])
DECL|cmd_connect_bredr|function|static int cmd_connect_bredr(int argc, char *argv[])
DECL|cmd_connect_le|function|static int cmd_connect_le(int argc, char *argv[])
DECL|cmd_disconnect|function|static int cmd_disconnect(int argc, char *argv[])
DECL|cmd_fixed_passkey|function|static int cmd_fixed_passkey(int argc, char *argv[])
DECL|cmd_hci_cmd|function|static int cmd_hci_cmd(int argc, char *argv[])
DECL|cmd_init|function|static int cmd_init(int argc, char *argv[])
DECL|cmd_l2cap_connect|function|static int cmd_l2cap_connect(int argc, char *argv[])
DECL|cmd_l2cap_disconnect|function|static int cmd_l2cap_disconnect(int argc, char *argv[])
DECL|cmd_l2cap_metrics|function|static int cmd_l2cap_metrics(int argc, char *argv[])
DECL|cmd_l2cap_register|function|static int cmd_l2cap_register(int argc, char *argv[])
DECL|cmd_l2cap_send|function|static int cmd_l2cap_send(int argc, char *argv[])
DECL|cmd_name|function|static int cmd_name(int argc, char *argv[])
DECL|cmd_oob|function|static int cmd_oob(int argc, char *argv[])
DECL|cmd_passive_scan_on|function|static void cmd_passive_scan_on(int dups)
DECL|cmd_rfcomm_connect|function|static int cmd_rfcomm_connect(int argc, char *argv[])
DECL|cmd_rfcomm_disconnect|function|static int cmd_rfcomm_disconnect(int argc, char *argv[])
DECL|cmd_rfcomm_send|function|static int cmd_rfcomm_send(int argc, char *argv[])
DECL|cmd_scan_off|function|static void cmd_scan_off(void)
DECL|cmd_scan|function|static int cmd_scan(int argc, char *argv[])
DECL|cmd_security|function|static int cmd_security(int argc, char *argv[])
DECL|cmd_select|function|static int cmd_select(int argc, char *argv[])
DECL|conn_addr_str|function|static void conn_addr_str(struct bt_conn *conn, char *addr, size_t len)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|current_prompt|function|static const char *current_prompt(void)
DECL|current_prompt|function|static const char *current_prompt(void)
DECL|data_cb|function|static bool data_cb(struct bt_data *data, void *user_data)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, s8_t rssi, u8_t evtype, struct net_buf_simple *buf)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|discov_a2src|variable|discov_a2src
DECL|discov_hfpag|variable|discov_hfpag
DECL|discov|variable|discov
DECL|hexdump|function|static void hexdump(const u8_t *data, size_t len)
DECL|identity_resolved|function|static void identity_resolved(struct bt_conn *conn, const bt_addr_le_t *rpa, const bt_addr_le_t *identity)
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_alloc_buf|function|static struct net_buf *l2cap_alloc_buf(struct bt_l2cap_chan *chan)
DECL|l2cap_bredr_accept|function|static int l2cap_bredr_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_bredr_alloc_buf|function|static struct net_buf *l2cap_bredr_alloc_buf(struct bt_l2cap_chan *chan)
DECL|l2cap_bredr_chan|variable|l2cap_bredr_chan
DECL|l2cap_bredr_connected|function|static void l2cap_bredr_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_bredr_disconnected|function|static void l2cap_bredr_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_bredr_ops|variable|l2cap_bredr_ops
DECL|l2cap_bredr_recv|function|static void l2cap_bredr_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_chan|variable|l2cap_chan
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_ops|variable|l2cap_ops
DECL|l2cap_rate|variable|l2cap_rate
DECL|l2cap_recv_metrics|function|static void l2cap_recv_metrics(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_recv|function|static void l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|le_param_req|function|static bool le_param_req(struct bt_conn *conn, struct bt_le_conn_param *param)
DECL|le_param_updated|function|static void le_param_updated(struct bt_conn *conn, u16_t interval, u16_t latency, u16_t timeout)
DECL|pairing_conn|variable|pairing_conn
DECL|rfcomm_bredr_accept|function|static int rfcomm_bredr_accept(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc)
DECL|rfcomm_bredr_connected|function|static void rfcomm_bredr_connected(struct bt_rfcomm_dlc *dlci)
DECL|rfcomm_bredr_disconnected|function|static void rfcomm_bredr_disconnected(struct bt_rfcomm_dlc *dlci)
DECL|rfcomm_bredr_ops|variable|rfcomm_bredr_ops
DECL|rfcomm_bredr_recv|function|static void rfcomm_bredr_recv(struct bt_rfcomm_dlc *dlci, struct net_buf *buf)
DECL|rfcomm_dlc|variable|rfcomm_dlc
DECL|rfcomm_server|variable|rfcomm_server
DECL|sdp_a2src_user|function|static u8_t sdp_a2src_user(struct bt_conn *conn, struct bt_sdp_client_result *result)
DECL|sdp_hfp_ag_user|function|static u8_t sdp_hfp_ag_user(struct bt_conn *conn, struct bt_sdp_client_result *result)
DECL|security_changed|function|static void security_changed(struct bt_conn *conn, bt_security_t level)
DECL|server|variable|server
DECL|spp_attrs|variable|spp_attrs
DECL|spp_rec|variable|spp_rec
DECL|str2bt_addr_le|function|static int str2bt_addr_le(const char *str, const char *type, bt_addr_le_t *addr)
DECL|str2bt_addr|function|static int str2bt_addr(const char *str, bt_addr_t *addr)
