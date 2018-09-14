DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|TMP007_ALERT_EN_BIT|macro|TMP007_ALERT_EN_BIT
DECL|TMP007_DATA_INVALID_BIT|macro|TMP007_DATA_INVALID_BIT
DECL|TMP007_DATA_READY_INT_BIT|macro|TMP007_DATA_READY_INT_BIT
DECL|TMP007_I2C_ADDRESS|macro|TMP007_I2C_ADDRESS
DECL|TMP007_REG_CONFIG|macro|TMP007_REG_CONFIG
DECL|TMP007_REG_STATUS|macro|TMP007_REG_STATUS
DECL|TMP007_REG_TOBJ_TH_HIGH|macro|TMP007_REG_TOBJ_TH_HIGH
DECL|TMP007_REG_TOBJ_TH_LOW|macro|TMP007_REG_TOBJ_TH_LOW
DECL|TMP007_REG_TOBJ|macro|TMP007_REG_TOBJ
DECL|TMP007_TEMP_SCALE|macro|TMP007_TEMP_SCALE
DECL|TMP007_TEMP_TH_SCALE|macro|TMP007_TEMP_TH_SCALE
DECL|TMP007_TOBJ_TH_HIGH_INT_BIT|macro|TMP007_TOBJ_TH_HIGH_INT_BIT
DECL|TMP007_TOBJ_TH_INT_BITS|macro|TMP007_TOBJ_TH_INT_BITS
DECL|TMP007_TOBJ_TH_LOW_INT_BIT|macro|TMP007_TOBJ_TH_LOW_INT_BIT
DECL|ZEPHYR_DRIVERS_SENSOR_TMP007_TMP007_H_|macro|ZEPHYR_DRIVERS_SENSOR_TMP007_TMP007_H_
DECL|dev|member|struct device *dev;
DECL|drdy_handler|member|sensor_trigger_handler_t drdy_handler;
DECL|drdy_trigger|member|struct sensor_trigger drdy_trigger;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct k_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|i2c|member|struct device *i2c;
DECL|sample|member|s16_t sample;
DECL|th_handler|member|sensor_trigger_handler_t th_handler;
DECL|th_trigger|member|struct sensor_trigger th_trigger;
DECL|thread|member|struct k_thread thread;
DECL|tmp007_data|struct|struct tmp007_data {
DECL|work|member|struct k_work work;
