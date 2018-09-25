DECL|DATA_MTU|macro|DATA_MTU
DECL|HELP_ADDR_LE|macro|HELP_ADDR_LE
DECL|HELP_NONE|macro|HELP_NONE
DECL|SHELL_CREATE_STATIC_SUBCMD_SET|function|SHELL_CREATE_STATIC_SUBCMD_SET(rfcomm_cmds) {
DECL|cmd_connect|function|static void cmd_connect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_disconnect|function|static void cmd_disconnect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_register|function|static void cmd_register(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_rfcomm|function|static void cmd_rfcomm(const struct shell *shell, size_t argc, char **argv)
DECL|cmd_send|function|static void cmd_send(const struct shell *shell, size_t argc, char *argv[])
DECL|rf_shell|variable|rf_shell
DECL|rfcomm_accept|function|static int rfcomm_accept(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc)
DECL|rfcomm_connected|function|static void rfcomm_connected(struct bt_rfcomm_dlc *dlci)
DECL|rfcomm_disconnected|function|static void rfcomm_disconnected(struct bt_rfcomm_dlc *dlci)
DECL|rfcomm_dlc|variable|rfcomm_dlc
DECL|rfcomm_ops|variable|rfcomm_ops
DECL|rfcomm_recv|function|static void rfcomm_recv(struct bt_rfcomm_dlc *dlci, struct net_buf *buf)
DECL|rfcomm_server|variable|rfcomm_server
DECL|spp_attrs|variable|spp_attrs
DECL|spp_rec|variable|spp_rec
