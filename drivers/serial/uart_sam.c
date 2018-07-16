DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|baud_rate|member|u32_t baud_rate;
DECL|baudrate_set|function|static int baudrate_set(Uart *const uart, u32_t baudrate,u32_t mck_freq_hz)
DECL|irq_cb_data|member|void *irq_cb_data; /* Interrupt Callback Arg */
DECL|irq_cb|member|uart_irq_callback_user_data_t irq_cb; /* Interrupt Callback */
DECL|irq_config_func|member|uart_irq_config_func_t irq_config_func;
DECL|periph_id|member|u32_t periph_id;
DECL|pin_rx|member|struct soc_gpio_pin pin_rx;
DECL|pin_tx|member|struct soc_gpio_pin pin_tx;
DECL|regs|member|Uart *regs;
DECL|uart0_sam_config|variable|uart0_sam_config
DECL|uart0_sam_data|variable|uart0_sam_data
DECL|uart0_sam_irq_config_func|function|static void uart0_sam_irq_config_func(struct device *port)
DECL|uart1_sam_config|variable|uart1_sam_config
DECL|uart1_sam_data|variable|uart1_sam_data
DECL|uart1_sam_irq_config_func|function|static void uart1_sam_irq_config_func(struct device *port)
DECL|uart2_sam_config|variable|uart2_sam_config
DECL|uart2_sam_data|variable|uart2_sam_data
DECL|uart2_sam_irq_config_func|function|static void uart2_sam_irq_config_func(struct device *port)
DECL|uart3_sam_config|variable|uart3_sam_config
DECL|uart3_sam_data|variable|uart3_sam_data
DECL|uart3_sam_irq_config_func|function|static void uart3_sam_irq_config_func(struct device *port)
DECL|uart4_sam_config|variable|uart4_sam_config
DECL|uart4_sam_data|variable|uart4_sam_data
DECL|uart4_sam_irq_config_func|function|static void uart4_sam_irq_config_func(struct device *port)
DECL|uart_sam_dev_cfg|struct|struct uart_sam_dev_cfg {
DECL|uart_sam_dev_data|struct|struct uart_sam_dev_data {
DECL|uart_sam_driver_api|variable|uart_sam_driver_api
DECL|uart_sam_err_check|function|static int uart_sam_err_check(struct device *dev)
DECL|uart_sam_fifo_fill|function|static int uart_sam_fifo_fill(struct device *dev, const uint8_t *tx_data, int size)
DECL|uart_sam_fifo_read|function|static int uart_sam_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_sam_init|function|static int uart_sam_init(struct device *dev)
DECL|uart_sam_irq_callback_set|function|static void uart_sam_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *data)
DECL|uart_sam_irq_err_disable|function|static void uart_sam_irq_err_disable(struct device *dev)
DECL|uart_sam_irq_err_enable|function|static void uart_sam_irq_err_enable(struct device *dev)
DECL|uart_sam_irq_is_pending|function|static int uart_sam_irq_is_pending(struct device *dev)
DECL|uart_sam_irq_rx_disable|function|static void uart_sam_irq_rx_disable(struct device *dev)
DECL|uart_sam_irq_rx_enable|function|static void uart_sam_irq_rx_enable(struct device *dev)
DECL|uart_sam_irq_rx_ready|function|static int uart_sam_irq_rx_ready(struct device *dev)
DECL|uart_sam_irq_tx_complete|function|static int uart_sam_irq_tx_complete(struct device *dev)
DECL|uart_sam_irq_tx_disable|function|static void uart_sam_irq_tx_disable(struct device *dev)
DECL|uart_sam_irq_tx_enable|function|static void uart_sam_irq_tx_enable(struct device *dev)
DECL|uart_sam_irq_tx_ready|function|static int uart_sam_irq_tx_ready(struct device *dev)
DECL|uart_sam_irq_update|function|static int uart_sam_irq_update(struct device *dev)
DECL|uart_sam_isr|function|static void uart_sam_isr(void *arg)
DECL|uart_sam_poll_in|function|static int uart_sam_poll_in(struct device *dev, unsigned char *c)
DECL|uart_sam_poll_out|function|static unsigned char uart_sam_poll_out(struct device *dev, unsigned char c)
