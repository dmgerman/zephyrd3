DECL|BT_L2CAP_BUF_SIZE|macro|BT_L2CAP_BUF_SIZE
DECL|BT_L2CAP_CHAN_SEND_RESERVE|macro|BT_L2CAP_CHAN_SEND_RESERVE
DECL|BT_L2CAP_CONFIG|enumerator|BT_L2CAP_CONFIG,
DECL|BT_L2CAP_CONNECTED|enumerator|BT_L2CAP_CONNECTED,
DECL|BT_L2CAP_CONNECT|enumerator|BT_L2CAP_CONNECT,
DECL|BT_L2CAP_DISCONNECTED|enumerator|BT_L2CAP_DISCONNECTED,
DECL|BT_L2CAP_DISCONNECT|enumerator|BT_L2CAP_DISCONNECT,
DECL|BT_L2CAP_HDR_SIZE|macro|BT_L2CAP_HDR_SIZE
DECL|BT_L2CAP_LE_CHAN|macro|BT_L2CAP_LE_CHAN
DECL|ZEPHYR_INCLUDE_BLUETOOTH_L2CAP_H_|macro|ZEPHYR_INCLUDE_BLUETOOTH_L2CAP_H_
DECL|_sdu_len|member|u16_t _sdu_len;
DECL|_sdu|member|struct net_buf *_sdu;
DECL|accept|member|int (*accept)(struct bt_conn *conn, struct bt_l2cap_chan **chan);
DECL|alloc_buf|member|struct net_buf *(*alloc_buf)(struct bt_l2cap_chan *chan);
DECL|bt_l2cap_br_chan|struct|struct bt_l2cap_br_chan {
DECL|bt_l2cap_br_endpoint|struct|struct bt_l2cap_br_endpoint {
DECL|bt_l2cap_chan_destroy_t|typedef|typedef void (*bt_l2cap_chan_destroy_t)(struct bt_l2cap_chan *chan);
DECL|bt_l2cap_chan_ops|struct|struct bt_l2cap_chan_ops {
DECL|bt_l2cap_chan_state_t|typedef|} __packed bt_l2cap_chan_state_t;
DECL|bt_l2cap_chan_state|enum|typedef enum bt_l2cap_chan_state {
DECL|bt_l2cap_chan|struct|struct bt_l2cap_chan {
DECL|bt_l2cap_le_chan|struct|struct bt_l2cap_le_chan {
DECL|bt_l2cap_le_endpoint|struct|struct bt_l2cap_le_endpoint {
DECL|bt_l2cap_server|struct|struct bt_l2cap_server {
DECL|chan|member|struct bt_l2cap_chan chan;
DECL|chan|member|struct bt_l2cap_chan chan;
DECL|cid|member|u16_t cid;
DECL|cid|member|u16_t cid;
DECL|connected|member|void (*connected)(struct bt_l2cap_chan *chan);
DECL|conn|member|struct bt_conn *conn;
DECL|credits|member|struct k_sem credits;
DECL|destroy|member|bt_l2cap_chan_destroy_t destroy;
DECL|disconnected|member|void (*disconnected)(struct bt_l2cap_chan *chan);
DECL|encrypt_change|member|void (*encrypt_change)(struct bt_l2cap_chan *chan, u8_t hci_status);
DECL|flags|member|atomic_t flags[1];
DECL|ident|member|u8_t ident;
DECL|init_credits|member|u16_t init_credits;
DECL|mps|member|u16_t mps;
DECL|mtu|member|u16_t mtu;
DECL|mtu|member|u16_t mtu;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|ops|member|struct bt_l2cap_chan_ops *ops;
DECL|psm|member|u16_t psm;
DECL|psm|member|u16_t psm;
DECL|recv|member|void (*recv)(struct bt_l2cap_chan *chan, struct net_buf *buf);
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|rtx_work|member|struct k_delayed_work rtx_work;
DECL|rx|member|struct bt_l2cap_br_endpoint rx;
DECL|rx|member|struct bt_l2cap_le_endpoint rx;
DECL|sec_level|member|bt_security_t sec_level;
DECL|state|member|bt_l2cap_chan_state_t state;
DECL|tx_buf|member|struct net_buf *tx_buf;
DECL|tx_queue|member|struct k_fifo tx_queue;
DECL|tx|member|struct bt_l2cap_br_endpoint tx;
DECL|tx|member|struct bt_l2cap_le_endpoint tx;
