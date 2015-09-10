DECL|CONTROLLER_ADDR|macro|CONTROLLER_ADDR
DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|CONTROLLER_NAME|macro|CONTROLLER_NAME
DECL|conn_callbacks|variable|conn_callbacks
DECL|controller_index_list|function|static void controller_index_list(uint8_t *data, uint16_t len)
DECL|controller_info|function|static void controller_info(uint8_t *data, uint16_t len)
DECL|current_settings|variable|current_settings
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t evtype, const uint8_t *ad, uint8_t len)
DECL|disconnect|function|static void disconnect(const uint8_t *data, uint16_t len)
DECL|le_connected|function|static void le_connected(struct bt_conn *conn)
DECL|le_disconnected|function|static void le_disconnected(struct bt_conn *conn)
DECL|start_advertising|function|static void start_advertising(const uint8_t *data, uint16_t len)
DECL|start_discovery|function|static void start_discovery(const uint8_t *data, uint16_t len)
DECL|stop_advertising|function|static void stop_advertising(const uint8_t *data, uint16_t len)
DECL|stop_discovery|function|static void stop_discovery(const uint8_t *data, uint16_t len)
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|tester_handle_gap|function|void tester_handle_gap(uint8_t opcode, uint8_t index, uint8_t *data, uint16_t len)
DECL|tester_init_gap|function|uint8_t tester_init_gap(void)
