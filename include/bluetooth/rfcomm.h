DECL|__BT_RFCOMM_H|macro|__BT_RFCOMM_H
DECL|_next|member|struct bt_rfcomm_dlc *_next;
DECL|_next|member|struct bt_rfcomm_server *_next;
DECL|accept|member|int (*accept)(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc);
DECL|bt_rfcomm_dlc_ops|struct|struct bt_rfcomm_dlc_ops {
DECL|bt_rfcomm_dlc|struct|struct bt_rfcomm_dlc {
DECL|bt_rfcomm_server|struct|struct bt_rfcomm_server {
DECL|channel|member|uint8_t channel;
DECL|connected|member|void (*connected)(struct bt_rfcomm_dlc *dlc);
DECL|disconnected|member|void (*disconnected)(struct bt_rfcomm_dlc *dlc);
DECL|dlci|member|uint8_t dlci;
DECL|ops|member|struct bt_rfcomm_dlc_ops *ops;
DECL|recv|member|void (*recv)(struct bt_rfcomm_dlc *dlc, struct net_buf *buf);
DECL|session|member|struct bt_rfcomm_session *session;
