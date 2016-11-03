DECL|ARGC_MAX|macro|ARGC_MAX
DECL|COMMAND_MAX_LEN|macro|COMMAND_MAX_LEN
DECL|MAX_CMD_QUEUED|macro|MAX_CMD_QUEUED
DECL|MODULE_NAME_MAX_LEN|macro|MODULE_NAME_MAX_LEN
DECL|NUM_OF_SHELL_ENTITIES|macro|NUM_OF_SHELL_ENTITIES
DECL|PROMPT_MAX_LEN|macro|PROMPT_MAX_LEN
DECL|PROMPT_SUFFIX|macro|PROMPT_SUFFIX
DECL|STACKSIZE|macro|STACKSIZE
DECL|app_cmd_handler|variable|app_cmd_handler
DECL|app_prompt_handler|variable|app_prompt_handler
DECL|avail_queue|variable|avail_queue
DECL|buf|variable|buf
DECL|cmds_queue|variable|cmds_queue
DECL|completion|function|static uint8_t completion(char *line, uint8_t len)
DECL|default_module_prompt|variable|default_module_prompt
DECL|default_module|variable|default_module
DECL|get_cb|function|static shell_cmd_function_t get_cb(int argc, char *argv[])
DECL|get_command_and_module|function|static const char *get_command_and_module(char *argv[], int *module)
DECL|get_command_to_complete|function|static int get_command_to_complete(char *str, char **command_prefix)
DECL|get_destination_module|function|static int get_destination_module(const char *module_str)
DECL|get_prompt|function|static const char *get_prompt(void)
DECL|line2argv|function|static size_t line2argv(char *str, char *argv[], size_t size)
DECL|line_queue_init|function|static void line_queue_init(void)
DECL|print_module_commands|function|static void print_module_commands(const int module)
DECL|prompt|variable|prompt
DECL|set_default_module|function|static int set_default_module(const char *name)
DECL|set_module|function|static int set_module(int argc, char *argv[])
DECL|shell_init|function|void shell_init(const char *str)
DECL|shell_register_app_cmd_handler|function|void shell_register_app_cmd_handler(shell_cmd_function_t handler)
DECL|shell_register_default_module|function|void shell_register_default_module(const char *name)
DECL|shell_register_prompt_handler|function|void shell_register_prompt_handler(shell_prompt_function_t handler)
DECL|shell|function|static void shell(int arg1, int arg2)
DECL|show_cmd_help|function|static int show_cmd_help(char *argv[])
DECL|show_help|function|static int show_help(int argc, char *argv[])
DECL|stack|variable|stack
