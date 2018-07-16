DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|baudrate_set|function|static int baudrate_set(eUSCI_UART_Config *config, uint32_t baudrate)
DECL|cb_data|member|void *cb_data; /**< Callback function arg */
DECL|cb|member|uart_irq_callback_user_data_t cb; /**< Callback function pointer */
DECL|uartConfig|member|eUSCI_UART_Config uartConfig;
DECL|uart_msp432p4xx_dev_cfg_0|variable|uart_msp432p4xx_dev_cfg_0
DECL|uart_msp432p4xx_dev_data_0|variable|uart_msp432p4xx_dev_data_0
DECL|uart_msp432p4xx_dev_data_t|struct|struct uart_msp432p4xx_dev_data_t {
DECL|uart_msp432p4xx_driver_api|variable|uart_msp432p4xx_driver_api
DECL|uart_msp432p4xx_fifo_fill|function|static int uart_msp432p4xx_fifo_fill(struct device *dev,const u8_t *tx_data, int size)
DECL|uart_msp432p4xx_fifo_read|function|static int uart_msp432p4xx_fifo_read(struct device *dev, u8_t *rx_data,const int size)
DECL|uart_msp432p4xx_init|function|static int uart_msp432p4xx_init(struct device *dev)
DECL|uart_msp432p4xx_irq_callback_set|function|static void uart_msp432p4xx_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_msp432p4xx_irq_err_disable|function|static void uart_msp432p4xx_irq_err_disable(struct device *dev)
DECL|uart_msp432p4xx_irq_err_enable|function|static void uart_msp432p4xx_irq_err_enable(struct device *dev)
DECL|uart_msp432p4xx_irq_is_pending|function|static int uart_msp432p4xx_irq_is_pending(struct device *dev)
DECL|uart_msp432p4xx_irq_rx_disable|function|static void uart_msp432p4xx_irq_rx_disable(struct device *dev)
DECL|uart_msp432p4xx_irq_rx_enable|function|static void uart_msp432p4xx_irq_rx_enable(struct device *dev)
DECL|uart_msp432p4xx_irq_rx_ready|function|static int uart_msp432p4xx_irq_rx_ready(struct device *dev)
DECL|uart_msp432p4xx_irq_tx_complete|function|static int uart_msp432p4xx_irq_tx_complete(struct device *dev)
DECL|uart_msp432p4xx_irq_tx_disable|function|static void uart_msp432p4xx_irq_tx_disable(struct device *dev)
DECL|uart_msp432p4xx_irq_tx_enable|function|static void uart_msp432p4xx_irq_tx_enable(struct device *dev)
DECL|uart_msp432p4xx_irq_tx_ready|function|static int uart_msp432p4xx_irq_tx_ready(struct device *dev)
DECL|uart_msp432p4xx_irq_update|function|static int uart_msp432p4xx_irq_update(struct device *dev)
DECL|uart_msp432p4xx_isr|function|static void uart_msp432p4xx_isr(void *arg)
DECL|uart_msp432p4xx_poll_in|function|static int uart_msp432p4xx_poll_in(struct device *dev, unsigned char *c)
DECL|uart_msp432p4xx_poll_out|function|static unsigned char uart_msp432p4xx_poll_out(struct device *dev,unsigned char c)
