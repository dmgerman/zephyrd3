DECL|DW_DISABLE_ALL_I2C_INT|macro|DW_DISABLE_ALL_I2C_INT
DECL|DW_ENABLE_RX_INT_I2C_MASTER|macro|DW_ENABLE_RX_INT_I2C_MASTER
DECL|DW_ENABLE_RX_INT_I2C_SLAVE|macro|DW_ENABLE_RX_INT_I2C_SLAVE
DECL|DW_ENABLE_TX_INT_I2C_MASTER|macro|DW_ENABLE_TX_INT_I2C_MASTER
DECL|DW_ENABLE_TX_INT_I2C_SLAVE|macro|DW_ENABLE_TX_INT_I2C_SLAVE
DECL|DW_I2C_CMD_ERROR|macro|DW_I2C_CMD_ERROR
DECL|DW_I2C_CMD_RECV|macro|DW_I2C_CMD_RECV
DECL|DW_I2C_CMD_SEND|macro|DW_I2C_CMD_SEND
DECL|DW_I2C_FIFO_DEPTH|macro|DW_I2C_FIFO_DEPTH
DECL|DW_I2C_MAGIC_KEY|macro|DW_I2C_MAGIC_KEY
DECL|DW_I2C_RX_WATERMARK|macro|DW_I2C_RX_WATERMARK
DECL|DW_I2C_SPEED_FAST_PLUS|macro|DW_I2C_SPEED_FAST_PLUS
DECL|DW_I2C_SPEED_FAST|macro|DW_I2C_SPEED_FAST
DECL|DW_I2C_SPEED_HIGH|macro|DW_I2C_SPEED_HIGH
DECL|DW_I2C_SPEED_STANDARD|macro|DW_I2C_SPEED_STANDARD
DECL|DW_I2C_STATE_READY|macro|DW_I2C_STATE_READY
DECL|DW_I2C_TX_WATERMARK|macro|DW_I2C_TX_WATERMARK
DECL|I2C_FS_HCNT|macro|I2C_FS_HCNT
DECL|I2C_FS_LCNT|macro|I2C_FS_LCNT
DECL|I2C_HS_HCNT|macro|I2C_HS_HCNT
DECL|I2C_HS_LCNT|macro|I2C_HS_LCNT
DECL|I2C_STD_HCNT|macro|I2C_STD_HCNT
DECL|I2C_STD_LCNT|macro|I2C_STD_LCNT
DECL|IC_ACTIVITY|macro|IC_ACTIVITY
DECL|IC_ENABLE_BIT|macro|IC_ENABLE_BIT
DECL|__DRIVERS_DW_I2C_H|macro|__DRIVERS_DW_I2C_H
DECL|app_config|member|union dev_config app_config;
DECL|base_address|member|uint32_t base_address;
DECL|config_func|member|i2c_isr_cb_t config_func;
DECL|dw_i2c_dev_config|struct|struct dw_i2c_dev_config {
DECL|dw_i2c_rom_config|struct|struct dw_i2c_rom_config {
DECL|hcnt|member|uint16_t hcnt;
DECL|i2c_isr_cb_t|typedef|typedef void (*i2c_isr_cb_t)(struct device *port);
DECL|interrupt_mask|member|uint32_t interrupt_mask;
DECL|interrupt_vector|member|uint32_t interrupt_vector;
DECL|lcnt|member|uint16_t lcnt;
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|rx_buffer|member|uint8_t *rx_buffer;
DECL|rx_len|member|uint8_t rx_len;
DECL|rx_tx_len|member|uint8_t rx_tx_len;
DECL|slave_mode|member|uint8_t slave_mode;
DECL|state|member|volatile uint8_t state; /* last direction of transfer */
DECL|support_hs_mode|member|bool support_hs_mode;
DECL|tx_buffer|member|uint8_t *tx_buffer;
DECL|tx_len|member|uint8_t tx_len;
