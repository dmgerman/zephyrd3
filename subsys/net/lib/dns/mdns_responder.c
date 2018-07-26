DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|DNS_RESOLVER_BUF_CTR|macro|DNS_RESOLVER_BUF_CTR
DECL|DNS_RESOLVER_MAX_BUF_SIZE|macro|DNS_RESOLVER_MAX_BUF_SIZE
DECL|DNS_RESOLVER_MIN_BUF|macro|DNS_RESOLVER_MIN_BUF
DECL|MDNS_LISTEN_PORT|macro|MDNS_LISTEN_PORT
DECL|MDNS_TTL|macro|MDNS_TTL
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|add_answer|function|static int add_answer(struct net_pkt *pkt, enum dns_rr_type qtype, struct net_buf *query, u32_t ttl, u16_t addr_len, u8_t *addr)
DECL|append_all|macro|append_all
DECL|append|macro|append
DECL|bind_ctx|function|static int bind_ctx(struct net_context *ctx, struct sockaddr *local_addr, socklen_t addrlen)
DECL|create_answer|function|static struct net_pkt *create_answer(struct net_context *ctx, sa_family_t family, enum dns_rr_type qtype, struct net_buf *query, u16_t addr_len, u8_t *addr)
DECL|create_ipv4_addr|function|static void create_ipv4_addr(struct sockaddr_in *addr)
DECL|create_ipv6_addr|function|static void create_ipv6_addr(struct sockaddr_in6 *addr)
DECL|dns_read|function|static int dns_read(struct net_context *ctx, struct net_pkt *pkt, struct net_buf *dns_data, struct dns_addrinfo *info)
DECL|get_ctx|function|static struct net_context *get_ctx(sa_family_t family)
DECL|iface_ipv4_cb|function|static void iface_ipv4_cb(struct net_if *iface, void *user_data)
DECL|iface_ipv6_cb|function|static void iface_ipv6_cb(struct net_if *iface, void *user_data)
DECL|init_listener|function|static int init_listener(void)
DECL|ipv4|variable|ipv4
DECL|ipv6|variable|ipv6
DECL|mdns_responder_init|function|static int mdns_responder_init(struct device *device)
DECL|recv_cb|function|static void recv_cb(struct net_context *net_ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|send_response|function|static int send_response(struct net_context *ctx, struct net_pkt *pkt, struct net_buf *query, enum dns_rr_type qtype)
DECL|setup_dns_hdr|function|static int setup_dns_hdr(struct net_pkt *pkt, u16_t answers)
DECL|setup_ipv4_addr|function|static void setup_ipv4_addr(struct sockaddr_in *local_addr)
DECL|setup_ipv6_addr|function|static void setup_ipv6_addr(struct sockaddr_in6 *local_addr)
