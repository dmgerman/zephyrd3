DECL|PINMUX_FUNC_A|macro|PINMUX_FUNC_A
DECL|PINMUX_FUNC_B|macro|PINMUX_FUNC_B
DECL|PINMUX_FUNC_C|macro|PINMUX_FUNC_C
DECL|PINMUX_FUNC_D|macro|PINMUX_FUNC_D
DECL|PINMUX_INPUT_ENABLED|macro|PINMUX_INPUT_ENABLED
DECL|PINMUX_NAME|macro|PINMUX_NAME
DECL|PINMUX_OUTPUT_ENABLED|macro|PINMUX_OUTPUT_ENABLED
DECL|PINMUX_PULLUP_DISABLE|macro|PINMUX_PULLUP_DISABLE
DECL|PINMUX_PULLUP_ENABLE|macro|PINMUX_PULLUP_ENABLE
DECL|__INCLUDE_PINMUX_H|macro|__INCLUDE_PINMUX_H
DECL|get|member|pmux_get get;
DECL|input|member|pmux_input input;
DECL|pinmux_driver_api|struct|struct pinmux_driver_api {
DECL|pinmux_pin_get|function|static inline uint32_t pinmux_pin_get(struct device *dev, uint32_t pin, uint8_t *func)
DECL|pinmux_pin_input_enable|function|static inline uint32_t pinmux_pin_input_enable(struct device *dev, uint32_t pin, uint8_t func)
DECL|pinmux_pin_pullup|function|static inline uint32_t pinmux_pin_pullup(struct device *dev, uint32_t pin, uint8_t func)
DECL|pinmux_pin_set|function|static inline uint32_t pinmux_pin_set(struct device *dev, uint32_t pin, uint8_t func)
DECL|pmux_get|typedef|typedef uint32_t (*pmux_get)(struct device *dev, uint32_t pin, uint8_t *func);
DECL|pmux_input|typedef|typedef uint32_t (*pmux_input)(struct device *dev, uint32_t pin, uint8_t func);
DECL|pmux_pullup|typedef|typedef uint32_t (*pmux_pullup)(struct device *dev, uint32_t pin, uint8_t func);
DECL|pmux_set|typedef|typedef uint32_t (*pmux_set)(struct device *dev, uint32_t pin, uint8_t func);
DECL|pullup|member|pmux_pullup pullup;
DECL|set|member|pmux_set set;
