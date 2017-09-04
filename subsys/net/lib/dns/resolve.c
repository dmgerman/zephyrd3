DECL|DNS_ANSWER_PTR_LEN|macro|DNS_ANSWER_PTR_LEN
DECL|DNS_BUF_TIMEOUT|macro|DNS_BUF_TIMEOUT
DECL|DNS_IPV4_LEN|macro|DNS_IPV4_LEN
DECL|DNS_IPV6_LEN|macro|DNS_IPV6_LEN
DECL|DNS_MAX_NAME_LEN|macro|DNS_MAX_NAME_LEN
DECL|DNS_QUERY_MAX_SIZE|macro|DNS_QUERY_MAX_SIZE
DECL|DNS_QUERY_POS|macro|DNS_QUERY_POS
DECL|DNS_RESOLVER_BUF_CTR|macro|DNS_RESOLVER_BUF_CTR
DECL|DNS_RESOLVER_MAX_BUF_SIZE|macro|DNS_RESOLVER_MAX_BUF_SIZE
DECL|DNS_RESOLVER_MIN_BUF|macro|DNS_RESOLVER_MIN_BUF
DECL|DNS_SERVER_COUNT|macro|DNS_SERVER_COUNT
DECL|LLMNR_IPV4_ADDR|macro|LLMNR_IPV4_ADDR
DECL|LLMNR_IPV6_ADDR|macro|LLMNR_IPV6_ADDR
DECL|MDNS_IPV4_ADDR|macro|MDNS_IPV4_ADDR
DECL|MDNS_IPV6_ADDR|macro|MDNS_IPV6_ADDR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SERVER_COUNT|macro|SERVER_COUNT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|cb_recv|function|static void cb_recv(struct net_context *net_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|dns_default_ctx|variable|dns_default_ctx
DECL|dns_init_resolver|function|void dns_init_resolver(void)
DECL|dns_postprocess_server|function|static void dns_postprocess_server(struct dns_resolve_context *ctx, int idx)
DECL|dns_read|function|static int dns_read(struct dns_resolve_context *ctx, struct net_pkt *pkt, struct net_buf *dns_data, u16_t *dns_id, struct net_buf *dns_cname)
DECL|dns_resolve_cancel|function|int dns_resolve_cancel(struct dns_resolve_context *ctx, u16_t dns_id)
DECL|dns_resolve_close|function|int dns_resolve_close(struct dns_resolve_context *ctx)
DECL|dns_resolve_get_default|function|struct dns_resolve_context *dns_resolve_get_default(void)
DECL|dns_resolve_init|function|int dns_resolve_init(struct dns_resolve_context *ctx, const char *servers[], const struct sockaddr *servers_sa[])
DECL|dns_resolve_name|function|int dns_resolve_name(struct dns_resolve_context *ctx, const char *query, enum dns_query_type type, u16_t *dns_id, dns_resolve_cb_t cb,
DECL|dns_write|function|static int dns_write(struct dns_resolve_context *ctx, int server_idx, int query_idx, struct net_buf *dns_data, struct net_buf *dns_qname,
DECL|get_cb_slot|function|static inline int get_cb_slot(struct dns_resolve_context *ctx)
DECL|get_slot_by_id|function|static inline int get_slot_by_id(struct dns_resolve_context *ctx, u16_t dns_id)
DECL|query_timeout|function|static void query_timeout(struct k_work *work)
DECL|server_is_llmnr|function|static bool server_is_llmnr(sa_family_t family, struct sockaddr *addr)
DECL|server_is_mdns|function|static bool server_is_mdns(sa_family_t family, struct sockaddr *addr)
