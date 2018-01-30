DECL|BMI160_ACC_OFS_LSB|macro|BMI160_ACC_OFS_LSB
DECL|BMI160_ACC_RANGE_MAP_SIZE|macro|BMI160_ACC_RANGE_MAP_SIZE
DECL|BMI160_DATA_READY_BIT_MASK|macro|BMI160_DATA_READY_BIT_MASK
DECL|BMI160_DATA_READY_BIT_MASK|macro|BMI160_DATA_READY_BIT_MASK
DECL|BMI160_GYR_OFS_LSB|macro|BMI160_GYR_OFS_LSB
DECL|BMI160_GYR_RANGE_MAP_SIZE|macro|BMI160_GYR_RANGE_MAP_SIZE
DECL|BMI160_SAMPLE_BURST_READ_ADDR|macro|BMI160_SAMPLE_BURST_READ_ADDR
DECL|BMI160_SAMPLE_BURST_READ_ADDR|macro|BMI160_SAMPLE_BURST_READ_ADDR
DECL|bmi160_acc_calibrate|function|static int bmi160_acc_calibrate(struct device *dev, enum sensor_channel chan, const struct sensor_value *xyz_calib_value)
DECL|bmi160_acc_channel_get|function|static inline void bmi160_acc_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bmi160_acc_config|function|static int bmi160_acc_config(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|bmi160_acc_odr_set|function|static int bmi160_acc_odr_set(struct device *dev, u16_t freq_int, u16_t freq_milli)
DECL|bmi160_acc_ofs_set|function|static int bmi160_acc_ofs_set(struct device *dev, enum sensor_channel chan, const struct sensor_value *ofs)
DECL|bmi160_acc_range_map|variable|bmi160_acc_range_map
DECL|bmi160_acc_range_set|function|static int bmi160_acc_range_set(struct device *dev, s32_t range)
DECL|bmi160_acc_reg_val_to_range|function|s32_t bmi160_acc_reg_val_to_range(u8_t reg_val)
DECL|bmi160_api|variable|bmi160_api
DECL|bmi160_attr_set|function|static int bmi160_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|bmi160_byte_read|function|int bmi160_byte_read(struct device *dev, u8_t reg_addr, u8_t *byte)
DECL|bmi160_byte_write|function|int bmi160_byte_write(struct device *dev, u8_t reg_addr, u8_t byte)
DECL|bmi160_channel_convert|function|static void bmi160_channel_convert(enum sensor_channel chan, u16_t scale, u16_t *raw_xyz, struct sensor_value *val)
DECL|bmi160_channel_get|function|static int bmi160_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bmi160_config|variable|bmi160_config
DECL|bmi160_data|variable|bmi160_data
DECL|bmi160_do_calibration|function|static int bmi160_do_calibration(struct device *dev, u8_t foc_conf)
DECL|bmi160_freq_to_odr_val|function|static int bmi160_freq_to_odr_val(u16_t freq_int, u16_t freq_milli)
DECL|bmi160_gyr_calibrate|function|static int bmi160_gyr_calibrate(struct device *dev, enum sensor_channel chan)
DECL|bmi160_gyr_channel_get|function|static inline void bmi160_gyr_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bmi160_gyr_config|function|static int bmi160_gyr_config(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|bmi160_gyr_odr_set|function|static int bmi160_gyr_odr_set(struct device *dev, u16_t freq_int, u16_t freq_milli)
DECL|bmi160_gyr_ofs_set|function|static int bmi160_gyr_ofs_set(struct device *dev, enum sensor_channel chan, const struct sensor_value *ofs)
DECL|bmi160_gyr_range_map|variable|bmi160_gyr_range_map
DECL|bmi160_gyr_range_set|function|static int bmi160_gyr_range_set(struct device *dev, u16_t range)
DECL|bmi160_gyr_reg_val_to_range|function|s32_t bmi160_gyr_reg_val_to_range(u8_t reg_val)
DECL|bmi160_init|function|int bmi160_init(struct device *dev)
DECL|bmi160_odr_map|variable|bmi160_odr_map
DECL|bmi160_pmu_set|function|static int bmi160_pmu_set(struct device *dev, union bmi160_pmu_status *pmu_sts)
DECL|bmi160_range_to_reg_val|function|static s32_t bmi160_range_to_reg_val(u16_t range, const struct bmi160_range *range_map, u16_t range_map_size)
DECL|bmi160_read|function|int bmi160_read(struct device *dev, u8_t reg_addr, u8_t *data, u8_t len)
DECL|bmi160_reg_field_update|function|int bmi160_reg_field_update(struct device *dev, u8_t reg_addr, u8_t pos, u8_t mask, u8_t val)
DECL|bmi160_reg_val_to_range|function|static s32_t bmi160_reg_val_to_range(u8_t reg_val, const struct bmi160_range *range_map, u16_t range_map_size)
DECL|bmi160_sample_fetch|function|static int bmi160_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|bmi160_temp_channel_get|function|static int bmi160_temp_channel_get(struct device *dev, struct sensor_value *val)
DECL|bmi160_to_fixed_point|function|static void bmi160_to_fixed_point(s16_t raw_val, u16_t scale, struct sensor_value *val)
DECL|bmi160_transceive|function|static int bmi160_transceive(struct device *dev, u8_t reg, bool write, void *data, size_t length)
DECL|bmi160_word_read|function|static int bmi160_word_read(struct device *dev, u8_t reg_addr, u16_t *word)
DECL|bmi160_word_write|function|int bmi160_word_write(struct device *dev, u8_t reg_addr, u16_t word)
DECL|freq_int|member|u16_t freq_int;
DECL|freq_milli|member|u16_t freq_milli; /* User should convert to uHz before setting the
