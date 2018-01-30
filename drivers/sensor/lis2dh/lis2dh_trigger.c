DECL|LIS2DH_ANYM_CFG|macro|LIS2DH_ANYM_CFG
DECL|LIS2DH_INT1_CFG|macro|LIS2DH_INT1_CFG
DECL|LIS2DH_INT2_CFG|macro|LIS2DH_INT2_CFG
DECL|START_TRIG_INT1|macro|START_TRIG_INT1
DECL|START_TRIG_INT2|macro|START_TRIG_INT2
DECL|TRIGGED_INT1|macro|TRIGGED_INT1
DECL|TRIGGED_INT2|macro|TRIGGED_INT2
DECL|lis2dh_acc_slope_config|function|int lis2dh_acc_slope_config(struct device *dev, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lis2dh_gpio_int1_callback|function|static void lis2dh_gpio_int1_callback(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|lis2dh_gpio_int2_callback|function|static void lis2dh_gpio_int2_callback(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|lis2dh_init_interrupt|function|int lis2dh_init_interrupt(struct device *dev)
DECL|lis2dh_start_trigger_int1|function|static int lis2dh_start_trigger_int1(struct device *dev)
DECL|lis2dh_start_trigger_int2|function|static int lis2dh_start_trigger_int2(struct device *dev)
DECL|lis2dh_thread_cb|function|static void lis2dh_thread_cb(void *arg)
DECL|lis2dh_thread|function|static void lis2dh_thread(void *arg1, void *unused2, void *unused3)
DECL|lis2dh_trigger_anym_set|function|static int lis2dh_trigger_anym_set(struct device *dev, sensor_trigger_handler_t handler)
DECL|lis2dh_trigger_drdy_set|function|static int lis2dh_trigger_drdy_set(struct device *dev, enum sensor_channel chan, sensor_trigger_handler_t handler)
DECL|lis2dh_trigger_set|function|int lis2dh_trigger_set(struct device *dev, const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|lis2dh_work_cb|function|static void lis2dh_work_cb(struct k_work *work)
