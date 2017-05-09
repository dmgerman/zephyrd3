DECL|mcp9808_attr_set|function|int mcp9808_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|mcp9808_gpio_cb|function|static void mcp9808_gpio_cb(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|mcp9808_gpio_cb|function|static void mcp9808_gpio_cb(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|mcp9808_gpio_thread_cb|function|static void mcp9808_gpio_thread_cb(struct k_work *work)
DECL|mcp9808_reg_update|function|static int mcp9808_reg_update(struct mcp9808_data *data, u8_t reg, u16_t mask, u16_t val)
DECL|mcp9808_reg_write|function|static int mcp9808_reg_write(struct mcp9808_data *data, u8_t reg, u16_t val)
DECL|mcp9808_setup_interrupt|function|void mcp9808_setup_interrupt(struct device *dev)
DECL|mcp9808_thread_main|function|static void mcp9808_thread_main(int arg1, int arg2)
DECL|mcp9808_thread_stack|variable|mcp9808_thread_stack
DECL|mcp9808_thread|variable|mcp9808_thread
DECL|mcp9808_trigger_set|function|int mcp9808_trigger_set(struct device *dev,const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
