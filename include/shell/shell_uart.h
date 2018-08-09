DECL|SHELL_UART_DEFINE|macro|SHELL_UART_DEFINE
DECL|SHELL_UART_H__|macro|SHELL_UART_H__
DECL|context|member|void *context;
DECL|dev|member|struct device *dev;
DECL|handler|member|shell_transport_handler_t handler;
DECL|rx_cnt|member|size_t rx_cnt;
DECL|rx|member|u8_t rx[1];
DECL|shell_uart|struct|struct shell_uart {
DECL|timer|member|struct k_timer timer;
