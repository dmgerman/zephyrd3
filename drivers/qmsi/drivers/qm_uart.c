DECL|QM_UART_DEFAULT_TX_RX_THRESHOLD|macro|QM_UART_DEFAULT_TX_RX_THRESHOLD
DECL|QM_UART_TX_0_RX_1_2_THRESHOLD|macro|QM_UART_TX_0_RX_1_2_THRESHOLD
DECL|qm_uart_0_isr|function|void qm_uart_0_isr(void)
DECL|qm_uart_1_isr|function|void qm_uart_1_isr(void)
DECL|qm_uart_get_config|function|qm_rc_t qm_uart_get_config(const qm_uart_t uart, qm_uart_config_t *cfg)
DECL|qm_uart_get_status|function|qm_uart_status_t qm_uart_get_status(const qm_uart_t uart)
DECL|qm_uart_irq_read|function|qm_uart_status_t qm_uart_irq_read(const qm_uart_t uart, const qm_uart_transfer_t *const xfer)
DECL|qm_uart_irq_write|function|qm_uart_status_t qm_uart_irq_write(const qm_uart_t uart, const qm_uart_transfer_t *const xfer)
DECL|qm_uart_isr_handler|function|static void qm_uart_isr_handler(const qm_uart_t uart)
DECL|qm_uart_read_non_block|function|uint8_t qm_uart_read_non_block(const qm_uart_t uart)
DECL|qm_uart_read_terminate|function|qm_rc_t qm_uart_read_terminate(const qm_uart_t uart)
DECL|qm_uart_read|function|qm_uart_status_t qm_uart_read(const qm_uart_t uart, uint8_t *data)
DECL|qm_uart_set_config|function|qm_rc_t qm_uart_set_config(const qm_uart_t uart, const qm_uart_config_t *cfg)
DECL|qm_uart_write_buffer|function|qm_rc_t qm_uart_write_buffer(const qm_uart_t uart, const uint8_t *const data, uint32_t len)
DECL|qm_uart_write_non_block|function|qm_rc_t qm_uart_write_non_block(const qm_uart_t uart, const uint8_t data)
DECL|qm_uart_write_terminate|function|qm_rc_t qm_uart_write_terminate(const qm_uart_t uart)
DECL|qm_uart_write|function|qm_rc_t qm_uart_write(const qm_uart_t uart, const uint8_t data)
DECL|uart_read_buffer|variable|uart_read_buffer
DECL|uart_read_callback|variable|uart_read_callback
DECL|uart_read_err_callback|variable|uart_read_err_callback
DECL|uart_read_id|variable|uart_read_id
DECL|uart_read_pos|variable|uart_read_pos
DECL|uart_read_remaining|variable|uart_read_remaining
DECL|uart_write_buffer|variable|uart_write_buffer
DECL|uart_write_callback|variable|uart_write_callback
DECL|uart_write_err_callback|variable|uart_write_err_callback
DECL|uart_write_id|variable|uart_write_id
DECL|uart_write_pos|variable|uart_write_pos
DECL|uart_write_remaining|variable|uart_write_remaining
