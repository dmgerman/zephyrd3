DECL|NVT_CR|macro|NVT_CR
DECL|NVT_LF|macro|NVT_LF
DECL|NVT_NUL|macro|NVT_NUL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WS_CONSOLE_LINES|macro|WS_CONSOLE_LINES
DECL|WS_CONSOLE_LINE_SIZE|macro|WS_CONSOLE_LINE_SIZE
DECL|WS_CONSOLE_MIN_MSG|macro|WS_CONSOLE_MIN_MSG
DECL|WS_CONSOLE_PRIORITY|macro|WS_CONSOLE_PRIORITY
DECL|WS_CONSOLE_STACK_SIZE|macro|WS_CONSOLE_STACK_SIZE
DECL|WS_CONSOLE_THRESHOLD|macro|WS_CONSOLE_THRESHOLD
DECL|WS_CONSOLE_TIMEOUT|macro|WS_CONSOLE_TIMEOUT
DECL|WS_CONSOLE_TIMEOUT|macro|WS_CONSOLE_TIMEOUT
DECL|avail_queue|variable|avail_queue
DECL|buf|member|char buf[WS_CONSOLE_LINE_SIZE];
DECL|input_queue|variable|input_queue
DECL|l_bufs|member|struct line_buf l_bufs[WS_CONSOLE_LINES];
DECL|len|member|u16_t len;
DECL|line_buf_rb|struct|struct line_buf_rb {
DECL|line_buf|struct|struct line_buf {
DECL|line_in|member|u16_t line_in;
DECL|line_out|member|u16_t line_out;
DECL|orig_printk_hook|variable|orig_printk_hook
DECL|ws_console_disable|function|int ws_console_disable(struct http_ctx *ctx)
DECL|ws_console_enable|function|int ws_console_enable(struct http_ctx *ctx)
DECL|ws_console_init|function|static int ws_console_init(struct device *arg)
DECL|ws_console_out|function|static int ws_console_out(int c)
DECL|ws_console_recv|function|int ws_console_recv(struct http_ctx *ctx, struct net_pkt *pkt)
DECL|ws_console_run|function|static void ws_console_run(void)
DECL|ws_console_send|function|static bool ws_console_send(struct http_ctx *console)
DECL|ws_console|variable|ws_console
DECL|ws_end_client_connection|function|static void ws_end_client_connection(struct http_ctx *console)
DECL|ws_handle_input|function|static inline void ws_handle_input(struct net_pkt *pkt)
DECL|ws_rb_get_line_in|function|static inline struct line_buf *ws_rb_get_line_in(void)
DECL|ws_rb_get_line_out|function|static inline struct line_buf *ws_rb_get_line_out(void)
DECL|ws_rb_init|function|static void ws_rb_init(void)
DECL|ws_rb_switch|function|static void ws_rb_switch(void)
DECL|ws_rb|variable|ws_rb
DECL|ws_register_input|function|void ws_register_input(struct k_fifo *avail, struct k_fifo *lines, u8_t (*completion)(char *str, u8_t len))
DECL|ws_send_prematurely|function|static void ws_send_prematurely(struct k_timer *timer)
DECL|ws_thread_data|variable|ws_thread_data
