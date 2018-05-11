DECL|BEEP_DURATION|macro|BEEP_DURATION
DECL|BUZZER_PIN|macro|BUZZER_PIN
DECL|SCROLL_SPEED|macro|SCROLL_SPEED
DECL|SEQ_MAX|macro|SEQ_MAX
DECL|SEQ_PAGE|macro|SEQ_PAGE
DECL|SEQ_PER_BIT|macro|SEQ_PER_BIT
DECL|board_attention|function|void board_attention(bool attention)
DECL|board_heartbeat|function|void board_heartbeat(u8_t hops, u16_t feat)
DECL|board_init|function|void board_init(u16_t *addr)
DECL|board_other_dev_pressed|function|void board_other_dev_pressed(u16_t addr)
DECL|board_play_tune|function|void board_play_tune(const char *str)
DECL|button_pressed|function|static void button_pressed(struct device *dev, struct gpio_callback *cb, uint32_t pins)
DECL|button_send_pressed|function|static void button_send_pressed(struct k_work *work)
DECL|button_work|variable|button_work
DECL|configure_button|function|static void configure_button(void)
DECL|get_period|function|static u32_t get_period(char note, bool sharp)
DECL|gpio|variable|gpio
DECL|note|member|char note;
DECL|nvm|variable|nvm
DECL|period_map|variable|period_map
DECL|period|member|u32_t period;
DECL|pwm|variable|pwm
DECL|sharp|member|u32_t sharp;
