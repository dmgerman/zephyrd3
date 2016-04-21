DECL|bmc150_magn_api_funcs|variable|bmc150_magn_api_funcs
DECL|bmc150_magn_attr_set_rep|function|static inline int bmc150_magn_attr_set_rep(struct device *dev, enum sensor_channel chan, const struct sensor_value *val)
DECL|bmc150_magn_attr_set|function|static int bmc150_magn_attr_set(struct device *dev,enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|bmc150_magn_channel_get|function|static int bmc150_magn_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bmc150_magn_compensate_xy|function|static int32_t bmc150_magn_compensate_xy(struct bmc150_magn_trim_regs *tregs,int16_t xy, uint16_t rhall, bool is_x)
DECL|bmc150_magn_compensate_z|function|static int32_t bmc150_magn_compensate_z(struct bmc150_magn_trim_regs *tregs,int16_t z, uint16_t rhall)
DECL|bmc150_magn_compute_max_odr|function|static int bmc150_magn_compute_max_odr(struct device *dev, int rep_xy, int rep_z, int *max_odr)
DECL|bmc150_magn_config|variable|bmc150_magn_config
DECL|bmc150_magn_data|variable|bmc150_magn_data
DECL|bmc150_magn_init_chip|function|static int bmc150_magn_init_chip(struct device *dev)
DECL|bmc150_magn_init|function|int bmc150_magn_init(struct device *dev)
DECL|bmc150_magn_presets_table|variable|bmc150_magn_presets_table
DECL|bmc150_magn_preset|struct|static const struct bmc150_magn_preset {
DECL|bmc150_magn_read_odr|function|static int bmc150_magn_read_odr(struct device *dev)
DECL|bmc150_magn_read_rep_xy|function|static int bmc150_magn_read_rep_xy(struct device *dev)
DECL|bmc150_magn_read_rep_z|function|static int bmc150_magn_read_rep_z(struct device *dev)
DECL|bmc150_magn_samp_freq_table|variable|bmc150_magn_samp_freq_table
DECL|bmc150_magn_sample_fetch|function|static int bmc150_magn_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|bmc150_magn_set_odr|function|static int bmc150_magn_set_odr(struct device *dev, uint8_t val)
DECL|bmc150_magn_set_power_mode|function|static int bmc150_magn_set_power_mode(struct device *dev, enum bmc150_magn_power_modes mode, int state)
DECL|bmc150_magn_write_rep_xy|function|static int bmc150_magn_write_rep_xy(struct device *dev, int val)
DECL|bmc150_magn_write_rep_z|function|static int bmc150_magn_write_rep_z(struct device *dev, int val)
DECL|freq|member|int freq;
DECL|odr|member|uint8_t odr;
DECL|reg_val|member|uint8_t reg_val;
DECL|rep_xy|member|uint8_t rep_xy;
DECL|rep_z|member|uint8_t rep_z;
