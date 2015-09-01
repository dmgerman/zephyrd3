DECL|BT_SECURITY_FIPS|enumerator|BT_SECURITY_FIPS, /** Authenticated LE Secure Connections and
DECL|BT_SECURITY_HIGH|enumerator|BT_SECURITY_HIGH, /** encryption and authentication (MITM). */
DECL|BT_SECURITY_LOW|enumerator|BT_SECURITY_LOW, /** No encryption and no authentication. */
DECL|BT_SECURITY_MEDIUM|enumerator|BT_SECURITY_MEDIUM, /** encryption and no authentication (no MITM). */
DECL|__BT_CONN_H|macro|__BT_CONN_H
DECL|_next|member|struct bt_conn_cb *_next;
DECL|bt_conn_cb|struct|struct bt_conn_cb {
DECL|bt_security_t|typedef|} bt_security_t;
DECL|connected|member|void (*connected)(struct bt_conn *conn);
DECL|disconnected|member|void (*disconnected)(struct bt_conn *conn);
DECL|identity_resolved|member|void (*identity_resolved)(struct bt_conn *conn,
