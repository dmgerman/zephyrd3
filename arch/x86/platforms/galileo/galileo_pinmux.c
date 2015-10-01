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
DECL|_galileo_set_pin|function|uint8_t _galileo_set_pin(struct device *port, uint8_t pin, uint8_t func)
DECL|api_funcs|variable|api_funcs
DECL|cfg|member|uint32_t cfg;
DECL|exp0|member|struct device *exp0;
DECL|exp1|member|struct device *exp1;
DECL|exp2|member|struct device *exp2;
DECL|func|member|uint8_t func;
DECL|galileo_data|struct|struct galileo_data {
DECL|galileo_dev_get|function|static uint32_t galileo_dev_get(struct device *dev,uint32_t pin, uint8_t *func)
DECL|galileo_dev_set|function|static uint32_t galileo_dev_set(struct device *dev,uint32_t pin, uint8_t func)
DECL|galileo_pinmux_driver|variable|galileo_pinmux_driver
DECL|galileo_pmux|variable|galileo_pmux
DECL|gpio_chip|enum|enum gpio_chip {
DECL|gpio_core|member|struct device *gpio_core;
DECL|gpio_dw|member|struct device *gpio_dw;
DECL|gpio_resume|member|struct device *gpio_resume;
DECL|io_pin|member|uint8_t io_pin;
DECL|level|member|enum pin_level level;
DECL|mux_config|variable|mux_config
DECL|mux_path|struct|struct mux_path {
DECL|mux_pin|struct|struct mux_pin {
DECL|mux|member|enum gpio_chip mux;
DECL|path|member|struct mux_pin path[5];
DECL|pin_level|enum|enum pin_level {
DECL|pinmux_galileo_initialize|function|int pinmux_galileo_initialize(struct device *port)
DECL|pin|member|uint8_t pin;
DECL|pwm0|member|struct device *pwm0;
