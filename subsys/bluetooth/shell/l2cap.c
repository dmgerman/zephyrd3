DECL|CREDITS|macro|CREDITS
DECL|DATA_MTU|macro|DATA_MTU
DECL|HELP_NONE|macro|HELP_NONE
DECL|L2CAP_CHAN|macro|L2CAP_CHAN
DECL|L2CH_CHAN|macro|L2CH_CHAN
DECL|L2CH_WORK|macro|L2CH_WORK
DECL|SHELL_CREATE_STATIC_SUBCMD_SET|function|SHELL_CREATE_STATIC_SUBCMD_SET(l2cap_cmds) {
DECL|ch|member|struct bt_l2cap_le_chan ch;
DECL|cmd_connect|function|static int cmd_connect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_disconnect|function|static int cmd_disconnect(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_l2cap|function|static int cmd_l2cap(const struct shell *shell, size_t argc, char **argv)
DECL|cmd_metrics|function|static int cmd_metrics(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_recv|function|static int cmd_recv(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_register|function|static int cmd_register(const struct shell *shell, size_t argc, char *argv[])
DECL|cmd_send|function|static int cmd_send(const struct shell *shell, size_t argc, char *argv[])
DECL|l2cap_accept|function|static int l2cap_accept(struct bt_conn *conn, struct bt_l2cap_chan **chan)
DECL|l2cap_alloc_buf|function|static struct net_buf *l2cap_alloc_buf(struct bt_l2cap_chan *chan)
DECL|l2cap_connected|function|static void l2cap_connected(struct bt_l2cap_chan *chan)
DECL|l2cap_disconnected|function|static void l2cap_disconnected(struct bt_l2cap_chan *chan)
DECL|l2cap_ops|variable|l2cap_ops
DECL|l2cap_rate|variable|l2cap_rate
DECL|l2cap_recv_cb|function|static void l2cap_recv_cb(struct k_work *work)
DECL|l2cap_recv_delay|variable|l2cap_recv_delay
DECL|l2cap_recv_metrics|function|static int l2cap_recv_metrics(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2cap_recv|function|static int l2cap_recv(struct bt_l2cap_chan *chan, struct net_buf *buf)
DECL|l2ch_chan|variable|l2ch_chan
DECL|l2ch|struct|struct l2ch {
DECL|recv_work|member|struct k_delayed_work recv_work;
DECL|server|variable|server
