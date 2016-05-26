DECL|DEBUG|macro|DEBUG
DECL|NET_DBG|macro|NET_DBG
DECL|NET_DBG|macro|NET_DBG
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|NET_MAX_CONTEXT|macro|NET_MAX_CONTEXT
DECL|PROCESS_THREAD|function|PROCESS_THREAD(tcp, ev, data, buf, user_data)
DECL|connection_status|member|int connection_status;
DECL|conn|member|void *conn;
DECL|context_port_used|function|static int context_port_used(enum ip_protocol ip_proto, uint16_t local_port, const struct net_addr *local_addr)
DECL|context_sem_give|function|static void context_sem_give(struct nano_sem *chan)
DECL|contexts_lock|variable|contexts_lock
DECL|contexts|variable|contexts
DECL|handle_tcp_connection|function|static int handle_tcp_connection(struct psock *p, enum tcp_event_type type, struct net_buf *buf)
DECL|net_context_find_internal_connection|function|struct net_context *net_context_find_internal_connection(void *conn)
DECL|net_context_get_connection_status|function|int net_context_get_connection_status(struct net_context *context)
DECL|net_context_get_internal_connection|function|void *net_context_get_internal_connection(struct net_context *context)
DECL|net_context_get_queue|function|struct nano_fifo *net_context_get_queue(struct net_context *context)
DECL|net_context_get_receiver_registered|function|int net_context_get_receiver_registered(struct net_context *context)
DECL|net_context_get_tuple|function|struct net_tuple *net_context_get_tuple(struct net_context *context)
DECL|net_context_get_udp_connection|function|net_context_get_udp_connection(struct net_context *context)
DECL|net_context_get|function|struct net_context *net_context_get(enum ip_protocol ip_proto,const struct net_addr *remote_addr, uint16_t remote_port, struct net_addr *local_addr, uint16_t local_port)
DECL|net_context_init|function|void net_context_init(void)
DECL|net_context_put|function|void net_context_put(struct net_context *context)
DECL|net_context_set_connection_status|function|void net_context_set_connection_status(struct net_context *context, int status)
DECL|net_context_set_internal_connection|function|void net_context_set_internal_connection(struct net_context *context, void *conn)
DECL|net_context_set_receiver_registered|function|void net_context_set_receiver_registered(struct net_context *context)
DECL|net_context_tcp_get_pending|function|struct net_buf *net_context_tcp_get_pending(struct net_context *context)
DECL|net_context_tcp_get_retry_count|function|uint8_t net_context_tcp_get_retry_count(struct net_context *context)
DECL|net_context_tcp_init|function|int net_context_tcp_init(struct net_context *context, struct net_buf *buf, enum net_tcp_type tcp_type)
DECL|net_context_tcp_send|function|int net_context_tcp_send(struct net_buf *buf)
DECL|net_context_tcp_set_pending|function|void net_context_tcp_set_pending(struct net_context *context, struct net_buf *buf)
DECL|net_context_tcp_set_retry_count|function|void net_context_tcp_set_retry_count(struct net_context *context, uint8_t count)
DECL|net_context_unset_receiver_registered|function|void net_context_unset_receiver_registered(struct net_context *context)
DECL|net_context|struct|struct net_context {
DECL|pending|member|struct net_buf *pending;
DECL|ps|member|struct psock ps;
DECL|receiver_registered|member|bool receiver_registered;
DECL|retry_count|member|uint8_t retry_count;
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|tcp_type|member|enum net_tcp_type tcp_type;
DECL|tcp|member|struct process tcp;
DECL|tuple|member|struct net_tuple tuple;
DECL|udp|member|struct simple_udp_connection udp;
