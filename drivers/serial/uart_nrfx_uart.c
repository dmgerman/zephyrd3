DECL|baudrate_set|function|static int baudrate_set(struct device *dev, u32_t baudrate)
DECL|event_txdrdy_check|function|static bool event_txdrdy_check(void)
DECL|event_txdrdy_clear|function|static void event_txdrdy_clear(void)
DECL|irq_callback|variable|irq_callback
DECL|uart0_addr|variable|uart0_addr
DECL|uart_nrfx_err_check|function|static int uart_nrfx_err_check(struct device *dev)
DECL|uart_nrfx_fifo_fill|function|static int uart_nrfx_fifo_fill(struct device *dev, const u8_t *tx_data, int len)
DECL|uart_nrfx_fifo_read|function|static int uart_nrfx_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_nrfx_init|function|static int uart_nrfx_init(struct device *dev)
DECL|uart_nrfx_irq_callback_set|function|static void uart_nrfx_irq_callback_set(struct device *dev, uart_irq_callback_t cb)
DECL|uart_nrfx_irq_err_disable|function|static void uart_nrfx_irq_err_disable(struct device *dev)
DECL|uart_nrfx_irq_err_enable|function|static void uart_nrfx_irq_err_enable(struct device *dev)
DECL|uart_nrfx_irq_is_pending|function|static int uart_nrfx_irq_is_pending(struct device *dev)
DECL|uart_nrfx_irq_rx_disable|function|static void uart_nrfx_irq_rx_disable(struct device *dev)
DECL|uart_nrfx_irq_rx_enable|function|static void uart_nrfx_irq_rx_enable(struct device *dev)
DECL|uart_nrfx_irq_rx_ready|function|static int uart_nrfx_irq_rx_ready(struct device *dev)
DECL|uart_nrfx_irq_tx_disable|function|static void uart_nrfx_irq_tx_disable(struct device *dev)
DECL|uart_nrfx_irq_tx_enable|function|static void uart_nrfx_irq_tx_enable(struct device *dev)
DECL|uart_nrfx_irq_tx_ready_complete|function|static int uart_nrfx_irq_tx_ready_complete(struct device *dev)
DECL|uart_nrfx_irq_update|function|static int uart_nrfx_irq_update(struct device *dev)
DECL|uart_nrfx_isr|function|static void uart_nrfx_isr(void *arg)
DECL|uart_nrfx_pm_control|function|static int uart_nrfx_pm_control(struct device *dev,u32_t ctrl_command, void *context)
DECL|uart_nrfx_poll_in|function|static int uart_nrfx_poll_in(struct device *dev, unsigned char *c)
DECL|uart_nrfx_poll_out|function|static unsigned char uart_nrfx_poll_out(struct device *dev,unsigned char c)
DECL|uart_nrfx_set_power_state|function|static void uart_nrfx_set_power_state(u32_t new_state)
DECL|uart_nrfx_uart0|variable|uart_nrfx_uart0
DECL|uart_nrfx_uart_driver_api|variable|uart_nrfx_uart_driver_api
DECL|uart_sw_event_txdrdy|variable|uart_sw_event_txdrdy
