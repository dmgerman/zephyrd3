DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|PORT_0_IRQ|macro|PORT_0_IRQ
DECL|PORT_1_IRQ|macro|PORT_1_IRQ
DECL|PORT_2_IRQ|macro|PORT_2_IRQ
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|__uart_stm32_get_clock|function|static inline void __uart_stm32_get_clock(struct device *dev)
DECL|set_baud_rate|function|static void set_baud_rate(struct device *dev, uint32_t rate)
DECL|uart_stm32_dev_cfg_0|variable|uart_stm32_dev_cfg_0
DECL|uart_stm32_dev_cfg_1|variable|uart_stm32_dev_cfg_1
DECL|uart_stm32_dev_cfg_2|variable|uart_stm32_dev_cfg_2
DECL|uart_stm32_dev_data_0|variable|uart_stm32_dev_data_0
DECL|uart_stm32_dev_data_1|variable|uart_stm32_dev_data_1
DECL|uart_stm32_dev_data_2|variable|uart_stm32_dev_data_2
DECL|uart_stm32_driver_api|variable|uart_stm32_driver_api
DECL|uart_stm32_fifo_fill|function|static int uart_stm32_fifo_fill(struct device *dev, const uint8_t *tx_data, int size)
DECL|uart_stm32_fifo_read|function|static int uart_stm32_fifo_read(struct device *dev, uint8_t *rx_data, const int size)
DECL|uart_stm32_init|function|static int uart_stm32_init(struct device *dev)
DECL|uart_stm32_irq_callback_set|function|static void uart_stm32_irq_callback_set(struct device *dev, uart_irq_callback_t cb)
DECL|uart_stm32_irq_config_func_0|function|static void uart_stm32_irq_config_func_0(struct device *dev)
DECL|uart_stm32_irq_config_func_1|function|static void uart_stm32_irq_config_func_1(struct device *dev)
DECL|uart_stm32_irq_config_func_2|function|static void uart_stm32_irq_config_func_2(struct device *dev)
DECL|uart_stm32_irq_err_disable|function|static void uart_stm32_irq_err_disable(struct device *dev)
DECL|uart_stm32_irq_err_enable|function|static void uart_stm32_irq_err_enable(struct device *dev)
DECL|uart_stm32_irq_is_pending|function|static int uart_stm32_irq_is_pending(struct device *dev)
DECL|uart_stm32_irq_rx_disable|function|static void uart_stm32_irq_rx_disable(struct device *dev)
DECL|uart_stm32_irq_rx_enable|function|static void uart_stm32_irq_rx_enable(struct device *dev)
DECL|uart_stm32_irq_rx_ready|function|static int uart_stm32_irq_rx_ready(struct device *dev)
DECL|uart_stm32_irq_tx_disable|function|static void uart_stm32_irq_tx_disable(struct device *dev)
DECL|uart_stm32_irq_tx_empty|function|static int uart_stm32_irq_tx_empty(struct device *dev)
DECL|uart_stm32_irq_tx_enable|function|static void uart_stm32_irq_tx_enable(struct device *dev)
DECL|uart_stm32_irq_tx_ready|function|static int uart_stm32_irq_tx_ready(struct device *dev)
DECL|uart_stm32_irq_update|function|static int uart_stm32_irq_update(struct device *dev)
DECL|uart_stm32_isr|function|static void uart_stm32_isr(void *arg)
DECL|uart_stm32_poll_in|function|static int uart_stm32_poll_in(struct device *dev, unsigned char *c)
DECL|uart_stm32_poll_out|function|static unsigned char uart_stm32_poll_out(struct device *dev,unsigned char c)
