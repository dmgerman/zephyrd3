DECL|MAX_LINE_LEN|macro|MAX_LINE_LEN
DECL|UART_CONSOLE_DEBUG_HOOK_HANDLED|macro|UART_CONSOLE_DEBUG_HOOK_HANDLED
DECL|UART_CONSOLE_OUT_DEBUG_HOOK_SIG|macro|UART_CONSOLE_OUT_DEBUG_HOOK_SIG
DECL|_UART_CONSOLE__H_|macro|_UART_CONSOLE__H_
DECL|_unused|member|int _unused;
DECL|line|member|char line[MAX_LINE_LEN];
DECL|uart_console_in_debug_hook_t|typedef|typedef int (*uart_console_in_debug_hook_t) (uint8_t);
DECL|uart_console_input|struct|struct uart_console_input {
DECL|uart_console_out_debug_hook_t|typedef|typedef UART_CONSOLE_OUT_DEBUG_HOOK_SIG(uart_console_out_debug_hook_t);
