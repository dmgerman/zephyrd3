DECL|HEXDUMP_BYTES_IN_LINE|macro|HEXDUMP_BYTES_IN_LINE
DECL|LOG_COLOR_CODE_BLACK|macro|LOG_COLOR_CODE_BLACK
DECL|LOG_COLOR_CODE_BLUE|macro|LOG_COLOR_CODE_BLUE
DECL|LOG_COLOR_CODE_CYAN|macro|LOG_COLOR_CODE_CYAN
DECL|LOG_COLOR_CODE_DEFAULT|macro|LOG_COLOR_CODE_DEFAULT
DECL|LOG_COLOR_CODE_GREEN|macro|LOG_COLOR_CODE_GREEN
DECL|LOG_COLOR_CODE_MAGENTA|macro|LOG_COLOR_CODE_MAGENTA
DECL|LOG_COLOR_CODE_RED|macro|LOG_COLOR_CODE_RED
DECL|LOG_COLOR_CODE_WHITE|macro|LOG_COLOR_CODE_WHITE
DECL|LOG_COLOR_CODE_YELLOW|macro|LOG_COLOR_CODE_YELLOW
DECL|color_postfix|function|static void color_postfix(struct log_msg *msg, struct log_output_ctx *ctx, bool color)
DECL|color_prefix|function|static void color_prefix(struct log_msg *msg, struct log_output_ctx *ctx, bool color)
DECL|color_print|function|static void color_print(struct log_msg *msg,struct log_output_ctx *ctx, bool color, bool start)
DECL|colors|variable|colors
DECL|flush|function|static void flush(struct log_output_ctx *ctx)
DECL|freq|variable|freq
DECL|hexdump_line_print|function|static u32_t hexdump_line_print(struct log_msg *msg,struct log_output_ctx *ctx, int prefix_offset, u32_t offset)
DECL|hexdump_print|function|static void hexdump_print(struct log_msg *msg, struct log_output_ctx *ctx, int prefix_offset)
DECL|ids_print|function|static int ids_print(struct log_msg *msg, struct log_output_ctx *ctx)
DECL|log_output_msg_process|function|void log_output_msg_process(struct log_msg *msg, struct log_output_ctx *ctx, u32_t flags)
DECL|log_output_timestamp_freq_set|function|void log_output_timestamp_freq_set(u32_t frequency)
DECL|newline_print|function|static void newline_print(struct log_output_ctx *ctx)
DECL|out_func_t|typedef|typedef int (*out_func_t)(int c, void *ctx);
DECL|out_func|function|static int out_func(int c, void *ctx)
DECL|postfix_print|function|static void postfix_print(struct log_msg *msg, struct log_output_ctx *ctx, u32_t flags)
DECL|prefix_print|function|static int prefix_print(struct log_msg *msg,struct log_output_ctx *ctx, u32_t flags)
DECL|print|function|static int print(struct log_output_ctx *ctx, const char *fmt, ...)
DECL|raw_string_print|function|static void raw_string_print(struct log_msg *msg, struct log_output_ctx *ctx)
DECL|severity|variable|severity
DECL|std_print|function|static void std_print(struct log_msg *msg, struct log_output_ctx *ctx)
DECL|timestamp_div|variable|timestamp_div
DECL|timestamp_print|function|static int timestamp_print(struct log_msg *msg, struct log_output_ctx *ctx, bool format)