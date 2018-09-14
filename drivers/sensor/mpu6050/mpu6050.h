DECL|MPU6050_ACCEL_FS_SHIFT|macro|MPU6050_ACCEL_FS_SHIFT
DECL|MPU6050_CHIP_ID|macro|MPU6050_CHIP_ID
DECL|MPU6050_DRDY_EN|macro|MPU6050_DRDY_EN
DECL|MPU6050_GYRO_FS_SHIFT|macro|MPU6050_GYRO_FS_SHIFT
DECL|MPU6050_REG_ACCEL_CFG|macro|MPU6050_REG_ACCEL_CFG
DECL|MPU6050_REG_CHIP_ID|macro|MPU6050_REG_CHIP_ID
DECL|MPU6050_REG_DATA_START|macro|MPU6050_REG_DATA_START
DECL|MPU6050_REG_GYRO_CFG|macro|MPU6050_REG_GYRO_CFG
DECL|MPU6050_REG_INT_EN|macro|MPU6050_REG_INT_EN
DECL|MPU6050_REG_PWR_MGMT1|macro|MPU6050_REG_PWR_MGMT1
DECL|MPU6050_SLEEP_EN|macro|MPU6050_SLEEP_EN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ZEPHYR_DRIVERS_SENSOR_MPU6050_MPU6050_H_|macro|ZEPHYR_DRIVERS_SENSOR_MPU6050_MPU6050_H_
DECL|accel_sensitivity_shift|member|u16_t accel_sensitivity_shift;
DECL|accel_x|member|s16_t accel_x;
DECL|accel_y|member|s16_t accel_y;
DECL|accel_z|member|s16_t accel_z;
DECL|data_ready_handler|member|sensor_trigger_handler_t data_ready_handler;
DECL|data_ready_trigger|member|struct sensor_trigger data_ready_trigger;
DECL|dev|member|struct device *dev;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_sem|member|struct k_sem gpio_sem;
DECL|gpio|member|struct device *gpio;
DECL|gyro_sensitivity_x10|member|u16_t gyro_sensitivity_x10;
DECL|gyro_x|member|s16_t gyro_x;
DECL|gyro_y|member|s16_t gyro_y;
DECL|gyro_z|member|s16_t gyro_z;
DECL|i2c|member|struct device *i2c;
DECL|mpu6050_data|struct|struct mpu6050_data {
DECL|mpu6050_gyro_sensitivity_x10|variable|mpu6050_gyro_sensitivity_x10
DECL|temp|member|s16_t temp;
DECL|thread|member|struct k_thread thread;
DECL|work|member|struct k_work work;
