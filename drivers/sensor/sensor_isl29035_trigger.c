DECL|isl29035_attr_set|function|int isl29035_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|isl29035_fiber_cb|function|static void isl29035_fiber_cb(void *arg)
DECL|isl29035_fiber|function|static void isl29035_fiber(int ptr, int unused)
DECL|isl29035_gpio_callback|function|static void isl29035_gpio_callback(struct device *dev, struct gpio_callback *cb, uint32_t pins)
DECL|isl29035_init_interrupt|function|int isl29035_init_interrupt(struct device *dev)
DECL|isl29035_lux_processed_to_raw|function|static uint16_t isl29035_lux_processed_to_raw(struct sensor_value const *val)
DECL|isl29035_trigger_set|function|int isl29035_trigger_set(struct device *dev, const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
