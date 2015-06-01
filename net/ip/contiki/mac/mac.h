DECL|MAC_H_|macro|MAC_H_
DECL|MAC_TX_COLLISION|enumerator|MAC_TX_COLLISION,
DECL|MAC_TX_DEFERRED|enumerator|MAC_TX_DEFERRED,
DECL|MAC_TX_ERR_FATAL|enumerator|MAC_TX_ERR_FATAL,
DECL|MAC_TX_ERR|enumerator|MAC_TX_ERR,
DECL|MAC_TX_NOACK|enumerator|MAC_TX_NOACK,
DECL|MAC_TX_OK|enumerator|MAC_TX_OK,
DECL|channel_check_interval|member|unsigned short (* channel_check_interval)(void);
DECL|init|member|void (* init)(void);
DECL|input|member|uint8_t (* input)(struct net_buf *buf);
DECL|mac_callback_t|typedef|typedef void (* mac_callback_t)(struct net_buf *buf, void *ptr, int status, int transmissions);
DECL|mac_driver|struct|struct mac_driver {
DECL|name|member|char *name;
DECL|off|member|int (* off)(int keep_radio_on);
DECL|on|member|int (* on)(void);
DECL|send|member|uint8_t (* send)(struct net_buf *buf, mac_callback_t sent_callback, void *ptr);
