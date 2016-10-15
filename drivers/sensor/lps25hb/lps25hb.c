DECL|lps25hb_api_funcs|variable|lps25hb_api_funcs
DECL|lps25hb_channel_get|function|static int lps25hb_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lps25hb_config|variable|lps25hb_config
DECL|lps25hb_data|variable|lps25hb_data
DECL|lps25hb_init_chip|function|static int lps25hb_init_chip(struct device *dev)
DECL|lps25hb_init|function|int lps25hb_init(struct device *dev)
DECL|lps25hb_power_ctrl|function|static inline int lps25hb_power_ctrl(struct device *dev, uint8_t value)
DECL|lps25hb_press_convert|function|static inline void lps25hb_press_convert(struct sensor_value *val, int32_t raw_val)
DECL|lps25hb_sample_fetch|function|static int lps25hb_sample_fetch(struct device *dev,enum sensor_channel chan)
DECL|lps25hb_set_odr_raw|function|static inline int lps25hb_set_odr_raw(struct device *dev, uint8_t odr)
DECL|lps25hb_temp_convert|function|static inline void lps25hb_temp_convert(struct sensor_value *val,int16_t raw_val)
