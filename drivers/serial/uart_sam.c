DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|baud_rate|member|uint32_t baud_rate;
DECL|baudrate_set|function|static int baudrate_set(Uart *const uart, uint32_t baudrate,uint32_t mck_freq_hz)
DECL|periph_id|member|uint32_t periph_id;
DECL|pin_rx|member|struct soc_gpio_pin pin_rx;
DECL|pin_tx|member|struct soc_gpio_pin pin_tx;
DECL|regs|member|Uart *regs;
DECL|uart0_sam_config|variable|uart0_sam_config
DECL|uart0_sam_data|variable|uart0_sam_data
DECL|uart1_sam_config|variable|uart1_sam_config
DECL|uart1_sam_data|variable|uart1_sam_data
DECL|uart2_sam_config|variable|uart2_sam_config
DECL|uart2_sam_data|variable|uart2_sam_data
DECL|uart3_sam_config|variable|uart3_sam_config
DECL|uart3_sam_data|variable|uart3_sam_data
DECL|uart4_sam_config|variable|uart4_sam_config
DECL|uart4_sam_data|variable|uart4_sam_data
DECL|uart_sam_dev_cfg|struct|struct uart_sam_dev_cfg {
DECL|uart_sam_dev_data|struct|struct uart_sam_dev_data {
DECL|uart_sam_driver_api|variable|uart_sam_driver_api
DECL|uart_sam_init|function|static int uart_sam_init(struct device *dev)
DECL|uart_sam_poll_in|function|static int uart_sam_poll_in(struct device *dev, unsigned char *c)
DECL|uart_sam_poll_out|function|static unsigned char uart_sam_poll_out(struct device *dev, unsigned char c)
