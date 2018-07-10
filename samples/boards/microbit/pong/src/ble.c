DECL|APPEARANCE|macro|APPEARANCE
DECL|BALL_INFO_LEN|macro|BALL_INFO_LEN
DECL|BLE_ADVERTISING|enumerator|BLE_ADVERTISING,
DECL|BLE_ADV_START|enumerator|BLE_ADV_START,
DECL|BLE_BALL_INFO|enumerator|BLE_BALL_INFO = 0x00,
DECL|BLE_CONNECTED|enumerator|BLE_CONNECTED,
DECL|BLE_CONNECT_CANCEL|enumerator|BLE_CONNECT_CANCEL,
DECL|BLE_CONNECT_CREATE|enumerator|BLE_CONNECT_CREATE,
DECL|BLE_DISCONNECTED|enumerator|BLE_DISCONNECTED,
DECL|BLE_LOST|enumerator|BLE_LOST = 0x01,
DECL|BLE_SCAN_START|enumerator|BLE_SCAN_START,
DECL|BLE_SCAN|enumerator|BLE_SCAN,
DECL|PONG_CHR_UUID|macro|PONG_CHR_UUID
DECL|PONG_SVC_UUID|macro|PONG_SVC_UUID
DECL|SCAN_TIMEOUT|macro|SCAN_TIMEOUT
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|adv_timeout|function|static u32_t adv_timeout(void)
DECL|ad|variable|ad
DECL|ball|member|struct ble_ball_info ball;
DECL|ble_ball_info|struct|struct ble_ball_info {
DECL|ble_cancel_connect|function|void ble_cancel_connect(void)
DECL|ble_connect|function|void ble_connect(void)
DECL|ble_data|struct|struct ble_data {
DECL|ble_init|function|void ble_init(void)
DECL|ble_send_ball|function|void ble_send_ball(s8_t x_pos, s8_t y_pos, s8_t x_vel, s8_t y_vel)
DECL|ble_send_lost|function|void ble_send_lost(void)
DECL|ble_state|variable|ble_state
DECL|ble_timeout|function|static void ble_timeout(struct k_work *work)
DECL|ble_work|variable|ble_work
DECL|cancel_connect|function|static void cancel_connect(void)
DECL|conn_callbacks|variable|conn_callbacks
DECL|connect_canceled|variable|connect_canceled
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|create_conn|function|static void create_conn(const bt_addr_le_t *addr)
DECL|default_conn|variable|default_conn
DECL|device_found|function|static void device_found(const bt_addr_le_t *addr, s8_t rssi, u8_t type, struct net_buf_simple *ad)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|discov_param|variable|discov_param
DECL|discover_func|function|static u8_t discover_func(struct bt_conn *conn, const struct bt_gatt_attr *attr, struct bt_gatt_discover_params *param)
DECL|gatt_ccc_uuid|variable|gatt_ccc_uuid
DECL|initiator|variable|initiator
DECL|local_attr|variable|local_attr
DECL|notify_func|function|static u8_t notify_func(struct bt_conn *conn,struct bt_gatt_subscribe_params *param, const void *buf, u16_t len)
DECL|op|member|u8_t op;
DECL|pong_attrs|variable|pong_attrs
DECL|pong_ccc_cfg_changed|function|static void pong_ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t val)
DECL|pong_ccc_cfg|variable|pong_ccc_cfg
DECL|pong_chr_uuid|variable|pong_chr_uuid
DECL|pong_svc_uuid|variable|pong_svc_uuid
DECL|pong_svc|variable|pong_svc
DECL|pong_uuid_match|function|static bool pong_uuid_match(const u8_t *data, u8_t len)
DECL|remote_handle|variable|remote_handle
DECL|remote_ready|variable|remote_ready
DECL|subscribe_param|variable|subscribe_param
DECL|x_pos|member|s8_t x_pos;
DECL|x_vel|member|s8_t x_vel;
DECL|y_pos|member|s8_t y_pos;
DECL|y_vel|member|s8_t y_vel;
