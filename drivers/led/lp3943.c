DECL|LP3943_DIM0|enumerator|LP3943_DIM0,
DECL|LP3943_DIM1|enumerator|LP3943_DIM1,
DECL|LP3943_INPUT_1|macro|LP3943_INPUT_1
DECL|LP3943_INPUT_2|macro|LP3943_INPUT_2
DECL|LP3943_LS0|macro|LP3943_LS0
DECL|LP3943_LS1|macro|LP3943_LS1
DECL|LP3943_LS2|macro|LP3943_LS2
DECL|LP3943_LS3|macro|LP3943_LS3
DECL|LP3943_MASK|macro|LP3943_MASK
DECL|LP3943_OFF|enumerator|LP3943_OFF,
DECL|LP3943_ON|enumerator|LP3943_ON,
DECL|LP3943_PSC0|macro|LP3943_PSC0
DECL|LP3943_PSC1|macro|LP3943_PSC1
DECL|LP3943_PWM0|macro|LP3943_PWM0
DECL|LP3943_PWM1|macro|LP3943_PWM1
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dev_data|member|struct led_data dev_data;
DECL|i2c|member|struct device *i2c;
DECL|lp3943_data|struct|struct lp3943_data {
DECL|lp3943_get_led_reg|function|static int lp3943_get_led_reg(u32_t *led, u8_t *reg)
DECL|lp3943_led_api|variable|lp3943_led_api
DECL|lp3943_led_blink|function|static int lp3943_led_blink(struct device *dev, u32_t led, u32_t delay_on, u32_t delay_off)
DECL|lp3943_led_data|variable|lp3943_led_data
DECL|lp3943_led_init|function|static int lp3943_led_init(struct device *dev)
DECL|lp3943_led_off|function|static inline int lp3943_led_off(struct device *dev, u32_t led)
DECL|lp3943_led_on|function|static inline int lp3943_led_on(struct device *dev, u32_t led)
DECL|lp3943_led_set_brightness|function|static int lp3943_led_set_brightness(struct device *dev, u32_t led, u8_t value)
DECL|lp3943_modes|enum|enum lp3943_modes {
DECL|lp3943_set_dim_states|function|static int lp3943_set_dim_states(struct lp3943_data *data, u32_t led, u8_t mode)
