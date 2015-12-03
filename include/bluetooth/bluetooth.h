DECL|BT_ADDR_LE_STR_LEN|macro|BT_ADDR_LE_STR_LEN
DECL|BT_ADDR_STR_LEN|macro|BT_ADDR_STR_LEN
DECL|BT_LE_ADV|macro|BT_LE_ADV
DECL|BT_LE_SCAN_ACTIVE|macro|BT_LE_SCAN_ACTIVE
DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|__packed|variable|__packed
DECL|bt_addr_le_to_str|function|static inline int bt_addr_le_to_str(const bt_addr_le_t *addr, char *str, size_t len)
DECL|bt_addr_to_str|function|static inline int bt_addr_to_str(const bt_addr_t *addr, char *str, size_t len)
DECL|bt_auth_cb|struct|struct bt_auth_cb {
DECL|bt_eir|struct|struct bt_eir {
DECL|bt_le_adv_param|struct|struct bt_le_adv_param {
DECL|bt_le_scan_cb_t|typedef|typedef void bt_le_scan_cb_t(const bt_addr_le_t *addr, int8_t rssi,
DECL|bt_le_scan_param|struct|struct bt_le_scan_param {
DECL|bt_ready_cb_t|typedef|typedef void (*bt_ready_cb_t)(int err);
DECL|cancel|member|void (*cancel)(struct bt_conn *conn);
DECL|data|member|uint8_t data[29];
DECL|filter_dup|member|uint8_t filter_dup;
DECL|len|member|uint8_t len;
DECL|passkey_confirm|member|void (*passkey_confirm)(struct bt_conn *conn, unsigned int passkey);
DECL|passkey_display|member|void (*passkey_display)(struct bt_conn *conn, unsigned int passkey);
DECL|passkey_entry|member|void (*passkey_entry)(struct bt_conn *conn);
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
