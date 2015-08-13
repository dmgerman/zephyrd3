DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|k20_uart_driver_api|variable|k20_uart_driver_api
DECL|k20_uart_driver_api|variable|k20_uart_driver_api
DECL|k20_uart_fifo_fill|function|static int k20_uart_fifo_fill(struct device *dev, const uint8_t *txData, /* data to transmit */ int len /* number of bytes to send */ )
DECL|k20_uart_fifo_read|function|static int k20_uart_fifo_read(struct device *dev, uint8_t *rxData, /* data container */ const int size /* container size */ )
DECL|k20_uart_irq_err_disable|function|static void k20_uart_irq_err_disable(struct device *dev)
DECL|k20_uart_irq_err_enable|function|static void k20_uart_irq_err_enable(struct device *dev)
DECL|k20_uart_irq_get|function|static unsigned int k20_uart_irq_get(struct device *dev)
DECL|k20_uart_irq_is_pending|function|static int k20_uart_irq_is_pending(struct device *dev)
DECL|k20_uart_irq_rx_disable|function|static void k20_uart_irq_rx_disable(struct device *dev)
DECL|k20_uart_irq_rx_enable|function|static void k20_uart_irq_rx_enable(struct device *dev)
DECL|k20_uart_irq_rx_ready|function|static int k20_uart_irq_rx_ready(struct device *dev)
DECL|k20_uart_irq_tx_disable|function|static void k20_uart_irq_tx_disable(struct device *dev)
DECL|k20_uart_irq_tx_enable|function|static void k20_uart_irq_tx_enable(struct device *dev)
DECL|k20_uart_irq_tx_ready|function|static int k20_uart_irq_tx_ready(struct device *dev)
DECL|k20_uart_irq_update|function|static int k20_uart_irq_update(struct device *dev)
DECL|k20_uart_poll_in|function|static int k20_uart_poll_in(struct device *dev, unsigned char *pChar /* pointer to char */ )
DECL|k20_uart_poll_out|function|static unsigned char k20_uart_poll_out(struct device *dev,unsigned char outChar /* char to send */ )
DECL|k20_uart_port_init|function|void k20_uart_port_init(struct device *dev, const struct uart_init_info * const init_info )
