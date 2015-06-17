DECL|ARGC_MAX|macro|ARGC_MAX
DECL|MAX_CMD_NUM|macro|MAX_CMD_NUM
DECL|MAX_CMD_QUEUED|macro|MAX_CMD_QUEUED
DECL|STACKSIZE|macro|STACKSIZE
DECL|argc|variable|argc
DECL|argv|variable|argv
DECL|avail_queue|variable|avail_queue
DECL|buf|variable|buf
DECL|cb|member|cmd_function_t cb;
DECL|cmd_name|member|const char *cmd_name;
DECL|cmds_queue|variable|cmds_queue
DECL|commands|variable|commands
DECL|get_cb|function|static cmd_function_t get_cb(const char *string)
DECL|last_cmd_index|variable|last_cmd_index
DECL|line2argv|function|static void line2argv(char *str)
DECL|line_queue_init|function|static void line_queue_init(void)
DECL|prompt|variable|prompt
DECL|shell_cmd_register|function|void shell_cmd_register(const char *string, cmd_function_t cb)
DECL|shell_init|function|void shell_init(const char *str)
DECL|shell|function|static void shell(int arg1, int arg2)
DECL|show_commands|function|static void show_commands(int argc, char *argv[])
DECL|stack|variable|stack
