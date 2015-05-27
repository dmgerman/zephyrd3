DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|context_port_used|function|static int context_port_used(enum ip_protocol ip_proto, uint16_t local_port)
DECL|context_sem_give|function|static void context_sem_give(struct nano_sem *chan)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|net_context_get_queue|function|struct nano_fifo *net_context_get_queue(struct net_context *context)
DECL|net_context_get_receiver_registered|function|int net_context_get_receiver_registered(struct net_context *context)
DECL|net_context_get_tuple|function|struct net_tuple *net_context_get_tuple(struct net_context *context)
DECL|net_context_get_udp_connection|function|net_context_get_udp_connection(struct net_context *context)
DECL|net_context_get|function|struct net_context *net_context_get(enum ip_protocol ip_proto,const struct net_addr *remote_addr, uint16_t remote_port, const struct net_addr *local_addr, uint16_t local_port)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_put|function|void net_context_put(struct net_context *context)
DECL|net_context_set_receiver_registered|function|void net_context_set_receiver_registered(struct net_context *context)
DECL|net_context|struct|struct net_context {
DECL|receiver_registered|member|bool receiver_registered;
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|tuple|member|struct net_tuple tuple;
DECL|udp|member|struct simple_udp_connection udp;
