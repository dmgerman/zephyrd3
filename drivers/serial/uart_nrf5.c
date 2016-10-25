DECL|BAUDRATE|member|__IO uint32_t BAUDRATE;
DECL|CONFIG|member|__IO uint32_t CONFIG;
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|ENABLE|member|__IO uint32_t ENABLE;
DECL|ERRORSRC|member|__IO uint32_t ERRORSRC;
DECL|EVENTS_CTS|member|__IO uint32_t EVENTS_CTS;
DECL|EVENTS_ERROR|member|__IO uint32_t EVENTS_ERROR;
DECL|EVENTS_NCTS|member|__IO uint32_t EVENTS_NCTS;
DECL|EVENTS_RXDRDY|member|__IO uint32_t EVENTS_RXDRDY;
DECL|EVENTS_RXTO|member|__IO uint32_t EVENTS_RXTO;
DECL|EVENTS_TXDRDY|member|__IO uint32_t EVENTS_TXDRDY;
DECL|INTENCLR|member|__IO uint32_t INTENCLR;
DECL|INTENSET|member|__IO uint32_t INTENSET;
DECL|PSELCTS|member|__IO uint32_t PSELCTS;
DECL|PSELRTS|member|__IO uint32_t PSELRTS;
DECL|PSELRXD|member|__IO uint32_t PSELRXD;
DECL|PSELTXD|member|__IO uint32_t PSELTXD;
DECL|RESERVED0|member|__I uint32_t RESERVED0[3];
DECL|RESERVED10|member|__I uint32_t RESERVED10;
DECL|RESERVED11|member|__I uint32_t RESERVED11[17];
DECL|RESERVED1|member|__I uint32_t RESERVED1[56];
DECL|RESERVED2|member|__I uint32_t RESERVED2[4];
DECL|RESERVED3|member|__I uint32_t RESERVED3;
DECL|RESERVED4|member|__I uint32_t RESERVED4[7];
DECL|RESERVED5|member|__I uint32_t RESERVED5[46];
DECL|RESERVED6|member|__I uint32_t RESERVED6[64];
DECL|RESERVED7|member|__I uint32_t RESERVED7[93];
DECL|RESERVED8|member|__I uint32_t RESERVED8[31];
DECL|RESERVED9|member|__I uint32_t RESERVED9;
DECL|RXD|member|__I uint32_t RXD;
DECL|SHORTS|member|__IO uint32_t SHORTS;
DECL|TASKS_STARTRX|member|__O uint32_t TASKS_STARTRX;
DECL|TASKS_STARTTX|member|__O uint32_t TASKS_STARTTX;
DECL|TASKS_STOPRX|member|__O uint32_t TASKS_STOPRX;
DECL|TASKS_STOPTX|member|__O uint32_t TASKS_STOPTX;
DECL|TASKS_SUSPEND|member|__O uint32_t TASKS_SUSPEND;
DECL|TXD|member|__O uint32_t TXD;
DECL|UART_IRQ_MASK_ERROR|macro|UART_IRQ_MASK_ERROR
DECL|UART_IRQ_MASK_RX|macro|UART_IRQ_MASK_RX
DECL|UART_IRQ_MASK_TX|macro|UART_IRQ_MASK_TX
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|_uart|struct|struct _uart {
DECL|baud_rate|member|uint32_t baud_rate; /**< Baud rate */
DECL|baudrate_set|function|static int baudrate_set(struct device *dev, uint32_t baudrate, uint32_t sys_clk_freq_hz)
DECL|cb|member|uart_irq_callback_t cb; /**< Callback function pointer */
DECL|uart_nrf5_dev_cfg_0|variable|uart_nrf5_dev_cfg_0
DECL|uart_nrf5_dev_data_0|variable|uart_nrf5_dev_data_0
DECL|uart_nrf5_dev_data_t|struct|struct uart_nrf5_dev_data_t {
DECL|uart_nrf5_driver_api|variable|uart_nrf5_driver_api
DECL|uart_nrf5_driver_api|variable|uart_nrf5_driver_api
DECL|uart_nrf5_err_check|function|static int uart_nrf5_err_check(struct device *dev)
DECL|uart_nrf5_fifo_fill|function|static int uart_nrf5_fifo_fill(struct device *dev, const uint8_t *tx_data, int len)
DECL|uart_nrf5_fifo_read|function|static int uart_nrf5_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_nrf5_init|function|static int uart_nrf5_init(struct device *dev)
DECL|uart_nrf5_irq_callback_set|function|static void uart_nrf5_irq_callback_set(struct device *dev, uart_irq_callback_t cb)
DECL|uart_nrf5_irq_config|function|static void uart_nrf5_irq_config(struct device *port)
DECL|uart_nrf5_irq_err_disable|function|static void uart_nrf5_irq_err_disable(struct device *dev)
DECL|uart_nrf5_irq_err_enable|function|static void uart_nrf5_irq_err_enable(struct device *dev)
DECL|uart_nrf5_irq_is_pending|function|static int uart_nrf5_irq_is_pending(struct device *dev)
DECL|uart_nrf5_irq_rx_disable|function|static void uart_nrf5_irq_rx_disable(struct device *dev)
DECL|uart_nrf5_irq_rx_enable|function|static void uart_nrf5_irq_rx_enable(struct device *dev)
DECL|uart_nrf5_irq_rx_ready|function|static int uart_nrf5_irq_rx_ready(struct device *dev)
DECL|uart_nrf5_irq_tx_disable|function|static void uart_nrf5_irq_tx_disable(struct device *dev)
DECL|uart_nrf5_irq_tx_empty|function|static int uart_nrf5_irq_tx_empty(struct device *dev)
DECL|uart_nrf5_irq_tx_enable|function|static void uart_nrf5_irq_tx_enable(struct device *dev)
DECL|uart_nrf5_irq_tx_ready|function|static int uart_nrf5_irq_tx_ready(struct device *dev)
DECL|uart_nrf5_irq_update|function|static int uart_nrf5_irq_update(struct device *dev)
DECL|uart_nrf5_isr|function|void uart_nrf5_isr(void *arg)
DECL|uart_nrf5_poll_in|function|static int uart_nrf5_poll_in(struct device *dev, unsigned char *c)
DECL|uart_nrf5_poll_out|function|static unsigned char uart_nrf5_poll_out(struct device *dev,unsigned char c)
