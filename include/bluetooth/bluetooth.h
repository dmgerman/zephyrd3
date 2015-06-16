DECL|__BT_BLUETOOTH_H|macro|__BT_BLUETOOTH_H
DECL|__packed|variable|__packed
DECL|bt_driver|struct|struct bt_driver {
DECL|bt_eir|struct|struct bt_eir {
DECL|data|member|uint8_t data[29];
DECL|head_reserve|member|size_t head_reserve;
DECL|len|member|uint8_t len;
DECL|open|member|int (*open)(void);
DECL|send|member|int (*send)(struct bt_buf *buf);
DECL|type|member|uint8_t type;
