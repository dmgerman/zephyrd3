DECL|CMD_QUEUED|macro|CMD_QUEUED
DECL|STACKSIZE|macro|STACKSIZE
DECL|addr2btp|function|void addr2btp(const bt_addr_le_t *bt_addr, uint8_t *addr, uint8_t *type)
DECL|avail_queue|variable|avail_queue
DECL|cmd_buf|variable|cmd_buf
DECL|cmd_handler|function|static void cmd_handler(int arg1, int arg2)
DECL|cmds_queue|variable|cmds_queue
DECL|handle_core|function|static void handle_core(uint8_t opcode, uint8_t index, uint8_t *data,uint16_t len)
DECL|recv_cb|function|static uint8_t *recv_cb(uint8_t *buf, size_t *off)
DECL|register_service|function|static void register_service(uint8_t *data, uint16_t len)
DECL|stack|variable|stack
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|supported_services|function|static void supported_services(uint8_t *data, uint16_t len)
DECL|tester_init|function|void tester_init(void)
DECL|tester_rsp|function|void tester_rsp(uint8_t service, uint8_t opcode, uint8_t index, uint8_t status)
DECL|tester_send|function|void tester_send(uint8_t service, uint8_t opcode, uint8_t index, uint8_t *data, size_t len)
