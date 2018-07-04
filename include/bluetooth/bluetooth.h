DECL|BT_ADDR_LE_STR_LEN|macro|BT_ADDR_LE_STR_LEN
DECL|BT_ADDR_STR_LEN|macro|BT_ADDR_STR_LEN
DECL|BT_DATA_BYTES|macro|BT_DATA_BYTES
DECL|BT_DATA|macro|BT_DATA
DECL|BT_ID_DEFAULT|macro|BT_ID_DEFAULT
DECL|BT_LE_ADV_CONN_NAME|macro|BT_LE_ADV_CONN_NAME
DECL|BT_LE_ADV_CONN|macro|BT_LE_ADV_CONN
DECL|BT_LE_ADV_NCONN_NAME|macro|BT_LE_ADV_NCONN_NAME
DECL|BT_LE_ADV_NCONN|macro|BT_LE_ADV_NCONN
DECL|BT_LE_ADV_OPT_CONNECTABLE|enumerator|BT_LE_ADV_OPT_CONNECTABLE = BIT(0),
DECL|BT_LE_ADV_OPT_NONE|enumerator|BT_LE_ADV_OPT_NONE = 0,
DECL|BT_LE_ADV_OPT_ONE_TIME|enumerator|BT_LE_ADV_OPT_ONE_TIME = BIT(1),
DECL|BT_LE_ADV_OPT_USE_IDENTITY|enumerator|BT_LE_ADV_OPT_USE_IDENTITY = BIT(2),
DECL|BT_LE_ADV_OPT_USE_NAME|enumerator|BT_LE_ADV_OPT_USE_NAME = BIT(3),
DECL|BT_LE_ADV_PARAM|macro|BT_LE_ADV_PARAM
DECL|BT_LE_SCAN_ACTIVE|macro|BT_LE_SCAN_ACTIVE
DECL|BT_LE_SCAN_PARAM|macro|BT_LE_SCAN_PARAM
DECL|BT_LE_SCAN_PASSIVE|macro|BT_LE_SCAN_PASSIVE
DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|_priv|member|u8_t _priv[4];
DECL|addr|member|bt_addr_le_t addr;
DECL|addr|member|bt_addr_t addr;
DECL|addr|member|bt_addr_t addr;
DECL|bt_addr_le_to_str|function|static inline int bt_addr_le_to_str(const bt_addr_le_t *addr, char *str, size_t len)
DECL|bt_addr_to_str|function|static inline int bt_addr_to_str(const bt_addr_t *addr, char *str, size_t len)
DECL|bt_br_discovery_cb_t|typedef|typedef void bt_br_discovery_cb_t(struct bt_br_discovery_result *results,
DECL|bt_br_discovery_param|struct|struct bt_br_discovery_param {
DECL|bt_br_discovery_result|struct|struct bt_br_discovery_result {
DECL|bt_br_oob|struct|struct bt_br_oob {
DECL|bt_data|struct|struct bt_data {
DECL|bt_le_adv_param|struct|struct bt_le_adv_param {
DECL|bt_le_oob|struct|struct bt_le_oob {
DECL|bt_le_scan_cb_t|typedef|typedef void bt_le_scan_cb_t(const bt_addr_le_t *addr, s8_t rssi,
DECL|bt_le_scan_param|struct|struct bt_le_scan_param {
DECL|bt_ready_cb_t|typedef|typedef void (*bt_ready_cb_t)(int err);
DECL|cod|member|u8_t cod[3];
DECL|data_len|member|u8_t data_len;
DECL|data|member|const u8_t *data;
DECL|eir|member|u8_t eir[240];
DECL|filter_dup|member|u8_t filter_dup;
DECL|id|member|u8_t id;
DECL|interval_max|member|u16_t interval_max;
DECL|interval_min|member|u16_t interval_min;
DECL|interval|member|u16_t interval;
DECL|length|member|u8_t length;
DECL|limited|member|bool limited;
DECL|options|member|u8_t options;
DECL|rssi|member|s8_t rssi;
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
DECL|window|member|u16_t window;
