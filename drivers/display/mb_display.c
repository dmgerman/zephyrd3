DECL|DISPLAY_COLS|macro|DISPLAY_COLS
DECL|DISPLAY_ROWS|macro|DISPLAY_ROWS
DECL|GET_PIXEL|macro|GET_PIXEL
DECL|MODE_MASK|macro|MODE_MASK
DECL|ROW_PIN|macro|ROW_PIN
DECL|SCROLL_DEFAULT_DURATION|macro|SCROLL_DEFAULT_DURATION
DECL|SCROLL_OFF|macro|SCROLL_OFF
DECL|SCROLL_START|macro|SCROLL_START
DECL|clear_display|function|static void clear_display(struct k_timer *timer)
DECL|col_mask|variable|col_mask
DECL|cur_img|member|uint8_t cur_img; /* Current image or character to show */
DECL|current_img|function|static const struct mb_image *current_img(struct mb_display *disp)
DECL|cur|member|uint8_t cur; /* Currently rendered row */
DECL|dev|member|struct device *dev; /* GPIO device */
DECL|display|variable|display
DECL|duration|member|int32_t duration; /* Duration for each shown image */
DECL|expiry|member|int64_t expiry; /* When to stop showing current image */
DECL|first|member|first:1, /* First frame of a scroll sequence */
DECL|get_font|function|static inline const struct mb_image *get_font(char ch)
DECL|img_count|member|uint8_t img_count; /* Image count */
DECL|img_sep|member|img_sep:1; /* One column image separation */
DECL|img|member|const struct mb_image *img; /* Array of images to show */
DECL|last_frame|function|static inline bool last_frame(struct mb_display *disp)
DECL|loop|member|loop:1, /* Loop to beginning */
DECL|map|variable|map
DECL|mb_display_get|function|struct mb_display *mb_display_get(void)
DECL|mb_display_image|function|void mb_display_image(struct mb_display *disp, uint32_t mode, int32_t duration, const struct mb_image *img, uint8_t img_count)
DECL|mb_display_init|function|static int mb_display_init(struct device *dev)
DECL|mb_display_print|function|void mb_display_print(struct mb_display *disp, uint32_t mode, int32_t duration, const char *fmt, ...)
DECL|mb_display_stop|function|void mb_display_stop(struct mb_display *disp)
DECL|mb_display|struct|struct mb_display {
DECL|next_img|function|static const struct mb_image *next_img(struct mb_display *disp)
DECL|reset_display|function|static void reset_display(struct mb_display *disp)
DECL|row|member|uint32_t row[3]; /* Content (columns) for each row */
DECL|scroll_steps|function|static inline uint8_t scroll_steps(struct mb_display *disp)
DECL|scroll|member|uint8_t scroll:3, /* Scroll shift */
DECL|show_row|function|static void show_row(struct k_timer *timer)
DECL|start_image|function|static void start_image(struct mb_display *disp, const struct mb_image *img)
DECL|start_scroll|function|static void start_scroll(struct mb_display *disp, int32_t duration)
DECL|start_single|function|static void start_single(struct mb_display *disp, int32_t duration)
DECL|str_buf|member|char str_buf[CONFIG_MICROBIT_DISPLAY_STR_MAX];
DECL|str|member|const char *str; /* String to be shown */
DECL|text|member|text:1, /* We're showing a string (not image) */
DECL|timer|member|struct k_timer timer; /* Rendering timer */
DECL|update_image|function|static void update_image(struct mb_display *disp)
DECL|update_pins|function|static inline void update_pins(struct mb_display *disp, uint32_t val)
DECL|update_scroll|function|static void update_scroll(struct mb_display *disp)
DECL|x_y|struct|struct x_y {
DECL|x|member|uint8_t x:4,
DECL|y|member|y:4;
