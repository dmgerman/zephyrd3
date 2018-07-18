DECL|LP5562_B_CURRENT|macro|LP5562_B_CURRENT
DECL|LP5562_B_PWM|macro|LP5562_B_PWM
DECL|LP5562_CHANNEL_B|enumerator|LP5562_CHANNEL_B,
DECL|LP5562_CHANNEL_COUNT|enumerator|LP5562_CHANNEL_COUNT,
DECL|LP5562_CHANNEL_G|enumerator|LP5562_CHANNEL_G,
DECL|LP5562_CHANNEL_MASK|macro|LP5562_CHANNEL_MASK
DECL|LP5562_CHANNEL_R|enumerator|LP5562_CHANNEL_R,
DECL|LP5562_CHANNEL_W|enumerator|LP5562_CHANNEL_W,
DECL|LP5562_CONFIG_CLOCK_AUTOMATIC_SELECT|macro|LP5562_CONFIG_CLOCK_AUTOMATIC_SELECT
DECL|LP5562_CONFIG_EXTERNAL_CLOCK|macro|LP5562_CONFIG_EXTERNAL_CLOCK
DECL|LP5562_CONFIG_INTERNAL_CLOCK|macro|LP5562_CONFIG_INTERNAL_CLOCK
DECL|LP5562_CONFIG_PWM_HW_FREQ_558|macro|LP5562_CONFIG_PWM_HW_FREQ_558
DECL|LP5562_CONFIG_PWRSAVE_EN|macro|LP5562_CONFIG_PWRSAVE_EN
DECL|LP5562_CONFIG|macro|LP5562_CONFIG
DECL|LP5562_ENABLE_CHIP_EN|macro|LP5562_ENABLE_CHIP_EN
DECL|LP5562_ENABLE_LOG_EN|macro|LP5562_ENABLE_LOG_EN
DECL|LP5562_ENABLE|macro|LP5562_ENABLE
DECL|LP5562_ENG1_PC|macro|LP5562_ENG1_PC
DECL|LP5562_ENG2_PC|macro|LP5562_ENG2_PC
DECL|LP5562_ENG3_PC|macro|LP5562_ENG3_PC
DECL|LP5562_ENGINE_MODE_EXEC|enumerator|LP5562_ENGINE_MODE_EXEC = 0x03,
DECL|LP5562_ENGINE_MODE_HOLD|enumerator|LP5562_ENGINE_MODE_HOLD = 0x00,
DECL|LP5562_ENGINE_MODE_RUN|enumerator|LP5562_ENGINE_MODE_RUN = 0x02,
DECL|LP5562_ENGINE_MODE_STEP|enumerator|LP5562_ENGINE_MODE_STEP = 0x01,
DECL|LP5562_FADE_DOWN|enumerator|LP5562_FADE_DOWN = 0x01,
DECL|LP5562_FADE_UP|enumerator|LP5562_FADE_UP = 0x00,
DECL|LP5562_G_CURRENT|macro|LP5562_G_CURRENT
DECL|LP5562_G_PWM|macro|LP5562_G_PWM
DECL|LP5562_LED_MAP|macro|LP5562_LED_MAP
DECL|LP5562_MASK|macro|LP5562_MASK
DECL|LP5562_MAX_BLINK_PERIOD|macro|LP5562_MAX_BLINK_PERIOD
DECL|LP5562_MAX_BRIGHTNESS|macro|LP5562_MAX_BRIGHTNESS
DECL|LP5562_MIN_BLINK_PERIOD|macro|LP5562_MIN_BLINK_PERIOD
DECL|LP5562_MIN_BRIGHTNESS|macro|LP5562_MIN_BRIGHTNESS
DECL|LP5562_OP_MODE_DIRECT_CTRL|enumerator|LP5562_OP_MODE_DIRECT_CTRL = 0x03,
DECL|LP5562_OP_MODE_DISABLED|enumerator|LP5562_OP_MODE_DISABLED = 0x00,
DECL|LP5562_OP_MODE_LOAD|enumerator|LP5562_OP_MODE_LOAD = 0x01,
DECL|LP5562_OP_MODE_RUN|enumerator|LP5562_OP_MODE_RUN = 0x02,
DECL|LP5562_OP_MODE|macro|LP5562_OP_MODE
DECL|LP5562_PROG_COMMAND_RAMP_TIME|macro|LP5562_PROG_COMMAND_RAMP_TIME
DECL|LP5562_PROG_COMMAND_SET_PWM|macro|LP5562_PROG_COMMAND_SET_PWM
DECL|LP5562_PROG_COMMAND_STEP_COUNT|macro|LP5562_PROG_COMMAND_STEP_COUNT
DECL|LP5562_PROG_MAX_COMMANDS|macro|LP5562_PROG_MAX_COMMANDS
DECL|LP5562_PROG_MEM_ENG1_BASE|macro|LP5562_PROG_MEM_ENG1_BASE
DECL|LP5562_PROG_MEM_ENG2_BASE|macro|LP5562_PROG_MEM_ENG2_BASE
DECL|LP5562_PROG_MEM_ENG3_BASE|macro|LP5562_PROG_MEM_ENG3_BASE
DECL|LP5562_RESET|macro|LP5562_RESET
DECL|LP5562_R_CURRENT|macro|LP5562_R_CURRENT
DECL|LP5562_R_PWM|macro|LP5562_R_PWM
DECL|LP5562_SOURCE_COUNT|enumerator|LP5562_SOURCE_COUNT,
DECL|LP5562_SOURCE_ENGINE_1|enumerator|LP5562_SOURCE_ENGINE_1,
DECL|LP5562_SOURCE_ENGINE_2|enumerator|LP5562_SOURCE_ENGINE_2,
DECL|LP5562_SOURCE_ENGINE_3|enumerator|LP5562_SOURCE_ENGINE_3,
DECL|LP5562_SOURCE_PWM|enumerator|LP5562_SOURCE_PWM,
DECL|LP5562_STATUS|macro|LP5562_STATUS
DECL|LP5562_W_CURRENT|macro|LP5562_W_CURRENT
DECL|LP5562_W_PWM|macro|LP5562_W_PWM
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dev_data|member|struct led_data dev_data;
DECL|i2c|member|struct device *i2c;
DECL|lp5562_data|struct|struct lp5562_data {
DECL|lp5562_engine_exec_states|enum|enum lp5562_engine_exec_states {
DECL|lp5562_engine_fade_dirs|enum|enum lp5562_engine_fade_dirs {
DECL|lp5562_engine_op_modes|enum|enum lp5562_engine_op_modes {
DECL|lp5562_get_available_engine|function|static int lp5562_get_available_engine(struct device *dev, enum lp5562_led_sources *engine)
DECL|lp5562_get_engine_ram_base_addr|function|static int lp5562_get_engine_ram_base_addr(enum lp5562_led_sources engine, u8_t *base_addr)
DECL|lp5562_get_engine_reg_shift|function|static int lp5562_get_engine_reg_shift(enum lp5562_led_sources engine, u8_t *shift)
DECL|lp5562_get_led_source|function|static int lp5562_get_led_source(struct device *dev, enum lp5562_led_channels channel, enum lp5562_led_sources *source)
DECL|lp5562_get_pwm_reg|function|static int lp5562_get_pwm_reg(enum lp5562_led_channels channel, u8_t *reg)
DECL|lp5562_is_engine_executing|function|static bool lp5562_is_engine_executing(struct device *dev, enum lp5562_led_sources engine)
DECL|lp5562_led_api|variable|lp5562_led_api
DECL|lp5562_led_blink|function|static int lp5562_led_blink(struct device *dev, u32_t led, u32_t delay_on, u32_t delay_off)
DECL|lp5562_led_channels|enum|enum lp5562_led_channels {
DECL|lp5562_led_data|variable|lp5562_led_data
DECL|lp5562_led_init|function|static int lp5562_led_init(struct device *dev)
DECL|lp5562_led_off|function|static inline int lp5562_led_off(struct device *dev, u32_t led)
DECL|lp5562_led_on|function|static inline int lp5562_led_on(struct device *dev, u32_t led)
DECL|lp5562_led_set_brightness|function|static int lp5562_led_set_brightness(struct device *dev, u32_t led, u8_t value)
DECL|lp5562_led_sources|enum|enum lp5562_led_sources {
DECL|lp5562_ms_to_prescale_and_step|function|static void lp5562_ms_to_prescale_and_step(struct led_data *data, u32_t ms, u8_t *prescale, u8_t *step_time)
DECL|lp5562_program_command|function|static int lp5562_program_command(struct device *dev, enum lp5562_led_sources engine, u8_t command_index, u8_t command_msb, u8_t command_lsb)
DECL|lp5562_program_go_to_start|function|static inline int lp5562_program_go_to_start(struct device *dev, enum lp5562_led_sources engine, u8_t command_index)
DECL|lp5562_program_ramp|function|static int lp5562_program_ramp(struct device *dev, enum lp5562_led_sources engine, u8_t command_index, u32_t time_per_step, u8_t step_count,
DECL|lp5562_program_set_brightness|function|static int lp5562_program_set_brightness(struct device *dev, enum lp5562_led_sources engine, u8_t command_index, u8_t brightness)
DECL|lp5562_program_wait|function|static inline int lp5562_program_wait(struct device *dev, enum lp5562_led_sources engine, u8_t command_index, u32_t time)
DECL|lp5562_set_engine_exec_state|function|static inline int lp5562_set_engine_exec_state(struct device *dev,enum lp5562_led_sources engine, enum lp5562_engine_exec_states state)
DECL|lp5562_set_engine_op_mode|function|static inline int lp5562_set_engine_op_mode(struct device *dev, enum lp5562_led_sources engine, enum lp5562_engine_op_modes mode)
DECL|lp5562_set_engine_reg|function|static int lp5562_set_engine_reg(struct device *dev, enum lp5562_led_sources engine, u8_t reg, u8_t val)
DECL|lp5562_set_led_source|function|static int lp5562_set_led_source(struct device *dev, enum lp5562_led_channels channel, enum lp5562_led_sources source)
DECL|lp5562_start_program_exec|function|static inline int lp5562_start_program_exec(struct device *dev, enum lp5562_led_sources engine)
DECL|lp5562_stop_program_exec|function|static inline int lp5562_stop_program_exec(struct device *dev, enum lp5562_led_sources engine)
DECL|lp5562_update_blinking_brightness|function|static int lp5562_update_blinking_brightness(struct device *dev, enum lp5562_led_sources engine, u8_t brightness_on)
