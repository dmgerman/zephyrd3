DECL|add_to_head|function|static void add_to_head(struct shell_history *history,struct shell_history_item *item, u8_t *src, size_t len)
DECL|data|member|char data[1];
DECL|dnode|member|sys_dnode_t dnode;
DECL|len|member|u16_t len;
DECL|remove_from_tail|function|static void remove_from_tail(struct shell_history *history)
DECL|shell_history_get|function|bool shell_history_get(struct shell_history *history, bool up, u8_t *dst, size_t *len)
DECL|shell_history_init|function|void shell_history_init(struct shell_history *history)
DECL|shell_history_item|struct|struct shell_history_item {
DECL|shell_history_mode_exit|function|void shell_history_mode_exit(struct shell_history *history)
DECL|shell_history_purge|function|void shell_history_purge(struct shell_history *history)
DECL|shell_history_put|function|void shell_history_put(struct shell_history *history, u8_t *line, size_t len)
