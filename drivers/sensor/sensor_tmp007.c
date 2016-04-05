DECL|tmp007_channel_get|function|static int tmp007_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|tmp007_driver_api|variable|tmp007_driver_api
DECL|tmp007_driver|variable|tmp007_driver
DECL|tmp007_init|function|int tmp007_init(struct device *dev)
DECL|tmp007_reg_read|function|int tmp007_reg_read(struct tmp007_data *drv_data, uint8_t reg, uint16_t *val)
DECL|tmp007_reg_update|function|int tmp007_reg_update(struct tmp007_data *drv_data, uint8_t reg, uint16_t mask, uint16_t val)
DECL|tmp007_reg_write|function|int tmp007_reg_write(struct tmp007_data *drv_data, uint8_t reg, uint16_t val)
DECL|tmp007_sample_fetch|function|static int tmp007_sample_fetch(struct device *dev)
