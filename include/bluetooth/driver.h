DECL|BT_ACL_IN|enumerator|BT_ACL_IN, /** Incoming ACL data */
DECL|BT_ACL_OUT|enumerator|BT_ACL_OUT, /** Outgoing ACL data */
DECL|BT_CMD|enumerator|BT_CMD, /** HCI command */
DECL|BT_EVT|enumerator|BT_EVT, /** HCI event */
DECL|__BT_DRIVER_H|macro|__BT_DRIVER_H
DECL|bt_buf_type|enum|enum bt_buf_type {
DECL|bt_driver|struct|struct bt_driver {
DECL|head_reserve|member|size_t head_reserve;
DECL|open|member|int (*open)(void);
DECL|send_acl|member|int (*send_acl)(struct net_buf *buf);
DECL|send_cmd|member|int (*send_cmd)(struct net_buf *buf);
