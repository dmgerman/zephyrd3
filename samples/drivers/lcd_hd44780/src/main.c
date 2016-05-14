DECL|ENABLE_DELAY|macro|ENABLE_DELAY
DECL|GPIO_DRV_NAME|macro|GPIO_DRV_NAME
DECL|GPIO_NAME|macro|GPIO_NAME
DECL|GPIO_PIN_CFG|macro|GPIO_PIN_CFG
DECL|GPIO_PIN_PC12_D0|macro|GPIO_PIN_PC12_D0
DECL|GPIO_PIN_PC13_D1|macro|GPIO_PIN_PC13_D1
DECL|GPIO_PIN_PC14_D2|macro|GPIO_PIN_PC14_D2
DECL|GPIO_PIN_PC15_D3|macro|GPIO_PIN_PC15_D3
DECL|GPIO_PIN_PC21_D7|macro|GPIO_PIN_PC21_D7
DECL|GPIO_PIN_PC22_D6|macro|GPIO_PIN_PC22_D6
DECL|GPIO_PIN_PC23_D5|macro|GPIO_PIN_PC23_D5
DECL|GPIO_PIN_PC24_D4|macro|GPIO_PIN_PC24_D4
DECL|GPIO_PIN_PC25_E|macro|GPIO_PIN_PC25_E
DECL|GPIO_PIN_PC28_RS|macro|GPIO_PIN_PC28_RS
DECL|GPIO_PIN_WR|macro|GPIO_PIN_WR
DECL|HIGH|macro|HIGH
DECL|LCD_1_LINE|macro|LCD_1_LINE
DECL|LCD_2_LINE|macro|LCD_2_LINE
DECL|LCD_4BIT_MODE|macro|LCD_4BIT_MODE
DECL|LCD_5x10_DOTS|macro|LCD_5x10_DOTS
DECL|LCD_5x8_DOTS|macro|LCD_5x8_DOTS
DECL|LCD_8BIT_MODE|macro|LCD_8BIT_MODE
DECL|LCD_BLINK_OFF|macro|LCD_BLINK_OFF
DECL|LCD_BLINK_ON|macro|LCD_BLINK_ON
DECL|LCD_CLEAR_DISPLAY|macro|LCD_CLEAR_DISPLAY
DECL|LCD_CURSOR_MOVE|macro|LCD_CURSOR_MOVE
DECL|LCD_CURSOR_OFF|macro|LCD_CURSOR_OFF
DECL|LCD_CURSOR_ON|macro|LCD_CURSOR_ON
DECL|LCD_CURSOR_SHIFT|macro|LCD_CURSOR_SHIFT
DECL|LCD_DISPLAY_CONTROL|macro|LCD_DISPLAY_CONTROL
DECL|LCD_DISPLAY_MOVE|macro|LCD_DISPLAY_MOVE
DECL|LCD_DISPLAY_OFF|macro|LCD_DISPLAY_OFF
DECL|LCD_DISPLAY_ON|macro|LCD_DISPLAY_ON
DECL|LCD_ENTRY_LEFT|macro|LCD_ENTRY_LEFT
DECL|LCD_ENTRY_MODE_SET|macro|LCD_ENTRY_MODE_SET
DECL|LCD_ENTRY_RIGHT|macro|LCD_ENTRY_RIGHT
DECL|LCD_ENTRY_SHIFT_DECREMENT|macro|LCD_ENTRY_SHIFT_DECREMENT
DECL|LCD_ENTRY_SHIFT_INCREMENT|macro|LCD_ENTRY_SHIFT_INCREMENT
DECL|LCD_FUNCTION_SET|macro|LCD_FUNCTION_SET
DECL|LCD_MOVE_LEFT|macro|LCD_MOVE_LEFT
DECL|LCD_MOVE_RIGHT|macro|LCD_MOVE_RIGHT
DECL|LCD_RETURN_HOME|macro|LCD_RETURN_HOME
DECL|LCD_SET_CGRAM_ADDR|macro|LCD_SET_CGRAM_ADDR
DECL|LCD_SET_DDRAM_ADDR|macro|LCD_SET_DDRAM_ADDR
DECL|LCD_WIDTH|macro|LCD_WIDTH
DECL|LOW|macro|LOW
DECL|_pi_lcd_4bits_wr|function|void _pi_lcd_4bits_wr(struct device *gpio_dev, uint8_t bits)
DECL|_pi_lcd_8bits_wr|function|void _pi_lcd_8bits_wr(struct device *gpio_dev, uint8_t bits)
DECL|_pi_lcd_command|function|void _pi_lcd_command(struct device *gpio_dev, uint8_t bits)
DECL|_pi_lcd_data|function|void _pi_lcd_data(struct device *gpio_dev, uint8_t bits)
DECL|_pi_lcd_toggle_enable|function|void _pi_lcd_toggle_enable(struct device *gpio_dev)
DECL|_pi_lcd_write|function|void _pi_lcd_write(struct device *gpio_dev, uint8_t bits)
DECL|_set_row_offsets|function|void _set_row_offsets(int8_t row0, int8_t row1, int8_t row2, int8_t row3)
DECL|cfg_rows|member|uint8_t cfg_rows;
DECL|disp_cntl|member|uint8_t disp_cntl; /* Display Control */
DECL|disp_func|member|uint8_t disp_func; /* Display Function */
DECL|disp_mode|member|uint8_t disp_mode; /* Display Mode */
DECL|lcd_data|variable|lcd_data
DECL|main|function|void main(void)
DECL|pi_lcd_auto_scroll_left|function|void pi_lcd_auto_scroll_left(struct device *gpio_dev)
DECL|pi_lcd_auto_scroll_right|function|void pi_lcd_auto_scroll_right(struct device *gpio_dev)
DECL|pi_lcd_blink_off|function|void pi_lcd_blink_off(struct device *gpio_dev)
DECL|pi_lcd_blink_on|function|void pi_lcd_blink_on(struct device *gpio_dev)
DECL|pi_lcd_clear|function|void pi_lcd_clear(struct device *gpio_dev)
DECL|pi_lcd_cursor_off|function|void pi_lcd_cursor_off(struct device *gpio_dev)
DECL|pi_lcd_cursor_on|function|void pi_lcd_cursor_on(struct device *gpio_dev)
DECL|pi_lcd_data|struct|struct pi_lcd_data {
DECL|pi_lcd_display_off|function|void pi_lcd_display_off(struct device *gpio_dev)
DECL|pi_lcd_display_on|function|void pi_lcd_display_on(struct device *gpio_dev)
DECL|pi_lcd_home|function|void pi_lcd_home(struct device *gpio_dev)
DECL|pi_lcd_init|function|void pi_lcd_init(struct device *gpio_dev, uint8_t cols, uint8_t rows, uint8_t dotsize)
DECL|pi_lcd_left_to_right|function|void pi_lcd_left_to_right(struct device *gpio_dev)
DECL|pi_lcd_right_to_left|function|void pi_lcd_right_to_left(struct device *gpio_dev)
DECL|pi_lcd_scroll_left|function|void pi_lcd_scroll_left(struct device *gpio_dev)
DECL|pi_lcd_scroll_right|function|void pi_lcd_scroll_right(struct device *gpio_dev)
DECL|pi_lcd_set_cursor|function|void pi_lcd_set_cursor(struct device *gpio_dev, uint8_t col, uint8_t row)
DECL|pi_lcd_string|function|void pi_lcd_string(struct device *gpio_dev, char *msg)
DECL|row_offsets|member|uint8_t row_offsets[4];
