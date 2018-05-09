DECL|BALL_POS_X_MAX|macro|BALL_POS_X_MAX
DECL|BALL_POS_X_MIN|macro|BALL_POS_X_MIN
DECL|BALL_POS_Y_MAX|macro|BALL_POS_Y_MAX
DECL|BALL_POS_Y_MIN|macro|BALL_POS_Y_MIN
DECL|BALL_START|macro|BALL_START
DECL|BALL_VEL_Y_START|macro|BALL_VEL_Y_START
DECL|CONNECTED|enumerator|CONNECTED,
DECL|GAME_REFRESH|macro|GAME_REFRESH
DECL|INIT|enumerator|INIT,
DECL|MULTI|enumerator|MULTI,
DECL|PADDLE_MAX|macro|PADDLE_MAX
DECL|PADDLE_MIN|macro|PADDLE_MIN
DECL|PADDLE_ROW|macro|PADDLE_ROW
DECL|PIXEL_SIZE|macro|PIXEL_SIZE
DECL|REAL_TO_VIRT|macro|REAL_TO_VIRT
DECL|RESTART_THRESHOLD|macro|RESTART_THRESHOLD
DECL|SCROLL_SPEED|macro|SCROLL_SPEED
DECL|SINGLE|enumerator|SINGLE,
DECL|SOUND_IDLE|enumerator|SOUND_IDLE, /* No sound */
DECL|SOUND_PADDLE|enumerator|SOUND_PADDLE, /* Ball has hit the paddle */
DECL|SOUND_PERIOD_PADDLE|macro|SOUND_PERIOD_PADDLE
DECL|SOUND_PERIOD_WALL|macro|SOUND_PERIOD_WALL
DECL|SOUND_PIN|macro|SOUND_PIN
DECL|SOUND_WALL|enumerator|SOUND_WALL, /* Ball has hit a wall */
DECL|START_THRESHOLD|macro|START_THRESHOLD
DECL|VIRT_TO_REAL|macro|VIRT_TO_REAL
DECL|a_timestamp|variable|a_timestamp
DECL|b_timestamp|variable|b_timestamp
DECL|ball_pos|variable|ball_pos
DECL|ball_vel|variable|ball_vel
DECL|ball_visible|function|static bool ball_visible(void)
DECL|beep|function|static inline void beep(int period)
DECL|button_pressed|function|static void button_pressed(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|check_start|function|static void check_start(void)
DECL|choice_count|member|size_t choice_count;
DECL|choice|member|const struct pong_choice *choice;
DECL|complete|member|void (*complete)(int val);
DECL|configure_buttons|function|static void configure_buttons(void)
DECL|ended|variable|ended
DECL|game_ended|function|static void game_ended(bool won)
DECL|game_init|function|static void game_init(bool initiator)
DECL|game_refresh|function|static void game_refresh(struct k_work *work)
DECL|game_stack_dump|function|static void game_stack_dump(const struct k_thread *thread, void *user_data)
DECL|main|function|void main(void)
DECL|mode_choice|variable|mode_choice
DECL|mode_selected|function|static void mode_selected(int val)
DECL|mode_selection|variable|mode_selection
DECL|paddle_x|variable|paddle_x
DECL|pong_ball_received|function|void pong_ball_received(s8_t x_pos, s8_t y_pos, s8_t x_vel, s8_t y_vel)
DECL|pong_choice|struct|struct pong_choice {
DECL|pong_conn_ready|function|void pong_conn_ready(bool initiator)
DECL|pong_remote_disconnected|function|void pong_remote_disconnected(void)
DECL|pong_remote_lost|function|void pong_remote_lost(void)
DECL|pong_select_change|function|static void pong_select_change(void)
DECL|pong_select_complete|function|static void pong_select_complete(void)
DECL|pong_selection|struct|struct pong_selection {
DECL|pong_select|function|static void pong_select(const struct pong_selection *sel)
DECL|pong_state|enum|enum pong_state {
DECL|pwm|variable|pwm
DECL|refresh|variable|refresh
DECL|remote_lost|variable|remote_lost
DECL|select_idx|variable|select_idx
DECL|select|variable|select
DECL|sound_set|function|static void sound_set(enum sound_state state)
DECL|sound_state|enum|static enum sound_state {
DECL|sound_state|variable|sound_state
DECL|started|variable|started
DECL|state|variable|state
DECL|str|member|const char *str;
DECL|val|member|int val;
DECL|x_y|struct|struct x_y {
DECL|x|member|int x;
DECL|y|member|int y;
