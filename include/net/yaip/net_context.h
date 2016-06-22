DECL|NET_CONTEXT_CLOSING|enumerator|NET_CONTEXT_CLOSING = 3,
DECL|NET_CONTEXT_CONFIGURING|enumerator|NET_CONTEXT_CONFIGURING = 1,
DECL|NET_CONTEXT_FAMILY|macro|NET_CONTEXT_FAMILY
DECL|NET_CONTEXT_IDLE|enumerator|NET_CONTEXT_IDLE = 0,
DECL|NET_CONTEXT_IN_USE|macro|NET_CONTEXT_IN_USE
DECL|NET_CONTEXT_LISTEN|macro|NET_CONTEXT_LISTEN
DECL|NET_CONTEXT_PROTO|macro|NET_CONTEXT_PROTO
DECL|NET_CONTEXT_READY|enumerator|NET_CONTEXT_READY = 2,
DECL|NET_CONTEXT_REMOTE_ADDR_SET|macro|NET_CONTEXT_REMOTE_ADDR_SET
DECL|NET_CONTEXT_STATE_MASK|macro|NET_CONTEXT_STATE_MASK
DECL|NET_CONTEXT_STATE_SHIFT|macro|NET_CONTEXT_STATE_SHIFT
DECL|NET_CONTEXT_TYPE|macro|NET_CONTEXT_TYPE
DECL|__NET_CONTEXT_H|macro|__NET_CONTEXT_H
DECL|conn_handler|member|void *conn_handler;
DECL|flags|member|uint8_t flags;
DECL|iface|member|uint8_t iface;
DECL|local|member|struct sockaddr_ptr local;
DECL|net_context_accept_cb_t|typedef|typedef void (*net_context_accept_cb_t)(struct net_context *new_context,
DECL|net_context_connect_cb_t|typedef|typedef void (*net_context_connect_cb_t)(struct net_context *context,
DECL|net_context_get_family|function|static inline sa_family_t net_context_get_family(struct net_context *context)
DECL|net_context_get_iface|function|struct net_if *net_context_get_iface(struct net_context *context)
DECL|net_context_get_ip_proto|function|enum ip_protocol net_context_get_ip_proto(struct net_context *context)
DECL|net_context_get_state|function|enum net_context_state net_context_get_state(struct net_context *context)
DECL|net_context_get_type|function|enum net_sock_type net_context_get_type(struct net_context *context)
DECL|net_context_is_used|function|static inline bool net_context_is_used(struct net_context *context)
DECL|net_context_recv_cb_t|typedef|typedef void (*net_context_recv_cb_t)(struct net_context *context,
DECL|net_context_send_cb_t|typedef|typedef void (*net_context_send_cb_t)(struct net_context *context,
DECL|net_context_set_family|function|static inline void net_context_set_family(struct net_context *context, sa_family_t family)
DECL|net_context_set_iface|function|static inline void net_context_set_iface(struct net_context *context, struct net_if *iface)
DECL|net_context_set_ip_proto|function|static inline void net_context_set_ip_proto(struct net_context *context, enum ip_protocol ip_proto)
DECL|net_context_set_state|function|static inline void net_context_set_state(struct net_context *context, enum net_context_state state)
DECL|net_context_set_type|function|static inline void net_context_set_type(struct net_context *context,enum net_sock_type type)
DECL|net_context_state|enum|enum net_context_state {
DECL|net_context|struct|struct net_context {
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|recv_data_wait|member|struct nano_sem recv_data_wait;
DECL|remote|member|struct sockaddr remote;
