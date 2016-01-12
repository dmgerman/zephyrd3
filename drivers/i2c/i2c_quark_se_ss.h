DECL|I2C_FS_HCNT|macro|I2C_FS_HCNT
DECL|I2C_FS_LCNT|macro|I2C_FS_LCNT
DECL|I2C_QSE_SS_BUSY|macro|I2C_QSE_SS_BUSY
DECL|I2C_QSE_SS_CMD_ERROR|macro|I2C_QSE_SS_CMD_ERROR
DECL|I2C_QSE_SS_CMD_RECV|macro|I2C_QSE_SS_CMD_RECV
DECL|I2C_QSE_SS_CMD_SEND|macro|I2C_QSE_SS_CMD_SEND
DECL|I2C_QSE_SS_FIFO_DEPTH|macro|I2C_QSE_SS_FIFO_DEPTH
DECL|I2C_QSE_SS_SPEED_FAST_PLUS|macro|I2C_QSE_SS_SPEED_FAST_PLUS
DECL|I2C_QSE_SS_SPEED_FAST|macro|I2C_QSE_SS_SPEED_FAST
DECL|I2C_QSE_SS_SPEED_STANDARD|macro|I2C_QSE_SS_SPEED_STANDARD
DECL|I2C_QSE_SS_STATE_READY|macro|I2C_QSE_SS_STATE_READY
DECL|I2C_STD_HCNT|macro|I2C_STD_HCNT
DECL|I2C_STD_LCNT|macro|I2C_STD_LCNT
DECL|__DRIVERS_I2C_QUARK_SE_SS_H__|macro|__DRIVERS_I2C_QUARK_SE_SS_H__
DECL|app_config|member|union dev_config app_config;
DECL|base_address|member|uint32_t base_address;
DECL|config_func|member|i2c_qse_ss_cfg_func_t config_func;
DECL|hcnt|member|uint16_t hcnt;
DECL|i2c_qse_ss_cfg_func_t|typedef|typedef void (*i2c_qse_ss_cfg_func_t)(struct device *port);
DECL|i2c_qse_ss_dev_config|struct|struct i2c_qse_ss_dev_config {
DECL|i2c_qse_ss_rom_config|struct|struct i2c_qse_ss_rom_config {
DECL|isr_err_mask|member|uint32_t isr_err_mask;
DECL|isr_err_vector|member|uint32_t isr_err_vector;
DECL|isr_rx_mask|member|uint32_t isr_rx_mask;
DECL|isr_rx_vector|member|uint32_t isr_rx_vector;
DECL|isr_stop_mask|member|uint32_t isr_stop_mask;
DECL|isr_stop_vector|member|uint32_t isr_stop_vector;
DECL|isr_tx_mask|member|uint32_t isr_tx_mask;
DECL|isr_tx_vector|member|uint32_t isr_tx_vector;
DECL|lcnt|member|uint16_t lcnt;
DECL|request_bytes|member|uint32_t request_bytes;
DECL|rx_pending|member|uint32_t rx_pending;
DECL|state|member|volatile uint8_t state; /* last direction of transfer */
DECL|sync|member|device_sync_call_t sync;
DECL|xfr_buf|member|uint8_t *xfr_buf;
DECL|xfr_flags|member|uint8_t xfr_flags;
DECL|xfr_len|member|uint32_t xfr_len;
