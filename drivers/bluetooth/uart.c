DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|H4_ACL|macro|H4_ACL
DECL|H4_CMD|macro|H4_CMD
DECL|H4_EVT|macro|H4_EVT
DECL|H4_HEADER_SIZE|macro|H4_HEADER_SIZE
DECL|H4_SCO|macro|H4_SCO
DECL|bt_uart_acl_recv|function|static struct net_buf *bt_uart_acl_recv(int *remaining)
DECL|bt_uart_discard|function|static size_t bt_uart_discard(struct device *uart, size_t len)
DECL|bt_uart_evt_recv|function|static struct net_buf *bt_uart_evt_recv(int *remaining)
DECL|bt_uart_init|function|void bt_uart_init(void)
DECL|bt_uart_isr|function|void bt_uart_isr(void *unused)
DECL|bt_uart_open|function|static int bt_uart_open(void)
DECL|bt_uart_read|function|static int bt_uart_read(struct device *uart, uint8_t *buf,size_t len, size_t min)
DECL|bt_uart_send_acl|function|static int bt_uart_send_acl(struct net_buf *buf)
DECL|bt_uart_send_cmd|function|static int bt_uart_send_cmd(struct net_buf *buf)
DECL|bt_uart_setup|function|static void bt_uart_setup(struct device *uart, struct uart_init_info *info)
DECL|drv|variable|drv
DECL|uart_out|function|static void uart_out(struct device *dev, const uint8_t *data, int size)
