DECL|adt7420_attr_set|function|static int adt7420_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|adt7420_channel_get|function|static int adt7420_channel_get(struct device *dev,enum sensor_channel chan, struct sensor_value *val)
DECL|adt7420_config|variable|adt7420_config
DECL|adt7420_driver_api|variable|adt7420_driver_api
DECL|adt7420_driver|variable|adt7420_driver
DECL|adt7420_init|function|static int adt7420_init(struct device *dev)
DECL|adt7420_probe|function|static int adt7420_probe(struct device *dev)
DECL|adt7420_sample_fetch|function|static int adt7420_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|adt7420_temp_reg_read|function|static int adt7420_temp_reg_read(struct device *dev, u8_t reg, s16_t *val)
DECL|adt7420_temp_reg_write|function|static int adt7420_temp_reg_write(struct device *dev, u8_t reg, s16_t val)
