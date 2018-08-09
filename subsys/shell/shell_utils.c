DECL|col_num_with_buffer_offset_get|function|static u32_t col_num_with_buffer_offset_get(struct shell_multiline_cons *cons, u16_t buffer_pos)
DECL|column_span_with_buffer_offsets_get|function|s32_t column_span_with_buffer_offsets_get(struct shell_multiline_cons *cons, u16_t offset1, u16_t offset2)
DECL|line_num_with_buffer_offset_get|function|static u32_t line_num_with_buffer_offset_get(struct shell_multiline_cons *cons, u16_t buffer_pos)
DECL|make_argv|function|static void make_argv(char **ppcmd, u8_t c, u8_t quote)
DECL|row_span_with_buffer_offsets_get|function|s32_t row_span_with_buffer_offsets_get(struct shell_multiline_cons *cons, u16_t offset1, u16_t offset2)
DECL|shell_buffer_trim|function|void shell_buffer_trim(char *buff, u16_t *buff_len)
DECL|shell_command_add|function|int shell_command_add(char *buff, u16_t *buff_len, const char *new_cmd, const char *pattern)
DECL|shell_make_argv|function|char shell_make_argv(size_t *argc, char **argv, char *cmd, u8_t max_argc)
DECL|shell_multiline_data_calc|function|void shell_multiline_data_calc(struct shell_multiline_cons *cons, u16_t buff_pos, u16_t buff_len)
DECL|shell_pattern_remove|function|void shell_pattern_remove(char *buff, u16_t *buff_len, const char *pattern)
DECL|shell_spaces_trim|function|void shell_spaces_trim(char *str)
DECL|shell_str_similarity_check|function|u16_t shell_str_similarity_check(const char *str_a, const char *str_b)
