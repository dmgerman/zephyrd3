DECL|lsm6ds0_accel_axis_ctrl|function|static inline int lsm6ds0_accel_axis_ctrl(struct device *dev, int x_en, int y_en, int z_en)
DECL|lsm6ds0_accel_channel_get|function|static int lsm6ds0_accel_channel_get(enum sensor_channel chan, struct sensor_value *val, struct lsm6ds0_data *data)
DECL|lsm6ds0_accel_convert|function|static inline void lsm6ds0_accel_convert(struct sensor_value *val, int raw_val, float scale)
DECL|lsm6ds0_accel_get_channel|function|static inline int lsm6ds0_accel_get_channel(enum sensor_channel chan, struct sensor_value *val, struct lsm6ds0_data *data, float scale)
DECL|lsm6ds0_accel_set_fs_raw|function|static int lsm6ds0_accel_set_fs_raw(struct device *dev, u8_t fs)
DECL|lsm6ds0_accel_set_odr_raw|function|static int lsm6ds0_accel_set_odr_raw(struct device *dev, u8_t odr)
DECL|lsm6ds0_api_funcs|variable|lsm6ds0_api_funcs
DECL|lsm6ds0_channel_get|function|static int lsm6ds0_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lsm6ds0_config|variable|lsm6ds0_config
DECL|lsm6ds0_data|variable|lsm6ds0_data
DECL|lsm6ds0_gyro_axis_ctrl|function|static inline int lsm6ds0_gyro_axis_ctrl(struct device *dev, int x_en, int y_en, int z_en)
DECL|lsm6ds0_gyro_channel_get_temp|function|static void lsm6ds0_gyro_channel_get_temp(struct sensor_value *val, struct lsm6ds0_data *data)
DECL|lsm6ds0_gyro_channel_get|function|static int lsm6ds0_gyro_channel_get(enum sensor_channel chan, struct sensor_value *val, struct lsm6ds0_data *data)
DECL|lsm6ds0_gyro_convert|function|static inline void lsm6ds0_gyro_convert(struct sensor_value *val, int raw_val,float numerator)
DECL|lsm6ds0_gyro_get_channel|function|static inline int lsm6ds0_gyro_get_channel(enum sensor_channel chan, struct sensor_value *val, struct lsm6ds0_data *data, float numerator)
DECL|lsm6ds0_gyro_set_fs_raw|function|static int lsm6ds0_gyro_set_fs_raw(struct device *dev, u8_t fs)
DECL|lsm6ds0_gyro_set_odr_raw|function|static int lsm6ds0_gyro_set_odr_raw(struct device *dev, u8_t odr)
DECL|lsm6ds0_init_chip|function|static int lsm6ds0_init_chip(struct device *dev)
DECL|lsm6ds0_init|function|static int lsm6ds0_init(struct device *dev)
DECL|lsm6ds0_reboot|function|static inline int lsm6ds0_reboot(struct device *dev)
DECL|lsm6ds0_sample_fetch_accel|function|static int lsm6ds0_sample_fetch_accel(struct device *dev)
DECL|lsm6ds0_sample_fetch_gyro|function|static int lsm6ds0_sample_fetch_gyro(struct device *dev)
DECL|lsm6ds0_sample_fetch_temp|function|static int lsm6ds0_sample_fetch_temp(struct device *dev)
DECL|lsm6ds0_sample_fetch|function|static int lsm6ds0_sample_fetch(struct device *dev, enum sensor_channel chan)
