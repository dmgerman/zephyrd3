DECL|BMA280_ACCEL_LSB_BITS|macro|BMA280_ACCEL_LSB_BITS
DECL|BMA280_ACCEL_LSB_BITS|macro|BMA280_ACCEL_LSB_BITS
DECL|BMA280_ACCEL_LSB_MASK|macro|BMA280_ACCEL_LSB_MASK
DECL|BMA280_ACCEL_LSB_SHIFT|macro|BMA280_ACCEL_LSB_SHIFT
DECL|BMA280_ACCEL_LSB_SHIFT|macro|BMA280_ACCEL_LSB_SHIFT
DECL|BMA280_BIT_DATA_EN|macro|BMA280_BIT_DATA_EN
DECL|BMA280_BIT_DATA_INT_STATUS|macro|BMA280_BIT_DATA_INT_STATUS
DECL|BMA280_BIT_INT_LATCH_RESET|macro|BMA280_BIT_INT_LATCH_RESET
DECL|BMA280_BIT_SLOPE_EN_X|macro|BMA280_BIT_SLOPE_EN_X
DECL|BMA280_BIT_SLOPE_EN_Y|macro|BMA280_BIT_SLOPE_EN_Y
DECL|BMA280_BIT_SLOPE_EN_Z|macro|BMA280_BIT_SLOPE_EN_Z
DECL|BMA280_BIT_SLOPE_INT_STATUS|macro|BMA280_BIT_SLOPE_INT_STATUS
DECL|BMA280_CHIP_ID|macro|BMA280_CHIP_ID
DECL|BMA280_CHIP_ID|macro|BMA280_CHIP_ID
DECL|BMA280_FIBER_PRIORITY|macro|BMA280_FIBER_PRIORITY
DECL|BMA280_FIBER_STACKSIZE_UNIT|macro|BMA280_FIBER_STACKSIZE_UNIT
DECL|BMA280_I2C_ADDRESS|macro|BMA280_I2C_ADDRESS
DECL|BMA280_INT_MAP_0_BIT_SLOPE|macro|BMA280_INT_MAP_0_BIT_SLOPE
DECL|BMA280_INT_MAP_1_BIT_DATA|macro|BMA280_INT_MAP_1_BIT_DATA
DECL|BMA280_INT_MODE_LATCH|macro|BMA280_INT_MODE_LATCH
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_BW|macro|BMA280_PMU_BW
DECL|BMA280_PMU_FULL_RANGE|macro|BMA280_PMU_FULL_RANGE
DECL|BMA280_PMU_FULL_RANGE|macro|BMA280_PMU_FULL_RANGE
DECL|BMA280_PMU_FULL_RANGE|macro|BMA280_PMU_FULL_RANGE
DECL|BMA280_PMU_FULL_RANGE|macro|BMA280_PMU_FULL_RANGE
DECL|BMA280_PMU_RANGE|macro|BMA280_PMU_RANGE
DECL|BMA280_PMU_RANGE|macro|BMA280_PMU_RANGE
DECL|BMA280_PMU_RANGE|macro|BMA280_PMU_RANGE
DECL|BMA280_PMU_RANGE|macro|BMA280_PMU_RANGE
DECL|BMA280_REG_ACCEL_X_LSB|macro|BMA280_REG_ACCEL_X_LSB
DECL|BMA280_REG_ACCEL_X_MSB|macro|BMA280_REG_ACCEL_X_MSB
DECL|BMA280_REG_ACCEL_Y_LSB|macro|BMA280_REG_ACCEL_Y_LSB
DECL|BMA280_REG_ACCEL_Y_MSB|macro|BMA280_REG_ACCEL_Y_MSB
DECL|BMA280_REG_ACCEL_Z_LSB|macro|BMA280_REG_ACCEL_Z_LSB
DECL|BMA280_REG_ACCEL_Z_MSB|macro|BMA280_REG_ACCEL_Z_MSB
DECL|BMA280_REG_CHIP_ID|macro|BMA280_REG_CHIP_ID
DECL|BMA280_REG_INT_5|macro|BMA280_REG_INT_5
DECL|BMA280_REG_INT_EN_0|macro|BMA280_REG_INT_EN_0
DECL|BMA280_REG_INT_EN_1|macro|BMA280_REG_INT_EN_1
DECL|BMA280_REG_INT_MAP_0|macro|BMA280_REG_INT_MAP_0
DECL|BMA280_REG_INT_MAP_1|macro|BMA280_REG_INT_MAP_1
DECL|BMA280_REG_INT_RST_LATCH|macro|BMA280_REG_INT_RST_LATCH
DECL|BMA280_REG_INT_STATUS_0|macro|BMA280_REG_INT_STATUS_0
DECL|BMA280_REG_INT_STATUS_1|macro|BMA280_REG_INT_STATUS_1
DECL|BMA280_REG_PMU_BW|macro|BMA280_REG_PMU_BW
DECL|BMA280_REG_PMU_RANGE|macro|BMA280_REG_PMU_RANGE
DECL|BMA280_REG_SLOPE_TH|macro|BMA280_REG_SLOPE_TH
DECL|BMA280_REG_TEMP|macro|BMA280_REG_TEMP
DECL|BMA280_SLOPE_DUR_MASK|macro|BMA280_SLOPE_DUR_MASK
DECL|BMA280_SLOPE_DUR_SHIFT|macro|BMA280_SLOPE_DUR_SHIFT
DECL|BMA280_SLOPE_EN_XYZ|macro|BMA280_SLOPE_EN_XYZ
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__SENSOR_BMA280_H__|macro|__SENSOR_BMA280_H__
DECL|any_motion_handler|member|sensor_trigger_handler_t any_motion_handler;
DECL|any_motion_trigger|member|struct sensor_trigger any_motion_trigger;
DECL|bma280_data|struct|struct bma280_data {
DECL|data_ready_handler|member|sensor_trigger_handler_t data_ready_handler;
DECL|data_ready_trigger|member|struct sensor_trigger data_ready_trigger;
DECL|dev|member|struct device *dev;
DECL|fiber_stack|member|char __stack fiber_stack[CONFIG_BMA280_FIBER_STACK_SIZE];
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct nano_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|i2c|member|struct device *i2c;
DECL|temp_sample|member|int8_t temp_sample;
DECL|work|member|struct nano_work work;
DECL|x_sample|member|int16_t x_sample;
DECL|y_sample|member|int16_t y_sample;
DECL|z_sample|member|int16_t z_sample;
