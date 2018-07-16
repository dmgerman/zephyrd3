DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|UART_SAM0_CONFIG_DEFN|macro|UART_SAM0_CONFIG_DEFN
DECL|UART_SAM0_DEVICE_INIT|macro|UART_SAM0_DEVICE_INIT
DECL|UART_SAM0_IRQ_HANDLER_DECL|macro|UART_SAM0_IRQ_HANDLER_DECL
DECL|UART_SAM0_IRQ_HANDLER_DECL|macro|UART_SAM0_IRQ_HANDLER_DECL
DECL|UART_SAM0_IRQ_HANDLER_FUNC|macro|UART_SAM0_IRQ_HANDLER_FUNC
DECL|UART_SAM0_IRQ_HANDLER_FUNC|macro|UART_SAM0_IRQ_HANDLER_FUNC
DECL|UART_SAM0_IRQ_HANDLER|macro|UART_SAM0_IRQ_HANDLER
DECL|UART_SAM0_IRQ_HANDLER|macro|UART_SAM0_IRQ_HANDLER
DECL|baudrate|member|u32_t baudrate;
DECL|cb_data|member|void *cb_data;
DECL|cb|member|uart_irq_callback_user_data_t cb;
DECL|gclk_clkctrl_id|member|u16_t gclk_clkctrl_id;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|pads|member|u32_t pads;
DECL|pm_apbcmask|member|u32_t pm_apbcmask;
DECL|regs|member|SercomUsart *regs;
DECL|uart_sam0_dev_cfg|struct|struct uart_sam0_dev_cfg {
DECL|uart_sam0_dev_data|struct|struct uart_sam0_dev_data {
DECL|uart_sam0_driver_api|variable|uart_sam0_driver_api
DECL|uart_sam0_fifo_fill|function|static int uart_sam0_fifo_fill(struct device *dev, const u8_t *tx_data, int len)
DECL|uart_sam0_fifo_read|function|static int uart_sam0_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_sam0_init|function|static int uart_sam0_init(struct device *dev)
DECL|uart_sam0_irq_callback_set|function|static void uart_sam0_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_sam0_irq_is_pending|function|static int uart_sam0_irq_is_pending(struct device *dev)
DECL|uart_sam0_irq_rx_disable|function|static void uart_sam0_irq_rx_disable(struct device *dev)
DECL|uart_sam0_irq_rx_enable|function|static void uart_sam0_irq_rx_enable(struct device *dev)
DECL|uart_sam0_irq_rx_ready|function|static int uart_sam0_irq_rx_ready(struct device *dev)
DECL|uart_sam0_irq_tx_disable|function|static void uart_sam0_irq_tx_disable(struct device *dev)
DECL|uart_sam0_irq_tx_enable|function|static void uart_sam0_irq_tx_enable(struct device *dev)
DECL|uart_sam0_irq_tx_ready|function|static int uart_sam0_irq_tx_ready(struct device *dev)
DECL|uart_sam0_irq_update|function|static int uart_sam0_irq_update(struct device *dev) { return 1; }
DECL|uart_sam0_isr|function|static void uart_sam0_isr(void *arg)
DECL|uart_sam0_poll_in|function|static int uart_sam0_poll_in(struct device *dev, unsigned char *c)
DECL|uart_sam0_poll_out|function|static unsigned char uart_sam0_poll_out(struct device *dev, unsigned char c)
DECL|uart_sam0_set_baudrate|function|static int uart_sam0_set_baudrate(SercomUsart *const usart, u32_t baudrate, u32_t clk_freq_hz)
DECL|wait_synchronization|function|static void wait_synchronization(SercomUsart *const usart)
