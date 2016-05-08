DECL|DONT_CARE|enumerator|DONT_CARE = 0xFF,
DECL|EXP0|enumerator|EXP0,
DECL|EXP1|enumerator|EXP1,
DECL|EXP2|enumerator|EXP2,
DECL|G_CW|enumerator|G_CW,
DECL|G_DW|enumerator|G_DW,
DECL|G_RW|enumerator|G_RW,
DECL|NONE|enumerator|NONE,
DECL|NUM_PIN_FUNCS|macro|NUM_PIN_FUNCS
DECL|PIN_HIGH|enumerator|PIN_HIGH = 0x01,
DECL|PIN_LOW|enumerator|PIN_LOW = 0x00,
DECL|PWM0|enumerator|PWM0,
DECL|_galileo_path|variable|_galileo_path
DECL|_galileo_pinmux_get_pin|function|int _galileo_pinmux_get_pin(struct device *port, uint32_t pin, uint32_t *func)
DECL|_galileo_pinmux_set_pin|function|int _galileo_pinmux_set_pin(struct device *port, uint8_t pin, uint32_t func)
DECL|cfg|member|uint32_t cfg;
DECL|func|member|uint8_t func;
DECL|gpio_chip|enum|enum gpio_chip {
DECL|io_pin|member|uint8_t io_pin;
DECL|level|member|enum pin_level level;
DECL|mux_path|struct|struct mux_path {
DECL|mux_pin|struct|struct mux_pin {
DECL|mux|member|enum gpio_chip mux;
DECL|path|member|struct mux_pin path[5];
DECL|pin_level|enum|enum pin_level {
DECL|pin|member|uint8_t pin;
