DECL|lps22hb_api_funcs|variable|lps22hb_api_funcs
DECL|lps22hb_channel_get|function|static int lps22hb_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lps22hb_config|variable|lps22hb_config
DECL|lps22hb_data|variable|lps22hb_data
DECL|lps22hb_init_chip|function|static int lps22hb_init_chip(struct device *dev)
DECL|lps22hb_init|function|static int lps22hb_init(struct device *dev)
DECL|lps22hb_press_convert|function|static inline void lps22hb_press_convert(struct sensor_value *val, s32_t raw_val)
DECL|lps22hb_sample_fetch|function|static int lps22hb_sample_fetch(struct device *dev,enum sensor_channel chan)
DECL|lps22hb_set_odr_raw|function|static inline int lps22hb_set_odr_raw(struct device *dev, u8_t odr)
DECL|lps22hb_temp_convert|function|static inline void lps22hb_temp_convert(struct sensor_value *val,s16_t raw_val)
