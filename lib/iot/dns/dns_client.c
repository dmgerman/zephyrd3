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
DECL|cb_recv|function|void cb_recv(struct net_context *context, struct net_buf *buf, int status,void *user_data)
DECL|dns_init|function|int dns_init(void)
DECL|dns_read|function|int dns_read(struct net_context *net_ctx, struct net_buf *dns_data, int32_t timeout, uint16_t dns_id, enum dns_query_type type, uint8_t *addresses, uint8_t *items, uint8_t elements, uint8_t *cname, uint16_t *cname_len)
DECL|dns_recv|function|int dns_recv(struct net_context *net_ctx, struct net_buf **buf, int32_t timeout)
DECL|dns_resolve|function|int dns_resolve(struct dns_context *ctx)
DECL|dns_write|function|int dns_write(struct net_context *net_ctx, struct net_buf *dns_data, int32_t timeout, uint16_t dns_id, enum dns_query_type type, struct net_buf *dns_qname, struct sockaddr *dns_server)
DECL|nbuf_copy|function|int nbuf_copy(struct net_buf *dst, struct net_buf *src, int offset, int len)
