DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|uart_fifo_fill|function|int uart_fifo_fill(struct device *dev, const uint8_t *txData, /* data to transmit */ int len /* number of bytes to send */ )
DECL|uart_fifo_read|function|int uart_fifo_read(struct device *dev, uint8_t *rxData, /* data container */ const int size /* container size */ )
DECL|uart_init|function|void uart_init(struct device *dev, const struct uart_init_info * const init_info )
DECL|uart_irq_err_disable|function|void uart_irq_err_disable(struct device *dev)
DECL|uart_irq_err_enable|function|void uart_irq_err_enable(struct device *dev)
DECL|uart_irq_get|function|unsigned int uart_irq_get(struct device *dev)
DECL|uart_irq_is_pending|function|int uart_irq_is_pending(struct device *dev)
DECL|uart_irq_rx_disable|function|void uart_irq_rx_disable(struct device *dev)
DECL|uart_irq_rx_enable|function|void uart_irq_rx_enable(struct device *dev)
DECL|uart_irq_rx_ready|function|int uart_irq_rx_ready(struct device *dev)
DECL|uart_irq_tx_disable|function|void uart_irq_tx_disable(struct device *dev)
DECL|uart_irq_tx_enable|function|void uart_irq_tx_enable(struct device *dev)
DECL|uart_irq_tx_ready|function|int uart_irq_tx_ready(struct device *dev)
DECL|uart_irq_update|function|int uart_irq_update(struct device *dev)
DECL|uart_poll_in|function|int uart_poll_in(struct device *dev, unsigned char *pChar /* pointer to char */ )
DECL|uart_poll_out|function|unsigned char uart_poll_out(struct device *dev,unsigned char outChar /* char to send */ )
