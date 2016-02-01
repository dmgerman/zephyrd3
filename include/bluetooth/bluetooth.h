DECL|BT_ADDR_LE_STR_LEN|macro|BT_ADDR_LE_STR_LEN
DECL|BT_ADDR_STR_LEN|macro|BT_ADDR_STR_LEN
DECL|BT_DATA_BYTES|macro|BT_DATA_BYTES
DECL|BT_DATA|macro|BT_DATA
DECL|BT_LE_ADV_ADDR_IDENTITY|enumerator|BT_LE_ADV_ADDR_IDENTITY,
DECL|BT_LE_ADV_ADDR_NRPA|enumerator|BT_LE_ADV_ADDR_NRPA,
DECL|BT_LE_ADV_PARAM|macro|BT_LE_ADV_PARAM
DECL|BT_LE_ADV|macro|BT_LE_ADV
DECL|BT_LE_SCAN_ACTIVE|macro|BT_LE_SCAN_ACTIVE
DECL|BT_LE_SCAN_PARAM|macro|BT_LE_SCAN_PARAM
DECL|BT_LE_SCAN_PASSIVE|macro|BT_LE_SCAN_PASSIVE
DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|addr_type|member|uint8_t addr_type;
DECL|bt_addr_le_to_str|function|static inline int bt_addr_le_to_str(const bt_addr_le_t *addr, char *str, size_t len)
DECL|bt_addr_to_str|function|static inline int bt_addr_to_str(const bt_addr_t *addr, char *str, size_t len)
DECL|bt_data|struct|struct bt_data {
DECL|bt_le_adv_param|struct|struct bt_le_adv_param {
DECL|bt_le_scan_cb_t|typedef|typedef void bt_le_scan_cb_t(const bt_addr_le_t *addr, int8_t rssi,
DECL|bt_le_scan_param|struct|struct bt_le_scan_param {
DECL|bt_ready_cb_t|typedef|typedef void (*bt_ready_cb_t)(int err);
DECL|data_len|member|uint8_t data_len;
DECL|data|member|const uint8_t *data;
DECL|filter_dup|member|uint8_t filter_dup;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval|member|uint16_t interval;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
DECL|window|member|uint16_t window;
