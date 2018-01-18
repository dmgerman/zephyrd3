DECL|uart_mcumgr_alloc_rx_buf|function|static struct uart_mcumgr_rx_buf *uart_mcumgr_alloc_rx_buf(void)
DECL|uart_mcumgr_cur_buf|variable|uart_mcumgr_cur_buf
DECL|uart_mcumgr_dev|variable|uart_mcumgr_dev
DECL|uart_mcumgr_free_rx_buf|function|void uart_mcumgr_free_rx_buf(struct uart_mcumgr_rx_buf *rx_buf)
DECL|uart_mcumgr_ignoring|variable|uart_mcumgr_ignoring
DECL|uart_mcumgr_isr|function|static void uart_mcumgr_isr(struct device *unused)
DECL|uart_mcumgr_read_chunk|function|static int uart_mcumgr_read_chunk(void *buf, int capacity)
DECL|uart_mcumgr_register|function|void uart_mcumgr_register(uart_mcumgr_recv_fn *cb)
DECL|uart_mcumgr_rx_byte|function|static struct uart_mcumgr_rx_buf *uart_mcumgr_rx_byte(u8_t byte)
DECL|uart_mcumgr_send_raw|function|static int uart_mcumgr_send_raw(const void *data, int len, void *arg)
DECL|uart_mcumgr_send|function|int uart_mcumgr_send(const u8_t *data, int len)
DECL|uart_mcumgr_setup|function|static void uart_mcumgr_setup(struct device *uart)
DECL|uart_mgumgr_recv_cb|variable|uart_mgumgr_recv_cb
