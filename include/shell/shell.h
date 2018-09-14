DECL|SHELL_REGISTER_COMMAND|macro|SHELL_REGISTER_COMMAND
DECL|SHELL_REGISTER_COMMAND|macro|SHELL_REGISTER_COMMAND
DECL|SHELL_REGISTER_WITH_PROMPT|macro|SHELL_REGISTER_WITH_PROMPT
DECL|SHELL_REGISTER_WITH_PROMPT|macro|SHELL_REGISTER_WITH_PROMPT
DECL|SHELL_REGISTER|macro|SHELL_REGISTER
DECL|SHELL_REGISTER|macro|SHELL_REGISTER
DECL|ZEPHYR_INCLUDE_SHELL_SHELL_H_|macro|ZEPHYR_INCLUDE_SHELL_SHELL_H_
DECL|cb|member|shell_cmd_function_t cb;
DECL|cmd_name|member|const char *cmd_name;
DECL|commands|member|const struct shell_cmd *commands;
DECL|desc|member|const char *desc;
DECL|help|member|const char *help;
DECL|module_name|member|const char *module_name;
DECL|prompt|member|shell_prompt_function_t prompt;
DECL|shell_cmd_function_t|typedef|typedef int (*shell_cmd_function_t)(int argc, char *argv[]);
DECL|shell_cmd|struct|struct shell_cmd {
DECL|shell_mcumgr_function_t|typedef|typedef int (*shell_mcumgr_function_t)(const char *line, void *arg);
DECL|shell_module|struct|struct shell_module {
DECL|shell_prompt_function_t|typedef|typedef const char *(*shell_prompt_function_t)(void);
DECL|shell_run|function|static inline int shell_run(struct device *dev)
