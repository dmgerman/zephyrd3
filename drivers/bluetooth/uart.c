DECL|H4_ACL|macro|H4_ACL
DECL|H4_CMD|macro|H4_CMD
DECL|H4_EVT|macro|H4_EVT
DECL|H4_HEADER_SIZE|macro|H4_HEADER_SIZE
DECL|H4_SCO|macro|H4_SCO
DECL|UART|macro|UART
DECL|bt_uart_acl_recv|function|static struct bt_buf *bt_uart_acl_recv(int *remaining)
DECL|bt_uart_discard|function|static size_t bt_uart_discard(int uart, size_t len)
DECL|bt_uart_evt_recv|function|static struct bt_buf *bt_uart_evt_recv(int *remaining)
DECL|bt_uart_init|function|void bt_uart_init(void)
DECL|bt_uart_isr|function|void bt_uart_isr(void *unused)
DECL|bt_uart_open|function|static int bt_uart_open()
DECL|bt_uart_read|function|static int bt_uart_read(int uart, uint8_t *buf, size_t len)
DECL|bt_uart_send|function|static int bt_uart_send(struct bt_buf *buf)
DECL|bt_uart_setup|function|static void bt_uart_setup(int uart, struct uart_init_info *info)
DECL|drv|variable|drv
