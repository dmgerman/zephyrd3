DECL|bma280_channel_get|function|static int bma280_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bma280_driver_api|variable|bma280_driver_api
DECL|bma280_driver|variable|bma280_driver
DECL|bma280_init|function|int bma280_init(struct device *dev)
DECL|bma280_reg_burst_read|function|static int bma280_reg_burst_read(struct bma280_data *drv_data, uint8_t reg, uint8_t *buff, int buff_len)
DECL|bma280_reg_read|function|int bma280_reg_read(struct bma280_data *drv_data, uint8_t reg, uint8_t *val)
DECL|bma280_reg_update|function|int bma280_reg_update(struct bma280_data *drv_data, uint8_t reg, uint8_t mask, uint8_t val)
DECL|bma280_reg_write|function|int bma280_reg_write(struct bma280_data *drv_data, uint8_t reg, uint8_t val)
DECL|bma280_sample_fetch|function|static int bma280_sample_fetch(struct device *dev)
