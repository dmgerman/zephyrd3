DECL|NRF5_TWI_INT_ERROR|macro|NRF5_TWI_INT_ERROR
DECL|NRF5_TWI_INT_RXDREADY|macro|NRF5_TWI_INT_RXDREADY
DECL|NRF5_TWI_INT_STOPPED|macro|NRF5_TWI_INT_STOPPED
DECL|NRF5_TWI_INT_TXDSENT|macro|NRF5_TWI_INT_TXDSENT
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base|member|volatile NRF_TWI_Type *base;
DECL|default_cfg|member|u32_t default_cfg;
DECL|err|member|u32_t err:1;
DECL|gpio|member|struct device *gpio;
DECL|i2c_nrf5_config_0|variable|i2c_nrf5_config_0
DECL|i2c_nrf5_config_1|variable|i2c_nrf5_config_1
DECL|i2c_nrf5_config_func_0|function|static void i2c_nrf5_config_func_0(struct device *dev)
DECL|i2c_nrf5_config_func_1|function|static void i2c_nrf5_config_func_1(struct device *dev)
DECL|i2c_nrf5_configure|function|static int i2c_nrf5_configure(struct device *dev, u32_t dev_config_raw)
DECL|i2c_nrf5_config|struct|struct i2c_nrf5_config {
DECL|i2c_nrf5_data_0|variable|i2c_nrf5_data_0
DECL|i2c_nrf5_data_1|variable|i2c_nrf5_data_1
DECL|i2c_nrf5_data|struct|struct i2c_nrf5_data {
DECL|i2c_nrf5_driver_api|variable|i2c_nrf5_driver_api
DECL|i2c_nrf5_init|function|static int i2c_nrf5_init(struct device *dev)
DECL|i2c_nrf5_isr|function|static void i2c_nrf5_isr(void *arg)
DECL|i2c_nrf5_read|function|static int i2c_nrf5_read(struct device *dev, struct i2c_msg *msg)
DECL|i2c_nrf5_transfer|function|static int i2c_nrf5_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|i2c_nrf5_write|function|static int i2c_nrf5_write(struct device *dev, struct i2c_msg *msg)
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|rxd|member|u32_t rxd:1;
DECL|sem|member|struct k_sem sem;
DECL|stopped|member|u32_t stopped:1;
DECL|txd|member|u32_t txd:1;
