DECL|BMG160_GYRO_RANGE_MAP_SIZE|macro|BMG160_GYRO_RANGE_MAP_SIZE
DECL|BMG160_SAMPLING_FREQ_MAP_SIZE|macro|BMG160_SAMPLING_FREQ_MAP_SIZE
DECL|bmg160_api|variable|bmg160_api
DECL|bmg160_attr_set|function|static int bmg160_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|bmg160_bus_config|function|static inline int bmg160_bus_config(struct device *dev)
DECL|bmg160_channel_get|function|static int bmg160_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bmg160_config|variable|bmg160_config
DECL|bmg160_data|variable|bmg160_data
DECL|bmg160_gyro_range_map|variable|bmg160_gyro_range_map
DECL|bmg160_init|function|int bmg160_init(struct device *dev)
DECL|bmg160_is_val_valid|function|static int bmg160_is_val_valid(int16_t val, const int16_t *val_map, uint16_t map_size)
DECL|bmg160_read_byte|function|int bmg160_read_byte(struct device *dev, uint8_t reg_addr, uint8_t *byte)
DECL|bmg160_read|function|int bmg160_read(struct device *dev, uint8_t reg_addr, uint8_t *data,uint8_t len)
DECL|bmg160_sample_fetch|function|static int bmg160_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|bmg160_sampling_freq_map|variable|bmg160_sampling_freq_map
DECL|bmg160_to_fixed_point|function|static void bmg160_to_fixed_point(struct bmg160_device_data *bmg160, enum sensor_channel chan, int16_t raw, struct sensor_value *val)
DECL|bmg160_update_byte|function|int bmg160_update_byte(struct device *dev, uint8_t reg_addr, uint8_t mask, uint8_t value)
DECL|bmg160_write_byte|function|int bmg160_write_byte(struct device *dev, uint8_t reg_addr, uint8_t byte)
DECL|bmg160_write|function|static int bmg160_write(struct device *dev, uint8_t reg_addr, uint8_t *data,uint8_t len)
