DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|TMP112_CR0_BIT|macro|TMP112_CR0_BIT
DECL|TMP112_CR1_BIT|macro|TMP112_CR1_BIT
DECL|TMP112_D0_BIT|macro|TMP112_D0_BIT
DECL|TMP112_EM_BIT|macro|TMP112_EM_BIT
DECL|TMP112_I2C_ADDRESS|macro|TMP112_I2C_ADDRESS
DECL|TMP112_I2C_ADDRESS|macro|TMP112_I2C_ADDRESS
DECL|TMP112_I2C_ADDRESS|macro|TMP112_I2C_ADDRESS
DECL|TMP112_I2C_ADDRESS|macro|TMP112_I2C_ADDRESS
DECL|TMP112_REG_CONFIG|macro|TMP112_REG_CONFIG
DECL|TMP112_REG_TEMPERATURE|macro|TMP112_REG_TEMPERATURE
DECL|TMP112_TEMP_SCALE|macro|TMP112_TEMP_SCALE
DECL|i2c|member|struct device *i2c;
DECL|sample|member|int16_t sample;
DECL|tmp112_attr_set|function|static int tmp112_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|tmp112_channel_get|function|static int tmp112_channel_get(struct device *dev,enum sensor_channel chan, struct sensor_value *val)
DECL|tmp112_data|struct|struct tmp112_data {
DECL|tmp112_driver_api|variable|tmp112_driver_api
DECL|tmp112_driver|variable|tmp112_driver
DECL|tmp112_init|function|int tmp112_init(struct device *dev)
DECL|tmp112_reg_read|function|static int tmp112_reg_read(struct tmp112_data *drv_data, uint8_t reg, uint16_t *val)
DECL|tmp112_reg_update|function|static int tmp112_reg_update(struct tmp112_data *drv_data, uint8_t reg, uint16_t mask, uint16_t val)
DECL|tmp112_reg_write|function|static int tmp112_reg_write(struct tmp112_data *drv_data, uint8_t reg, uint16_t val)
DECL|tmp112_sample_fetch|function|static int tmp112_sample_fetch(struct device *dev, enum sensor_channel chan)
