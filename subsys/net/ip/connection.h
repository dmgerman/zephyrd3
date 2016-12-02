DECL|__CONNECTION_H|macro|__CONNECTION_H
DECL|cb|member|net_conn_cb_t cb;
DECL|flags|member|uint8_t flags;
DECL|local_addr|member|struct sockaddr local_addr;
DECL|net_conn_cb_t|typedef|typedef enum net_verdict (*net_conn_cb_t)(struct net_conn *conn,
DECL|net_conn_input|function|static inline enum net_verdict net_conn_input(enum net_ip_protocol proto, struct net_buf *buf)
DECL|net_conn|struct|struct net_conn {
DECL|proto|member|uint8_t proto;
DECL|rank|member|uint8_t rank;
DECL|remote_addr|member|struct sockaddr remote_addr;
DECL|user_data|member|void *user_data;
