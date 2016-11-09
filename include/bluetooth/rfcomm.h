DECL|BT_RFCOMM_CHAN_HFP_AG|enumerator|BT_RFCOMM_CHAN_HFP_AG,
DECL|BT_RFCOMM_CHAN_HFP_HF|enumerator|BT_RFCOMM_CHAN_HFP_HF = 1,
DECL|BT_RFCOMM_CHAN_HSP_AG|enumerator|BT_RFCOMM_CHAN_HSP_AG,
DECL|BT_RFCOMM_CHAN_HSP_HS|enumerator|BT_RFCOMM_CHAN_HSP_HS,
DECL|BT_RFCOMM_CHAN_SPP|enumerator|BT_RFCOMM_CHAN_SPP,
DECL|BT_RFCOMM_ROLE_ACCEPTOR|enumerator|BT_RFCOMM_ROLE_ACCEPTOR,
DECL|BT_RFCOMM_ROLE_INITIATOR|enumerator|BT_RFCOMM_ROLE_INITIATOR
DECL|__BT_RFCOMM_H|macro|__BT_RFCOMM_H
DECL|_next|member|struct bt_rfcomm_dlc *_next;
DECL|_next|member|struct bt_rfcomm_server *_next;
DECL|accept|member|int (*accept)(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc);
DECL|bt_rfcomm_dlc_ops|struct|struct bt_rfcomm_dlc_ops {
DECL|bt_rfcomm_dlc|struct|struct bt_rfcomm_dlc {
DECL|bt_rfcomm_role_t|typedef|} __packed bt_rfcomm_role_t;
DECL|bt_rfcomm_role|enum|typedef enum bt_rfcomm_role {
DECL|bt_rfcomm_server|struct|struct bt_rfcomm_server {
DECL|channel|member|uint8_t channel;
DECL|connected|member|void (*connected)(struct bt_rfcomm_dlc *dlc);
DECL|disconnected|member|void (*disconnected)(struct bt_rfcomm_dlc *dlc);
DECL|dlci|member|uint8_t dlci;
DECL|mtu|member|uint16_t mtu;
DECL|ops|member|struct bt_rfcomm_dlc_ops *ops;
DECL|recv|member|void (*recv)(struct bt_rfcomm_dlc *dlc, struct net_buf *buf);
DECL|required_sec_level|member|bt_security_t required_sec_level;
DECL|role|member|bt_rfcomm_role_t role;
DECL|rx_credit|member|uint8_t rx_credit;
DECL|session|member|struct bt_rfcomm_session *session;
DECL|state|member|uint8_t state;
DECL|tx_credits|member|struct k_sem tx_credits;
DECL|tx_queue|member|struct nano_fifo tx_queue;
