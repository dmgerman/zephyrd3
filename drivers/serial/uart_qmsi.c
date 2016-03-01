DECL|DIVISOR_HIGH|macro|DIVISOR_HIGH
DECL|DIVISOR_LOW|macro|DIVISOR_LOW
DECL|GET_CONTROLLER_INSTANCE|macro|GET_CONTROLLER_INSTANCE
DECL|api|variable|api
DECL|baud_divisor|member|uint32_t baud_divisor;
DECL|clock_gate|member|clk_periph_t clock_gate;
DECL|config_info_0|variable|config_info_0
DECL|config_info_1|variable|config_info_1
DECL|instance|member|qm_uart_t instance;
DECL|uart_qmsi_config_info|struct|struct uart_qmsi_config_info {
DECL|uart_qmsi_drv_cmd|function|static int uart_qmsi_drv_cmd(struct device *dev, uint32_t cmd, uint32_t p)
DECL|uart_qmsi_err_check|function|static int uart_qmsi_err_check(struct device *dev)
DECL|uart_qmsi_init|function|static int uart_qmsi_init(struct device *dev)
DECL|uart_qmsi_line_ctrl_set|function|static int uart_qmsi_line_ctrl_set(struct device *dev, uint32_t ctrl, uint32_t val)
DECL|uart_qmsi_poll_in|function|static int uart_qmsi_poll_in(struct device *dev, unsigned char *data)
DECL|uart_qmsi_poll_out|function|static unsigned char uart_qmsi_poll_out(struct device *dev,unsigned char data)
