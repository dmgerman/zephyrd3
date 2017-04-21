DECL|__CONNECTION_H|macro|__CONNECTION_H
DECL|cb|member|net_conn_cb_t cb;
DECL|flags|member|u8_t flags;
DECL|local_addr|member|struct sockaddr local_addr;
DECL|net_conn_cb_t|typedef|typedef enum net_verdict (*net_conn_cb_t)(struct net_conn *conn,
DECL|net_conn_foreach_cb_t|typedef|typedef void (*net_conn_foreach_cb_t)(struct net_conn *conn, void *user_data);
DECL|net_conn_input|function|static inline enum net_verdict net_conn_input(enum net_ip_protocol proto, struct net_pkt *pkt)
DECL|net_conn|struct|struct net_conn {
DECL|proto|member|u8_t proto;
DECL|rank|member|u8_t rank;
DECL|remote_addr|member|struct sockaddr remote_addr;
DECL|user_data|member|void *user_data;
