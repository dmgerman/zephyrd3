DECL|CONTROLLER_ADDR|macro|CONTROLLER_ADDR
DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|CONTROLLER_NAME|macro|CONTROLLER_NAME
DECL|ad_flags|variable|ad_flags
DECL|ad|variable|ad
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|auth_passkey_entry|function|static void auth_passkey_entry(struct bt_conn *conn)
DECL|cb|variable|cb
DECL|conn_callbacks|variable|conn_callbacks
DECL|connect|function|static void connect(const uint8_t *data, uint16_t len)
DECL|controller_index_list|function|static void controller_index_list(uint8_t *data, uint16_t len)
DECL|controller_info|function|static void controller_info(uint8_t *data, uint16_t len)
DECL|current_settings|variable|current_settings
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, int8_t rssi, uint8_t evtype, const uint8_t *ad, uint8_t len)
DECL|disconnect|function|static void disconnect(const uint8_t *data, uint16_t len)
DECL|le_connected|function|static void le_connected(struct bt_conn *conn, uint8_t err)
DECL|le_disconnected|function|static void le_disconnected(struct bt_conn *conn, uint8_t reason)
DECL|pair|function|static void pair(const uint8_t *data, uint16_t len)
DECL|passkey_entry|function|static void passkey_entry(const uint8_t *data, uint16_t len)
DECL|set_connectable|function|static void set_connectable(uint8_t *data, uint16_t len)
DECL|set_discoverable|function|static void set_discoverable(uint8_t *data, uint16_t len)
DECL|set_io_cap|function|static void set_io_cap(const uint8_t *data, uint16_t len)
DECL|start_advertising|function|static void start_advertising(const uint8_t *data, uint16_t len)
DECL|start_discovery|function|static void start_discovery(const uint8_t *data, uint16_t len)
DECL|stop_advertising|function|static void stop_advertising(const uint8_t *data, uint16_t len)
DECL|stop_discovery|function|static void stop_discovery(const uint8_t *data, uint16_t len)
DECL|supported_commands|function|static void supported_commands(uint8_t *data, uint16_t len)
DECL|tester_handle_gap|function|void tester_handle_gap(uint8_t opcode, uint8_t index, uint8_t *data, uint16_t len)
DECL|tester_init_gap|function|uint8_t tester_init_gap(void)
