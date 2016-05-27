DECL|ak8975_channel_get|function|static int ak8975_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|ak8975_convert|function|static void ak8975_convert(struct sensor_value *val, int16_t sample, uint8_t adjustment)
DECL|ak8975_data|variable|ak8975_data
DECL|ak8975_driver_api|variable|ak8975_driver_api
DECL|ak8975_init|function|int ak8975_init(struct device *dev)
DECL|ak8975_read_adjustment_data|function|static int ak8975_read_adjustment_data(struct ak8975_data *drv_data)
DECL|ak8975_sample_fetch|function|static int ak8975_sample_fetch(struct device *dev, enum sensor_channel chan)
