DECL|BT_ADDR_LE_STR_LEN|macro|BT_ADDR_LE_STR_LEN
DECL|BT_ADDR_STR_LEN|macro|BT_ADDR_STR_LEN
DECL|BT_DATA_BYTES|macro|BT_DATA_BYTES
DECL|BT_DATA|macro|BT_DATA
DECL|BT_LE_ADV_CONN|macro|BT_LE_ADV_CONN
DECL|BT_LE_ADV_NCONN|macro|BT_LE_ADV_NCONN
DECL|BT_LE_ADV_OPT_CONNECTABLE|enumerator|BT_LE_ADV_OPT_CONNECTABLE = BIT(0),
DECL|BT_LE_ADV_PARAM|macro|BT_LE_ADV_PARAM
DECL|BT_LE_SCAN_ACTIVE|macro|BT_LE_SCAN_ACTIVE
DECL|BT_LE_SCAN_PARAM|macro|BT_LE_SCAN_PARAM
DECL|BT_LE_SCAN_PASSIVE|macro|BT_LE_SCAN_PASSIVE
DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|addr|member|bt_addr_t addr;
DECL|bt_addr_le_to_str|function|static inline int bt_addr_le_to_str(const bt_addr_le_t *addr, char *str, size_t len)
DECL|bt_addr_to_str|function|static inline int bt_addr_to_str(const bt_addr_t *addr, char *str, size_t len)
DECL|bt_br_discovery_cb_t|typedef|typedef void bt_br_discovery_cb_t(struct bt_br_discovery_result *results,
DECL|bt_br_discovery_param|struct|struct bt_br_discovery_param {
DECL|bt_br_discovery_result|struct|struct bt_br_discovery_result {
DECL|bt_data|struct|struct bt_data {
DECL|bt_le_adv_param|struct|struct bt_le_adv_param {
DECL|bt_le_scan_cb_t|typedef|typedef void bt_le_scan_cb_t(const bt_addr_le_t *addr, int8_t rssi,
DECL|bt_le_scan_param|struct|struct bt_le_scan_param {
DECL|bt_ready_cb_t|typedef|typedef void (*bt_ready_cb_t)(int err);
DECL|cod|member|uint8_t cod[3];
DECL|data_len|member|uint8_t data_len;
DECL|data|member|const uint8_t *data;
DECL|eir|member|uint8_t eir[240];
DECL|filter_dup|member|uint8_t filter_dup;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval|member|uint16_t interval;
DECL|length|member|uint8_t length;
DECL|limited_discovery|member|bool limited_discovery;
DECL|options|member|uint8_t options;
DECL|private|member|uint8_t private[4];
DECL|rssi|member|int8_t rssi;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|window|member|uint16_t window;
