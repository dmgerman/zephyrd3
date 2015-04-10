DECL|BRDH|macro|BRDH
DECL|BRDL|macro|BRDL
DECL|FCR_FIFO_14|macro|FCR_FIFO_14
DECL|FCR_FIFO_1|macro|FCR_FIFO_1
DECL|FCR_FIFO_4|macro|FCR_FIFO_4
DECL|FCR_FIFO_8|macro|FCR_FIFO_8
DECL|FCR_FIFO|macro|FCR_FIFO
DECL|FCR_MODE0|macro|FCR_MODE0
DECL|FCR_MODE1|macro|FCR_MODE1
DECL|FCR_RCVRCLR|macro|FCR_RCVRCLR
DECL|FCR_XMITCLR|macro|FCR_XMITCLR
DECL|FCR|macro|FCR
DECL|IER_LSR|macro|IER_LSR
DECL|IER_MSI|macro|IER_MSI
DECL|IER_RXRDY|macro|IER_RXRDY
DECL|IER_TBE|macro|IER_TBE
DECL|IER|macro|IER
DECL|IIRC|macro|IIRC
DECL|IIR_ID|macro|IIR_ID
DECL|IIR_IP|macro|IIR_IP
DECL|IIR_MASK|macro|IIR_MASK
DECL|IIR_MSTAT|macro|IIR_MSTAT
DECL|IIR_RBRF|macro|IIR_RBRF
DECL|IIR_SEOB|macro|IIR_SEOB
DECL|IIR_THRE|macro|IIR_THRE
DECL|IIR|macro|IIR
DECL|INBYTE|macro|INBYTE
DECL|INT_CONNECT|macro|INT_CONNECT
DECL|INT_CONNECT|macro|INT_CONNECT
DECL|LCR_1_STB|macro|LCR_1_STB
DECL|LCR_2_STB|macro|LCR_2_STB
DECL|LCR_CS5|macro|LCR_CS5
DECL|LCR_CS6|macro|LCR_CS6
DECL|LCR_CS7|macro|LCR_CS7
DECL|LCR_CS8|macro|LCR_CS8
DECL|LCR_DLAB|macro|LCR_DLAB
DECL|LCR_EPS|macro|LCR_EPS
DECL|LCR_PDIS|macro|LCR_PDIS
DECL|LCR_PEN|macro|LCR_PEN
DECL|LCR_SBRK|macro|LCR_SBRK
DECL|LCR_SP|macro|LCR_SP
DECL|LCR|macro|LCR
DECL|LSR_BI|macro|LSR_BI
DECL|LSR_FE|macro|LSR_FE
DECL|LSR_OE|macro|LSR_OE
DECL|LSR_PE|macro|LSR_PE
DECL|LSR_RXRDY|macro|LSR_RXRDY
DECL|LSR_TEMT|macro|LSR_TEMT
DECL|LSR_THRE|macro|LSR_THRE
DECL|LSR|macro|LSR
DECL|MCR_DTR|macro|MCR_DTR
DECL|MCR_LOOP|macro|MCR_LOOP
DECL|MCR_OUT1|macro|MCR_OUT1
DECL|MCR_OUT2|macro|MCR_OUT2
DECL|MCR_RTS|macro|MCR_RTS
DECL|MDC|macro|MDC
DECL|MSR_CTS|macro|MSR_CTS
DECL|MSR_DCD|macro|MSR_DCD
DECL|MSR_DCTS|macro|MSR_DCTS
DECL|MSR_DDCD|macro|MSR_DDCD
DECL|MSR_DDSR|macro|MSR_DDSR
DECL|MSR_DRI|macro|MSR_DRI
DECL|MSR_DSR|macro|MSR_DSR
DECL|MSR_RI|macro|MSR_RI
DECL|MSR|macro|MSR
DECL|OUTBYTE|macro|OUTBYTE
DECL|RDR|macro|RDR
DECL|REG_BRDH|macro|REG_BRDH
DECL|REG_BRDL|macro|REG_BRDL
DECL|REG_FCR|macro|REG_FCR
DECL|REG_IER|macro|REG_IER
DECL|REG_IIR|macro|REG_IIR
DECL|REG_LCR|macro|REG_LCR
DECL|REG_LSR|macro|REG_LSR
DECL|REG_MDC|macro|REG_MDC
DECL|REG_MSR|macro|REG_MSR
DECL|REG_RDR|macro|REG_RDR
DECL|REG_THR|macro|REG_THR
DECL|THR|macro|THR
DECL|iirCache|member|uint8_t iirCache; /* cache of IIR since it clears when read */
DECL|intPri|member|uint8_t intPri; /* interrupt priority */
DECL|irq|member|uint8_t irq; /* interrupt request level */
DECL|ns16550|struct|struct ns16550 {
DECL|port|member|uint32_t port; /* base port number or MM base address */
DECL|uart_fifo_fill|function|int uart_fifo_fill(int which, /* UART on which to send */ const uint8_t *txData, /* data to transmit */ int size /* number of bytes to send */ )
DECL|uart_fifo_read|function|int uart_fifo_read(int which, /* UART to receive from */ uint8_t *rxData, /* data container */ const int size /* container size */ )
DECL|uart_init|function|void uart_init(int which, /* UART channel to initialize */ const struct uart_init_info * const init_info )
DECL|uart_int_connect|function|void uart_int_connect(int which, /* UART to which to connect */ void (*isr)(void *), /* interrupt handler */ void *arg, /* argument to pass to handler */ void *stub /* ptr to interrupt stub code */ )
DECL|uart_irq_err_disable|function|void uart_irq_err_disable(int which /* UART to disable Rx interrupt */ )
DECL|uart_irq_err_enable|function|void uart_irq_err_enable(int which /* UART to enable Rx interrupt */ )
DECL|uart_irq_is_pending|function|int uart_irq_is_pending(int which /* UART to check */ )
DECL|uart_irq_rx_disable|function|void uart_irq_rx_disable(int which /* UART to disable Rx interrupt */ )
DECL|uart_irq_rx_enable|function|void uart_irq_rx_enable(int which /* UART to enable Rx interrupt */ )
DECL|uart_irq_rx_ready|function|int uart_irq_rx_ready(int which /* UART to check */ )
DECL|uart_irq_tx_disable|function|void uart_irq_tx_disable(int which /* UART to disable Tx interrupt */ )
DECL|uart_irq_tx_enable|function|void uart_irq_tx_enable(int which /* UART to enable Tx interrupt */ )
DECL|uart_irq_tx_ready|function|int uart_irq_tx_ready(int which /* UART to check */ )
DECL|uart_irq_update|function|int uart_irq_update(int which /* UART to update */ )
DECL|uart_poll_in|function|int uart_poll_in(int which, /* UART channel to select for input */ unsigned char *pChar /* pointer to char */ )
DECL|uart_poll_out|function|unsigned char uart_poll_out(int which, /* UART channel to select for output */ unsigned char outChar /* char to send */ )
DECL|uart|variable|uart
