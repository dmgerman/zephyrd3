DECL|fxas21002_channel_get|function|static int fxas21002_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|fxas21002_config|variable|fxas21002_config
DECL|fxas21002_convert|function|static void fxas21002_convert(struct sensor_value *val, int16_t raw, enum fxas21002_range range)
DECL|fxas21002_data|variable|fxas21002_data
DECL|fxas21002_driver_api|variable|fxas21002_driver_api
DECL|fxas21002_get_power|function|int fxas21002_get_power(struct device *dev, enum fxas21002_power *power)
DECL|fxas21002_get_transition_time|function|uint32_t fxas21002_get_transition_time(enum fxas21002_power start, enum fxas21002_power end, uint8_t dr)
DECL|fxas21002_init|function|static int fxas21002_init(struct device *dev)
DECL|fxas21002_sample_fetch|function|static int fxas21002_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|fxas21002_set_power|function|int fxas21002_set_power(struct device *dev, enum fxas21002_power power)
DECL|sample_period|variable|sample_period
