DECL|mpu6050_channel_get|function|static int mpu6050_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|mpu6050_convert_accel|function|static void mpu6050_convert_accel(struct sensor_value *val, int16_t raw_val, uint16_t sensitivity_shift)
DECL|mpu6050_convert_gyro|function|static void mpu6050_convert_gyro(struct sensor_value *val, int16_t raw_val, uint16_t sensitivity_x10)
DECL|mpu6050_convert_temp|function|static inline void mpu6050_convert_temp(struct sensor_value *val,int16_t raw_val)
DECL|mpu6050_driver_api|variable|mpu6050_driver_api
DECL|mpu6050_driver|variable|mpu6050_driver
DECL|mpu6050_init|function|int mpu6050_init(struct device *dev)
DECL|mpu6050_sample_fetch|function|static int mpu6050_sample_fetch(struct device *dev, enum sensor_channel chan)
