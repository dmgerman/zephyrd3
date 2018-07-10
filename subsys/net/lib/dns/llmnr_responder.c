DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|DNS_RESOLVER_BUF_CTR|macro|DNS_RESOLVER_BUF_CTR
DECL|DNS_RESOLVER_MAX_BUF_SIZE|macro|DNS_RESOLVER_MAX_BUF_SIZE
DECL|DNS_RESOLVER_MIN_BUF|macro|DNS_RESOLVER_MIN_BUF
DECL|LLMNR_LISTEN_PORT|macro|LLMNR_LISTEN_PORT
DECL|LLMNR_TTL|macro|LLMNR_TTL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|add_answer|function|static int add_answer(struct net_pkt *pkt, enum dns_rr_type qtype, struct net_buf *query, u32_t ttl, u16_t addr_len, const u8_t *addr)
DECL|add_question|function|static int add_question(struct net_pkt *pkt, enum dns_rr_type qtype,struct net_buf *query)
DECL|append_all|macro|append_all
DECL|append|macro|append
DECL|bind_ctx|function|static int bind_ctx(struct net_context *ctx, struct sockaddr *local_addr, socklen_t addrlen)
DECL|create_answer|function|static struct net_pkt *create_answer(struct net_context *ctx, sa_family_t family, enum dns_rr_type qtype, struct net_buf *query, u16_t dns_id,
DECL|create_ipv4_addr|function|static void create_ipv4_addr(struct sockaddr_in *addr)
DECL|create_ipv4_answer|function|static int create_ipv4_answer(struct net_context *ctx, struct net_pkt *pkt, enum dns_rr_type qtype, struct net_buf *query, u16_t dns_id,
DECL|create_ipv4_dst_addr|function|static void create_ipv4_dst_addr(struct net_pkt *pkt, struct sockaddr_in *addr)
DECL|create_ipv6_addr|function|static void create_ipv6_addr(struct sockaddr_in6 *addr)
DECL|create_ipv6_answer|function|static int create_ipv6_answer(struct net_context *ctx, struct net_pkt *pkt, enum dns_rr_type qtype, struct net_buf *query, u16_t dns_id,
DECL|create_ipv6_dst_addr|function|static void create_ipv6_dst_addr(struct net_pkt *pkt, struct sockaddr_in6 *addr)
DECL|dns_read|function|static int dns_read(struct net_context *ctx, struct net_pkt *pkt, struct net_buf *dns_data, struct dns_addrinfo *info)
DECL|get_ctx|function|static struct net_context *get_ctx(sa_family_t family)
DECL|get_ipv4_src|function|static const u8_t *get_ipv4_src(struct net_if *iface, struct in_addr *dst)
DECL|get_ipv6_src|function|static const u8_t *get_ipv6_src(struct net_if *iface, struct in6_addr *dst)
DECL|iface_ipv4_cb|function|static void iface_ipv4_cb(struct net_if *iface, void *user_data)
DECL|iface_ipv6_cb|function|static void iface_ipv6_cb(struct net_if *iface, void *user_data)
DECL|init_listener|function|static int init_listener(void)
DECL|ipv4|variable|ipv4
DECL|ipv6|variable|ipv6
DECL|llmnr_responder_init|function|static int llmnr_responder_init(struct device *device)
DECL|recv_cb|function|static void recv_cb(struct net_context *net_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|send_response|function|static int send_response(struct net_context *ctx, struct net_pkt *pkt, struct net_buf *query, enum dns_rr_type qtype, u16_t dns_id)
DECL|setup_dns_hdr|function|static int setup_dns_hdr(struct net_pkt *pkt, u16_t answers, u16_t dns_id)
DECL|setup_ipv4_addr|function|static void setup_ipv4_addr(struct sockaddr_in *local_addr)
DECL|setup_ipv6_addr|function|static void setup_ipv6_addr(struct sockaddr_in6 *local_addr)
