DECL|ADV_BUF_LEN|macro|ADV_BUF_LEN
DECL|BT_LE_AD_DISCOV_MASK|macro|BT_LE_AD_DISCOV_MASK
DECL|CONTROLLER_INDEX|macro|CONTROLLER_INDEX
DECL|CONTROLLER_NAME|macro|CONTROLLER_NAME
DECL|ad_flags|variable|ad_flags
DECL|adv_buf|variable|adv_buf
DECL|ad|variable|ad
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|auth_passkey_entry|function|static void auth_passkey_entry(struct bt_conn *conn)
DECL|cb|variable|cb
DECL|conn_callbacks|variable|conn_callbacks
DECL|connect|function|static void connect(const u8_t *data, u16_t len)
DECL|controller_index_list|function|static void controller_index_list(u8_t *data, u16_t len)
DECL|controller_info|function|static void controller_info(u8_t *data, u16_t len)
DECL|current_settings|variable|current_settings
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, s8_t rssi, u8_t evtype, struct net_buf_simple *ad)
DECL|disconnect|function|static void disconnect(const u8_t *data, u16_t len)
DECL|discovery_flags|variable|discovery_flags
DECL|get_ad_flags|function|static u8_t get_ad_flags(struct net_buf_simple *ad)
DECL|le_connected|function|static void le_connected(struct bt_conn *conn, u8_t err)
DECL|le_disconnected|function|static void le_disconnected(struct bt_conn *conn, u8_t reason)
DECL|le_identity_resolved|function|static void le_identity_resolved(struct bt_conn *conn, const bt_addr_le_t *rpa, const bt_addr_le_t *identity)
DECL|pair|function|static void pair(const u8_t *data, u16_t len)
DECL|passkey_entry|function|static void passkey_entry(const u8_t *data, u16_t len)
DECL|sd|variable|sd
DECL|set_connectable|function|static void set_connectable(u8_t *data, u16_t len)
DECL|set_discoverable|function|static void set_discoverable(u8_t *data, u16_t len)
DECL|set_io_cap|function|static void set_io_cap(const u8_t *data, u16_t len)
DECL|start_advertising|function|static void start_advertising(const u8_t *data, u16_t len)
DECL|start_discovery|function|static void start_discovery(const u8_t *data, u16_t len)
DECL|stop_advertising|function|static void stop_advertising(const u8_t *data, u16_t len)
DECL|stop_discovery|function|static void stop_discovery(const u8_t *data, u16_t len)
DECL|store_adv|function|static void store_adv(const bt_addr_le_t *addr, s8_t rssi, struct net_buf_simple *ad)
DECL|supported_commands|function|static void supported_commands(u8_t *data, u16_t len)
DECL|tester_handle_gap|function|void tester_handle_gap(u8_t opcode, u8_t index, u8_t *data, u16_t len)
DECL|tester_init_gap_cb|function|static void tester_init_gap_cb(int err)
DECL|tester_init_gap|function|u8_t tester_init_gap(void)
DECL|tester_unregister_gap|function|u8_t tester_unregister_gap(void)
DECL|unpair|function|static void unpair(const u8_t *data, u16_t len)
