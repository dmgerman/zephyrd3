DECL|BT_BR_CONN_PARAM_DEFAULT|macro|BT_BR_CONN_PARAM_DEFAULT
DECL|BT_BR_CONN_PARAM|macro|BT_BR_CONN_PARAM
DECL|BT_CONN_ROLE_MASTER|enumerator|BT_CONN_ROLE_MASTER,
DECL|BT_CONN_ROLE_SLAVE|enumerator|BT_CONN_ROLE_SLAVE,
DECL|BT_CONN_TYPE_BR|enumerator|BT_CONN_TYPE_BR,
DECL|BT_CONN_TYPE_LE|enumerator|BT_CONN_TYPE_LE,
DECL|BT_CONN_TYPE_SCO|enumerator|BT_CONN_TYPE_SCO,
DECL|BT_LE_CONN_PARAM_DEFAULT|macro|BT_LE_CONN_PARAM_DEFAULT
DECL|BT_LE_CONN_PARAM|macro|BT_LE_CONN_PARAM
DECL|BT_SECURITY_FIPS|enumerator|BT_SECURITY_FIPS,
DECL|BT_SECURITY_HIGH|enumerator|BT_SECURITY_HIGH,
DECL|BT_SECURITY_LOW|enumerator|BT_SECURITY_LOW,
DECL|BT_SECURITY_MEDIUM|enumerator|BT_SECURITY_MEDIUM,
DECL|BT_SECURITY_NONE|enumerator|BT_SECURITY_NONE,
DECL|__BT_CONN_H|macro|__BT_CONN_H
DECL|__packed|enum|typedef enum __packed {
DECL|_next|member|struct bt_conn_cb *_next;
DECL|allow_role_switch|member|bool allow_role_switch;
DECL|br|member|struct bt_conn_br_info br;
DECL|bt_br_conn_param|struct|struct bt_br_conn_param {
DECL|bt_conn_auth_cb|struct|struct bt_conn_auth_cb {
DECL|bt_conn_br_info|struct|struct bt_conn_br_info {
DECL|bt_conn_cb|struct|struct bt_conn_cb {
DECL|bt_conn_info|struct|struct bt_conn_info {
DECL|bt_conn_le_info|struct|struct bt_conn_le_info {
DECL|bt_le_conn_param|struct|struct bt_le_conn_param {
DECL|bt_security_t|typedef|} bt_security_t;
DECL|cancel|member|void (*cancel)(struct bt_conn *conn);
DECL|connected|member|void (*connected)(struct bt_conn *conn, u8_t err);
DECL|disconnected|member|void (*disconnected)(struct bt_conn *conn, u8_t reason);
DECL|dst|member|const bt_addr_le_t *dst; /** Destination Address */
DECL|dst|member|const bt_addr_t *dst; /** Destination BR/EDR address */
DECL|identity_resolved|member|void (*identity_resolved)(struct bt_conn *conn,
DECL|interval_max|member|u16_t interval_max;
DECL|interval_min|member|u16_t interval_min;
DECL|interval|member|u16_t interval; /** Connection interval */
DECL|latency|member|u16_t latency;
DECL|latency|member|u16_t latency; /** Connection slave latency */
DECL|le_param_req|member|bool (*le_param_req)(struct bt_conn *conn,
DECL|le_param_updated|member|void (*le_param_updated)(struct bt_conn *conn, u16_t interval,
DECL|le|member|struct bt_conn_le_info le;
DECL|pairing_complete|member|void (*pairing_complete)(struct bt_conn *conn, bool bonded);
DECL|pairing_confirm|member|void (*pairing_confirm)(struct bt_conn *conn);
DECL|pairing_failed|member|void (*pairing_failed)(struct bt_conn *conn);
DECL|passkey_confirm|member|void (*passkey_confirm)(struct bt_conn *conn, unsigned int passkey);
DECL|passkey_display|member|void (*passkey_display)(struct bt_conn *conn, unsigned int passkey);
DECL|passkey_entry|member|void (*passkey_entry)(struct bt_conn *conn);
DECL|pincode_entry|member|void (*pincode_entry)(struct bt_conn *conn, bool highsec);
DECL|role|member|u8_t role;
DECL|security_changed|member|void (*security_changed)(struct bt_conn *conn, bt_security_t level);
DECL|src|member|const bt_addr_le_t *src; /** Source Address */
DECL|timeout|member|u16_t timeout;
DECL|timeout|member|u16_t timeout; /** Connection supervision timeout */
DECL|type|member|u8_t type;
