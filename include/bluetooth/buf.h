DECL|BT_ACL|enumerator|BT_ACL,
DECL|BT_BUF_MAX_DATA|macro|BT_BUF_MAX_DATA
DECL|BT_CMD|enumerator|BT_CMD,
DECL|BT_EVT|enumerator|BT_EVT,
DECL|__BT_BUF_H|macro|__BT_BUF_H
DECL|__unused|member|int __unused;
DECL|bt_buf_tail|macro|bt_buf_tail
DECL|bt_buf_type|enum|enum bt_buf_type {
DECL|bt_buf|struct|struct bt_buf {
DECL|buf|member|uint8_t buf[BT_BUF_MAX_DATA];
DECL|data|member|uint8_t *data;
DECL|len|member|uint8_t len;
DECL|opcode|member|uint16_t opcode;
DECL|sync|member|struct nano_sem *sync;
DECL|type|member|uint8_t type;
