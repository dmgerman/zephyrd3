DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|BT_ERR|macro|BT_ERR
DECL|BT_ERR|macro|BT_ERR
DECL|BT_INFO|macro|BT_INFO
DECL|BT_INFO|macro|BT_INFO
DECL|BT_WARN|macro|BT_WARN
DECL|BT_WARN|macro|BT_WARN
DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|__packed|variable|__packed
DECL|_next|member|struct bt_conn_cb *_next;
DECL|bt_conn_cb|struct|struct bt_conn_cb {
DECL|bt_driver|struct|struct bt_driver {
DECL|bt_eir|struct|struct bt_eir {
DECL|connected|member|void (*connected)(const bt_addr_le_t *addr);
DECL|data|member|uint8_t data[29];
DECL|disconnected|member|void (*disconnected)(const bt_addr_le_t *addr);
DECL|head_reserve|member|size_t head_reserve;
DECL|len|member|uint8_t len;
DECL|open|member|int (*open)(void);
DECL|send|member|int (*send)(struct bt_buf *buf);
DECL|type|member|uint8_t type;
