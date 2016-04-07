DECL|lsm9ds0_gyro_api_funcs|variable|lsm9ds0_gyro_api_funcs
DECL|lsm9ds0_gyro_attr_set|function|static int lsm9ds0_gyro_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lsm9ds0_gyro_channel_get|function|static int lsm9ds0_gyro_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lsm9ds0_gyro_config|variable|lsm9ds0_gyro_config
DECL|lsm9ds0_gyro_data|variable|lsm9ds0_gyro_data
DECL|lsm9ds0_gyro_fiber_main|function|static void lsm9ds0_gyro_fiber_main(int arg1, int gpio_pin)
DECL|lsm9ds0_gyro_get_channel|function|static inline int lsm9ds0_gyro_get_channel(enum sensor_channel chan, struct sensor_value *val, struct lsm9ds0_gyro_data *data, float numerator)
DECL|lsm9ds0_gyro_gpio_drdy_callback|function|static void lsm9ds0_gyro_gpio_drdy_callback(struct device *dev, struct gpio_callback *cb, uint32_t pins)
DECL|lsm9ds0_gyro_init_chip|function|static int lsm9ds0_gyro_init_chip(struct device *dev)
DECL|lsm9ds0_gyro_init|function|int lsm9ds0_gyro_init(struct device *dev)
DECL|lsm9ds0_gyro_power_ctrl|function|static inline int lsm9ds0_gyro_power_ctrl(struct device *dev, int power, int x_en, int y_en, int z_en)
DECL|lsm9ds0_gyro_sample_fetch|function|static int lsm9ds0_gyro_sample_fetch(struct device *dev)
DECL|lsm9ds0_gyro_set_fs_raw|function|static int lsm9ds0_gyro_set_fs_raw(struct device *dev, int fs)
DECL|lsm9ds0_gyro_set_fs|function|static int lsm9ds0_gyro_set_fs(struct device *dev, int fs)
DECL|lsm9ds0_gyro_set_odr_raw|function|static inline int lsm9ds0_gyro_set_odr_raw(struct device *dev, int odr)
DECL|lsm9ds0_gyro_set_odr|function|static int lsm9ds0_gyro_set_odr(struct device *dev, int odr)
DECL|lsm9ds0_gyro_trigger_set|function|static int lsm9ds0_gyro_trigger_set(struct device *dev, const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|sensor_dbg|macro|sensor_dbg
DECL|sensor_dbg|macro|sensor_dbg
