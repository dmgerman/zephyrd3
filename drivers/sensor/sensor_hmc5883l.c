DECL|hmc5883l_channel_get|function|static int hmc5883l_channel_get(struct device *dev,enum sensor_channel chan, struct sensor_value *val)
DECL|hmc5883l_convert|function|static void hmc5883l_convert(struct sensor_value *val, int16_t raw_val, uint16_t divider)
DECL|hmc5883l_driver_api|variable|hmc5883l_driver_api
DECL|hmc5883l_driver|variable|hmc5883l_driver
DECL|hmc5883l_init|function|int hmc5883l_init(struct device *dev)
DECL|hmc5883l_sample_fetch|function|static int hmc5883l_sample_fetch(struct device *dev, enum sensor_channel chan)
