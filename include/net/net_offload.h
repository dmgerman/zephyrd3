DECL|ZEPHYR_INCLUDE_NET_NET_OFFLOAD_H_|macro|ZEPHYR_INCLUDE_NET_NET_OFFLOAD_H_
DECL|accept|member|int (*accept)(struct net_context *context,
DECL|bind|member|int (*bind)(struct net_context *context,
DECL|connect|member|int (*connect)(struct net_context *context,
DECL|get|member|int (*get)(sa_family_t family,
DECL|listen|member|int (*listen)(struct net_context *context, int backlog);
DECL|net_offload_accept|function|static inline int net_offload_accept(struct net_if *iface, struct net_context *context, net_tcp_accept_cb_t cb, s32_t timeout, void *user_data)
DECL|net_offload_bind|function|static inline int net_offload_bind(struct net_if *iface, struct net_context *context, const struct sockaddr *addr, socklen_t addrlen)
DECL|net_offload_connect|function|static inline int net_offload_connect(struct net_if *iface, struct net_context *context, const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb,
DECL|net_offload_get|function|static inline int net_offload_get(struct net_if *iface, sa_family_t family, enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|net_offload_listen|function|static inline int net_offload_listen(struct net_if *iface, struct net_context *context, int backlog)
DECL|net_offload_put|function|static inline int net_offload_put(struct net_if *iface, struct net_context *context)
DECL|net_offload_recv|function|static inline int net_offload_recv(struct net_if *iface, struct net_context *context, net_context_recv_cb_t cb, s32_t timeout, void *user_data)
DECL|net_offload_sendto|function|static inline int net_offload_sendto(struct net_if *iface, struct net_pkt *pkt, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb,
DECL|net_offload_send|function|static inline int net_offload_send(struct net_if *iface, struct net_pkt *pkt, net_context_send_cb_t cb, s32_t timeout, void *token,
DECL|net_offload|struct|struct net_offload {
DECL|put|member|int (*put)(struct net_context *context);
DECL|recv|member|int (*recv)(struct net_context *context,
DECL|sendto|member|int (*sendto)(struct net_pkt *pkt,
DECL|send|member|int (*send)(struct net_pkt *pkt,
