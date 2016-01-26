DECL|isl29035_api|variable|isl29035_api
DECL|isl29035_channel_get|function|static int isl29035_channel_get(struct device *dev,enum sensor_channel chan, struct sensor_value *val)
DECL|isl29035_data|variable|isl29035_data
DECL|isl29035_init|function|static int isl29035_init(struct device *dev)
DECL|isl29035_read_reg|function|int isl29035_read_reg(struct isl29035_driver_data *drv_data, uint8_t reg, uint8_t *val)
DECL|isl29035_sample_fetch|function|static int isl29035_sample_fetch(struct device *dev)
DECL|isl29035_update_reg|function|int isl29035_update_reg(struct isl29035_driver_data *drv_data,uint8_t reg, uint8_t mask, uint8_t val)
DECL|isl29035_write_reg|function|int isl29035_write_reg(struct isl29035_driver_data *drv_data, uint8_t reg, uint8_t val)
