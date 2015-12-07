DECL|BT_CONN_TYPE_BR|enumerator|BT_CONN_TYPE_BR, /** BR/EDR Connection Type */
DECL|BT_CONN_TYPE_LE|enumerator|BT_CONN_TYPE_LE, /** LE Connection Type */
DECL|BT_LE_CONN_PARAM_DEFAULT|macro|BT_LE_CONN_PARAM_DEFAULT
DECL|BT_LE_CONN_PARAM|macro|BT_LE_CONN_PARAM
DECL|BT_SECURITY_FIPS|enumerator|BT_SECURITY_FIPS, /** Authenticated LE Secure Connections and
DECL|BT_SECURITY_HIGH|enumerator|BT_SECURITY_HIGH, /** encryption and authentication (MITM). */
DECL|BT_SECURITY_LOW|enumerator|BT_SECURITY_LOW, /** No encryption and no authentication. */
DECL|BT_SECURITY_MEDIUM|enumerator|BT_SECURITY_MEDIUM, /** encryption and no authentication (no MITM). */
DECL|__BT_CONN_H|macro|__BT_CONN_H
DECL|_next|member|struct bt_conn_cb *_next;
DECL|br|member|struct bt_conn_br_info br;
DECL|bt_conn_br_info|struct|struct bt_conn_br_info {};
DECL|bt_conn_cb|struct|struct bt_conn_cb {
DECL|bt_conn_info|struct|struct bt_conn_info {
DECL|bt_conn_le_info|struct|struct bt_conn_le_info {
DECL|bt_le_conn_param|struct|struct bt_le_conn_param {
DECL|bt_security_t|typedef|} bt_security_t;
DECL|connected|member|void (*connected)(struct bt_conn *conn);
DECL|disconnected|member|void (*disconnected)(struct bt_conn *conn);
DECL|dst|member|const bt_addr_le_t *dst; /** Destination Address */
DECL|identity_resolved|member|void (*identity_resolved)(struct bt_conn *conn,
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|latency|member|uint16_t latency;
DECL|le|member|struct bt_conn_le_info le;
DECL|security_changed|member|void (*security_changed)(struct bt_conn *conn, bt_security_t level);
DECL|src|member|const bt_addr_le_t *src; /** Source Address */
DECL|timeout|member|uint16_t timeout;
DECL|type|member|uint8_t type;
