DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|UART_HS_TM_TX|macro|UART_HS_TM_TX
DECL|UART_RX_BF|macro|UART_RX_BF
DECL|UART_RX_B_OV|macro|UART_RX_B_OV
DECL|UART_RX_EN|macro|UART_RX_EN
DECL|UART_RX_IN_EN|macro|UART_RX_IN_EN
DECL|UART_RX_IN|macro|UART_RX_IN
DECL|UART_RX_OV_EN|macro|UART_RX_OV_EN
DECL|UART_RX_OV_IN|macro|UART_RX_OV_IN
DECL|UART_STRUCT|macro|UART_STRUCT
DECL|UART_TX_BF|macro|UART_TX_BF
DECL|UART_TX_B_OV|macro|UART_TX_B_OV
DECL|UART_TX_EN|macro|UART_TX_EN
DECL|UART_TX_IN_EN|macro|UART_TX_IN_EN
DECL|UART_TX_IN|macro|UART_TX_IN
DECL|UART_TX_OV_EN|macro|UART_TX_OV_EN
DECL|UART_TX_OV_IN|macro|UART_TX_OV_IN
DECL|baud_rate|member|u32_t baud_rate; /* Baud rate */
DECL|bauddiv|member|volatile u32_t bauddiv;
DECL|baudrate_set|function|static void baudrate_set(struct device *dev)
DECL|ctrl|member|volatile u32_t ctrl;
DECL|data|member|volatile u32_t data;
DECL|intclear|member|volatile u32_t intclear;
DECL|intstatus|member|volatile u32_t intstatus;
DECL|irq_cb_data|member|void *irq_cb_data;
DECL|irq_cb|member|uart_irq_callback_user_data_t irq_cb;
DECL|state|member|volatile u32_t state;
DECL|uart_cc_as|member|const struct arm_clock_control_t uart_cc_as;
DECL|uart_cc_dss|member|const struct arm_clock_control_t uart_cc_dss;
DECL|uart_cc_ss|member|const struct arm_clock_control_t uart_cc_ss;
DECL|uart_cmsdk_apb_dev_cfg_0|variable|uart_cmsdk_apb_dev_cfg_0
DECL|uart_cmsdk_apb_dev_cfg_1|variable|uart_cmsdk_apb_dev_cfg_1
DECL|uart_cmsdk_apb_dev_cfg_2|variable|uart_cmsdk_apb_dev_cfg_2
DECL|uart_cmsdk_apb_dev_cfg_3|variable|uart_cmsdk_apb_dev_cfg_3
DECL|uart_cmsdk_apb_dev_cfg_4|variable|uart_cmsdk_apb_dev_cfg_4
DECL|uart_cmsdk_apb_dev_data_0|variable|uart_cmsdk_apb_dev_data_0
DECL|uart_cmsdk_apb_dev_data_1|variable|uart_cmsdk_apb_dev_data_1
DECL|uart_cmsdk_apb_dev_data_2|variable|uart_cmsdk_apb_dev_data_2
DECL|uart_cmsdk_apb_dev_data_3|variable|uart_cmsdk_apb_dev_data_3
DECL|uart_cmsdk_apb_dev_data_4|variable|uart_cmsdk_apb_dev_data_4
DECL|uart_cmsdk_apb_dev_data|struct|struct uart_cmsdk_apb_dev_data {
DECL|uart_cmsdk_apb_driver_api|variable|uart_cmsdk_apb_driver_api
DECL|uart_cmsdk_apb_driver_api|variable|uart_cmsdk_apb_driver_api
DECL|uart_cmsdk_apb_fifo_fill|function|static int uart_cmsdk_apb_fifo_fill(struct device *dev, const u8_t *tx_data, int len)
DECL|uart_cmsdk_apb_fifo_read|function|static int uart_cmsdk_apb_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_cmsdk_apb_init|function|static int uart_cmsdk_apb_init(struct device *dev)
DECL|uart_cmsdk_apb_irq_callback_set|function|static void uart_cmsdk_apb_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_cmsdk_apb_irq_config_func_0|function|static void uart_cmsdk_apb_irq_config_func_0(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_0|function|static void uart_cmsdk_apb_irq_config_func_0(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_1|function|static void uart_cmsdk_apb_irq_config_func_1(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_1|function|static void uart_cmsdk_apb_irq_config_func_1(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_2|function|static void uart_cmsdk_apb_irq_config_func_2(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_2|function|static void uart_cmsdk_apb_irq_config_func_2(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_3|function|static void uart_cmsdk_apb_irq_config_func_3(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_3|function|static void uart_cmsdk_apb_irq_config_func_3(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_4|function|static void uart_cmsdk_apb_irq_config_func_4(struct device *dev)
DECL|uart_cmsdk_apb_irq_config_func_4|function|static void uart_cmsdk_apb_irq_config_func_4(struct device *dev)
DECL|uart_cmsdk_apb_irq_err_disable|function|static void uart_cmsdk_apb_irq_err_disable(struct device *dev)
DECL|uart_cmsdk_apb_irq_err_enable|function|static void uart_cmsdk_apb_irq_err_enable(struct device *dev)
DECL|uart_cmsdk_apb_irq_is_pending|function|static int uart_cmsdk_apb_irq_is_pending(struct device *dev)
DECL|uart_cmsdk_apb_irq_rx_disable|function|static void uart_cmsdk_apb_irq_rx_disable(struct device *dev)
DECL|uart_cmsdk_apb_irq_rx_enable|function|static void uart_cmsdk_apb_irq_rx_enable(struct device *dev)
DECL|uart_cmsdk_apb_irq_rx_ready|function|static int uart_cmsdk_apb_irq_rx_ready(struct device *dev)
DECL|uart_cmsdk_apb_irq_tx_complete|function|static int uart_cmsdk_apb_irq_tx_complete(struct device *dev)
DECL|uart_cmsdk_apb_irq_tx_disable|function|static void uart_cmsdk_apb_irq_tx_disable(struct device *dev)
DECL|uart_cmsdk_apb_irq_tx_enable|function|static void uart_cmsdk_apb_irq_tx_enable(struct device *dev)
DECL|uart_cmsdk_apb_irq_tx_ready|function|static int uart_cmsdk_apb_irq_tx_ready(struct device *dev)
DECL|uart_cmsdk_apb_irq_update|function|static int uart_cmsdk_apb_irq_update(struct device *dev)
DECL|uart_cmsdk_apb_isr|function|void uart_cmsdk_apb_isr(void *arg)
DECL|uart_cmsdk_apb_poll_in|function|static int uart_cmsdk_apb_poll_in(struct device *dev, unsigned char *c)
DECL|uart_cmsdk_apb_poll_out|function|static unsigned char uart_cmsdk_apb_poll_out(struct device *dev, unsigned char c)
DECL|uart_cmsdk_apb|struct|struct uart_cmsdk_apb {
