DECL|base|member|UART0_Type *base;
DECL|baud_rate|member|u32_t baud_rate;
DECL|callback|member|uart_irq_callback_user_data_t callback;
DECL|cb_data|member|void *cb_data;
DECL|clock_name|member|char *clock_name;
DECL|clock_subsys|member|clock_control_subsys_t clock_subsys;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_lpsci_0_config|variable|mcux_lpsci_0_config
DECL|mcux_lpsci_0_data|variable|mcux_lpsci_0_data
DECL|mcux_lpsci_config_func_0|function|static void mcux_lpsci_config_func_0(struct device *dev)
DECL|mcux_lpsci_config|struct|struct mcux_lpsci_config {
DECL|mcux_lpsci_data|struct|struct mcux_lpsci_data {
DECL|mcux_lpsci_driver_api|variable|mcux_lpsci_driver_api
DECL|mcux_lpsci_err_check|function|static int mcux_lpsci_err_check(struct device *dev)
DECL|mcux_lpsci_fifo_fill|function|static int mcux_lpsci_fifo_fill(struct device *dev, const u8_t *tx_data,int len)
DECL|mcux_lpsci_fifo_read|function|static int mcux_lpsci_fifo_read(struct device *dev, u8_t *rx_data,const int len)
DECL|mcux_lpsci_init|function|static int mcux_lpsci_init(struct device *dev)
DECL|mcux_lpsci_irq_callback_set|function|static void mcux_lpsci_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|mcux_lpsci_irq_err_disable|function|static void mcux_lpsci_irq_err_disable(struct device *dev)
DECL|mcux_lpsci_irq_err_enable|function|static void mcux_lpsci_irq_err_enable(struct device *dev)
DECL|mcux_lpsci_irq_is_pending|function|static int mcux_lpsci_irq_is_pending(struct device *dev)
DECL|mcux_lpsci_irq_rx_disable|function|static void mcux_lpsci_irq_rx_disable(struct device *dev)
DECL|mcux_lpsci_irq_rx_enable|function|static void mcux_lpsci_irq_rx_enable(struct device *dev)
DECL|mcux_lpsci_irq_rx_full|function|static int mcux_lpsci_irq_rx_full(struct device *dev)
DECL|mcux_lpsci_irq_rx_ready|function|static int mcux_lpsci_irq_rx_ready(struct device *dev)
DECL|mcux_lpsci_irq_tx_complete|function|static int mcux_lpsci_irq_tx_complete(struct device *dev)
DECL|mcux_lpsci_irq_tx_disable|function|static void mcux_lpsci_irq_tx_disable(struct device *dev)
DECL|mcux_lpsci_irq_tx_enable|function|static void mcux_lpsci_irq_tx_enable(struct device *dev)
DECL|mcux_lpsci_irq_tx_ready|function|static int mcux_lpsci_irq_tx_ready(struct device *dev)
DECL|mcux_lpsci_irq_update|function|static int mcux_lpsci_irq_update(struct device *dev)
DECL|mcux_lpsci_isr|function|static void mcux_lpsci_isr(void *arg)
DECL|mcux_lpsci_poll_in|function|static int mcux_lpsci_poll_in(struct device *dev, unsigned char *c)
DECL|mcux_lpsci_poll_out|function|static unsigned char mcux_lpsci_poll_out(struct device *dev, unsigned char c)
