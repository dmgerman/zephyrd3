DECL|RET_ERR|macro|RET_ERR
DECL|RET_NACK|macro|RET_NACK
DECL|RET_OK|macro|RET_OK
DECL|STATE_BUSY|macro|STATE_BUSY
DECL|STATE_READY|macro|STATE_READY
DECL|STATE_RX|macro|STATE_RX
DECL|STATE_TX|macro|STATE_TX
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|TWI_IRQ_PDC|macro|TWI_IRQ_PDC
DECL|api_funcs|variable|api_funcs
DECL|clk_div_calc|function|static u32_t clk_div_calc(struct device *dev)
DECL|config_func_0|function|static void config_func_0(struct device *dev)
DECL|config_func_1|function|static void config_func_1(struct device *dev)
DECL|config_func_t|typedef|typedef void (*config_func_t)(struct device *dev);
DECL|config_func|member|config_func_t config_func;
DECL|dev_config_0|variable|dev_config_0
DECL|dev_config_1|variable|dev_config_1
DECL|dev_config|member|u32_t dev_config;
DECL|dev_data_0|variable|dev_data_0
DECL|dev_data_1|variable|dev_data_1
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|i2c_sam3_dev_config|struct|struct i2c_sam3_dev_config {
DECL|i2c_sam3_dev_data|struct|struct i2c_sam3_dev_data {
DECL|i2c_sam3_init|function|static int __deprecated i2c_sam3_init(struct device *dev)
DECL|i2c_sam3_isr|function|static void i2c_sam3_isr(void *arg)
DECL|i2c_sam3_runtime_configure|function|static int i2c_sam3_runtime_configure(struct device *dev, u32_t config)
DECL|i2c_sam3_transfer|function|static int i2c_sam3_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t slave_address)
DECL|msg_read|function|static inline int msg_read(struct device *dev)
DECL|msg_write|function|static inline int msg_write(struct device *dev)
DECL|regs|member|Twi *regs;
DECL|sr_bits_set_wait|function|static inline void sr_bits_set_wait(struct device *dev, u32_t bits)
DECL|state|member|volatile u32_t state;
DECL|status_reg_clear|function|static inline void status_reg_clear(struct device *dev)
DECL|transfer_setup|function|static inline void transfer_setup(struct device *dev, u16_t slave_address)
DECL|xfr_buf|member|u8_t *xfr_buf;
DECL|xfr_flags|member|u32_t xfr_flags;
DECL|xfr_len|member|u32_t xfr_len;
