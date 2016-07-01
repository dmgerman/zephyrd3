DECL|BT_L2CAP_CHAN_SEND_RESERVE|macro|BT_L2CAP_CHAN_SEND_RESERVE
DECL|BT_L2CAP_LE_CHAN|macro|BT_L2CAP_LE_CHAN
DECL|__BT_L2CAP_H|macro|__BT_L2CAP_H
DECL|_next|member|struct bt_l2cap_chan *_next;
DECL|_next|member|struct bt_l2cap_server *_next;
DECL|_sdu_len|member|uint16_t _sdu_len;
DECL|_sdu|member|struct net_buf *_sdu;
DECL|accept|member|int (*accept)(struct bt_conn *conn, struct bt_l2cap_chan **chan);
DECL|alloc_buf|member|struct net_buf *(*alloc_buf)(struct bt_l2cap_chan *chan);
DECL|bt_l2cap_br_chan|struct|struct bt_l2cap_br_chan {
DECL|bt_l2cap_br_endpoint|struct|struct bt_l2cap_br_endpoint {
DECL|bt_l2cap_chan_ops|struct|struct bt_l2cap_chan_ops {
DECL|bt_l2cap_chan|struct|struct bt_l2cap_chan {
DECL|bt_l2cap_le_chan|struct|struct bt_l2cap_le_chan {
DECL|bt_l2cap_le_endpoint|struct|struct bt_l2cap_le_endpoint {
DECL|bt_l2cap_server|struct|struct bt_l2cap_server {
DECL|chan|member|struct bt_l2cap_chan chan;
DECL|chan|member|struct bt_l2cap_chan chan;
DECL|cid|member|uint16_t cid;
DECL|cid|member|uint16_t cid;
DECL|connected|member|void (*connected)(struct bt_l2cap_chan *chan);
DECL|conn|member|struct bt_conn *conn;
DECL|credits|member|struct nano_sem credits;
DECL|destroy|member|void (*destroy)(struct bt_l2cap_chan *chan);
DECL|disconnected|member|void (*disconnected)(struct bt_l2cap_chan *chan);
DECL|encrypt_change|member|void (*encrypt_change)(struct bt_l2cap_chan *chan);
DECL|ident|member|uint8_t ident;
DECL|mps|member|uint16_t mps;
DECL|mtu|member|uint16_t mtu;
DECL|mtu|member|uint16_t mtu;
DECL|ops|member|struct bt_l2cap_chan_ops *ops;
DECL|psm|member|uint16_t psm;
DECL|recv|member|void (*recv)(struct bt_l2cap_chan *chan, struct net_buf *buf);
DECL|rx|member|struct bt_l2cap_br_endpoint rx;
DECL|rx|member|struct bt_l2cap_le_endpoint rx;
DECL|tx|member|struct bt_l2cap_br_endpoint tx;
DECL|tx|member|struct bt_l2cap_le_endpoint tx;
