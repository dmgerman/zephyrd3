DECL|BT_CONN_SEC_FIPS|enumerator|BT_CONN_SEC_FIPS,
DECL|BT_CONN_SEC_HIGH|enumerator|BT_CONN_SEC_HIGH,
DECL|BT_CONN_SEC_LOW|enumerator|BT_CONN_SEC_LOW,
DECL|BT_CONN_SEC_MEDIUM|enumerator|BT_CONN_SEC_MEDIUM,
DECL|__BT_CONN_H|macro|__BT_CONN_H
DECL|_next|member|struct bt_conn_cb *_next;
DECL|bt_conn_cb|struct|struct bt_conn_cb {
DECL|bt_conn_security_t|typedef|} bt_conn_security_t;
DECL|connected|member|void (*connected)(struct bt_conn *conn);
DECL|disconnected|member|void (*disconnected)(struct bt_conn *conn);
