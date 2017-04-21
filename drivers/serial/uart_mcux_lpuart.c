DECL|base|member|LPUART_Type *base;
DECL|baud_rate|member|u32_t baud_rate;
DECL|callback|member|uart_irq_callback_t callback;
DECL|clock_source|member|clock_name_t clock_source;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_lpuart_0_config|variable|mcux_lpuart_0_config
DECL|mcux_lpuart_0_data|variable|mcux_lpuart_0_data
DECL|mcux_lpuart_config_func_0|function|static void mcux_lpuart_config_func_0(struct device *dev)
DECL|mcux_lpuart_config|struct|struct mcux_lpuart_config {
DECL|mcux_lpuart_data|struct|struct mcux_lpuart_data {
DECL|mcux_lpuart_driver_api|variable|mcux_lpuart_driver_api
DECL|mcux_lpuart_err_check|function|static int mcux_lpuart_err_check(struct device *dev)
DECL|mcux_lpuart_fifo_fill|function|static int mcux_lpuart_fifo_fill(struct device *dev, const u8_t *tx_data, int len)
DECL|mcux_lpuart_fifo_read|function|static int mcux_lpuart_fifo_read(struct device *dev, u8_t *rx_data, const int len)
DECL|mcux_lpuart_init|function|static int mcux_lpuart_init(struct device *dev)
DECL|mcux_lpuart_irq_callback_set|function|static void mcux_lpuart_irq_callback_set(struct device *dev, uart_irq_callback_t cb)
DECL|mcux_lpuart_irq_err_disable|function|static void mcux_lpuart_irq_err_disable(struct device *dev)
DECL|mcux_lpuart_irq_err_enable|function|static void mcux_lpuart_irq_err_enable(struct device *dev)
DECL|mcux_lpuart_irq_is_pending|function|static int mcux_lpuart_irq_is_pending(struct device *dev)
DECL|mcux_lpuart_irq_rx_disable|function|static void mcux_lpuart_irq_rx_disable(struct device *dev)
DECL|mcux_lpuart_irq_rx_enable|function|static void mcux_lpuart_irq_rx_enable(struct device *dev)
DECL|mcux_lpuart_irq_rx_full|function|static int mcux_lpuart_irq_rx_full(struct device *dev)
DECL|mcux_lpuart_irq_rx_ready|function|static int mcux_lpuart_irq_rx_ready(struct device *dev)
DECL|mcux_lpuart_irq_tx_disable|function|static void mcux_lpuart_irq_tx_disable(struct device *dev)
DECL|mcux_lpuart_irq_tx_empty|function|static int mcux_lpuart_irq_tx_empty(struct device *dev)
DECL|mcux_lpuart_irq_tx_enable|function|static void mcux_lpuart_irq_tx_enable(struct device *dev)
DECL|mcux_lpuart_irq_tx_ready|function|static int mcux_lpuart_irq_tx_ready(struct device *dev)
DECL|mcux_lpuart_irq_update|function|static int mcux_lpuart_irq_update(struct device *dev)
DECL|mcux_lpuart_isr|function|static void mcux_lpuart_isr(void *arg)
DECL|mcux_lpuart_poll_in|function|static int mcux_lpuart_poll_in(struct device *dev, unsigned char *c)
DECL|mcux_lpuart_poll_out|function|static unsigned char mcux_lpuart_poll_out(struct device *dev, unsigned char c)
