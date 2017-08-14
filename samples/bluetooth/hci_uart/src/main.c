DECL|BT_BUF_ACL_SIZE|macro|BT_BUF_ACL_SIZE
DECL|BT_L2CAP_MTU|macro|BT_L2CAP_MTU
DECL|BT_L2CAP_MTU|macro|BT_L2CAP_MTU
DECL|CMD_BUF_SIZE|macro|CMD_BUF_SIZE
DECL|H4_ACL|macro|H4_ACL
DECL|H4_CMD|macro|H4_CMD
DECL|H4_DISCARD_LEN|macro|H4_DISCARD_LEN
DECL|H4_EVT|macro|H4_EVT
DECL|H4_SCO|macro|H4_SCO
DECL|TX_BUF_COUNT|macro|TX_BUF_COUNT
DECL|TX_BUF_COUNT|macro|TX_BUF_COUNT
DECL|bt_ctlr_assert_handle|function|void bt_ctlr_assert_handle(char *file, u32_t line)
DECL|bt_uart_isr|function|static void bt_uart_isr(struct device *unused)
DECL|h4_acl_recv|function|static struct net_buf *h4_acl_recv(int *remaining)
DECL|h4_cmd_recv|function|static struct net_buf *h4_cmd_recv(int *remaining)
DECL|h4_discard|function|static size_t h4_discard(struct device *uart, size_t len)
DECL|h4_read|function|static int h4_read(struct device *uart, u8_t *buf, size_t len, size_t min)
DECL|h4_send|function|static int h4_send(struct net_buf *buf)
DECL|hci_uart_dev|variable|hci_uart_dev
DECL|hci_uart_init|function|static int hci_uart_init(struct device *unused)
DECL|main|function|void main(void)
DECL|tx_thread_data|variable|tx_thread_data
DECL|tx_thread|function|static void tx_thread(void *p1, void *p2, void *p3)
