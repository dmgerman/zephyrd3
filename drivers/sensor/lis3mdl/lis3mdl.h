DECL|LIS3MDL_BDU_EN|macro|LIS3MDL_BDU_EN
DECL|LIS3MDL_CHIP_ID|macro|LIS3MDL_CHIP_ID
DECL|LIS3MDL_DO_SHIFT|macro|LIS3MDL_DO_SHIFT
DECL|LIS3MDL_FAST_ODR_MASK|macro|LIS3MDL_FAST_ODR_MASK
DECL|LIS3MDL_FAST_ODR_SHIFT|macro|LIS3MDL_FAST_ODR_SHIFT
DECL|LIS3MDL_FS_IDX|macro|LIS3MDL_FS_IDX
DECL|LIS3MDL_FS_SHIFT|macro|LIS3MDL_FS_SHIFT
DECL|LIS3MDL_I2C_ADDR_BASE|macro|LIS3MDL_I2C_ADDR_BASE
DECL|LIS3MDL_I2C_ADDR_MASK|macro|LIS3MDL_I2C_ADDR_MASK
DECL|LIS3MDL_INT_XYZ_EN|macro|LIS3MDL_INT_XYZ_EN
DECL|LIS3MDL_INT_X_EN|macro|LIS3MDL_INT_X_EN
DECL|LIS3MDL_INT_Y_EN|macro|LIS3MDL_INT_Y_EN
DECL|LIS3MDL_INT_Z_EN|macro|LIS3MDL_INT_Z_EN
DECL|LIS3MDL_MD_CONTINUOUS|macro|LIS3MDL_MD_CONTINUOUS
DECL|LIS3MDL_MD_SINGLE|macro|LIS3MDL_MD_SINGLE
DECL|LIS3MDL_ODR_BITS|macro|LIS3MDL_ODR_BITS
DECL|LIS3MDL_OMZ_SHIFT|macro|LIS3MDL_OMZ_SHIFT
DECL|LIS3MDL_OM_MASK|macro|LIS3MDL_OM_MASK
DECL|LIS3MDL_OM_SHIFT|macro|LIS3MDL_OM_SHIFT
DECL|LIS3MDL_REG_CTRL1|macro|LIS3MDL_REG_CTRL1
DECL|LIS3MDL_REG_CTRL2|macro|LIS3MDL_REG_CTRL2
DECL|LIS3MDL_REG_CTRL3|macro|LIS3MDL_REG_CTRL3
DECL|LIS3MDL_REG_CTRL4|macro|LIS3MDL_REG_CTRL4
DECL|LIS3MDL_REG_CTRL5|macro|LIS3MDL_REG_CTRL5
DECL|LIS3MDL_REG_INT_CFG|macro|LIS3MDL_REG_INT_CFG
DECL|LIS3MDL_REG_SAMPLE_START|macro|LIS3MDL_REG_SAMPLE_START
DECL|LIS3MDL_REG_WHO_AM_I|macro|LIS3MDL_REG_WHO_AM_I
DECL|LIS3MDL_TEMP_EN|macro|LIS3MDL_TEMP_EN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__SENSOR_LIS3MDL_H__|macro|__SENSOR_LIS3MDL_H__
DECL|data_ready_handler|member|sensor_trigger_handler_t data_ready_handler;
DECL|data_ready_trigger|member|struct sensor_trigger data_ready_trigger;
DECL|dev|member|struct device *dev;
DECL|fiber_stack|member|char __stack fiber_stack[CONFIG_LIS3MDL_FIBER_STACK_SIZE];
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct nano_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|i2c|member|struct device *i2c;
DECL|lis3mdl_data|struct|struct lis3mdl_data {
DECL|lis3mdl_magn_gain|variable|lis3mdl_magn_gain
DECL|lis3mdl_odr_bits|variable|lis3mdl_odr_bits
DECL|lis3mdl_odr_strings|variable|lis3mdl_odr_strings
DECL|temp_sample|member|int16_t temp_sample;
DECL|work|member|struct nano_work work;
DECL|x_sample|member|int16_t x_sample;
DECL|y_sample|member|int16_t y_sample;
DECL|z_sample|member|int16_t z_sample;
