DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|GLCD_CMD_CURSOR_RETURN|macro|GLCD_CMD_CURSOR_RETURN
DECL|GLCD_CMD_CURSOR_SHIFT|macro|GLCD_CMD_CURSOR_SHIFT
DECL|GLCD_CMD_DISPLAY_SWITCH|macro|GLCD_CMD_DISPLAY_SWITCH
DECL|GLCD_CMD_FUNCTION_SET|macro|GLCD_CMD_FUNCTION_SET
DECL|GLCD_CMD_INPUT_SET|macro|GLCD_CMD_INPUT_SET
DECL|GLCD_CMD_SCREEN_CLEAR|macro|GLCD_CMD_SCREEN_CLEAR
DECL|GLCD_CMD_SET_CGRAM_ADDR|macro|GLCD_CMD_SET_CGRAM_ADDR
DECL|GLCD_CMD_SET_DDRAM_ADDR|macro|GLCD_CMD_SET_DDRAM_ADDR
DECL|GLCD_CS_DISPLAY_SHIFT|macro|GLCD_CS_DISPLAY_SHIFT
DECL|GLCD_CS_RIGHT_SHIFT|macro|GLCD_CS_RIGHT_SHIFT
DECL|GROVE_LCD_DISPLAY_ADDR|macro|GROVE_LCD_DISPLAY_ADDR
DECL|GROVE_RGB_BACKLIGHT_ADDR|macro|GROVE_RGB_BACKLIGHT_ADDR
DECL|OFF|macro|OFF
DECL|ON|macro|ON
DECL|REGISTER_B|macro|REGISTER_B
DECL|REGISTER_G|macro|REGISTER_G
DECL|REGISTER_POWER|macro|REGISTER_POWER
DECL|REGISTER_R|macro|REGISTER_R
DECL|SLEEP_IN_US|macro|SLEEP_IN_US
DECL|_rgb_reg_set|function|static void _rgb_reg_set(struct device * const i2c, uint8_t addr, uint8_t dta)
DECL|_sleep|function|static inline void _sleep(uint32_t sleep_in_ms)
DECL|color_define|variable|color_define
DECL|command|struct|struct command {
DECL|control|member|uint8_t control;
DECL|data|member|uint8_t data;
DECL|display_switch|member|uint8_t display_switch;
DECL|function|member|uint8_t function;
DECL|glcd_clear|function|void glcd_clear(struct device *port)
DECL|glcd_color_select|function|void glcd_color_select(struct device *port, uint8_t color)
DECL|glcd_color_set|function|void glcd_color_set(struct device *port, uint8_t r, uint8_t g, uint8_t b)
DECL|glcd_cursor_pos_set|function|void glcd_cursor_pos_set(struct device *port, uint8_t col, uint8_t row)
DECL|glcd_data|struct|struct glcd_data {
DECL|glcd_display_state_get|function|uint8_t glcd_display_state_get(struct device *port)
DECL|glcd_display_state_set|function|void glcd_display_state_set(struct device *port, uint8_t opt)
DECL|glcd_driver|struct|struct glcd_driver {
DECL|glcd_function_get|function|uint8_t glcd_function_get(struct device *port)
DECL|glcd_function_set|function|void glcd_function_set(struct device *port, uint8_t opt)
DECL|glcd_initialize|function|int glcd_initialize(struct device *port)
DECL|glcd_input_state_get|function|uint8_t glcd_input_state_get(struct device *port)
DECL|glcd_input_state_set|function|void glcd_input_state_set(struct device *port, uint8_t opt)
DECL|glcd_print|function|void glcd_print(struct device *port, unsigned char *data, uint32_t size)
DECL|grove_lcd_config|variable|grove_lcd_config
DECL|grove_lcd_driver|variable|grove_lcd_driver
DECL|i2c|member|struct device *i2c;
DECL|input_set|member|uint8_t input_set;
DECL|lcd_addr|member|uint16_t lcd_addr;
DECL|rgb_addr|member|uint16_t rgb_addr;
