DECL|__NET_CONTEXT_H|macro|__NET_CONTEXT_H
DECL|iface|member|struct net_if *iface;
DECL|net_context_get_iface|function|struct net_if *net_context_get_iface(struct net_context *context)
DECL|net_context_get_queue|function|struct nano_fifo *net_context_get_queue(struct net_context *context)
DECL|net_context_get_tuple|function|struct net_tuple *net_context_get_tuple(struct net_context *context)
DECL|net_context_set_iface|function|static inline void net_context_set_iface(struct net_context *context, struct net_if *iface)
DECL|net_context|struct|struct net_context {
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|tuple|member|struct net_tuple tuple;
