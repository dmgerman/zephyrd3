DECL|__CONNECTION_H|macro|__CONNECTION_H
DECL|cb|member|net_conn_cb_t cb;
DECL|flags|member|uint8_t flags;
DECL|local_addr|member|struct net_addr local_addr;
DECL|local_port|member|uint16_t local_port;
DECL|net_conn_cb_t|typedef|typedef enum net_verdict (*net_conn_cb_t)(struct net_buf *buf,
DECL|net_conn_input|function|static inline enum net_verdict net_conn_input(enum ip_protocol proto, struct net_buf *buf)
DECL|net_conn|struct|struct net_conn {
DECL|proto|member|uint8_t proto;
DECL|rank|member|uint8_t rank;
DECL|remote_addr|member|struct net_addr remote_addr;
DECL|remote_port|member|uint16_t remote_port;
DECL|user_data|member|void *user_data;
