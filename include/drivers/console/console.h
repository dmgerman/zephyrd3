DECL|CONSOLE_MAX_LINE_LEN|macro|CONSOLE_MAX_LINE_LEN
DECL|ZEPHYR_INCLUDE_DRIVERS_CONSOLE_CONSOLE_H_|macro|ZEPHYR_INCLUDE_DRIVERS_CONSOLE_CONSOLE_H_
DECL|_unused|member|int _unused;
DECL|console_input_fn|typedef|typedef void (*console_input_fn)(struct k_fifo *avail, struct k_fifo *lines,
DECL|console_input|struct|struct console_input {
DECL|is_mcumgr|member|u8_t is_mcumgr : 1;
DECL|line|member|char line[CONSOLE_MAX_LINE_LEN];
