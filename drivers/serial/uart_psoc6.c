DECL|base|member|CySCB_Type *base;
DECL|cypress_psoc6_config|struct|struct cypress_psoc6_config {
DECL|cypress_psoc6_uart5_config|variable|cypress_psoc6_uart5_config
DECL|cypress_psoc6_uart6_config|variable|cypress_psoc6_uart6_config
DECL|port|member|GPIO_PRT_Type *port;
DECL|rx_num|member|u32_t rx_num;
DECL|rx_val|member|en_hsiom_sel_t rx_val;
DECL|scb_clock|member|en_clk_dst_t scb_clock;
DECL|tx_num|member|u32_t tx_num;
DECL|tx_val|member|en_hsiom_sel_t tx_val;
DECL|uartConfig|variable|uartConfig
DECL|uart_psoc6_driver_api|variable|uart_psoc6_driver_api
DECL|uart_psoc6_init|function|static int uart_psoc6_init(struct device *dev)
DECL|uart_psoc6_poll_in|function|static int uart_psoc6_poll_in(struct device *dev, unsigned char *c)
DECL|uart_psoc6_poll_out|function|static unsigned char uart_psoc6_poll_out(struct device *dev, unsigned char c)
