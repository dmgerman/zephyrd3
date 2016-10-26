DECL|GPIO_DEVICE_INIT|macro|GPIO_DEVICE_INIT
DECL|GPIO_DEVICE_INIT|macro|GPIO_DEVICE_INIT
DECL|gpio_stm32_config|function|static int gpio_stm32_config(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|gpio_stm32_disable_callback|function|static int gpio_stm32_disable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_stm32_driver|variable|gpio_stm32_driver
DECL|gpio_stm32_enable_callback|function|static int gpio_stm32_enable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_stm32_init|function|static int gpio_stm32_init(struct device *device)
DECL|gpio_stm32_isr|function|static void gpio_stm32_isr(int line, void *arg)
DECL|gpio_stm32_manage_callback|function|static int gpio_stm32_manage_callback(struct device *dev, struct gpio_callback *callback, bool set)
DECL|gpio_stm32_read|function|static int gpio_stm32_read(struct device *dev, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_stm32_write|function|static int gpio_stm32_write(struct device *dev, int access_op, uint32_t pin, uint32_t value)
