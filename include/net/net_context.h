DECL|NET_CONTEXT_CONFIGURING|enumerator|NET_CONTEXT_CONFIGURING = 1,
DECL|NET_CONTEXT_CONNECTED|enumerator|NET_CONTEXT_CONNECTED = 2,
DECL|NET_CONTEXT_CONNECTING|enumerator|NET_CONTEXT_CONNECTING = 1,
DECL|NET_CONTEXT_FAMILY|macro|NET_CONTEXT_FAMILY
DECL|NET_CONTEXT_IDLE|enumerator|NET_CONTEXT_IDLE = 0,
DECL|NET_CONTEXT_IN_USE|macro|NET_CONTEXT_IN_USE
DECL|NET_CONTEXT_LISTENING|enumerator|NET_CONTEXT_LISTENING = 3,
DECL|NET_CONTEXT_PROTO|macro|NET_CONTEXT_PROTO
DECL|NET_CONTEXT_READY|enumerator|NET_CONTEXT_READY = 2,
DECL|NET_CONTEXT_REMOTE_ADDR_SET|macro|NET_CONTEXT_REMOTE_ADDR_SET
DECL|NET_CONTEXT_STATE_MASK|macro|NET_CONTEXT_STATE_MASK
DECL|NET_CONTEXT_STATE_SHIFT|macro|NET_CONTEXT_STATE_SHIFT
DECL|NET_CONTEXT_TYPE|macro|NET_CONTEXT_TYPE
DECL|NET_CONTEXT_UNCONNECTED|enumerator|NET_CONTEXT_UNCONNECTED = 0,
DECL|NET_OPT_PRIORITY|enumerator|NET_OPT_PRIORITY = 1,
DECL|__NET_CONTEXT_H|macro|__NET_CONTEXT_H
DECL|accept_q|member|struct k_fifo accept_q;
DECL|conn_handler|member|struct net_conn_handle *conn_handler;
DECL|connect_cb|member|net_context_connect_cb_t connect_cb;
DECL|data_pool|member|net_pkt_get_pool_func_t data_pool;
DECL|flags|member|u8_t flags;
DECL|iface|member|u8_t iface;
DECL|local|member|struct sockaddr_ptr local;
DECL|net_app|member|void *net_app;
DECL|net_context_cb_t|typedef|typedef void (*net_context_cb_t)(struct net_context *context, void *user_data);
DECL|net_context_connect_cb_t|typedef|typedef void (*net_context_connect_cb_t)(struct net_context *context,
DECL|net_context_create_ipv4|function|struct net_pkt *net_context_create_ipv4(struct net_context *context,struct net_pkt *pkt, const struct in_addr *src, const struct in_addr *dst)
DECL|net_context_create_ipv6|function|struct net_pkt *net_context_create_ipv6(struct net_context *context,struct net_pkt *pkt, const struct in6_addr *src, const struct in6_addr *dst)
DECL|net_context_get_family|function|static inline sa_family_t net_context_get_family(struct net_context *context)
DECL|net_context_get_iface|function|struct net_if *net_context_get_iface(struct net_context *context)
DECL|net_context_get_ip_proto|function|enum net_ip_protocol net_context_get_ip_proto(struct net_context *context)
DECL|net_context_get_state|function|enum net_context_state net_context_get_state(struct net_context *context)
DECL|net_context_get_type|function|enum net_sock_type net_context_get_type(struct net_context *context)
DECL|net_context_is_used|function|static inline bool net_context_is_used(struct net_context *context)
DECL|net_context_option|enum|enum net_context_option {
DECL|net_context_recv_cb_t|typedef|typedef void (*net_context_recv_cb_t)(struct net_context *context,
DECL|net_context_send_cb_t|typedef|typedef void (*net_context_send_cb_t)(struct net_context *context,
DECL|net_context_set_family|function|static inline void net_context_set_family(struct net_context *context, sa_family_t family)
DECL|net_context_set_iface|function|static inline void net_context_set_iface(struct net_context *context, struct net_if *iface)
DECL|net_context_set_ip_proto|function|static inline void net_context_set_ip_proto(struct net_context *context, enum net_ip_protocol ip_proto)
DECL|net_context_set_state|function|static inline void net_context_set_state(struct net_context *context, enum net_context_state state)
DECL|net_context_set_type|function|static inline void net_context_set_type(struct net_context *context,enum net_sock_type type)
DECL|net_context_setup_pools|function|static inline void net_context_setup_pools(struct net_context *context, net_pkt_get_slab_func_t tx_slab, net_pkt_get_pool_func_t data_pool)
DECL|net_context_setup_pools|macro|net_context_setup_pools
DECL|net_context_state|enum|enum net_context_state {
DECL|net_context|struct|struct net_context {
DECL|net_pkt_get_pool_func_t|typedef|typedef struct net_buf_pool *(*net_pkt_get_pool_func_t)(void);
DECL|net_pkt_get_slab_func_t|typedef|typedef struct k_mem_slab *(*net_pkt_get_slab_func_t)(void);
DECL|net_tcp_accept_cb_t|typedef|typedef void (*net_tcp_accept_cb_t)(struct net_context *new_context,
DECL|options|member|} options;
DECL|priority|member|u8_t priority;
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|recv_data_wait|member|struct k_sem recv_data_wait;
DECL|recv_q|member|struct k_fifo recv_q;
DECL|refcount|member|atomic_t refcount;
DECL|remote|member|struct sockaddr remote;
DECL|send_cb|member|net_context_send_cb_t send_cb;
DECL|tcp|member|struct net_tcp *tcp;
DECL|tls|member|struct tls_context *tls;
DECL|tx_slab|member|net_pkt_get_slab_func_t tx_slab;
DECL|user_data|member|void *user_data;
