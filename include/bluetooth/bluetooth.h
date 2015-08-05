DECL|BT_ADDR_LE_STR_LEN|macro|BT_ADDR_LE_STR_LEN
DECL|BT_ADDR_STR_LEN|macro|BT_ADDR_STR_LEN
DECL|BT_SCAN_FILTER_DUP_DISABLE|enumerator|BT_SCAN_FILTER_DUP_DISABLE,
DECL|BT_SCAN_FILTER_DUP_ENABLE|enumerator|BT_SCAN_FILTER_DUP_ENABLE,
DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|__packed|variable|__packed
DECL|bt_addr_le_to_str|function|static inline int bt_addr_le_to_str(const bt_addr_le_t *addr, char *str, size_t len)
DECL|bt_addr_to_str|function|static inline int bt_addr_to_str(const bt_addr_t *addr, char *str, size_t len)
DECL|bt_auth_cb|struct|struct bt_auth_cb {
DECL|bt_eir|struct|struct bt_eir {
DECL|bt_le_scan_cb_t|typedef|typedef void bt_le_scan_cb_t(const bt_addr_le_t *addr, int8_t rssi,
DECL|bt_ready_cb_t|typedef|typedef void (*bt_ready_cb_t)(int err);
DECL|bt_scan_filter_dup_t|typedef|} bt_scan_filter_dup_t;
DECL|cancel|member|void (*cancel)(struct bt_conn *conn);
DECL|data|member|uint8_t data[29];
DECL|len|member|uint8_t len;
DECL|passkey_display|member|void (*passkey_display)(struct bt_conn *conn, unsigned int passkey);
DECL|type|member|uint8_t type;
