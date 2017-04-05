DECL|DISPLAY_COLS|macro|DISPLAY_COLS
DECL|DISPLAY_ROWS|macro|DISPLAY_ROWS
DECL|GET_PIXEL|macro|GET_PIXEL
DECL|ROW_PIN|macro|ROW_PIN
DECL|SCROLL_DURATION|macro|SCROLL_DURATION
DECL|SCROLL_OFF|macro|SCROLL_OFF
DECL|SCROLL_START|macro|SCROLL_START
DECL|clear_display|function|static void clear_display(struct k_timer *timer)
DECL|col_mask|variable|col_mask
DECL|cur|member|int cur; /* Currently rendered row */
DECL|dev|member|struct device *dev; /* GPIO device */
DECL|display|variable|display
DECL|duration|member|int32_t duration; /* Duration for each shown image */
DECL|expiry|member|int64_t expiry; /* When to stop showing current image */
DECL|get_font|function|static inline const struct mb_image *get_font(char ch)
DECL|map|variable|map
DECL|mb_display_char|function|void mb_display_char(struct mb_display *disp, char chr, int32_t duration)
DECL|mb_display_get|function|struct mb_display *mb_display_get(void)
DECL|mb_display_image|function|void mb_display_image(struct mb_display *disp, const struct mb_image *img, int32_t duration)
DECL|mb_display_init|function|static int mb_display_init(struct device *dev)
DECL|mb_display_print|function|void mb_display_print(struct mb_display *disp, const char *fmt, ...)
DECL|mb_display_stop|function|void mb_display_stop(struct mb_display *disp)
DECL|mb_display_string|function|void mb_display_string(struct mb_display *disp, int32_t duration, const char *fmt, ...)
DECL|mb_display|struct|struct mb_display {
DECL|reset_display|function|static void reset_display(struct mb_display *disp)
DECL|row|member|uint32_t row[3]; /* Content (columns) for each row */
DECL|scroll|member|uint8_t scroll; /* Scroll shift */
DECL|show_row|function|static void show_row(struct k_timer *timer)
DECL|start_image|function|static void start_image(struct mb_display *disp, const struct mb_image *img)
DECL|str_buf|member|char str_buf[CONFIG_MICROBIT_DISPLAY_STR_MAX];
DECL|str|member|const char *str; /* String to be shown */
DECL|timer|member|struct k_timer timer; /* Rendering timer */
DECL|update_pins|function|static inline void update_pins(struct mb_display *disp, uint32_t val)
DECL|update_scroll|function|static void update_scroll(struct mb_display *disp)
DECL|x_y|struct|struct x_y {
DECL|x|member|uint8_t x:4,
DECL|y|member|y:4;
