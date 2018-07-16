DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|baud_rate|member|u32_t baud_rate;
DECL|baudrate_set|function|static int baudrate_set(Usart *const usart, u32_t baudrate,u32_t mck_freq_hz)
DECL|cb_data|member|void *cb_data; /* Interrupt Callback Arg */
DECL|irq_cb|member|uart_irq_callback_user_data_t irq_cb; /* Interrupt Callback */
DECL|irq_config_func|member|uart_irq_config_func_t irq_config_func;
DECL|periph_id|member|u32_t periph_id;
DECL|pin_rx|member|struct soc_gpio_pin pin_rx;
DECL|pin_tx|member|struct soc_gpio_pin pin_tx;
DECL|regs|member|Usart *regs;
DECL|usart0_sam_config|variable|usart0_sam_config
DECL|usart0_sam_data|variable|usart0_sam_data
DECL|usart0_sam_irq_config_func|function|static void usart0_sam_irq_config_func(struct device *port)
DECL|usart1_sam_config|variable|usart1_sam_config
DECL|usart1_sam_data|variable|usart1_sam_data
DECL|usart1_sam_irq_config_func|function|static void usart1_sam_irq_config_func(struct device *port)
DECL|usart2_sam_config|variable|usart2_sam_config
DECL|usart2_sam_data|variable|usart2_sam_data
DECL|usart_sam_dev_cfg|struct|struct usart_sam_dev_cfg {
DECL|usart_sam_dev_data|struct|struct usart_sam_dev_data {
DECL|usart_sam_driver_api|variable|usart_sam_driver_api
DECL|usart_sam_err_check|function|static int usart_sam_err_check(struct device *dev)
DECL|usart_sam_fifo_fill|function|static int usart_sam_fifo_fill(struct device *dev, const uint8_t *tx_data, int size)
DECL|usart_sam_fifo_read|function|static int usart_sam_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|usart_sam_init|function|static int usart_sam_init(struct device *dev)
DECL|usart_sam_irq_callback_set|function|static void usart_sam_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|usart_sam_irq_err_disable|function|static void usart_sam_irq_err_disable(struct device *dev)
DECL|usart_sam_irq_err_enable|function|static void usart_sam_irq_err_enable(struct device *dev)
DECL|usart_sam_irq_is_pending|function|static int usart_sam_irq_is_pending(struct device *dev)
DECL|usart_sam_irq_rx_disable|function|static void usart_sam_irq_rx_disable(struct device *dev)
DECL|usart_sam_irq_rx_enable|function|static void usart_sam_irq_rx_enable(struct device *dev)
DECL|usart_sam_irq_rx_ready|function|static int usart_sam_irq_rx_ready(struct device *dev)
DECL|usart_sam_irq_tx_complete|function|static int usart_sam_irq_tx_complete(struct device *dev)
DECL|usart_sam_irq_tx_disable|function|static void usart_sam_irq_tx_disable(struct device *dev)
DECL|usart_sam_irq_tx_enable|function|static void usart_sam_irq_tx_enable(struct device *dev)
DECL|usart_sam_irq_tx_ready|function|static int usart_sam_irq_tx_ready(struct device *dev)
DECL|usart_sam_irq_update|function|static int usart_sam_irq_update(struct device *dev)
DECL|usart_sam_isr|function|static void usart_sam_isr(void *arg)
DECL|usart_sam_poll_in|function|static int usart_sam_poll_in(struct device *dev, unsigned char *c)
DECL|usart_sam_poll_out|function|static unsigned char usart_sam_poll_out(struct device *dev, unsigned char c)
