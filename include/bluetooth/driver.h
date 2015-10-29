DECL|BT_ACL_IN|enumerator|BT_ACL_IN, /** Incoming ACL data */
DECL|BT_ACL_OUT|enumerator|BT_ACL_OUT, /** Outgoing ACL data */
DECL|BT_CMD|enumerator|BT_CMD, /** HCI command */
DECL|BT_EVT|enumerator|BT_EVT, /** HCI event */
DECL|__BT_DRIVER_H|macro|__BT_DRIVER_H
DECL|bt_buf_type|enum|enum bt_buf_type {
DECL|bt_driver|struct|struct bt_driver {
DECL|open|member|int (*open)(void);
DECL|recv_reserve|member|size_t recv_reserve;
DECL|send_reserve|member|size_t send_reserve;
DECL|send|member|int (*send)(enum bt_buf_type type, struct net_buf *buf);
