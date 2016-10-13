DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|baud_rate|member|uint32_t baud_rate;
DECL|baudrate_set|function|static int baudrate_set(Usart *const usart, uint32_t baudrate,uint32_t mck_freq_hz)
DECL|periph_id|member|uint32_t periph_id;
DECL|pin_rx|member|struct soc_gpio_pin pin_rx;
DECL|pin_tx|member|struct soc_gpio_pin pin_tx;
DECL|regs|member|Usart *regs;
DECL|usart0_sam_config|variable|usart0_sam_config
DECL|usart0_sam_data|variable|usart0_sam_data
DECL|usart1_sam_config|variable|usart1_sam_config
DECL|usart1_sam_data|variable|usart1_sam_data
DECL|usart2_sam_config|variable|usart2_sam_config
DECL|usart2_sam_data|variable|usart2_sam_data
DECL|usart_sam_dev_cfg|struct|struct usart_sam_dev_cfg {
DECL|usart_sam_dev_data|struct|struct usart_sam_dev_data {
DECL|usart_sam_driver_api|variable|usart_sam_driver_api
DECL|usart_sam_init|function|static int usart_sam_init(struct device *dev)
DECL|usart_sam_poll_in|function|static int usart_sam_poll_in(struct device *dev, unsigned char *c)
DECL|usart_sam_poll_out|function|static unsigned char usart_sam_poll_out(struct device *dev, unsigned char c)
