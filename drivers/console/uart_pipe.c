DECL|UART|macro|UART
DECL|app_cb|variable|app_cb
DECL|recv_buf_len|variable|recv_buf_len
DECL|recv_buf|variable|recv_buf
DECL|recv_off|variable|recv_off
DECL|uart_pipe_isr|function|void uart_pipe_isr(void *unused)
DECL|uart_pipe_register|function|void uart_pipe_register(uint8_t *buf, size_t len, uart_pipe_recv_cb cb)
DECL|uart_pipe_send|function|int uart_pipe_send(const uint8_t *data, int len)
DECL|uart_pipe_setup|function|static void uart_pipe_setup(struct device *uart)
