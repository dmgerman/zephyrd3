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
DECL|cb_recv|function|static void cb_recv(struct net_context *net_ctx, struct net_buf *buf, int status, void *data)
DECL|dns_init|function|int dns_init(struct dns_context *ctx)
DECL|dns_read|function|static int dns_read(struct dns_context *ctx, struct net_buf *dns_data, uint16_t dns_id, struct net_buf *cname)
DECL|dns_resolve|function|int dns_resolve(struct dns_context *ctx)
DECL|dns_write|function|static int dns_write(struct dns_context *ctx, struct net_buf *dns_data, uint16_t dns_id, struct net_buf *dns_qname)
