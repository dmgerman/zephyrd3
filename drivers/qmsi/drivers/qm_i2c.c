DECL|RX_TL|macro|RX_TL
DECL|SPK_LEN_FS_FSP|macro|SPK_LEN_FS_FSP
DECL|SPK_LEN_SS|macro|SPK_LEN_SS
DECL|TX_TL|macro|TX_TL
DECL|controller_disable|function|static void controller_disable(const qm_i2c_t i2c)
DECL|controller_enable|function|static void controller_enable(const qm_i2c_t i2c)
DECL|get_hi_cnt|function|static uint32_t get_hi_cnt(qm_i2c_t i2c, uint32_t hi_time_ns)
DECL|get_lo_cnt|function|static uint32_t get_lo_cnt(qm_i2c_t i2c, uint32_t lo_time_ns)
DECL|get_tx_abrt_status|function|static qm_rc_t get_tx_abrt_status(const qm_i2c_t i2c)
DECL|i2c_read_buffer_remaining|variable|i2c_read_buffer_remaining
DECL|i2c_read_pos|variable|i2c_read_pos
DECL|i2c_speed_mode|variable|i2c_speed_mode
DECL|i2c_transfer|variable|i2c_transfer
DECL|i2c_write_pos|variable|i2c_write_pos
DECL|qm_i2c_0_isr|function|void qm_i2c_0_isr(void)
DECL|qm_i2c_1_isr|function|void qm_i2c_1_isr(void)
DECL|qm_i2c_get_config|function|qm_rc_t qm_i2c_get_config(const qm_i2c_t i2c, qm_i2c_config_t *const cfg)
DECL|qm_i2c_get_status|function|qm_i2c_status_t qm_i2c_get_status(const qm_i2c_t i2c)
DECL|qm_i2c_isr_handler|function|static void qm_i2c_isr_handler(const qm_i2c_t i2c)
DECL|qm_i2c_master_irq_transfer|function|qm_rc_t qm_i2c_master_irq_transfer(const qm_i2c_t i2c, const qm_i2c_transfer_t *const xfer, const uint16_t slave_addr)
DECL|qm_i2c_master_read|function|qm_rc_t qm_i2c_master_read(const qm_i2c_t i2c, const uint16_t slave_addr, uint8_t *const data, uint32_t len, bool stop)
DECL|qm_i2c_master_write|function|qm_rc_t qm_i2c_master_write(const qm_i2c_t i2c, const uint16_t slave_addr, const uint8_t *const data, uint32_t len, bool stop)
DECL|qm_i2c_set_config|function|qm_rc_t qm_i2c_set_config(const qm_i2c_t i2c, const qm_i2c_config_t *const cfg)
DECL|qm_i2c_set_speed|function|qm_rc_t qm_i2c_set_speed(const qm_i2c_t i2c, qm_i2c_speed_t speed, uint16_t lo_cnt, uint16_t hi_cnt)
DECL|qm_i2c_transfer_terminate|function|qm_rc_t qm_i2c_transfer_terminate(const qm_i2c_t i2c)
