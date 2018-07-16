DECL|_STM32_UART_H_|macro|_STM32_UART_H_
DECL|baud_rate|member|u32_t baud_rate;
DECL|clock|member|struct device *clock;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|uart_stm32_config|struct|struct uart_stm32_config {
DECL|uart_stm32_data|struct|struct uart_stm32_data {
DECL|uconf|member|struct uart_device_config uconf;
DECL|user_cb|member|uart_irq_callback_user_data_t user_cb;
DECL|user_data|member|void *user_data;
