DECL|BAUDVALUE_LSB|macro|BAUDVALUE_LSB
DECL|BAUDVALUE_MSB|macro|BAUDVALUE_MSB
DECL|BAUDVALUE_SHIFT|macro|BAUDVALUE_SHIFT
DECL|CTRL1_BAUDVALUE_MASK|macro|CTRL1_BAUDVALUE_MASK
DECL|CTRL1_BAUDVALUE_OFFSET|macro|CTRL1_BAUDVALUE_OFFSET
DECL|CTRL1_BAUDVALUE_SHIFT|macro|CTRL1_BAUDVALUE_SHIFT
DECL|CTRL1_REG_OFFSET|macro|CTRL1_REG_OFFSET
DECL|CTRL2_BAUDVALUE_MASK|macro|CTRL2_BAUDVALUE_MASK
DECL|CTRL2_BAUDVALUE_OFFSET|macro|CTRL2_BAUDVALUE_OFFSET
DECL|CTRL2_BAUDVALUE_SHIFT|macro|CTRL2_BAUDVALUE_SHIFT
DECL|CTRL2_BIT_LENGTH_MASK|macro|CTRL2_BIT_LENGTH_MASK
DECL|CTRL2_BIT_LENGTH_OFFSET|macro|CTRL2_BIT_LENGTH_OFFSET
DECL|CTRL2_BIT_LENGTH_SHIFT|macro|CTRL2_BIT_LENGTH_SHIFT
DECL|CTRL2_ODD_EVEN_MASK|macro|CTRL2_ODD_EVEN_MASK
DECL|CTRL2_ODD_EVEN_OFFSET|macro|CTRL2_ODD_EVEN_OFFSET
DECL|CTRL2_ODD_EVEN_SHIFT|macro|CTRL2_ODD_EVEN_SHIFT
DECL|CTRL2_PARITY_EN_MASK|macro|CTRL2_PARITY_EN_MASK
DECL|CTRL2_PARITY_EN_OFFSET|macro|CTRL2_PARITY_EN_OFFSET
DECL|CTRL2_PARITY_EN_SHIFT|macro|CTRL2_PARITY_EN_SHIFT
DECL|CTRL2_REG_OFFSET|macro|CTRL2_REG_OFFSET
DECL|DATA_7_BITS|macro|DATA_7_BITS
DECL|DATA_8_BITS|macro|DATA_8_BITS
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_UART|macro|DEV_UART
DECL|EVEN_PARITY|macro|EVEN_PARITY
DECL|NO_PARITY|macro|NO_PARITY
DECL|ODD_PARITY|macro|ODD_PARITY
DECL|RXDATA_MASK|macro|RXDATA_MASK
DECL|RXDATA_OFFSET|macro|RXDATA_OFFSET
DECL|RXDATA_REG_OFFSET|macro|RXDATA_REG_OFFSET
DECL|RXDATA_SHIFT|macro|RXDATA_SHIFT
DECL|STATUS_FRAMERR_MASK|macro|STATUS_FRAMERR_MASK
DECL|STATUS_FRAMERR_OFFSET|macro|STATUS_FRAMERR_OFFSET
DECL|STATUS_FRAMERR_SHIFT|macro|STATUS_FRAMERR_SHIFT
DECL|STATUS_OVERFLOW_MASK|macro|STATUS_OVERFLOW_MASK
DECL|STATUS_OVERFLOW_OFFSET|macro|STATUS_OVERFLOW_OFFSET
DECL|STATUS_OVERFLOW_SHIFT|macro|STATUS_OVERFLOW_SHIFT
DECL|STATUS_PARITYERR_MASK|macro|STATUS_PARITYERR_MASK
DECL|STATUS_PARITYERR_OFFSET|macro|STATUS_PARITYERR_OFFSET
DECL|STATUS_PARITYERR_SHIFT|macro|STATUS_PARITYERR_SHIFT
DECL|STATUS_REG_OFFSET|macro|STATUS_REG_OFFSET
DECL|STATUS_RXFULL_MASK|macro|STATUS_RXFULL_MASK
DECL|STATUS_RXFULL_OFFSET|macro|STATUS_RXFULL_OFFSET
DECL|STATUS_RXFULL_SHIFT|macro|STATUS_RXFULL_SHIFT
DECL|STATUS_TXRDY_MASK|macro|STATUS_TXRDY_MASK
DECL|STATUS_TXRDY_OFFSET|macro|STATUS_TXRDY_OFFSET
DECL|STATUS_TXRDY_SHIFT|macro|STATUS_TXRDY_SHIFT
DECL|StatusReg_REG_OFFSET|macro|StatusReg_REG_OFFSET
DECL|TXDATA_MASK|macro|TXDATA_MASK
DECL|TXDATA_OFFSET|macro|TXDATA_OFFSET
DECL|TXDATA_REG_OFFSET|macro|TXDATA_REG_OFFSET
DECL|TXDATA_SHIFT|macro|TXDATA_SHIFT
DECL|UART_FRAMING_ERROR|macro|UART_FRAMING_ERROR
DECL|UART_OVERFLOW_ERROR|macro|UART_OVERFLOW_ERROR
DECL|UART_PARITY_ERROR|macro|UART_PARITY_ERROR
DECL|baud_rate|member|u32_t baud_rate;
DECL|callback|member|uart_irq_callback_t callback;
DECL|cfg_func|member|irq_cfg_func_t cfg_func;
DECL|ctrlreg1|member|u8_t ctrlreg1;
DECL|ctrlreg2|member|u8_t ctrlreg2;
DECL|irq_cfg_func_t|typedef|typedef void (*irq_cfg_func_t)(struct device *dev);
DECL|line_config|member|u32_t line_config;
DECL|reserved0|member|u8_t reserved0[3];
DECL|reserved1|member|u8_t reserved1[3];
DECL|reserved2|member|u8_t reserved2[3];
DECL|reserved3|member|u8_t reserved3[3];
DECL|rx_thread|variable|rx_thread
DECL|rx|member|u8_t rx;
DECL|status|member|u8_t status;
DECL|sys_clk_freq|member|u32_t sys_clk_freq;
DECL|tx|member|u8_t tx;
DECL|uart_addr|member|u32_t uart_addr;
DECL|uart_miv_data_0|variable|uart_miv_data_0
DECL|uart_miv_data|struct|struct uart_miv_data {
DECL|uart_miv_dev_cfg_0|variable|uart_miv_dev_cfg_0
DECL|uart_miv_device_config|struct|struct uart_miv_device_config {
DECL|uart_miv_driver_api|variable|uart_miv_driver_api
DECL|uart_miv_err_check|function|static int uart_miv_err_check(struct device *dev)
DECL|uart_miv_fifo_fill|function|static int uart_miv_fifo_fill(struct device *dev, const u8_t *tx_data, int size)
DECL|uart_miv_fifo_read|function|static int uart_miv_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_miv_init|function|static int uart_miv_init(struct device *dev)
DECL|uart_miv_irq_callback_set|function|static void uart_miv_irq_callback_set(struct device *dev, uart_irq_callback_t cb)
DECL|uart_miv_irq_cfg_func_0|function|static void uart_miv_irq_cfg_func_0(struct device *dev)
DECL|uart_miv_irq_err_disable|function|static void uart_miv_irq_err_disable(struct device *dev)
DECL|uart_miv_irq_err_enable|function|static void uart_miv_irq_err_enable(struct device *dev)
DECL|uart_miv_irq_handler|function|static void uart_miv_irq_handler(void *arg)
DECL|uart_miv_irq_is_pending|function|static int uart_miv_irq_is_pending(struct device *dev)
DECL|uart_miv_irq_rx_disable|function|static void uart_miv_irq_rx_disable(struct device *dev)
DECL|uart_miv_irq_rx_enable|function|static void uart_miv_irq_rx_enable(struct device *dev)
DECL|uart_miv_irq_rx_ready|function|static int uart_miv_irq_rx_ready(struct device *dev)
DECL|uart_miv_irq_tx_complete|function|static int uart_miv_irq_tx_complete(struct device *dev)
DECL|uart_miv_irq_tx_disable|function|static void uart_miv_irq_tx_disable(struct device *dev)
DECL|uart_miv_irq_tx_enable|function|static void uart_miv_irq_tx_enable(struct device *dev)
DECL|uart_miv_irq_tx_ready|function|static int uart_miv_irq_tx_ready(struct device *dev)
DECL|uart_miv_irq_update|function|static int uart_miv_irq_update(struct device *dev)
DECL|uart_miv_poll_in|function|static int uart_miv_poll_in(struct device *dev, unsigned char *c)
DECL|uart_miv_poll_out|function|static unsigned char uart_miv_poll_out(struct device *dev, unsigned char c)
DECL|uart_miv_regs_t|struct|struct uart_miv_regs_t {
DECL|uart_miv_rx_thread|function|void uart_miv_rx_thread(void *arg1, void *arg2, void *arg3)
