DECL|fs_values|member|u8_t fs_values[4];
DECL|lis2dh_acc_config|function|static int lis2dh_acc_config(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lis2dh_acc_odr_set|function|static int lis2dh_acc_odr_set(struct device *dev, u16_t freq)
DECL|lis2dh_acc_range_map|variable|lis2dh_acc_range_map
DECL|lis2dh_acc_range_set|function|static int lis2dh_acc_range_set(struct device *dev, s32_t range)
DECL|lis2dh_attr_set|function|static int lis2dh_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lis2dh_channel_get|function|static int lis2dh_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lis2dh_convert|function|static void lis2dh_convert(s16_t raw_val, u16_t scale, struct sensor_value *val)
DECL|lis2dh_driver_api|variable|lis2dh_driver_api
DECL|lis2dh_driver|variable|lis2dh_driver
DECL|lis2dh_freq_to_odr_val|function|static int lis2dh_freq_to_odr_val(u16_t freq)
DECL|lis2dh_init|function|int lis2dh_init(struct device *dev)
DECL|lis2dh_odr_map|variable|lis2dh_odr_map
DECL|lis2dh_range_to_reg_val|function|static int lis2dh_range_to_reg_val(u16_t range)
DECL|lis2dh_reg_field_update|function|int lis2dh_reg_field_update(struct device *dev, u8_t reg_addr, u8_t pos, u8_t mask, u8_t val)
DECL|lis2dh_sample_fetch|function|static int lis2dh_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|lis2dh_spi_access|function|int lis2dh_spi_access(struct lis2dh_data *ctx, u8_t cmd, void *data, size_t length)
DECL|word_le32|member|u32_t word_le32;
