DECL|MAX_LINE_LENGTH|macro|MAX_LINE_LENGTH
DECL|UART|macro|UART
DECL|__printk_hook_install|macro|__printk_hook_install
DECL|__stdout_hook_install|macro|__stdout_hook_install
DECL|consoleOut|function|static int consoleOut(int c /* character to output */)
DECL|console_handler_init|function|static void console_handler_init(void)
DECL|console_handler_init|macro|console_handler_init
DECL|handler|variable|handler
DECL|rcv_data|variable|rcv_data
DECL|rcv_pos|variable|rcv_pos
DECL|read_uart|function|static int read_uart(int uart, uint8_t *buf, unsigned int size)
DECL|uart_console_init|function|void uart_console_init(void)
DECL|uart_console_isr|function|void uart_console_isr(void *unused)
DECL|uart_register_handler|function|void uart_register_handler(void (*cb) (const char *string))
DECL|uart_register_handler|macro|uart_register_handler
