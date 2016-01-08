DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|baud_rate|member|uint32_t baud_rate; /* Baud rate */
DECL|uart_k20_dev_cfg_0|variable|uart_k20_dev_cfg_0
DECL|uart_k20_dev_cfg_1|variable|uart_k20_dev_cfg_1
DECL|uart_k20_dev_cfg_2|variable|uart_k20_dev_cfg_2
DECL|uart_k20_dev_cfg_3|variable|uart_k20_dev_cfg_3
DECL|uart_k20_dev_cfg_4|variable|uart_k20_dev_cfg_4
DECL|uart_k20_dev_data_0|variable|uart_k20_dev_data_0
DECL|uart_k20_dev_data_1|variable|uart_k20_dev_data_1
DECL|uart_k20_dev_data_2|variable|uart_k20_dev_data_2
DECL|uart_k20_dev_data_3|variable|uart_k20_dev_data_3
DECL|uart_k20_dev_data_4|variable|uart_k20_dev_data_4
DECL|uart_k20_dev_data_t|struct|struct uart_k20_dev_data_t {
DECL|uart_k20_driver_api|variable|uart_k20_driver_api
DECL|uart_k20_driver_api|variable|uart_k20_driver_api
DECL|uart_k20_fifo_fill|function|static int uart_k20_fifo_fill(struct device *dev, const uint8_t *tx_data, int len)
DECL|uart_k20_fifo_read|function|static int uart_k20_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_k20_init|function|static int uart_k20_init(struct device *dev)
DECL|uart_k20_irq_err_disable|function|static void uart_k20_irq_err_disable(struct device *dev)
DECL|uart_k20_irq_err_enable|function|static void uart_k20_irq_err_enable(struct device *dev)
DECL|uart_k20_irq_is_pending|function|static int uart_k20_irq_is_pending(struct device *dev)
DECL|uart_k20_irq_rx_disable|function|static void uart_k20_irq_rx_disable(struct device *dev)
DECL|uart_k20_irq_rx_enable|function|static void uart_k20_irq_rx_enable(struct device *dev)
DECL|uart_k20_irq_rx_ready|function|static int uart_k20_irq_rx_ready(struct device *dev)
DECL|uart_k20_irq_tx_disable|function|static void uart_k20_irq_tx_disable(struct device *dev)
DECL|uart_k20_irq_tx_enable|function|static void uart_k20_irq_tx_enable(struct device *dev)
DECL|uart_k20_irq_tx_ready|function|static int uart_k20_irq_tx_ready(struct device *dev)
DECL|uart_k20_irq_update|function|static int uart_k20_irq_update(struct device *dev)
DECL|uart_k20_poll_in|function|static int uart_k20_poll_in(struct device *dev, unsigned char *c)
DECL|uart_k20_poll_out|function|static unsigned char uart_k20_poll_out(struct device *dev, unsigned char c)
