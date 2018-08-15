DECL|MLDv2_LEN|macro|MLDv2_LEN
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_DEBUG_NBR|macro|NET_DEBUG_NBR
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|ROUTER_ALERT_LEN|macro|ROUTER_ALERT_LEN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|append_all|macro|append_all
DECL|append|macro|append
DECL|create_mldv2|function|static struct net_pkt *create_mldv2(struct net_pkt *pkt, const struct in6_addr *addr, u16_t record_type, u8_t num_sources)
DECL|dbg_addr_recv|macro|dbg_addr_recv
DECL|dbg_addr_recv|macro|dbg_addr_recv
DECL|dbg_addr|macro|dbg_addr
DECL|dbg_addr|macro|dbg_addr
DECL|handle_mld_query|function|static enum net_verdict handle_mld_query(struct net_pkt *pkt)
DECL|mld_query_input_handler|variable|mld_query_input_handler
DECL|net_ipv6_mld_init|function|void net_ipv6_mld_init(void)
DECL|net_ipv6_mld_join|function|int net_ipv6_mld_join(struct net_if *iface, const struct in6_addr *addr)
DECL|net_ipv6_mld_leave|function|int net_ipv6_mld_leave(struct net_if *iface, const struct in6_addr *addr)
DECL|send_mld_report|function|static void send_mld_report(struct net_if *iface)
DECL|send_mldv2_raw|function|static int send_mldv2_raw(struct net_if *iface, struct net_buf *frags)
DECL|send_mldv2|function|static int send_mldv2(struct net_if *iface, const struct in6_addr *addr, u8_t mode)
