DECL|base|member|USART_Type *base;
DECL|baud_rate|member|u32_t baud_rate;
DECL|clock_source|member|clock_name_t clock_source;
DECL|usart_mcux_lpc_0_config|variable|usart_mcux_lpc_0_config
DECL|usart_mcux_lpc_0_data|variable|usart_mcux_lpc_0_data
DECL|usart_mcux_lpc_config|struct|struct usart_mcux_lpc_config {
DECL|usart_mcux_lpc_data|struct|struct usart_mcux_lpc_data {
DECL|usart_mcux_lpc_driver_api|variable|usart_mcux_lpc_driver_api
DECL|usart_mcux_lpc_err_check|function|static int usart_mcux_lpc_err_check(struct device *dev)
DECL|usart_mcux_lpc_init|function|static int usart_mcux_lpc_init(struct device *dev)
DECL|usart_mcux_lpc_poll_in|function|static int usart_mcux_lpc_poll_in(struct device *dev, unsigned char *c)
DECL|usart_mcux_lpc_poll_out|function|static unsigned char usart_mcux_lpc_poll_out(struct device *dev, unsigned char c)
