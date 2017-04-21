DECL|freq|member|int freq;
DECL|fs|member|int fs;
DECL|lsm9ds0_gyro_api_funcs|variable|lsm9ds0_gyro_api_funcs
DECL|lsm9ds0_gyro_attr_set|function|static int lsm9ds0_gyro_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lsm9ds0_gyro_channel_get|function|static int lsm9ds0_gyro_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lsm9ds0_gyro_config|variable|lsm9ds0_gyro_config
DECL|lsm9ds0_gyro_convert|function|static inline void lsm9ds0_gyro_convert(struct sensor_value *val, int raw_val,float numerator)
DECL|lsm9ds0_gyro_data|variable|lsm9ds0_gyro_data
DECL|lsm9ds0_gyro_fs_table|variable|lsm9ds0_gyro_fs_table
DECL|lsm9ds0_gyro_get_channel|function|static inline int lsm9ds0_gyro_get_channel(enum sensor_channel chan, struct sensor_value *val, struct lsm9ds0_gyro_data *data, float numerator)
DECL|lsm9ds0_gyro_init_chip|function|static int lsm9ds0_gyro_init_chip(struct device *dev)
DECL|lsm9ds0_gyro_init|function|static int lsm9ds0_gyro_init(struct device *dev)
DECL|lsm9ds0_gyro_power_ctrl|function|static inline int lsm9ds0_gyro_power_ctrl(struct device *dev, int power, int x_en, int y_en, int z_en)
DECL|lsm9ds0_gyro_samp_freq_table|variable|lsm9ds0_gyro_samp_freq_table
DECL|lsm9ds0_gyro_sample_fetch|function|static int lsm9ds0_gyro_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|lsm9ds0_gyro_set_fs_raw|function|static int lsm9ds0_gyro_set_fs_raw(struct device *dev, u8_t fs)
DECL|lsm9ds0_gyro_set_fs|function|static int lsm9ds0_gyro_set_fs(struct device *dev, int fs)
DECL|lsm9ds0_gyro_set_odr_raw|function|static inline int lsm9ds0_gyro_set_odr_raw(struct device *dev, u8_t odr)
DECL|lsm9ds0_gyro_set_odr|function|static int lsm9ds0_gyro_set_odr(struct device *dev, int odr)
DECL|reg_val|member|u8_t reg_val;
DECL|reg_val|member|u8_t reg_val;
