DECL|sx9500_api_funcs|variable|sx9500_api_funcs
DECL|sx9500_channel_get|function|static int sx9500_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|sx9500_data|variable|sx9500_data
DECL|sx9500_init_chip|function|static int sx9500_init_chip(struct device *dev)
DECL|sx9500_init|function|int sx9500_init(struct device *dev)
DECL|sx9500_reg_defaults|variable|sx9500_reg_defaults
DECL|sx9500_reg_read|function|int sx9500_reg_read(struct sx9500_data *data, uint8_t reg, uint8_t *val)
DECL|sx9500_reg_write|function|int sx9500_reg_write(struct sx9500_data *data, uint8_t reg, uint8_t val)
DECL|sx9500_sample_fetch|function|static int sx9500_sample_fetch(struct device *dev)
DECL|sx9500_update_bits|function|int sx9500_update_bits(struct sx9500_data *data, uint8_t reg, uint8_t mask, uint8_t val)
