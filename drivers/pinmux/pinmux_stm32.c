DECL|__pinmux_stm32_set|function|static inline int __pinmux_stm32_set(uint32_t pin, uint32_t func,struct device *clk)
DECL|__setup_pins|function|static inline void __setup_pins(const struct pin_config *pinconf,size_t pins)
DECL|enable_port|function|static int enable_port(uint32_t port, struct device *clk)
DECL|pinmux_stm32_api|variable|pinmux_stm32_api
DECL|pinmux_stm32_cfg|variable|pinmux_stm32_cfg
DECL|pinmux_stm32_get|function|static int pinmux_stm32_get(struct device *dev, uint32_t pin, uint32_t *func)
DECL|pinmux_stm32_init|function|int pinmux_stm32_init(struct device *port)
DECL|pinmux_stm32_input|function|static int pinmux_stm32_input(struct device *dev,uint32_t pin, uint8_t func)
DECL|pinmux_stm32_pullup|function|static int pinmux_stm32_pullup(struct device *dev,uint32_t pin, uint8_t func)
DECL|pinmux_stm32_set|function|static int pinmux_stm32_set(struct device *dev, uint32_t pin, uint32_t func)
