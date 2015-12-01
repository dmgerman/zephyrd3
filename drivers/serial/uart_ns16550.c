DECL|BRDH|macro|BRDH
DECL|BRDL|macro|BRDL
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
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
DECL|INBYTE|macro|INBYTE
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
DECL|MCR_AFCE|macro|MCR_AFCE
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
DECL|UART_REG_ADDR_INTERVAL|macro|UART_REG_ADDR_INTERVAL
DECL|UART_REG_ADDR_INTERVAL|macro|UART_REG_ADDR_INTERVAL
DECL|iir_cache|member|uint8_t iir_cache; /**< cache of IIR since it clears when read */
DECL|ns16550_pci_uart_scan|function|static inline int ns16550_pci_uart_scan(struct device *dev)
DECL|ns16550_pci_uart_scan|macro|ns16550_pci_uart_scan
DECL|uart_devs|variable|uart_devs
DECL|uart_ns16550_dev_cfg_0|variable|uart_ns16550_dev_cfg_0
DECL|uart_ns16550_dev_cfg_1|variable|uart_ns16550_dev_cfg_1
DECL|uart_ns16550_dev_data_0|variable|uart_ns16550_dev_data_0
DECL|uart_ns16550_dev_data_1|variable|uart_ns16550_dev_data_1
DECL|uart_ns16550_dev_data_t|struct|struct uart_ns16550_dev_data_t {
DECL|uart_ns16550_driver_api|variable|uart_ns16550_driver_api
DECL|uart_ns16550_driver_api|variable|uart_ns16550_driver_api
DECL|uart_ns16550_fifo_fill|function|static int uart_ns16550_fifo_fill(struct device *dev, const uint8_t *tx_data, int size)
DECL|uart_ns16550_fifo_read|function|static int uart_ns16550_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_ns16550_init|function|static int uart_ns16550_init(struct device *dev)
DECL|uart_ns16550_irq_err_disable|function|static void uart_ns16550_irq_err_disable(struct device *dev)
DECL|uart_ns16550_irq_err_enable|function|static void uart_ns16550_irq_err_enable(struct device *dev)
DECL|uart_ns16550_irq_get|function|static unsigned int uart_ns16550_irq_get(struct device *dev)
DECL|uart_ns16550_irq_is_pending|function|static int uart_ns16550_irq_is_pending(struct device *dev)
DECL|uart_ns16550_irq_rx_disable|function|static void uart_ns16550_irq_rx_disable(struct device *dev)
DECL|uart_ns16550_irq_rx_enable|function|static void uart_ns16550_irq_rx_enable(struct device *dev)
DECL|uart_ns16550_irq_rx_ready|function|static int uart_ns16550_irq_rx_ready(struct device *dev)
DECL|uart_ns16550_irq_tx_disable|function|static void uart_ns16550_irq_tx_disable(struct device *dev)
DECL|uart_ns16550_irq_tx_enable|function|static void uart_ns16550_irq_tx_enable(struct device *dev)
DECL|uart_ns16550_irq_tx_ready|function|static int uart_ns16550_irq_tx_ready(struct device *dev)
DECL|uart_ns16550_irq_update|function|static int uart_ns16550_irq_update(struct device *dev)
DECL|uart_ns16550_poll_in|function|static int uart_ns16550_poll_in(struct device *dev, unsigned char *c)
DECL|uart_ns16550_poll_out|function|static unsigned char uart_ns16550_poll_out(struct device *dev, unsigned char c)
