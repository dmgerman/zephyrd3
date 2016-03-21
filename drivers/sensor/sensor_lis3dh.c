DECL|lis3dh_channel_get|function|static int lis3dh_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lis3dh_driver_api|variable|lis3dh_driver_api
DECL|lis3dh_driver|variable|lis3dh_driver
DECL|lis3dh_i2c_read|function|static int lis3dh_i2c_read(struct lis3dh_data *drv_data, uint8_t cmd, uint8_t *buff, int buff_len)
DECL|lis3dh_init|function|int lis3dh_init(struct device *dev)
DECL|lis3dh_reg_burst_read|function|static inline int lis3dh_reg_burst_read(struct lis3dh_data *drv_data, uint8_t reg, uint8_t *buff, int buff_len)
DECL|lis3dh_reg_read|function|static inline int lis3dh_reg_read(struct lis3dh_data *drv_data, uint8_t reg, uint8_t *val)
DECL|lis3dh_reg_write|function|int lis3dh_reg_write(struct lis3dh_data *drv_data, uint8_t reg, uint8_t val)
DECL|lis3dh_sample_fetch|function|int lis3dh_sample_fetch(struct device *dev)
