DECL|_STM32_UART_H_|macro|_STM32_UART_H_
DECL|clock_subsys|member|clock_control_subsys_t clock_subsys;
DECL|clock|member|struct device *clock;
DECL|huart|member|UART_HandleTypeDef huart;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|uart_stm32_config|struct|struct uart_stm32_config {
DECL|uart_stm32_data|struct|struct uart_stm32_data {
DECL|uconf|member|struct uart_device_config uconf;
DECL|user_cb|member|uart_irq_callback_t user_cb;
