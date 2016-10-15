DECL|max44009_attr_set|function|static int max44009_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|max44009_channel_get|function|static int max44009_channel_get(struct device *dev, enum sensor_channel chan,struct sensor_value *val)
DECL|max44009_driver_api|variable|max44009_driver_api
DECL|max44009_drv_data|variable|max44009_drv_data
DECL|max44009_init|function|int max44009_init(struct device *dev)
DECL|max44009_reg_read|function|static int max44009_reg_read(struct max44009_data *drv_data, uint8_t reg, uint8_t *val, bool send_stop)
DECL|max44009_reg_update|function|static int max44009_reg_update(struct max44009_data *drv_data, uint8_t reg, uint8_t mask, uint8_t val)
DECL|max44009_reg_write|function|static int max44009_reg_write(struct max44009_data *drv_data, uint8_t reg, uint8_t val)
DECL|max44009_sample_fetch|function|static int max44009_sample_fetch(struct device *dev, enum sensor_channel chan)
