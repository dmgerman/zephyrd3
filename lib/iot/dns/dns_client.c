DECL|DNS_ANSWER_PTR_LEN|macro|DNS_ANSWER_PTR_LEN
DECL|DNS_IPV4_LEN|macro|DNS_IPV4_LEN
DECL|DNS_IPV6_LEN|macro|DNS_IPV6_LEN
DECL|DNS_MAX_NAME_LEN|macro|DNS_MAX_NAME_LEN
DECL|DNS_QUERY_MAX_SIZE|macro|DNS_QUERY_MAX_SIZE
DECL|DNS_QUERY_POS|macro|DNS_QUERY_POS
DECL|DNS_RESOLVER_BUF_CTR|macro|DNS_RESOLVER_BUF_CTR
DECL|DNS_RESOLVER_MAX_BUF_SIZE|macro|DNS_RESOLVER_MAX_BUF_SIZE
DECL|DNS_RESOLVER_MIN_BUF|macro|DNS_RESOLVER_MIN_BUF
DECL|DNS_RESOLVER_QUERIES|macro|DNS_RESOLVER_QUERIES
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|NET_BUF_POOL|variable|NET_BUF_POOL
DECL|cb_recv|function|void cb_recv(struct net_context *context, struct net_buf *buf, int status,void *user_data)
DECL|dns4_resolve|function|int dns4_resolve(struct net_context *ctx, struct in_addr *addresses, int *items, int elements, char *name, struct sockaddr *dns_server, uint32_t timeout)
DECL|dns6_resolve|function|int dns6_resolve(struct net_context *ctx, struct in6_addr *addresses, int *items, int elements, char *name, struct sockaddr *dns_server, uint32_t timeout)
DECL|dns_init|function|int dns_init(void)
DECL|dns_msg_fifo|variable|dns_msg_fifo
DECL|dns_qname_fifo|variable|dns_qname_fifo
DECL|dns_read|function|int dns_read(struct net_context *ctx, struct net_buf *dns_data, uint32_t timeout, uint16_t dns_id, enum dns_query_type type, uint8_t *addresses, int *items, int elements, uint8_t *cname, uint16_t *cname_len)
DECL|dns_recv|function|int dns_recv(struct net_context *ctx, struct net_buf **buf, uint32_t timeout)
DECL|dns_resolve|function|int dns_resolve(struct net_context *ctx, uint8_t *addresses, int *items,int elements, char *name, enum dns_query_type type, struct sockaddr *dns_server, uint32_t timeout)
DECL|dns_write|function|int dns_write(struct net_context *ctx, struct net_buf *dns_data, uint32_t timeout, uint16_t dns_id, enum dns_query_type type, struct net_buf *dns_qname, struct sockaddr *dns_server)
DECL|nbuf_copy|function|int nbuf_copy(struct net_buf *dst, struct net_buf *src, int offset, int len)
