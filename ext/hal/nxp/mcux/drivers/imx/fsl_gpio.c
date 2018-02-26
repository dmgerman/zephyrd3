DECL|GPIO_GetInstance|function|static uint32_t GPIO_GetInstance(GPIO_Type *base)
DECL|GPIO_PinInit|function|void GPIO_PinInit(GPIO_Type* base, uint32_t pin, const gpio_pin_config_t* Config)
DECL|GPIO_PinSetInterruptConfig|function|void GPIO_PinSetInterruptConfig(GPIO_Type* base, uint32_t pin, gpio_interrupt_mode_t pinInterruptMode)
DECL|GPIO_PinWrite|function|void GPIO_PinWrite(GPIO_Type* base, uint32_t pin, uint8_t output)
DECL|s_gpioBases|variable|s_gpioBases
DECL|s_gpioClock|variable|s_gpioClock
