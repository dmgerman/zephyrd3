DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_isr_0)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_i2c_isr_1)
DECL|RX_TL|macro|RX_TL
DECL|SPK_LEN_FS|macro|SPK_LEN_FS
DECL|SPK_LEN_SS|macro|SPK_LEN_SS
DECL|TX_TL|macro|TX_TL
DECL|controller_disable|function|static void controller_disable(const qm_ss_i2c_t i2c)
DECL|controller_enable|function|static void controller_enable(const qm_ss_i2c_t i2c)
DECL|get_hi_cnt|function|static uint32_t get_hi_cnt(qm_ss_i2c_t i2c, uint32_t hi_time_ns)
DECL|get_lo_cnt|function|static uint32_t get_lo_cnt(uint32_t lo_time_ns)
DECL|i2c_base|variable|i2c_base
DECL|i2c_read_buffer_remaining|variable|i2c_read_buffer_remaining
DECL|i2c_read_pos|variable|i2c_read_pos
DECL|i2c_transfer|variable|i2c_transfer
DECL|i2c_write_pos|variable|i2c_write_pos
DECL|qm_ss_i2c_get_status|function|int qm_ss_i2c_get_status(const qm_ss_i2c_t i2c, qm_ss_i2c_status_t *const status)
DECL|qm_ss_i2c_irq_transfer_terminate|function|int qm_ss_i2c_irq_transfer_terminate(const qm_ss_i2c_t i2c)
DECL|qm_ss_i2c_isr_handler|function|static void qm_ss_i2c_isr_handler(const qm_ss_i2c_t i2c)
DECL|qm_ss_i2c_master_irq_transfer|function|int qm_ss_i2c_master_irq_transfer(const qm_ss_i2c_t i2c, const qm_ss_i2c_transfer_t *const xfer, const uint16_t slave_addr)
DECL|qm_ss_i2c_master_read|function|int qm_ss_i2c_master_read(const qm_ss_i2c_t i2c, const uint16_t slave_addr, uint8_t *const data, uint32_t len, const bool stop, qm_ss_i2c_status_t *const status)
DECL|qm_ss_i2c_master_write|function|int qm_ss_i2c_master_write(const qm_ss_i2c_t i2c, const uint16_t slave_addr, const uint8_t *const data, uint32_t len, const bool stop, qm_ss_i2c_status_t *const status)
DECL|qm_ss_i2c_set_config|function|int qm_ss_i2c_set_config(const qm_ss_i2c_t i2c, const qm_ss_i2c_config_t *const cfg)
DECL|qm_ss_i2c_set_speed|function|int qm_ss_i2c_set_speed(const qm_ss_i2c_t i2c, const qm_ss_i2c_speed_t speed,const uint16_t lo_cnt, const uint16_t hi_cnt)
