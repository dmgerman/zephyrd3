DECL|base|member|UART_Type *base;
DECL|baud_rate|member|u32_t baud_rate;
DECL|callback|member|uart_irq_callback_user_data_t callback;
DECL|cb_data|member|void *cb_data;
DECL|clock_name|member|char *clock_name;
DECL|clock_subsys|member|clock_control_subsys_t clock_subsys;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|uart_mcux_0_config|variable|uart_mcux_0_config
DECL|uart_mcux_0_data|variable|uart_mcux_0_data
DECL|uart_mcux_1_config|variable|uart_mcux_1_config
DECL|uart_mcux_1_data|variable|uart_mcux_1_data
DECL|uart_mcux_2_config|variable|uart_mcux_2_config
DECL|uart_mcux_2_data|variable|uart_mcux_2_data
DECL|uart_mcux_3_config|variable|uart_mcux_3_config
DECL|uart_mcux_3_data|variable|uart_mcux_3_data
DECL|uart_mcux_4_config|variable|uart_mcux_4_config
DECL|uart_mcux_4_data|variable|uart_mcux_4_data
DECL|uart_mcux_5_config|variable|uart_mcux_5_config
DECL|uart_mcux_5_data|variable|uart_mcux_5_data
DECL|uart_mcux_config_func_0|function|static void uart_mcux_config_func_0(struct device *dev)
DECL|uart_mcux_config_func_1|function|static void uart_mcux_config_func_1(struct device *dev)
DECL|uart_mcux_config_func_2|function|static void uart_mcux_config_func_2(struct device *dev)
DECL|uart_mcux_config_func_3|function|static void uart_mcux_config_func_3(struct device *dev)
DECL|uart_mcux_config_func_4|function|static void uart_mcux_config_func_4(struct device *dev)
DECL|uart_mcux_config_func_5|function|static void uart_mcux_config_func_5(struct device *dev)
DECL|uart_mcux_config|struct|struct uart_mcux_config {
DECL|uart_mcux_data|struct|struct uart_mcux_data {
DECL|uart_mcux_driver_api|variable|uart_mcux_driver_api
DECL|uart_mcux_err_check|function|static int uart_mcux_err_check(struct device *dev)
DECL|uart_mcux_fifo_fill|function|static int uart_mcux_fifo_fill(struct device *dev, const u8_t *tx_data, int len)
DECL|uart_mcux_fifo_read|function|static int uart_mcux_fifo_read(struct device *dev, u8_t *rx_data, const int len)
DECL|uart_mcux_init|function|static int uart_mcux_init(struct device *dev)
DECL|uart_mcux_irq_callback_set|function|static void uart_mcux_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_mcux_irq_err_disable|function|static void uart_mcux_irq_err_disable(struct device *dev)
DECL|uart_mcux_irq_err_enable|function|static void uart_mcux_irq_err_enable(struct device *dev)
DECL|uart_mcux_irq_is_pending|function|static int uart_mcux_irq_is_pending(struct device *dev)
DECL|uart_mcux_irq_rx_disable|function|static void uart_mcux_irq_rx_disable(struct device *dev)
DECL|uart_mcux_irq_rx_enable|function|static void uart_mcux_irq_rx_enable(struct device *dev)
DECL|uart_mcux_irq_rx_full|function|static int uart_mcux_irq_rx_full(struct device *dev)
DECL|uart_mcux_irq_rx_ready|function|static int uart_mcux_irq_rx_ready(struct device *dev)
DECL|uart_mcux_irq_tx_complete|function|static int uart_mcux_irq_tx_complete(struct device *dev)
DECL|uart_mcux_irq_tx_disable|function|static void uart_mcux_irq_tx_disable(struct device *dev)
DECL|uart_mcux_irq_tx_enable|function|static void uart_mcux_irq_tx_enable(struct device *dev)
DECL|uart_mcux_irq_tx_ready|function|static int uart_mcux_irq_tx_ready(struct device *dev)
DECL|uart_mcux_irq_update|function|static int uart_mcux_irq_update(struct device *dev)
DECL|uart_mcux_isr|function|static void uart_mcux_isr(void *arg)
DECL|uart_mcux_poll_in|function|static int uart_mcux_poll_in(struct device *dev, unsigned char *c)
DECL|uart_mcux_poll_out|function|static unsigned char uart_mcux_poll_out(struct device *dev, unsigned char c)
