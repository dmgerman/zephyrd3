DECL|BT_L2CAP_CHAN_SEND_RESERVE|macro|BT_L2CAP_CHAN_SEND_RESERVE
DECL|__BT_L2CAP_H|macro|__BT_L2CAP_H
DECL|_ident|member|uint8_t _ident;
DECL|_next|member|struct bt_l2cap_chan *_next;
DECL|_next|member|struct bt_l2cap_server *_next;
DECL|accept|member|int (*accept)(struct bt_conn *conn, struct bt_l2cap_chan **chan);
DECL|bt_l2cap_chan_ops|struct|struct bt_l2cap_chan_ops {
DECL|bt_l2cap_chan|struct|struct bt_l2cap_chan {
DECL|bt_l2cap_endpoint|struct|struct bt_l2cap_endpoint {
DECL|bt_l2cap_server|struct|struct bt_l2cap_server {
DECL|cid|member|uint16_t cid;
DECL|connected|member|void (*connected)(struct bt_l2cap_chan *chan);
DECL|conn|member|struct bt_conn *conn;
DECL|credits|member|struct nano_sem credits;
DECL|disconnected|member|void (*disconnected)(struct bt_l2cap_chan *chan);
DECL|encrypt_change|member|void (*encrypt_change)(struct bt_l2cap_chan *chan);
DECL|mps|member|uint16_t mps;
DECL|mtu|member|uint16_t mtu;
DECL|ops|member|struct bt_l2cap_chan_ops *ops;
DECL|psm|member|uint16_t psm;
DECL|recv|member|void (*recv)(struct bt_l2cap_chan *chan,
DECL|rx|member|struct bt_l2cap_endpoint rx;
DECL|tx|member|struct bt_l2cap_endpoint tx;
