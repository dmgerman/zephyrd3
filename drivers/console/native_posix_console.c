DECL|DEBUG_ECHO|macro|DEBUG_ECHO
DECL|ECHO|macro|ECHO
DECL|ECHO|macro|ECHO
DECL|VALID_DIRECTIVES|macro|VALID_DIRECTIVES
DECL|attempt_read_from_stdin|function|static s32_t attempt_read_from_stdin(void)
DECL|avail_queue|variable|avail_queue
DECL|catch_directive|function|static int catch_directive(char *s, s32_t *towait)
DECL|completion_cb|variable|completion_cb
DECL|found_eof|function|static inline void found_eof(void)
DECL|lines_queue|variable|lines_queue
DECL|native_posix_console_init|function|static int native_posix_console_init(struct device *arg)
DECL|native_posix_stdout_init|function|static void native_posix_stdout_init(void)
DECL|native_stdin_register_input|function|void native_stdin_register_input(struct k_fifo *avail, struct k_fifo *lines, u8_t (*completion)(char *str, u8_t len))
DECL|native_stdio_runner|function|static void native_stdio_runner(void *p1, void *p2, void *p3)
DECL|native_stdio_thread|variable|native_stdio_thread
DECL|posix_flush_stdout|function|void posix_flush_stdout(void)
DECL|stdin_is_tty|variable|stdin_is_tty
DECL|stdin_not_ready|function|static int stdin_not_ready(void)
