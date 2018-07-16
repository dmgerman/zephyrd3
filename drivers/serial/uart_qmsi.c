DECL|DIVISOR_HIGH|macro|DIVISOR_HIGH
DECL|DIVISOR_LOW|macro|DIVISOR_LOW
DECL|GET_CONTROLLER_INSTANCE|macro|GET_CONTROLLER_INSTANCE
DECL|IIR_IID_NO_INTERRUPT_PENDING|macro|IIR_IID_NO_INTERRUPT_PENDING
DECL|api|variable|api
DECL|baud_divisor|member|u32_t baud_divisor;
DECL|cb_data|member|void *cb_data;
DECL|cb_data|member|void *cb_data;
DECL|clock_gate|member|clk_periph_t clock_gate;
DECL|config_info_0|variable|config_info_0
DECL|config_info_1|variable|config_info_1
DECL|ctx|member|qm_uart_context_t ctx;
DECL|device_power_state|member|u32_t device_power_state;
DECL|drv_data_0|variable|drv_data_0
DECL|drv_data_1|variable|drv_data_1
DECL|hw_fc|member|bool hw_fc;
DECL|iir_cache|member|u8_t iir_cache;
DECL|iir_cache|member|u8_t iir_cache;
DECL|instance|member|qm_uart_t instance;
DECL|irq_config_func_0|function|static void irq_config_func_0(struct device *dev)
DECL|irq_config_func_1|function|static void irq_config_func_1(struct device *dev)
DECL|irq_config_func|member|uart_irq_config_func_t irq_config_func;
DECL|is_data_ready|function|static bool is_data_ready(qm_uart_t instance)
DECL|is_tx_fifo_full|function|static bool is_tx_fifo_full(qm_uart_t instance)
DECL|uart_qmsi_config_info|struct|struct uart_qmsi_config_info {
DECL|uart_qmsi_device_ctrl|function|static int uart_qmsi_device_ctrl(struct device *dev, u32_t ctrl_command, void *context)
DECL|uart_qmsi_drv_cmd|function|static int uart_qmsi_drv_cmd(struct device *dev, u32_t cmd, u32_t p)
DECL|uart_qmsi_drv_data|struct|struct uart_qmsi_drv_data {
DECL|uart_qmsi_drv_data|struct|struct uart_qmsi_drv_data {
DECL|uart_qmsi_err_check|function|static int uart_qmsi_err_check(struct device *dev)
DECL|uart_qmsi_fifo_fill|function|static int uart_qmsi_fifo_fill(struct device *dev, const u8_t *tx_data, int size)
DECL|uart_qmsi_fifo_read|function|static int uart_qmsi_fifo_read(struct device *dev, u8_t *rx_data, const int size)
DECL|uart_qmsi_get_power_state|function|static u32_t uart_qmsi_get_power_state(struct device *dev)
DECL|uart_qmsi_init|function|static int uart_qmsi_init(struct device *dev)
DECL|uart_qmsi_irq_callback_set|function|static void uart_qmsi_irq_callback_set(struct device *dev, uart_irq_callback_user_data_t cb, void *cb_data)
DECL|uart_qmsi_irq_err_disable|function|static void uart_qmsi_irq_err_disable(struct device *dev)
DECL|uart_qmsi_irq_err_enable|function|static void uart_qmsi_irq_err_enable(struct device *dev)
DECL|uart_qmsi_irq_is_pending|function|static int uart_qmsi_irq_is_pending(struct device *dev)
DECL|uart_qmsi_irq_rx_disable|function|static void uart_qmsi_irq_rx_disable(struct device *dev)
DECL|uart_qmsi_irq_rx_enable|function|static void uart_qmsi_irq_rx_enable(struct device *dev)
DECL|uart_qmsi_irq_rx_ready|function|static int uart_qmsi_irq_rx_ready(struct device *dev)
DECL|uart_qmsi_irq_tx_complete|function|static int uart_qmsi_irq_tx_complete(struct device *dev)
DECL|uart_qmsi_irq_tx_disable|function|static void uart_qmsi_irq_tx_disable(struct device *dev)
DECL|uart_qmsi_irq_tx_enable|function|static void uart_qmsi_irq_tx_enable(struct device *dev)
DECL|uart_qmsi_irq_tx_ready|function|static int uart_qmsi_irq_tx_ready(struct device *dev)
DECL|uart_qmsi_irq_update|function|static int uart_qmsi_irq_update(struct device *dev)
DECL|uart_qmsi_isr|function|static void uart_qmsi_isr(void *arg)
DECL|uart_qmsi_line_ctrl_set|function|static int uart_qmsi_line_ctrl_set(struct device *dev, u32_t ctrl, u32_t val)
DECL|uart_qmsi_poll_in|function|static int uart_qmsi_poll_in(struct device *dev, unsigned char *data)
DECL|uart_qmsi_poll_out|function|static unsigned char uart_qmsi_poll_out(struct device *dev,unsigned char data)
DECL|uart_qmsi_set_power_state|function|static void uart_qmsi_set_power_state(struct device *dev, u32_t power_state)
DECL|uart_qmsi_set_power_state|macro|uart_qmsi_set_power_state
DECL|uart_resume_device_from_suspend|function|static int uart_resume_device_from_suspend(struct device *dev)
DECL|uart_suspend_device|function|static int uart_suspend_device(struct device *dev)
DECL|user_cb|member|uart_irq_callback_user_data_t user_cb;
DECL|user_cb|member|uart_irq_callback_user_data_t user_cb;
