DECL|CTRL_CNT|macro|CTRL_CNT
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_UART|macro|DEV_UART
DECL|IE_RXWM|macro|IE_RXWM
DECL|IE_TXWM|macro|IE_TXWM
DECL|RXCTRL_RXEN|macro|RXCTRL_RXEN
DECL|RXDATA_EMPTY|macro|RXDATA_EMPTY
DECL|RXDATA_MASK|macro|RXDATA_MASK
DECL|TXCTRL_TXEN|macro|TXCTRL_TXEN
DECL|TXDATA_FULL|macro|TXDATA_FULL
DECL|baud_rate|member|uint32_t baud_rate;
DECL|callback|member|uart_irq_callback_t callback;
DECL|cfg_func|member|irq_cfg_func_t cfg_func;
DECL|div|member|uint32_t div;
DECL|ie|member|uint32_t ie;
DECL|ip|member|uint32_t ip;
DECL|irq_cfg_func_t|typedef|typedef void (*irq_cfg_func_t)(void);
DECL|port|member|uint32_t port;
DECL|rxcnt_irq|member|uint32_t rxcnt_irq;
DECL|rxctrl|member|uint32_t rxctrl;
DECL|rx|member|uint32_t rx;
DECL|sys_clk_freq|member|uint32_t sys_clk_freq;
DECL|txcnt_irq|member|uint32_t txcnt_irq;
DECL|txctrl|member|uint32_t txctrl;
DECL|tx|member|uint32_t tx;
DECL|uart_fe310_data_0|variable|uart_fe310_data_0
DECL|uart_fe310_data_1|variable|uart_fe310_data_1
DECL|uart_fe310_data|struct|struct uart_fe310_data {
DECL|uart_fe310_dev_cfg_0|variable|uart_fe310_dev_cfg_0
DECL|uart_fe310_dev_cfg_1|variable|uart_fe310_dev_cfg_1
DECL|uart_fe310_device_config|struct|struct uart_fe310_device_config {
DECL|uart_fe310_driver_api|variable|uart_fe310_driver_api
DECL|uart_fe310_fifo_fill|function|static int uart_fe310_fifo_fill(struct device *dev,const uint8_t *tx_data, int size)
DECL|uart_fe310_fifo_read|function|static int uart_fe310_fifo_read(struct device *dev,uint8_t *rx_data, const int size)
DECL|uart_fe310_init|function|static int uart_fe310_init(struct device *dev)
DECL|uart_fe310_irq_callback_set|function|static void uart_fe310_irq_callback_set(struct device *dev,uart_irq_callback_t cb)
DECL|uart_fe310_irq_cfg_func_0|function|static void uart_fe310_irq_cfg_func_0(void)
DECL|uart_fe310_irq_cfg_func_0|function|static void uart_fe310_irq_cfg_func_0(void)
DECL|uart_fe310_irq_err_disable|function|static void uart_fe310_irq_err_disable(struct device *dev)
DECL|uart_fe310_irq_err_enable|function|static void uart_fe310_irq_err_enable(struct device *dev)
DECL|uart_fe310_irq_handler|function|static void uart_fe310_irq_handler(void *arg)
DECL|uart_fe310_irq_is_pending|function|static int uart_fe310_irq_is_pending(struct device *dev)
DECL|uart_fe310_irq_rx_disable|function|static void uart_fe310_irq_rx_disable(struct device *dev)
DECL|uart_fe310_irq_rx_enable|function|static void uart_fe310_irq_rx_enable(struct device *dev)
DECL|uart_fe310_irq_rx_ready|function|static int uart_fe310_irq_rx_ready(struct device *dev)
DECL|uart_fe310_irq_tx_disable|function|static void uart_fe310_irq_tx_disable(struct device *dev)
DECL|uart_fe310_irq_tx_empty|function|static int uart_fe310_irq_tx_empty(struct device *dev)
DECL|uart_fe310_irq_tx_enable|function|static void uart_fe310_irq_tx_enable(struct device *dev)
DECL|uart_fe310_irq_tx_ready|function|static int uart_fe310_irq_tx_ready(struct device *dev)
DECL|uart_fe310_irq_update|function|static int uart_fe310_irq_update(struct device *dev)
DECL|uart_fe310_poll_in|function|static int uart_fe310_poll_in(struct device *dev, unsigned char *c)
DECL|uart_fe310_poll_out|function|static unsigned char uart_fe310_poll_out(struct device *dev, unsigned char c)
DECL|uart_fe310_regs_t|struct|struct uart_fe310_regs_t {
