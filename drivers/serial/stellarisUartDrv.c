DECL|LINE_CONTROL_DEFAULTS|macro|LINE_CONTROL_DEFAULTS
DECL|PCellID0|member|uint32_t PCellID0;
DECL|PCellID1|member|uint32_t PCellID1;
DECL|PCellID2|member|uint32_t PCellID2;
DECL|PCellID3|member|uint32_t PCellID3;
DECL|PeriphID0|member|uint32_t PeriphID0;
DECL|PeriphID1|member|uint32_t PeriphID1;
DECL|PeriphID2|member|uint32_t PeriphID2;
DECL|PeriphID3|member|uint32_t PeriphID3;
DECL|PeriphID4|member|uint32_t PeriphID4;
DECL|PeriphID5|member|uint32_t PeriphID5;
DECL|PeriphID6|member|uint32_t PeriphID6;
DECL|PeriphID7|member|uint32_t PeriphID7;
DECL|UARTCR|macro|UARTCR
DECL|UARTCTL_LBE|macro|UARTCTL_LBE
DECL|UARTCTL_RXEN|macro|UARTCTL_RXEN
DECL|UARTCTL_TXEN|macro|UARTCTL_TXEN
DECL|UARTCTL_UARTEN|macro|UARTCTL_UARTEN
DECL|UARTCTL|macro|UARTCTL
DECL|UARTDR|macro|UARTDR
DECL|UARTFBRD|macro|UARTFBRD
DECL|UARTFR_BUSY|macro|UARTFR_BUSY
DECL|UARTFR_RXFE|macro|UARTFR_RXFE
DECL|UARTFR_RXFF|macro|UARTFR_RXFF
DECL|UARTFR_TXFE|macro|UARTFR_TXFE
DECL|UARTFR_TXFF|macro|UARTFR_TXFF
DECL|UARTFR|macro|UARTFR
DECL|UARTIBRD|macro|UARTIBRD
DECL|UARTICR|macro|UARTICR
DECL|UARTIFLS|macro|UARTIFLS
DECL|UARTILPR|macro|UARTILPR
DECL|UARTIM|macro|UARTIM
DECL|UARTLCRH_FEN|macro|UARTLCRH_FEN
DECL|UARTLCRH_WLEN|macro|UARTLCRH_WLEN
DECL|UARTLCRH|macro|UARTLCRH
DECL|UARTMIS_RXMIS|macro|UARTMIS_RXMIS
DECL|UARTMIS_TXMIS|macro|UARTMIS_TXMIS
DECL|UARTMIS|macro|UARTMIS
DECL|UARTPCID0|macro|UARTPCID0
DECL|UARTPCID1|macro|UARTPCID1
DECL|UARTPCID2|macro|UARTPCID2
DECL|UARTPCID3|macro|UARTPCID3
DECL|UARTPID0|macro|UARTPID0
DECL|UARTPID1|macro|UARTPID1
DECL|UARTPID2|macro|UARTPID2
DECL|UARTPID3|macro|UARTPID3
DECL|UARTPID4|macro|UARTPID4
DECL|UARTPID5|macro|UARTPID5
DECL|UARTPID6|macro|UARTPID6
DECL|UARTPID7|macro|UARTPID7
DECL|UARTRIS|macro|UARTRIS
DECL|UARTSR|macro|UARTSR
DECL|UARTTIM_BEIM|macro|UARTTIM_BEIM
DECL|UARTTIM_FEIM|macro|UARTTIM_FEIM
DECL|UARTTIM_OEIM|macro|UARTTIM_OEIM
DECL|UARTTIM_PEIM|macro|UARTTIM_PEIM
DECL|UARTTIM_RTIM|macro|UARTTIM_RTIM
DECL|UARTTIM_RXIM|macro|UARTTIM_RXIM
DECL|UARTTIM_TXIM|macro|UARTTIM_TXIM
DECL|_StellarisUartPort|struct|struct _StellarisUartPort {
DECL|_Uart|struct|struct _Uart {
DECL|_cr|member|uint32_t _cr;
DECL|_res1|member|uint8_t _res1[0x010];
DECL|_res2|member|uint8_t _res2[0x04];
DECL|_res3|member|uint8_t _res3[0xf8c];
DECL|_sr|member|uint32_t _sr;
DECL|base|member|void *base; /* base address of registers */
DECL|baudrateSet|function|static void baudrateSet(int port, uint32_t baudrate, uint32_t sysClkFreqInHz)
DECL|cr|macro|cr
DECL|ctl|member|uint32_t ctl;
DECL|disable|function|static inline void disable(int port)
DECL|dr|member|uint32_t dr;
DECL|enable|function|static inline void enable(int port)
DECL|fbrd|member|uint32_t fbrd;
DECL|fr|member|uint32_t fr;
DECL|ibrd|member|uint32_t ibrd;
DECL|icr|member|uint32_t icr;
DECL|ifls|member|uint32_t ifls;
DECL|ilpr|member|uint32_t ilpr;
DECL|im|member|uint32_t im;
DECL|intPri|member|uint8_t intPri; /* interrupt priority level */
DECL|irq|member|uint8_t irq; /* interrupt request number */
DECL|lcrh|member|uint32_t lcrh;
DECL|lineControlDefaultsSet|function|static inline void lineControlDefaultsSet(int port)
DECL|mis|member|uint32_t mis;
DECL|pollTxReady|function|static int pollTxReady(int port)
DECL|ris|member|uint32_t ris;
DECL|sr|macro|sr
DECL|u1|member|} u1;
DECL|uart_fifo_fill|function|int uart_fifo_fill(int port, /* UART on which to send */ const uint8_t *txData, /* data to transmit */ int len /* number of bytes to send */ )
DECL|uart_fifo_read|function|int uart_fifo_read(int port, /* UART to receive from */ uint8_t *rxData, /* data container */ const int size /* container size */ )
DECL|uart_init|function|void uart_init(int port, /* UART channel to initialize */ const struct uart_init_info * const init_info )
DECL|uart_irq_err_disable|function|void uart_irq_err_disable(int port /* UART to disable interrupts for */ )
DECL|uart_irq_err_enable|function|void uart_irq_err_enable(int port /* UART to enable interrupts for */ )
DECL|uart_irq_get|function|unsigned int uart_irq_get(int port /* UART port */ )
DECL|uart_irq_is_pending|function|int uart_irq_is_pending(int port /* UART to check */ )
DECL|uart_irq_rx_disable|function|void uart_irq_rx_disable(int port /* UART to disable Rx interrupt */ )
DECL|uart_irq_rx_enable|function|void uart_irq_rx_enable(int port /* UART to enable Rx interrupt */ )
DECL|uart_irq_rx_ready|function|int uart_irq_rx_ready(int port /* UART to check */ )
DECL|uart_irq_tx_disable|function|void uart_irq_tx_disable(int port /* UART to disable Tx interrupt */ )
DECL|uart_irq_tx_enable|function|void uart_irq_tx_enable(int port /* UART to enable Tx interrupt */ )
DECL|uart_irq_tx_ready|function|int uart_irq_tx_ready(int port /* UART to check */ )
DECL|uart_irq_update|function|int uart_irq_update(int port)
DECL|uart_poll_in|function|int uart_poll_in(int port, /* UART channel to select for input */ unsigned char *pChar /* pointer to char */ )
DECL|uart_poll_out|function|unsigned char uart_poll_out(int port, unsigned char c)
