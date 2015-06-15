DECL|__BT_CONN_H|macro|__BT_CONN_H
DECL|_next|member|struct bt_conn_cb *_next;
DECL|bt_conn_cb|struct|struct bt_conn_cb {
DECL|connected|member|void (*connected)(const bt_addr_le_t *addr);
DECL|disconnected|member|void (*disconnected)(const bt_addr_le_t *addr);
