DECL|_k20Uart_t|typedef|} _k20Uart_t;
DECL|base|member|uint8_t *base; /* base address of registers */
DECL|intPri|member|uint8_t intPri; /* interrupt priority */
DECL|irq|member|uint8_t irq; /* interrupt request level */
DECL|uart_fifo_fill|function|int uart_fifo_fill(int port, /* UART on port to send */ const uint8_t *txData, /* data to transmit */ int len /* number of bytes to send */ )
DECL|uart_fifo_read|function|int uart_fifo_read(int port, /* UART to receive from */ uint8_t *rxData, /* data container */ const int size /* container size */ )
DECL|uart_init|function|void uart_init(int port, /* UART channel to initialize */ const struct uart_init_info * const init_info )
DECL|uart_int_connect|function|void uart_int_connect(int port, /* UART to port to connect */ void (*isr)(void *), /* interrupt handler */ void *arg, /* argument to pass to handler */ void *stub /* ptr to interrupt stub code */ )
DECL|uart_irq_err_disable|function|void uart_irq_err_disable(int port /* UART to disable Rx interrupt */ )
DECL|uart_irq_err_enable|function|void uart_irq_err_enable(int port)
DECL|uart_irq_is_pending|function|int uart_irq_is_pending(int port /* UART to check */ )
DECL|uart_irq_rx_disable|function|void uart_irq_rx_disable(int port /* UART to disable Rx interrupt */ )
DECL|uart_irq_rx_enable|function|void uart_irq_rx_enable(int port /* UART to enable Rx interrupt */ )
DECL|uart_irq_rx_ready|function|int uart_irq_rx_ready(int port /* UART to check */ )
DECL|uart_irq_tx_disable|function|void uart_irq_tx_disable(int port /* UART to disable Tx interrupt */ )
DECL|uart_irq_tx_enable|function|void uart_irq_tx_enable(int port /* UART to enable Tx interrupt */ )
DECL|uart_irq_tx_ready|function|int uart_irq_tx_ready(int port /* UART to check */ )
DECL|uart_irq_update|function|int uart_irq_update(int port)
DECL|uart_poll_in|function|int uart_poll_in(int port, /* UART channel to select for input */ unsigned char *pChar /* pointer to char */ )
DECL|uart_poll_out|function|unsigned char uart_poll_out(int port, /* UART channel to select for output */ unsigned char outChar /* char to send */ )
