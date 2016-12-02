DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|context_port_used|function|static int context_port_used(enum ip_protocol ip_proto, uint16_t local_port, const struct net_addr *local_addr)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|net_context_get|function|struct net_context *net_context_get(enum ip_protocol ip_proto, const struct net_addr *remote_addr, uint16_t remote_port, struct net_addr *local_addr, uint16_t local_port)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_put|function|void net_context_put(struct net_context *context)
