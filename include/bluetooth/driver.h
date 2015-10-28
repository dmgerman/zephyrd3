DECL|__BT_DRIVER_H|macro|__BT_DRIVER_H
DECL|bt_driver|struct|struct bt_driver {
DECL|head_reserve|member|size_t head_reserve;
DECL|open|member|int (*open)(void);
DECL|send|member|int (*send)(struct net_buf *buf);
