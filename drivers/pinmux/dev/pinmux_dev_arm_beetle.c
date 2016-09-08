DECL|CMSDK_AHB_GPIO0_DEV|macro|CMSDK_AHB_GPIO0_DEV
DECL|CMSDK_AHB_GPIO1_DEV|macro|CMSDK_AHB_GPIO1_DEV
DECL|PINS_PER_PORT|macro|PINS_PER_PORT
DECL|_get_port|function|static volatile struct gpio_cmsdk_ahb *_get_port(uint32_t pin)
DECL|api_funcs|variable|api_funcs
DECL|pinmux_dev_init|function|static int pinmux_dev_init(struct device *port)
DECL|pinmux_get|function|static int pinmux_get(struct device *dev, uint32_t pin, uint32_t *func)
DECL|pinmux_input|function|static int pinmux_input(struct device *dev, uint32_t pin, uint8_t func)
DECL|pinmux_pullup|function|static int pinmux_pullup(struct device *dev, uint32_t pin, uint8_t func)
DECL|pinmux_set|function|static int pinmux_set(struct device *dev, uint32_t pin, uint32_t func)
