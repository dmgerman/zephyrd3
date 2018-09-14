DECL|HMC5883L_CHIP_ID_A|macro|HMC5883L_CHIP_ID_A
DECL|HMC5883L_CHIP_ID_B|macro|HMC5883L_CHIP_ID_B
DECL|HMC5883L_CHIP_ID_C|macro|HMC5883L_CHIP_ID_C
DECL|HMC5883L_GAIN_SHIFT|macro|HMC5883L_GAIN_SHIFT
DECL|HMC5883L_I2C_ADDR|macro|HMC5883L_I2C_ADDR
DECL|HMC5883L_MODE_CONTINUOUS|macro|HMC5883L_MODE_CONTINUOUS
DECL|HMC5883L_ODR_SHIFT|macro|HMC5883L_ODR_SHIFT
DECL|HMC5883L_REG_CHIP_ID|macro|HMC5883L_REG_CHIP_ID
DECL|HMC5883L_REG_CONFIG_A|macro|HMC5883L_REG_CONFIG_A
DECL|HMC5883L_REG_CONFIG_B|macro|HMC5883L_REG_CONFIG_B
DECL|HMC5883L_REG_DATA_START|macro|HMC5883L_REG_DATA_START
DECL|HMC5883L_REG_MODE|macro|HMC5883L_REG_MODE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ZEPHYR_DRIVERS_SENSOR_HMC5883L_HMC5883L_H_|macro|ZEPHYR_DRIVERS_SENSOR_HMC5883L_HMC5883L_H_
DECL|data_ready_handler|member|sensor_trigger_handler_t data_ready_handler;
DECL|data_ready_trigger|member|struct sensor_trigger data_ready_trigger;
DECL|dev|member|struct device *dev;
DECL|gain_idx|member|u8_t gain_idx;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct k_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|hmc5883l_data|struct|struct hmc5883l_data {
DECL|hmc5883l_fs_strings|variable|hmc5883l_fs_strings
DECL|hmc5883l_gain|variable|hmc5883l_gain
DECL|hmc5883l_odr_strings|variable|hmc5883l_odr_strings
DECL|i2c|member|struct device *i2c;
DECL|thread|member|struct k_thread thread;
DECL|work|member|struct k_work work;
DECL|x_sample|member|s16_t x_sample;
DECL|y_sample|member|s16_t y_sample;
DECL|z_sample|member|s16_t z_sample;
