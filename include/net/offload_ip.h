DECL|__OFFLOAD_IP_H__|macro|__OFFLOAD_IP_H__
DECL|accept|member|int (*accept)(struct net_context *context,
DECL|bind|member|int (*bind)(struct net_context *context,
DECL|connect|member|int (*connect)(struct net_context *context,
DECL|get|member|int (*get)(sa_family_t family,
DECL|listen|member|int (*listen)(struct net_context *context, int backlog);
DECL|net_l2_offload_ip_accept|function|static inline int net_l2_offload_ip_accept(struct net_if *iface, struct net_context *context, net_context_accept_cb_t cb, int32_t timeout, void *user_data)
DECL|net_l2_offload_ip_bind|function|static inline int net_l2_offload_ip_bind(struct net_if *iface, struct net_context *context, const struct sockaddr *addr, socklen_t addrlen)
DECL|net_l2_offload_ip_connect|function|static inline int net_l2_offload_ip_connect(struct net_if *iface, struct net_context *context, const struct sockaddr *addr, socklen_t addrlen, net_context_connect_cb_t cb,
DECL|net_l2_offload_ip_get|function|static inline int net_l2_offload_ip_get(struct net_if *iface,sa_family_t family, enum net_sock_type type, enum net_ip_protocol ip_proto, struct net_context **context)
DECL|net_l2_offload_ip_listen|function|static inline int net_l2_offload_ip_listen(struct net_if *iface, struct net_context *context, int backlog)
DECL|net_l2_offload_ip_put|function|static inline int net_l2_offload_ip_put(struct net_if *iface,struct net_context *context)
DECL|net_l2_offload_ip_recv|function|static inline int net_l2_offload_ip_recv(struct net_if *iface, struct net_context *context, net_context_recv_cb_t cb, int32_t timeout, void *user_data)
DECL|net_l2_offload_ip_sendto|function|static inline int net_l2_offload_ip_sendto(struct net_if *iface, struct net_buf *buf, const struct sockaddr *dst_addr, socklen_t addrlen, net_context_send_cb_t cb,
DECL|net_l2_offload_ip_send|function|static inline int net_l2_offload_ip_send(struct net_if *iface, struct net_buf *buf, net_context_send_cb_t cb, int32_t timeout, void *token,
DECL|net_l2_offload_ip|struct|struct net_l2_offload_ip {
DECL|put|member|int (*put)(struct net_context *context);
DECL|recv|member|int (*recv)(struct net_context *context,
DECL|sendto|member|int (*sendto)(struct net_buf *buf,
DECL|send|member|int (*send)(struct net_buf *buf,
