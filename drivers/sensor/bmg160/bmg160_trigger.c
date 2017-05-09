DECL|bmg160_anymotion_set|function|static int bmg160_anymotion_set(struct device *dev,sensor_trigger_handler_t handler)
DECL|bmg160_drdy_set|function|static int bmg160_drdy_set(struct device *dev, sensor_trigger_handler_t handler)
DECL|bmg160_gpio_callback|function|static void bmg160_gpio_callback(struct device *port, struct gpio_callback *cb, u32_t pin)
DECL|bmg160_handle_anymotion_int|function|static int bmg160_handle_anymotion_int(struct device *dev)
DECL|bmg160_handle_dataready_int|function|static int bmg160_handle_dataready_int(struct device *dev)
DECL|bmg160_handle_int|function|static void bmg160_handle_int(void *arg)
DECL|bmg160_slope_config|function|int bmg160_slope_config(struct device *dev, enum sensor_attribute attr,const struct sensor_value *val)
DECL|bmg160_thread_main|function|static void bmg160_thread_main(void *arg1, void *arg2, void *arg3)
DECL|bmg160_thread_stack|variable|bmg160_thread_stack
DECL|bmg160_thread|variable|bmg160_thread
DECL|bmg160_trigger_init|function|int bmg160_trigger_init(struct device *dev)
DECL|bmg160_trigger_set|function|int bmg160_trigger_set(struct device *dev, const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|bmg160_work_cb|function|static void bmg160_work_cb(struct k_work *work)
