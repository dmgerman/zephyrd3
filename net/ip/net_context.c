DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|context_sem_give|function|static void context_sem_give(struct nano_sem *chan)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|net_context_get_tuple|function|struct net_tuple *net_context_get_tuple(struct net_context *context)
DECL|net_context_get|function|struct net_context *net_context_get(enum ip_protocol ip_proto,const struct net_addr *remote_addr, uint16_t remote_port, const struct net_addr *local_addr, uint16_t local_port)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_put|function|void net_context_put(struct net_context *context)
DECL|net_context|struct|struct net_context {
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|tuple|member|struct net_tuple tuple;
