DECL|CH_HS_GPIO|macro|CH_HS_GPIO
DECL|CH_HS_TIMER|macro|CH_HS_TIMER
DECL|CH_LS_GPIO|macro|CH_LS_GPIO
DECL|CH_LS_TIMER|macro|CH_LS_TIMER
DECL|PWM_ESP32_HSCH_CONF0|macro|PWM_ESP32_HSCH_CONF0
DECL|PWM_ESP32_HSCH_CONF1|macro|PWM_ESP32_HSCH_CONF1
DECL|PWM_ESP32_HSCH_DUTY|macro|PWM_ESP32_HSCH_DUTY
DECL|PWM_ESP32_HSCH_HPOINT|macro|PWM_ESP32_HSCH_HPOINT
DECL|PWM_ESP32_HSTIMER|macro|PWM_ESP32_HSTIMER
DECL|PWM_ESP32_LSCH_CONF0|macro|PWM_ESP32_LSCH_CONF0
DECL|PWM_ESP32_LSCH_CONF1|macro|PWM_ESP32_LSCH_CONF1
DECL|PWM_ESP32_LSCH_DUTY|macro|PWM_ESP32_LSCH_DUTY
DECL|PWM_ESP32_LSCH_HPOINT|macro|PWM_ESP32_LSCH_HPOINT
DECL|PWM_ESP32_LSTIMER|macro|PWM_ESP32_LSTIMER
DECL|PWM_LED_ESP32_APB_CLK_FREQ|enumerator|PWM_LED_ESP32_APB_CLK_FREQ,
DECL|PWM_LED_ESP32_HIGH_SPEED|enumerator|PWM_LED_ESP32_HIGH_SPEED,
DECL|PWM_LED_ESP32_LOW_SPEED|enumerator|PWM_LED_ESP32_LOW_SPEED
DECL|PWM_LED_ESP32_REF_TICK_FREQ|enumerator|PWM_LED_ESP32_REF_TICK_FREQ,
DECL|TIMER_HS_BIT_NUM|macro|TIMER_HS_BIT_NUM
DECL|TIMER_HS_FREQ|macro|TIMER_HS_FREQ
DECL|TIMER_LS_BIT_NUM|macro|TIMER_LS_BIT_NUM
DECL|TIMER_LS_FREQ|macro|TIMER_LS_FREQ
DECL|bit_num|member|u8_t bit_num;
DECL|ch_cfg|member|struct pwm_led_esp32_channel ch_cfg[16];
DECL|clear_mask32|function|static inline void clear_mask32(u32_t v, u32_t mem_addr)
DECL|cycle|member|u32_t cycle: 3;
DECL|direction|member|u32_t direction: 1;
DECL|esp32_get_gpio_for_pin|function|static const char *esp32_get_gpio_for_pin(int pin)
DECL|freq|member|int freq;
DECL|gpio|member|u8_t gpio : 6;
DECL|num|member|u32_t num: 3;
DECL|pwm_led_esp32_0|variable|pwm_led_esp32_0
DECL|pwm_led_esp32_api|variable|pwm_led_esp32_api
DECL|pwm_led_esp32_bind_channel_timer|function|static void pwm_led_esp32_bind_channel_timer(int speed_mode, int channel, int timer)
DECL|pwm_led_esp32_channel_set|function|static int pwm_led_esp32_channel_set(int pin, bool speed_mode, int channel, int duty, int timer)
DECL|pwm_led_esp32_channel|struct|struct pwm_led_esp32_channel {
DECL|pwm_led_esp32_config|struct|struct pwm_led_esp32_config {
DECL|pwm_led_esp32_config|variable|pwm_led_esp32_config
DECL|pwm_led_esp32_duty_config|function|static void pwm_led_esp32_duty_config(int speed_mode, int channel, int duty_val, union pwm_led_esp32_duty duty)
DECL|pwm_led_esp32_duty_set|function|static void pwm_led_esp32_duty_set(int speed_mode, int channel, int duty_val)
DECL|pwm_led_esp32_duty|union|union pwm_led_esp32_duty {
DECL|pwm_led_esp32_get_cycles_per_sec|function|static int pwm_led_esp32_get_cycles_per_sec(struct device *dev, u32_t pwm, u64_t *cycles)
DECL|pwm_led_esp32_get_gpio_config|function|static u8_t pwm_led_esp32_get_gpio_config(u8_t pin,const struct pwm_led_esp32_channel *ch_cfg)
DECL|pwm_led_esp32_init|function|int pwm_led_esp32_init(struct device *dev)
DECL|pwm_led_esp32_low_speed_update|function|static void pwm_led_esp32_low_speed_update(int speed_mode, int channel)
DECL|pwm_led_esp32_pin_set_cycles|function|static int pwm_led_esp32_pin_set_cycles(struct device *dev,u32_t pwm, u32_t period_cycles, u32_t pulse_cycles)
DECL|pwm_led_esp32_timer_set|function|static int pwm_led_esp32_timer_set(int speed_mode, int timer, int bit_num, int frequency)
DECL|pwm_led_esp32_timer|struct|struct pwm_led_esp32_timer {
DECL|pwm_led_esp32_update_duty|function|static void pwm_led_esp32_update_duty(int speed_mode, int channel)
DECL|scale|member|u32_t scale: 3;
DECL|set_mask32|function|static inline void set_mask32(u32_t v, u32_t mem_addr)
DECL|start|member|u32_t start: 1;
DECL|timer_cfg|member|struct pwm_led_esp32_timer timer_cfg[2][4];
DECL|timer|member|u8_t timer : 2;
DECL|val|member|u32_t val;
