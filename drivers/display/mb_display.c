DECL|DISPLAY_COLS|macro|DISPLAY_COLS
DECL|DISPLAY_ROWS|macro|DISPLAY_ROWS
DECL|GET_PIXEL|macro|GET_PIXEL
DECL|ROW_PIN|macro|ROW_PIN
DECL|clear_display|function|static void clear_display(struct k_timer *timer)
DECL|col_mask|variable|col_mask
DECL|cur|member|int cur; /* Currently rendered row */
DECL|dev|member|struct device *dev; /* GPIO device */
DECL|display|variable|display
DECL|duration|member|int32_t duration; /* Duration for each shown image */
DECL|expiry|member|int64_t expiry; /* When to stop showing the current image */
DECL|map|variable|map
DECL|mb_display_char|function|void mb_display_char(struct mb_display *disp, char chr, int32_t duration)
DECL|mb_display_get|function|struct mb_display *mb_display_get(void)
DECL|mb_display_image|function|void mb_display_image(struct mb_display *disp, const struct mb_image *img, int32_t duration)
DECL|mb_display_init|function|static int mb_display_init(struct device *dev)
DECL|mb_display_stop|function|void mb_display_stop(struct mb_display *disp)
DECL|mb_display_str|function|void mb_display_str(struct mb_display *disp, const char *str, int32_t duration)
DECL|mb_display|struct|struct mb_display {
DECL|row|member|uint32_t row[3]; /* Content (columns) for each row */
DECL|set_img|function|static void set_img(struct mb_display *disp, const struct mb_image *img)
DECL|show_row|function|static void show_row(struct k_timer *timer)
DECL|str|member|const char *str; /* String to be shown */
DECL|timer|member|struct k_timer timer; /* Rendering timer */
DECL|update_pins|function|static inline void update_pins(struct mb_display *disp, uint32_t val)
DECL|x_y|struct|struct x_y {
DECL|x|member|uint8_t x:4,
DECL|y|member|y:4;
