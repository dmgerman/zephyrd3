DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|LINE_CONTROL_DEFAULTS|macro|LINE_CONTROL_DEFAULTS
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
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|_cr|member|uint32_t _cr;
DECL|_res1|member|uint8_t _res1[0x010];
DECL|_res2|member|uint8_t _res2[0x04];
DECL|_res3|member|uint8_t _res3[0xf8c];
DECL|_sr|member|uint32_t _sr;
DECL|_uart|struct|struct _uart {
DECL|baud_rate|member|uint32_t baud_rate; /* Baud rate */
DECL|baudrate_set|function|static void baudrate_set(struct device *dev, uint32_t baudrate, uint32_t sys_clk_freq_hz)
DECL|cr|macro|cr
DECL|ctl|member|uint32_t ctl;
DECL|disable|function|static inline void disable(struct device *dev)
DECL|dr|member|uint32_t dr;
DECL|enable|function|static inline void enable(struct device *dev)
DECL|fbrd|member|uint32_t fbrd;
DECL|fr|member|uint32_t fr;
DECL|ibrd|member|uint32_t ibrd;
DECL|icr|member|uint32_t icr;
DECL|ifls|member|uint32_t ifls;
DECL|ilpr|member|uint32_t ilpr;
DECL|im|member|uint32_t im;
DECL|lcrh|member|uint32_t lcrh;
DECL|line_control_defaults_set|function|static inline void line_control_defaults_set(struct device *dev)
DECL|mis|member|uint32_t mis;
DECL|p_cell_id0|member|uint32_t p_cell_id0;
DECL|p_cell_id1|member|uint32_t p_cell_id1;
DECL|p_cell_id2|member|uint32_t p_cell_id2;
DECL|p_cell_id3|member|uint32_t p_cell_id3;
DECL|peripd_id0|member|uint32_t peripd_id0;
DECL|peripd_id1|member|uint32_t peripd_id1;
DECL|peripd_id2|member|uint32_t peripd_id2;
DECL|peripd_id3|member|uint32_t peripd_id3;
DECL|peripd_id4|member|uint32_t peripd_id4;
DECL|peripd_id5|member|uint32_t peripd_id5;
DECL|peripd_id6|member|uint32_t peripd_id6;
DECL|peripd_id7|member|uint32_t peripd_id7;
DECL|poll_tx_ready|function|static int poll_tx_ready(struct device *dev)
DECL|ris|member|uint32_t ris;
DECL|sr|macro|sr
DECL|u1|member|} u1;
DECL|uart_stellaris_dev_cfg_0|variable|uart_stellaris_dev_cfg_0
DECL|uart_stellaris_dev_cfg_1|variable|uart_stellaris_dev_cfg_1
DECL|uart_stellaris_dev_cfg_2|variable|uart_stellaris_dev_cfg_2
DECL|uart_stellaris_dev_data_0|variable|uart_stellaris_dev_data_0
DECL|uart_stellaris_dev_data_1|variable|uart_stellaris_dev_data_1
DECL|uart_stellaris_dev_data_2|variable|uart_stellaris_dev_data_2
DECL|uart_stellaris_dev_data_t|struct|struct uart_stellaris_dev_data_t {
DECL|uart_stellaris_driver_api|variable|uart_stellaris_driver_api
DECL|uart_stellaris_driver_api|variable|uart_stellaris_driver_api
DECL|uart_stellaris_fifo_fill|function|static int uart_stellaris_fifo_fill(struct device *dev, const uint8_t *tx_data, int len)
DECL|uart_stellaris_fifo_read|function|static int uart_stellaris_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_stellaris_init|function|static int uart_stellaris_init(struct device *dev)
DECL|uart_stellaris_irq_err_disable|function|static void uart_stellaris_irq_err_disable(struct device *dev)
DECL|uart_stellaris_irq_err_enable|function|static void uart_stellaris_irq_err_enable(struct device *dev)
DECL|uart_stellaris_irq_get|function|static unsigned int uart_stellaris_irq_get(struct device *dev)
DECL|uart_stellaris_irq_is_pending|function|static int uart_stellaris_irq_is_pending(struct device *dev)
DECL|uart_stellaris_irq_rx_disable|function|static void uart_stellaris_irq_rx_disable(struct device *dev)
DECL|uart_stellaris_irq_rx_enable|function|static void uart_stellaris_irq_rx_enable(struct device *dev)
DECL|uart_stellaris_irq_rx_ready|function|static int uart_stellaris_irq_rx_ready(struct device *dev)
DECL|uart_stellaris_irq_tx_disable|function|static void uart_stellaris_irq_tx_disable(struct device *dev)
DECL|uart_stellaris_irq_tx_enable|function|static void uart_stellaris_irq_tx_enable(struct device *dev)
DECL|uart_stellaris_irq_tx_ready|function|static int uart_stellaris_irq_tx_ready(struct device *dev)
DECL|uart_stellaris_irq_update|function|static int uart_stellaris_irq_update(struct device *dev)
DECL|uart_stellaris_poll_in|function|static int uart_stellaris_poll_in(struct device *dev, unsigned char *c)
DECL|uart_stellaris_poll_out|function|static unsigned char uart_stellaris_poll_out(struct device *dev, unsigned char c)
