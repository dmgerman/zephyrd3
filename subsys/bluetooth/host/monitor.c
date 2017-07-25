DECL|BT_CONSOLE_BUSY|enumerator|BT_CONSOLE_BUSY,
DECL|BT_LOG_BUSY|enumerator|BT_LOG_BUSY,
DECL|CONFIG_BLUETOOTH_MONITOR_ON_DEV_NAME|macro|CONFIG_BLUETOOTH_MONITOR_ON_DEV_NAME
DECL|MONITOR_INIT_PRIORITY|macro|MONITOR_INIT_PRIORITY
DECL|acl_rx|member|atomic_t acl_rx;
DECL|acl_tx|member|atomic_t acl_tx;
DECL|bt_log|function|void bt_log(int prio, const char *fmt, ...)
DECL|bt_monitor_init|function|static int bt_monitor_init(struct device *d)
DECL|bt_monitor_new_index|function|void bt_monitor_new_index(u8_t type, u8_t bus, bt_addr_t *addr, const char *name)
DECL|bt_monitor_send|function|void bt_monitor_send(u16_t opcode, const void *data, size_t len)
DECL|cmd|member|atomic_t cmd;
DECL|drop_add|function|static void drop_add(u16_t opcode)
DECL|drops|variable|drops
DECL|encode_drops|function|static void encode_drops(struct bt_monitor_hdr *hdr, u8_t type, atomic_t *val)
DECL|encode_hdr|function|static inline void encode_hdr(struct bt_monitor_hdr *hdr, u16_t opcode, u16_t len)
DECL|evt|member|atomic_t evt;
DECL|flags|variable|flags
DECL|log_out|function|static int log_out(int c, void *unused)
DECL|monitor_console_out|function|static int monitor_console_out(int c)
DECL|monitor_dev|variable|monitor_dev
DECL|monitor_send|function|static void monitor_send(const void *data, size_t len)
DECL|other|member|atomic_t other;
DECL|sco_rx|member|atomic_t sco_rx;
DECL|sco_tx|member|atomic_t sco_tx;
