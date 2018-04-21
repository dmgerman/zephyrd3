DECL|app_cb|variable|app_cb
DECL|recv_buf_len|variable|recv_buf_len
DECL|recv_buf|variable|recv_buf
DECL|recv_off|variable|recv_off
DECL|uart_pipe_dev|variable|uart_pipe_dev
DECL|uart_pipe_isr|function|static void uart_pipe_isr(struct device *dev)
DECL|uart_pipe_register|function|void uart_pipe_register(u8_t *buf, size_t len, uart_pipe_recv_cb cb)
DECL|uart_pipe_rx|function|static void uart_pipe_rx(struct device *dev)
DECL|uart_pipe_send|function|int uart_pipe_send(const u8_t *data, int len)
DECL|uart_pipe_setup|function|static void uart_pipe_setup(struct device *uart)
