DECL|bmm150_api_funcs|variable|bmm150_api_funcs
DECL|bmm150_attr_set_rep|function|static inline int bmm150_attr_set_rep(struct device *dev, enum sensor_channel chan, const struct sensor_value *val)
DECL|bmm150_attr_set|function|static int bmm150_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|bmm150_channel_get|function|static int bmm150_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bmm150_compensate_xy|function|static s32_t bmm150_compensate_xy(struct bmm150_trim_regs *tregs, s16_t xy, uint16_t rhall, bool is_x)
DECL|bmm150_compensate_z|function|static s32_t bmm150_compensate_z(struct bmm150_trim_regs *tregs, s16_t z, u16_t rhall)
DECL|bmm150_compute_max_odr|function|static int bmm150_compute_max_odr(struct device *dev, int rep_xy, int rep_z, int *max_odr)
DECL|bmm150_config|variable|bmm150_config
DECL|bmm150_convert|function|static void bmm150_convert(struct sensor_value *val, int raw_val)
DECL|bmm150_data|variable|bmm150_data
DECL|bmm150_init_chip|function|static int bmm150_init_chip(struct device *dev)
DECL|bmm150_init|function|static int bmm150_init(struct device *dev)
DECL|bmm150_presets_table|variable|bmm150_presets_table
DECL|bmm150_preset|struct|static const struct bmm150_preset {
DECL|bmm150_read_odr|function|static int bmm150_read_odr(struct device *dev)
DECL|bmm150_read_rep_xy|function|static int bmm150_read_rep_xy(struct device *dev)
DECL|bmm150_read_rep_z|function|static int bmm150_read_rep_z(struct device *dev)
DECL|bmm150_samp_freq_table|variable|bmm150_samp_freq_table
DECL|bmm150_sample_fetch|function|static int bmm150_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|bmm150_set_odr|function|static int bmm150_set_odr(struct device *dev, u8_t val)
DECL|bmm150_set_power_mode|function|static int bmm150_set_power_mode(struct device *dev, enum bmm150_power_modes mode, int state)
DECL|bmm150_write_rep_xy|function|static int bmm150_write_rep_xy(struct device *dev, int val)
DECL|bmm150_write_rep_z|function|static int bmm150_write_rep_z(struct device *dev, int val)
DECL|freq|member|int freq;
DECL|odr|member|u8_t odr;
DECL|reg_val|member|u8_t reg_val;
DECL|rep_xy|member|u8_t rep_xy;
DECL|rep_z|member|u8_t rep_z;
