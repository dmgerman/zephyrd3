DECL|ARGC_MAX|macro|ARGC_MAX
DECL|MAX_CMD_QUEUED|macro|MAX_CMD_QUEUED
DECL|STACKSIZE|macro|STACKSIZE
DECL|app_cmd_handler|variable|app_cmd_handler
DECL|avail_queue|variable|avail_queue
DECL|buf|variable|buf
DECL|cmds_queue|variable|cmds_queue
DECL|commands|variable|commands
DECL|get_cb|function|static cmd_function_t get_cb(const char *string)
DECL|line2argv|function|static size_t line2argv(char *str, char *argv[], size_t size)
DECL|line_queue_init|function|static void line_queue_init(void)
DECL|prompt|variable|prompt
DECL|shell_init|function|void shell_init(const char *str, struct shell_cmd *cmds)
DECL|shell_register_app_cmd_handler|function|void shell_register_app_cmd_handler(cmd_function_t handler)
DECL|shell|function|static void shell(int arg1, int arg2)
DECL|show_help|function|static void show_help(int argc, char *argv[])
DECL|stack|variable|stack
