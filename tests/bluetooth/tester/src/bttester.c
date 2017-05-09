DECL|CMD_QUEUED|macro|CMD_QUEUED
DECL|STACKSIZE|macro|STACKSIZE
DECL|cmd_buf|variable|cmd_buf
DECL|cmd_handler|function|static void cmd_handler(void *p1, void *p2, void *p3)
DECL|cmd_thread|variable|cmd_thread
DECL|handle_core|function|static void handle_core(u8_t opcode, u8_t index, u8_t *data,u16_t len)
DECL|recv_cb|function|static u8_t *recv_cb(u8_t *buf, size_t *off)
DECL|register_service|function|static void register_service(u8_t *data, u16_t len)
DECL|stack|variable|stack
DECL|supported_commands|function|static void supported_commands(u8_t *data, u16_t len)
DECL|supported_services|function|static void supported_services(u8_t *data, u16_t len)
DECL|tester_init|function|void tester_init(void)
DECL|tester_rsp|function|void tester_rsp(u8_t service, u8_t opcode, u8_t index, u8_t status)
DECL|tester_send|function|void tester_send(u8_t service, u8_t opcode, u8_t index, u8_t *data, size_t len)
