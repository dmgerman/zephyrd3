DECL|DEV_CFG|macro|DEV_CFG
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|base|member|UART_Type *base;
DECL|baud_rate|member|u32_t baud_rate;
DECL|callback|member|uart_irq_callback_user_data_t callback;
DECL|cb_data|member|void *cb_data;
DECL|imx_uart_1_config|variable|imx_uart_1_config
DECL|imx_uart_1_data|variable|imx_uart_1_data
DECL|imx_uart_2_config|variable|imx_uart_2_config
DECL|imx_uart_2_data|variable|imx_uart_2_data
DECL|imx_uart_3_config|variable|imx_uart_3_config
DECL|imx_uart_3_data|variable|imx_uart_3_data
DECL|imx_uart_4_config|variable|imx_uart_4_config
DECL|imx_uart_4_data|variable|imx_uart_4_data
DECL|imx_uart_5_config|variable|imx_uart_5_config
DECL|imx_uart_5_data|variable|imx_uart_5_data
DECL|imx_uart_6_config|variable|imx_uart_6_config
DECL|imx_uart_6_data|variable|imx_uart_6_data
DECL|imx_uart_7_config|variable|imx_uart_7_config
DECL|imx_uart_7_data|variable|imx_uart_7_data
DECL|imx_uart_config|struct|struct imx_uart_config {
DECL|imx_uart_data|struct|struct imx_uart_data {
DECL|irq_config_func_1|function|static void irq_config_func_1(struct device *dev)
DECL|irq_config_func_2|function|static void irq_config_func_2(struct device *dev)
DECL|irq_config_func_3|function|static void irq_config_func_3(struct device *dev)
DECL|irq_config_func_4|function|static void irq_config_func_4(struct device *dev)
DECL|irq_config_func_5|function|static void irq_config_func_5(struct device *dev)
DECL|irq_config_func_6|function|static void irq_config_func_6(struct device *dev)
DECL|irq_config_func_7|function|static void irq_config_func_7(struct device *dev)
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|modem_mode|member|u8_t modem_mode;
DECL|uart_imx_driver_api|variable|uart_imx_driver_api
DECL|uart_imx_fifo_fill|function|static int uart_imx_fifo_fill(struct device *dev, const u8_t *tx_data, int size)
DECL|uart_imx_fifo_read|function|static int uart_imx_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_imx_init|function|static int uart_imx_init(struct device *dev)
DECL|uart_imx_irq_callback_set|function|static void uart_imx_irq_callback_set(struct device *dev,uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_imx_irq_err_disable|function|static void uart_imx_irq_err_disable(struct device *dev)
DECL|uart_imx_irq_err_enable|function|static void uart_imx_irq_err_enable(struct device *dev)
DECL|uart_imx_irq_is_pending|function|static int uart_imx_irq_is_pending(struct device *dev)
DECL|uart_imx_irq_rx_disable|function|static void uart_imx_irq_rx_disable(struct device *dev)
DECL|uart_imx_irq_rx_enable|function|static void uart_imx_irq_rx_enable(struct device *dev)
DECL|uart_imx_irq_rx_ready|function|static int uart_imx_irq_rx_ready(struct device *dev)
DECL|uart_imx_irq_tx_disable|function|static void uart_imx_irq_tx_disable(struct device *dev)
DECL|uart_imx_irq_tx_enable|function|static void uart_imx_irq_tx_enable(struct device *dev)
DECL|uart_imx_irq_tx_ready|function|static int uart_imx_irq_tx_ready(struct device *dev)
DECL|uart_imx_irq_update|function|static int uart_imx_irq_update(struct device *dev)
DECL|uart_imx_isr|function|void uart_imx_isr(void *arg)
DECL|uart_imx_poll_in|function|static int uart_imx_poll_in(struct device *dev, unsigned char *c)
DECL|uart_imx_poll_out|function|static unsigned char uart_imx_poll_out(struct device *dev, unsigned char c)
