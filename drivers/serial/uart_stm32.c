DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|STM32_CLOCK_UART|macro|STM32_CLOCK_UART
DECL|STM32_UART_INIT|macro|STM32_UART_INIT
DECL|STM32_UART_IRQ_HANDLER_DECL|macro|STM32_UART_IRQ_HANDLER_DECL
DECL|STM32_UART_IRQ_HANDLER_DECL|macro|STM32_UART_IRQ_HANDLER_DECL
DECL|STM32_UART_IRQ_HANDLER_FUNC|macro|STM32_UART_IRQ_HANDLER_FUNC
DECL|STM32_UART_IRQ_HANDLER_FUNC|macro|STM32_UART_IRQ_HANDLER_FUNC
DECL|STM32_UART_IRQ_HANDLER|macro|STM32_UART_IRQ_HANDLER
DECL|STM32_UART_IRQ_HANDLER|macro|STM32_UART_IRQ_HANDLER
DECL|TIMEOUT|macro|TIMEOUT
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|__uart_stm32_get_clock|function|static inline void __uart_stm32_get_clock(struct device *dev)
DECL|uart_stm32_driver_api|variable|uart_stm32_driver_api
DECL|uart_stm32_fifo_fill|function|static int uart_stm32_fifo_fill(struct device *dev, const u8_t *tx_data, int size)
DECL|uart_stm32_fifo_read|function|static int uart_stm32_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_stm32_init|function|static int uart_stm32_init(struct device *dev)
DECL|uart_stm32_irq_callback_set|function|static void uart_stm32_irq_callback_set(struct device *dev,uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_stm32_irq_err_disable|function|static void uart_stm32_irq_err_disable(struct device *dev)
DECL|uart_stm32_irq_err_enable|function|static void uart_stm32_irq_err_enable(struct device *dev)
DECL|uart_stm32_irq_is_pending|function|static int uart_stm32_irq_is_pending(struct device *dev)
DECL|uart_stm32_irq_rx_disable|function|static void uart_stm32_irq_rx_disable(struct device *dev)
DECL|uart_stm32_irq_rx_enable|function|static void uart_stm32_irq_rx_enable(struct device *dev)
DECL|uart_stm32_irq_rx_ready|function|static int uart_stm32_irq_rx_ready(struct device *dev)
DECL|uart_stm32_irq_tx_complete|function|static int uart_stm32_irq_tx_complete(struct device *dev)
DECL|uart_stm32_irq_tx_disable|function|static void uart_stm32_irq_tx_disable(struct device *dev)
DECL|uart_stm32_irq_tx_enable|function|static void uart_stm32_irq_tx_enable(struct device *dev)
DECL|uart_stm32_irq_tx_ready|function|static int uart_stm32_irq_tx_ready(struct device *dev)
DECL|uart_stm32_irq_update|function|static int uart_stm32_irq_update(struct device *dev)
DECL|uart_stm32_isr|function|static void uart_stm32_isr(void *arg)
DECL|uart_stm32_lpuart_set_baud_rate|function|static void uart_stm32_lpuart_set_baud_rate(struct device *dev, u32_t clock_rate, u32_t baud_rate)
DECL|uart_stm32_poll_in|function|static int uart_stm32_poll_in(struct device *dev, unsigned char *c)
DECL|uart_stm32_poll_out|function|static unsigned char uart_stm32_poll_out(struct device *dev,unsigned char c)
DECL|uart_stm32_usart_set_baud_rate|function|static void uart_stm32_usart_set_baud_rate(struct device *dev, u32_t clock_rate, u32_t baud_rate)
