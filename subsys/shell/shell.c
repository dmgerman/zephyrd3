DECL|SHELL_ASCII_MAX_CHAR|macro|SHELL_ASCII_MAX_CHAR
DECL|SHELL_INITIAL_CURS_POS|macro|SHELL_INITIAL_CURS_POS
DECL|SHELL_INIT_OPTION_PRINTER|macro|SHELL_INIT_OPTION_PRINTER
DECL|SHELL_MSG_COMMAND_NOT_FOUND|macro|SHELL_MSG_COMMAND_NOT_FOUND
DECL|SHELL_MSG_TAB_OVERFLOWED|macro|SHELL_MSG_TAB_OVERFLOWED
DECL|ascii_filter|function|static inline int ascii_filter(const char data)
DECL|autocomplete|function|static void autocomplete(const struct shell *shell, const struct shell_static_entry *cmd, const char *arg, size_t subcmd_idx)
DECL|cmd_get|function|static void cmd_get(const struct shell_cmd_entry *command, size_t lvl, size_t idx, const struct shell_static_entry **entry, struct shell_static_entry *d_entry)
DECL|cmd_trim|function|static void cmd_trim(const struct shell *shell)
DECL|common_beginning_find|function|static u16_t common_beginning_find(const struct shell_static_entry *cmd, const char **str, size_t first, size_t cnt)
DECL|completion_space_get|function|static inline u16_t completion_space_get(const struct shell *shell)
DECL|find_cmd|function|static const struct shell_static_entry *find_cmd( const struct shell_cmd_entry *cmd, size_t lvl, char *cmd_str, struct shell_static_entry *d_entry)
DECL|find_completion_candidates|function|static void find_completion_candidates(const struct shell_static_entry *cmd, const char *incompl_cmd, size_t *first_idx, size_t *cnt, u16_t *longest)
DECL|flag_delete_mode_set|function|static inline bool flag_delete_mode_set(const struct shell *shell)
DECL|flag_processing_is_set|function|static inline bool flag_processing_is_set(const struct shell *shell)
DECL|formatted_text_print|function|static void formatted_text_print(const struct shell *shell, const char *str, size_t terminal_offset, bool offset_first_line)
DECL|get_last_command|function|static const struct shell_static_entry *get_last_command( const struct shell *shell, size_t argc, char *argv[], size_t *match_arg,
DECL|help_cmd_print|function|static void help_cmd_print(const struct shell *shell)
DECL|help_flag_clear|function|static inline void help_flag_clear(const struct shell *shell)
DECL|help_flag_set|function|static inline void help_flag_set(const struct shell *shell)
DECL|help_item_print|function|static void help_item_print(const struct shell *shell, const char *item_name, u16_t item_name_width, const char *item_help)
DECL|help_options_print|function|static void help_options_print(const struct shell *shell, const struct shell_getopt_option *opt, size_t opt_cnt)
DECL|help_subcmd_print|function|static void help_subcmd_print(const struct shell *shell)
DECL|history_handle|function|static void history_handle(const struct shell *shell, bool up)
DECL|history_init|function|static void history_init(const struct shell *shell)
DECL|history_mode_exit|function|static void history_mode_exit(const struct shell *shell)
DECL|history_purge|function|static void history_purge(const struct shell *shell)
DECL|history_put|function|static void history_put(const struct shell *shell, u8_t *line, size_t length)
DECL|is_completion_candidate|function|static inline bool is_completion_candidate(const char *candidate, const char *str, size_t len)
DECL|metakeys_handle|function|static void metakeys_handle(const struct shell *shell, char data)
DECL|partial_autocomplete|function|static void partial_autocomplete(const struct shell *shell, const struct shell_static_entry *cmd, const char *arg, size_t first, size_t cnt)
DECL|receive_state_change|function|static inline void receive_state_change(const struct shell *shell,enum shell_receive_state state)
DECL|root_cmd_find|function|static const struct shell_cmd_entry *root_cmd_find(const char *syntax)
DECL|shell_cmd_buffer_clear|function|static void shell_cmd_buffer_clear(const struct shell *shell)
DECL|shell_cmd_precheck|function|bool shell_cmd_precheck(const struct shell *shell,bool arg_cnt_ok, const struct shell_getopt_option *opt, size_t opt_len)
DECL|shell_current_command_erase|function|static void shell_current_command_erase(const struct shell *shell)
DECL|shell_current_command_print|function|static void shell_current_command_print(const struct shell *shell)
DECL|shell_execute_cmd|function|int shell_execute_cmd(const struct shell *shell, const char *cmd)
DECL|shell_execute|function|static int shell_execute(const struct shell *shell)
DECL|shell_fprintf|function|void shell_fprintf(const struct shell *shell, enum shell_vt100_color color, const char *p_fmt, ...)
DECL|shell_help_print|function|void shell_help_print(const struct shell *shell, const struct shell_getopt_option *opt, size_t opt_len)
DECL|shell_init|function|int shell_init(const struct shell *shell, const void *transport_config, bool use_colors, bool log_backend, u32_t init_log_level)
DECL|shell_instance_init|function|static int shell_instance_init(const struct shell *shell, const void *p_config, bool use_colors)
DECL|shell_instance_uninit|function|static int shell_instance_uninit(const struct shell *shell)
DECL|shell_log_process|function|static void shell_log_process(const struct shell *shell)
DECL|shell_print_stream|function|void shell_print_stream(const void *user_ctx, const char *data,size_t data_len)
DECL|shell_process|function|void shell_process(const struct shell *shell)
DECL|shell_prompt_change|function|int shell_prompt_change(const struct shell *shell, char *prompt)
DECL|shell_root_cmd_count|function|static inline u32_t shell_root_cmd_count(void)
DECL|shell_root_cmd_get|function|static inline const struct shell_cmd_entry *shell_root_cmd_get(u32_t id)
DECL|shell_start|function|int shell_start(const struct shell *shell)
DECL|shell_state_collect|function|static void shell_state_collect(const struct shell *shell)
DECL|shell_state_set|function|static void shell_state_set(const struct shell *shell, enum shell_state state)
DECL|shell_stop|function|int shell_stop(const struct shell *shell)
DECL|shell_str_common|function|static size_t shell_str_common(const char *s1, const char *s2, size_t n)
DECL|shell_tab_handle|function|static void shell_tab_handle(const struct shell *shell)
DECL|shell_tab_prepare|function|static bool shell_tab_prepare(const struct shell *shell, const struct shell_static_entry **cmd, char **argv, size_t *argc, size_t *complete_arg_idx, struct shell_static_entry *d_entry)
DECL|shell_thread|function|void shell_thread(void *shell_handle, void *dummy1, void *dummy2)
DECL|shell_transport_evt_handler|function|static void shell_transport_evt_handler(enum shell_transport_evt evt_type, void *context)
DECL|shell_uninit|function|int shell_uninit(const struct shell *shell)
DECL|shell_write|function|static void shell_write(const struct shell *shell, const void *data,size_t length)
DECL|tab_item_print|function|static void tab_item_print(const struct shell *shell, const char *option, u16_t longest_option)
DECL|tab_options_print|function|static void tab_options_print(const struct shell *shell, const struct shell_static_entry *cmd, const char *str, size_t first, size_t cnt, u16_t longest)
DECL|transport_buffer_flush|function|static inline void transport_buffer_flush(const struct shell *shell)
DECL|vt100_bgcolor_set|function|static void vt100_bgcolor_set(const struct shell *shell, enum shell_vt100_color bgcolor)
DECL|vt100_color_set|function|static void vt100_color_set(const struct shell *shell, enum shell_vt100_color color)
DECL|vt100_colors_restore|function|static void vt100_colors_restore(const struct shell *shell, const struct shell_vt100_colors *color)
DECL|vt100_colors_store|function|static inline void vt100_colors_store(const struct shell *shell, struct shell_vt100_colors *color)
