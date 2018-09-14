DECL|ZEPHYR_INCLUDE_DRIVERS_CONSOLE_UART_MCUMGR_H_|macro|ZEPHYR_INCLUDE_DRIVERS_CONSOLE_UART_MCUMGR_H_
DECL|data|member|u8_t data[CONFIG_UART_MCUMGR_RX_BUF_SIZE];
DECL|fifo_reserved|member|void *fifo_reserved; /* 1st word reserved for use by fifo */
DECL|length|member|int length;
DECL|uart_mcumgr_recv_fn|typedef|typedef void uart_mcumgr_recv_fn(struct uart_mcumgr_rx_buf *rx_buf);
DECL|uart_mcumgr_rx_buf|struct|struct uart_mcumgr_rx_buf {
