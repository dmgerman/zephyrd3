DECL|PINMUX_FUNC_A|macro|PINMUX_FUNC_A
DECL|PINMUX_FUNC_B|macro|PINMUX_FUNC_B
DECL|PINMUX_FUNC_C|macro|PINMUX_FUNC_C
DECL|PINMUX_FUNC_D|macro|PINMUX_FUNC_D
DECL|PINMUX_NAME|macro|PINMUX_NAME
DECL|__INCLUDE_PINMUX_H|macro|__INCLUDE_PINMUX_H
DECL|get|member|pmux_get get;
DECL|pinmux_driver_api|struct|struct pinmux_driver_api {
DECL|pinmux_get_pin|function|static inline uint32_t pinmux_get_pin(struct device *dev, uint32_t pin, uint8_t *func)
DECL|pinmux_set_pin|function|static inline uint32_t pinmux_set_pin(struct device *dev, uint32_t pin, uint8_t func)
DECL|pmux_get|typedef|typedef uint32_t (*pmux_get)(struct device *dev, uint32_t pin, uint8_t *func);
DECL|pmux_set|typedef|typedef uint32_t (*pmux_set)(struct device *dev, uint32_t pin, uint8_t func);
DECL|set|member|pmux_set set;
