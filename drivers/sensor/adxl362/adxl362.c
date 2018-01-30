DECL|adxl362_acc_range_map|variable|adxl362_acc_range_map
DECL|adxl362_api_funcs|variable|adxl362_api_funcs
DECL|adxl362_attr_set|function|static int adxl362_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|adxl362_channel_get|function|static int adxl362_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|adxl362_chip_init|function|static int adxl362_chip_init(struct device *dev)
DECL|adxl362_data|variable|adxl362_data
DECL|adxl362_fifo_setup|function|static int adxl362_fifo_setup(struct device *dev, u8_t mode, u16_t water_mark_lvl, u8_t en_temp_read)
DECL|adxl362_freq_to_odr_val|function|static int adxl362_freq_to_odr_val(u16_t freq_int, u16_t freq_milli)
DECL|adxl362_get_reg|function|static inline int adxl362_get_reg(struct device *dev, u8_t *read_buf, u8_t register_address, u8_t count)
DECL|adxl362_init|function|static int adxl362_init(struct device *dev)
DECL|adxl362_odr_map|variable|adxl362_odr_map
DECL|adxl362_range_to_reg_val|function|static s32_t adxl362_range_to_reg_val(u16_t range)
DECL|adxl362_range|struct|static const struct adxl362_range {
DECL|adxl362_read_temperature|function|static int adxl362_read_temperature(struct device *dev, s32_t *temp_celsius)
DECL|adxl362_reg_access|function|static int adxl362_reg_access(struct adxl362_data *ctx, u8_t cmd, u8_t reg_addr, void *data, size_t length)
DECL|adxl362_sample_fetch|function|static int adxl362_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|adxl362_set_output_rate|function|static int adxl362_set_output_rate(struct device *dev, u8_t out_rate)
DECL|adxl362_set_power_mode|function|static int adxl362_set_power_mode(struct device *dev, u8_t mode)
DECL|adxl362_set_range|function|static int adxl362_set_range(struct device *dev, u8_t range)
DECL|adxl362_set_reg|function|static inline int adxl362_set_reg(struct device *dev, u16_t register_value, u8_t register_address, u8_t count)
DECL|adxl362_setup_activity_detection|function|static int adxl362_setup_activity_detection(struct device *dev, u8_t ref_or_abs, u16_t threshold, u8_t time)
DECL|adxl362_setup_inactivity_detection|function|static int adxl362_setup_inactivity_detection(struct device *dev, u8_t ref_or_abs, u16_t threshold, u16_t time)
DECL|adxl362_software_reset|function|static int adxl362_software_reset(struct device *dev)
DECL|axl362_acc_config|function|static int axl362_acc_config(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|freq_int|member|u16_t freq_int;
DECL|freq_milli|member|u16_t freq_milli; /* User should convert to uHz before setting the
DECL|range|member|u16_t range;
DECL|reg_val|member|u8_t reg_val;
