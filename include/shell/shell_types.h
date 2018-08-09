DECL|SHELL_TYPES_H__|macro|SHELL_TYPES_H__
DECL|SHELL_VT100_COLOR_BLACK|enumerator|SHELL_VT100_COLOR_BLACK,
DECL|SHELL_VT100_COLOR_BLUE|enumerator|SHELL_VT100_COLOR_BLUE,
DECL|SHELL_VT100_COLOR_CYAN|enumerator|SHELL_VT100_COLOR_CYAN,
DECL|SHELL_VT100_COLOR_DEFAULT|enumerator|SHELL_VT100_COLOR_DEFAULT,
DECL|SHELL_VT100_COLOR_GREEN|enumerator|SHELL_VT100_COLOR_GREEN,
DECL|SHELL_VT100_COLOR_MAGENTA|enumerator|SHELL_VT100_COLOR_MAGENTA,
DECL|SHELL_VT100_COLOR_RED|enumerator|SHELL_VT100_COLOR_RED,
DECL|SHELL_VT100_COLOR_WHITE|enumerator|SHELL_VT100_COLOR_WHITE,
DECL|SHELL_VT100_COLOR_YELLOW|enumerator|SHELL_VT100_COLOR_YELLOW,
DECL|VT100_COLOR_END|enumerator|VT100_COLOR_END
DECL|bgcol|member|enum shell_vt100_color bgcol; /* Background color. */
DECL|col|member|enum shell_vt100_color col; /* Text color. */
DECL|col|member|struct shell_vt100_colors col;
DECL|cons|member|struct shell_multiline_cons cons;
DECL|cur_x_end|member|u16_t cur_x_end; /* horizontal cursor position at the end of command.*/
DECL|cur_x|member|u16_t cur_x; /* horizontal cursor position in edited command line.*/
DECL|cur_y_end|member|u16_t cur_y_end; /* vertical cursor position at the end of command.*/
DECL|cur_y|member|u16_t cur_y; /* vertical cursor position in edited command.*/
DECL|name_len|member|u8_t name_len; /*!<console name length.*/
DECL|printed_cmd|member|u16_t printed_cmd; /* printed commands counter */
DECL|shell_multiline_cons|struct|struct shell_multiline_cons {
DECL|shell_vt100_colors|struct|struct shell_vt100_colors {
DECL|shell_vt100_color|enum|enum shell_vt100_color {
DECL|shell_vt100_ctx|struct|struct shell_vt100_ctx {
DECL|terminal_hei|member|u16_t terminal_hei; /* terminal screen height.*/
DECL|terminal_wid|member|u16_t terminal_wid; /* terminal screen width.*/
