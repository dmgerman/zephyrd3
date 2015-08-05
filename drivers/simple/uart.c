DECL|UART|macro|UART
DECL|app_cb|variable|app_cb
DECL|recv_buf_len|variable|recv_buf_len
DECL|recv_buf|variable|recv_buf
DECL|recv_off|variable|recv_off
DECL|uart_simple_isr|function|void uart_simple_isr(void *unused)
DECL|uart_simple_register|function|void uart_simple_register(uint8_t *buf, size_t len, uart_simple_recv_cb cb)
DECL|uart_simple_send|function|int uart_simple_send(const uint8_t *data, int len)
DECL|uart_simple_setup|function|static void uart_simple_setup(struct device *uart, struct uart_init_info *info)
