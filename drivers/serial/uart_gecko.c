DECL|base|member|USART_TypeDef *base;
DECL|baud_rate|member|u32_t baud_rate;
DECL|callback|member|uart_irq_callback_user_data_t callback;
DECL|cb_data|member|void *cb_data;
DECL|clock|member|CMU_Clock_TypeDef clock;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|loc|member|unsigned int loc;
DECL|pin_rx|member|struct soc_gpio_pin pin_rx;
DECL|pin_tx|member|struct soc_gpio_pin pin_tx;
DECL|uart_gecko_0_config|variable|uart_gecko_0_config
DECL|uart_gecko_0_data|variable|uart_gecko_0_data
DECL|uart_gecko_1_config|variable|uart_gecko_1_config
DECL|uart_gecko_1_data|variable|uart_gecko_1_data
DECL|uart_gecko_config_func_0|function|static void uart_gecko_config_func_0(struct device *dev)
DECL|uart_gecko_config_func_1|function|static void uart_gecko_config_func_1(struct device *dev)
DECL|uart_gecko_config|struct|struct uart_gecko_config {
DECL|uart_gecko_data|struct|struct uart_gecko_data {
DECL|uart_gecko_driver_api|variable|uart_gecko_driver_api
DECL|uart_gecko_err_check|function|static int uart_gecko_err_check(struct device *dev)
DECL|uart_gecko_fifo_fill|function|static int uart_gecko_fifo_fill(struct device *dev, const u8_t *tx_data, int len)
DECL|uart_gecko_fifo_read|function|static int uart_gecko_fifo_read(struct device *dev, u8_t *rx_data, const int len)
DECL|uart_gecko_init_pins|function|static void uart_gecko_init_pins(struct device *dev)
DECL|uart_gecko_init|function|static int uart_gecko_init(struct device *dev)
DECL|uart_gecko_irq_callback_set|function|static void uart_gecko_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_gecko_irq_err_disable|function|static void uart_gecko_irq_err_disable(struct device *dev)
DECL|uart_gecko_irq_err_enable|function|static void uart_gecko_irq_err_enable(struct device *dev)
DECL|uart_gecko_irq_is_pending|function|static int uart_gecko_irq_is_pending(struct device *dev)
DECL|uart_gecko_irq_rx_disable|function|static void uart_gecko_irq_rx_disable(struct device *dev)
DECL|uart_gecko_irq_rx_enable|function|static void uart_gecko_irq_rx_enable(struct device *dev)
DECL|uart_gecko_irq_rx_full|function|static int uart_gecko_irq_rx_full(struct device *dev)
DECL|uart_gecko_irq_rx_ready|function|static int uart_gecko_irq_rx_ready(struct device *dev)
DECL|uart_gecko_irq_tx_complete|function|static int uart_gecko_irq_tx_complete(struct device *dev)
DECL|uart_gecko_irq_tx_disable|function|static void uart_gecko_irq_tx_disable(struct device *dev)
DECL|uart_gecko_irq_tx_enable|function|static void uart_gecko_irq_tx_enable(struct device *dev)
DECL|uart_gecko_irq_tx_ready|function|static int uart_gecko_irq_tx_ready(struct device *dev)
DECL|uart_gecko_irq_update|function|static int uart_gecko_irq_update(struct device *dev)
DECL|uart_gecko_isr|function|static void uart_gecko_isr(void *arg)
DECL|uart_gecko_poll_in|function|static int uart_gecko_poll_in(struct device *dev, unsigned char *c)
DECL|uart_gecko_poll_out|function|static unsigned char uart_gecko_poll_out(struct device *dev, unsigned char c)
DECL|usart_gecko_0_config|variable|usart_gecko_0_config
DECL|usart_gecko_0_data|variable|usart_gecko_0_data
DECL|usart_gecko_1_config|variable|usart_gecko_1_config
DECL|usart_gecko_1_data|variable|usart_gecko_1_data
DECL|usart_gecko_config_func_0|function|static void usart_gecko_config_func_0(struct device *dev)
DECL|usart_gecko_config_func_1|function|static void usart_gecko_config_func_1(struct device *dev)
