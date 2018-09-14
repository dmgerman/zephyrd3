DECL|PINMUX_FUNC_A|macro|PINMUX_FUNC_A
DECL|PINMUX_FUNC_B|macro|PINMUX_FUNC_B
DECL|PINMUX_FUNC_C|macro|PINMUX_FUNC_C
DECL|PINMUX_FUNC_D|macro|PINMUX_FUNC_D
DECL|PINMUX_FUNC_E|macro|PINMUX_FUNC_E
DECL|PINMUX_FUNC_F|macro|PINMUX_FUNC_F
DECL|PINMUX_FUNC_G|macro|PINMUX_FUNC_G
DECL|PINMUX_FUNC_H|macro|PINMUX_FUNC_H
DECL|PINMUX_INPUT_ENABLED|macro|PINMUX_INPUT_ENABLED
DECL|PINMUX_OUTPUT_ENABLED|macro|PINMUX_OUTPUT_ENABLED
DECL|PINMUX_PULLUP_DISABLE|macro|PINMUX_PULLUP_DISABLE
DECL|PINMUX_PULLUP_ENABLE|macro|PINMUX_PULLUP_ENABLE
DECL|ZEPHYR_INCLUDE_PINMUX_H_|macro|ZEPHYR_INCLUDE_PINMUX_H_
DECL|get|member|pmux_get get;
DECL|input|member|pmux_input input;
DECL|pinmux_driver_api|struct|struct pinmux_driver_api {
DECL|pinmux_pin_get|function|static inline int pinmux_pin_get(struct device *dev, u32_t pin, u32_t *func)
DECL|pinmux_pin_input_enable|function|static inline int pinmux_pin_input_enable(struct device *dev, u32_t pin, u8_t func)
DECL|pinmux_pin_pullup|function|static inline int pinmux_pin_pullup(struct device *dev, u32_t pin, u8_t func)
DECL|pinmux_pin_set|function|static inline int pinmux_pin_set(struct device *dev, u32_t pin, u32_t func)
DECL|pmux_get|typedef|typedef int (*pmux_get)(struct device *dev, u32_t pin, u32_t *func);
DECL|pmux_input|typedef|typedef int (*pmux_input)(struct device *dev, u32_t pin, u8_t func);
DECL|pmux_pullup|typedef|typedef int (*pmux_pullup)(struct device *dev, u32_t pin, u8_t func);
DECL|pmux_set|typedef|typedef int (*pmux_set)(struct device *dev, u32_t pin, u32_t func);
DECL|pullup|member|pmux_pullup pullup;
DECL|set|member|pmux_set set;
