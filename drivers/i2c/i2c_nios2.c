DECL|DEV_CFG|macro|DEV_CFG
DECL|NIOS2_I2C_TIMEOUT_USEC|macro|NIOS2_I2C_TIMEOUT_USEC
DECL|i2c_dev|member|ALT_AVALON_I2C_DEV_t i2c_dev;
DECL|i2c_nios2_cfg|variable|i2c_nios2_cfg
DECL|i2c_nios2_configure|function|static int i2c_nios2_configure(struct device *dev, u32_t dev_config)
DECL|i2c_nios2_config|struct|struct i2c_nios2_config {
DECL|i2c_nios2_driver_api|variable|i2c_nios2_driver_api
DECL|i2c_nios2_init|function|static int i2c_nios2_init(struct device *dev)
DECL|i2c_nios2_isr|function|static void i2c_nios2_isr(void *arg)
DECL|i2c_nios2_transfer|function|static int i2c_nios2_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|irq_data|member|IRQ_DATA_t irq_data;
DECL|sem_lock|member|struct k_sem sem_lock;
