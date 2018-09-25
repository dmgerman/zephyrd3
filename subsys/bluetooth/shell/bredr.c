DECL|DATA_BREDR_MTU|macro|DATA_BREDR_MTU
DECL|HELP_ADDR_LE|macro|HELP_ADDR_LE
DECL|HELP_NONE|macro|HELP_NONE
DECL|SDP_CLIENT_USER_BUF_LEN|macro|SDP_CLIENT_USER_BUF_LEN
DECL|SHELL_CREATE_STATIC_SUBCMD_SET|function|SHELL_CREATE_STATIC_SUBCMD_SET(br_cmds) {
DECL|br_device_found|function|static void br_device_found(const bt_addr_t *addr, s8_t rssi, const u8_t cod[3], const u8_t eir[240])
DECL|br_discovery_complete|function|static void br_discovery_complete(struct bt_br_discovery_result *results, size_t count)
DECL|br_discovery_results|variable|br_discovery_results
DECL|br_server|variable|br_server
DECL|cmd_auth_pincode|function|static void cmd_auth_pincode(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_br|function|static void cmd_br(const struct shell *shell, size_t argc, char **argv)
DECL|cmd_connectable|function|static void cmd_connectable(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_connect|function|static void cmd_connect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_discoverable|function|static void cmd_discoverable(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_discovery|function|static void cmd_discovery(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_l2cap_register|function|static void cmd_l2cap_register(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_oob|function|static void cmd_oob(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_rfcomm_connect|function|static void cmd_rfcomm_connect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_rfcomm_disconnect|function|static void cmd_rfcomm_disconnect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_rfcomm_register|function|static void cmd_rfcomm_register(const struct shell *shell,size_t argc, char *argv[])
DECL|cmd_rfcomm_send|function|static void cmd_rfcomm_send(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_sdp_find_record|function|static void cmd_sdp_find_record(const struct shell *shell,size_t argc, char *argv[])
DECL|discov_a2src|variable|discov_a2src
DECL|discov_hfpag|variable|discov_hfpag
DECL|discov|variable|discov
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_alloc_buf|function|static struct net_buf *l2cap_alloc_buf(struct bt_l2cap_chan *chan)
DECL|l2cap_chan|variable|l2cap_chan
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_ops|variable|l2cap_ops
DECL|l2cap_recv|function|static int l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|pairing_conn|variable|pairing_conn
DECL|rfcomm_accept|function|static int rfcomm_accept(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc)
DECL|rfcomm_connected|function|static void rfcomm_connected(struct bt_rfcomm_dlc *dlci)
DECL|rfcomm_disconnected|function|static void rfcomm_disconnected(struct bt_rfcomm_dlc *dlci)
DECL|rfcomm_dlc|variable|rfcomm_dlc
DECL|rfcomm_ops|variable|rfcomm_ops
DECL|rfcomm_recv|function|static void rfcomm_recv(struct bt_rfcomm_dlc *dlci, struct net_buf *buf)
DECL|rfcomm_server|variable|rfcomm_server
DECL|sdp_a2src_user|function|static u8_t sdp_a2src_user(struct bt_conn *conn, struct bt_sdp_client_result *result)
DECL|sdp_hfp_ag_user|function|static u8_t sdp_hfp_ag_user(struct bt_conn *conn, struct bt_sdp_client_result *result)
DECL|spp_attrs|variable|spp_attrs
DECL|spp_rec|variable|spp_rec
