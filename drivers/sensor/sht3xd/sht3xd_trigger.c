DECL|sht3xd_attr_set|function|int sht3xd_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|sht3xd_gpio_callback|function|static void sht3xd_gpio_callback(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|sht3xd_init_interrupt|function|int sht3xd_init_interrupt(struct device *dev)
DECL|sht3xd_rh_processed_to_raw|function|static int sht3xd_rh_processed_to_raw(const struct sensor_value *val)
DECL|sht3xd_temp_processed_to_raw|function|static u16_t sht3xd_temp_processed_to_raw(const struct sensor_value *val)
DECL|sht3xd_thread_cb|function|static void sht3xd_thread_cb(void *arg)
DECL|sht3xd_thread|function|static void sht3xd_thread(int dev_ptr, int unused)
DECL|sht3xd_trigger_set|function|int sht3xd_trigger_set(struct device *dev, const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|sht3xd_work_cb|function|static void sht3xd_work_cb(struct k_work *work)
