DECL|__BT_DRIVER_H|macro|__BT_DRIVER_H
DECL|bt_driver|struct|struct bt_driver {
DECL|head_reserve|member|size_t head_reserve;
DECL|open|member|int (*open)(void);
DECL|send_acl|member|int (*send_acl)(struct net_buf *buf);
DECL|send_cmd|member|int (*send_cmd)(struct net_buf *buf);
