DECL|I2C_POLL_COUNT|macro|I2C_POLL_COUNT
DECL|I2C_POLL_MICROSECOND|macro|I2C_POLL_MICROSECOND
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_0_error_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_0_rx_avail_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_0_stop_det_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_0_tx_req_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_1_error_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_1_rx_avail_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_1_stop_det_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_1_tx_req_isr)
DECL|RX_TL|macro|RX_TL
DECL|TX_TL|macro|TX_TL
DECL|controller_disable|function|static int controller_disable(const qm_ss_i2c_t i2c)
DECL|controller_enable|function|static void controller_enable(const qm_ss_i2c_t i2c)
DECL|get_hi_cnt|function|static uint32_t get_hi_cnt(qm_ss_i2c_t i2c, uint32_t hi_time_ns)
DECL|get_lo_cnt|function|static uint32_t get_lo_cnt(uint32_t lo_time_ns)
DECL|handle_i2c_error_interrupt|function|static void handle_i2c_error_interrupt(const qm_ss_i2c_t i2c)
DECL|handle_i2c_rx_avail_interrupt|function|static void handle_i2c_rx_avail_interrupt(const qm_ss_i2c_t i2c)
DECL|handle_i2c_stop_det_interrupt|function|static void handle_i2c_stop_det_interrupt(const qm_ss_i2c_t i2c)
DECL|handle_i2c_tx_req_interrupt|function|static void handle_i2c_tx_req_interrupt(const qm_ss_i2c_t i2c)
DECL|i2c_base|variable|i2c_base
DECL|i2c_fill_tx_fifo|function|i2c_fill_tx_fifo(const qm_i2c_t i2c, const volatile qm_ss_i2c_transfer_t *const transfer, uint32_t controller)
DECL|i2c_read_cmd_send|variable|i2c_read_cmd_send
DECL|i2c_read_pos|variable|i2c_read_pos
DECL|i2c_transfer|variable|i2c_transfer
DECL|i2c_write_pos|variable|i2c_write_pos
DECL|qm_ss_i2c_get_status|function|int qm_ss_i2c_get_status(const qm_ss_i2c_t i2c, qm_ss_i2c_status_t *const status)
DECL|qm_ss_i2c_irq_transfer_terminate|function|int qm_ss_i2c_irq_transfer_terminate(const qm_ss_i2c_t i2c)
DECL|qm_ss_i2c_master_irq_transfer|function|int qm_ss_i2c_master_irq_transfer(const qm_ss_i2c_t i2c, const qm_ss_i2c_transfer_t *const xfer, const uint16_t slave_addr)
DECL|qm_ss_i2c_master_read|function|int qm_ss_i2c_master_read(const qm_ss_i2c_t i2c, const uint16_t slave_addr, uint8_t *const data, uint32_t len, const bool stop, qm_ss_i2c_status_t *const status)
DECL|qm_ss_i2c_master_write|function|int qm_ss_i2c_master_write(const qm_ss_i2c_t i2c, const uint16_t slave_addr, const uint8_t *const data, uint32_t len, const bool stop, qm_ss_i2c_status_t *const status)
DECL|qm_ss_i2c_restore_context|function|int qm_ss_i2c_restore_context(const qm_ss_i2c_t i2c, const qm_ss_i2c_context_t *const ctx)
DECL|qm_ss_i2c_restore_context|function|int qm_ss_i2c_restore_context(const qm_ss_i2c_t i2c, const qm_ss_i2c_context_t *const ctx)
DECL|qm_ss_i2c_save_context|function|int qm_ss_i2c_save_context(const qm_ss_i2c_t i2c, qm_ss_i2c_context_t *const ctx)
DECL|qm_ss_i2c_save_context|function|int qm_ss_i2c_save_context(const qm_ss_i2c_t i2c, qm_ss_i2c_context_t *const ctx)
DECL|qm_ss_i2c_set_config|function|int qm_ss_i2c_set_config(const qm_ss_i2c_t i2c, const qm_ss_i2c_config_t *const cfg)
DECL|qm_ss_i2c_set_speed|function|int qm_ss_i2c_set_speed(const qm_ss_i2c_t i2c, const qm_ss_i2c_speed_t speed,const uint16_t lo_cnt, const uint16_t hi_cnt)
