DECL|amg88xx_attr_set|function|int amg88xx_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|amg88xx_gpio_callback|function|static void amg88xx_gpio_callback(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|amg88xx_init_interrupt|function|int amg88xx_init_interrupt(struct device *dev)
DECL|amg88xx_thread_cb|function|static void amg88xx_thread_cb(void *arg)
DECL|amg88xx_thread|function|static void amg88xx_thread(int dev_ptr, int unused)
DECL|amg88xx_trigger_set|function|int amg88xx_trigger_set(struct device *dev,const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|amg88xx_work_cb|function|static void amg88xx_work_cb(struct k_work *work)
