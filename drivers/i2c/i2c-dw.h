DECL|DW_DISABLE_ALL_I2C_INT|macro|DW_DISABLE_ALL_I2C_INT
DECL|DW_ENABLE_RX_INT_I2C_MASTER|macro|DW_ENABLE_RX_INT_I2C_MASTER
DECL|DW_ENABLE_RX_INT_I2C_SLAVE|macro|DW_ENABLE_RX_INT_I2C_SLAVE
DECL|DW_ENABLE_TX_INT_I2C_MASTER|macro|DW_ENABLE_TX_INT_I2C_MASTER
DECL|DW_ENABLE_TX_INT_I2C_SLAVE|macro|DW_ENABLE_TX_INT_I2C_SLAVE
DECL|I2C_DW_CMD_ERROR|macro|I2C_DW_CMD_ERROR
DECL|I2C_DW_CMD_RECV|macro|I2C_DW_CMD_RECV
DECL|I2C_DW_CMD_SEND|macro|I2C_DW_CMD_SEND
DECL|I2C_DW_FIFO_DEPTH|macro|I2C_DW_FIFO_DEPTH
DECL|I2C_DW_MAGIC_KEY|macro|I2C_DW_MAGIC_KEY
DECL|I2C_DW_RX_WATERMARK|macro|I2C_DW_RX_WATERMARK
DECL|I2C_DW_SPEED_FAST_PLUS|macro|I2C_DW_SPEED_FAST_PLUS
DECL|I2C_DW_SPEED_FAST|macro|I2C_DW_SPEED_FAST
DECL|I2C_DW_SPEED_HIGH|macro|I2C_DW_SPEED_HIGH
DECL|I2C_DW_SPEED_STANDARD|macro|I2C_DW_SPEED_STANDARD
DECL|I2C_DW_STATE_READY|macro|I2C_DW_STATE_READY
DECL|I2C_DW_TX_WATERMARK|macro|I2C_DW_TX_WATERMARK
DECL|I2C_FS_HCNT|macro|I2C_FS_HCNT
DECL|I2C_FS_LCNT|macro|I2C_FS_LCNT
DECL|I2C_HS_HCNT|macro|I2C_HS_HCNT
DECL|I2C_HS_LCNT|macro|I2C_HS_LCNT
DECL|I2C_STD_HCNT|macro|I2C_STD_HCNT
DECL|I2C_STD_LCNT|macro|I2C_STD_LCNT
DECL|IC_ACTIVITY|macro|IC_ACTIVITY
DECL|IC_ENABLE_BIT|macro|IC_ENABLE_BIT
DECL|__DRIVERS_I2C_DW_H|macro|__DRIVERS_I2C_DW_H
DECL|app_config|member|union dev_config app_config;
DECL|base_address|member|uint32_t base_address;
DECL|config_func|member|i2c_isr_cb_t config_func;
DECL|hcnt|member|uint16_t hcnt;
DECL|i2c_dw_dev_config|struct|struct i2c_dw_dev_config {
DECL|i2c_dw_rom_config|struct|struct i2c_dw_rom_config {
DECL|i2c_isr_cb_t|typedef|typedef void (*i2c_isr_cb_t)(struct device *port);
DECL|interrupt_mask|member|uint32_t interrupt_mask;
DECL|interrupt_vector|member|uint32_t interrupt_vector;
DECL|lcnt|member|uint16_t lcnt;
DECL|pci_dev|member|struct pci_dev_info pci_dev;
DECL|rx_buffer|member|uint8_t *rx_buffer;
DECL|rx_len|member|uint8_t rx_len;
DECL|rx_tx_len|member|uint8_t rx_tx_len;
DECL|shared_irq_dev_name|member|char *shared_irq_dev_name;
DECL|slave_mode|member|uint8_t slave_mode;
DECL|state|member|volatile uint8_t state; /* last direction of transfer */
DECL|support_hs_mode|member|bool support_hs_mode;
DECL|tx_buffer|member|uint8_t *tx_buffer;
DECL|tx_len|member|uint8_t tx_len;
