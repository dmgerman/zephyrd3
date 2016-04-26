DECL|MONITOR_INIT_PRIORITY|macro|MONITOR_INIT_PRIORITY
DECL|bt_log|function|void bt_log(int prio, const char *fmt, ...)
DECL|bt_monitor_init|function|static int bt_monitor_init(struct device *d)
DECL|bt_monitor_new_index|function|void bt_monitor_new_index(uint8_t type, uint8_t bus, bt_addr_t *addr, const char *name)
DECL|bt_monitor_send|function|void bt_monitor_send(uint16_t opcode, const void *data, size_t len)
DECL|log_out|function|static int log_out(int c, void *unused)
DECL|monitor_console_out|function|static int monitor_console_out(int c)
DECL|monitor_dev|variable|monitor_dev
DECL|monitor_send|function|static void monitor_send(const void *data, size_t len)
DECL|send_hdr|function|static void send_hdr(uint16_t opcode, uint16_t index, uint16_t len)
