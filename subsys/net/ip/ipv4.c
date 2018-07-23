DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|net_ipv4_broadcast_address|function|const struct in_addr *net_ipv4_broadcast_address(void)
DECL|net_ipv4_create|function|struct net_pkt *net_ipv4_create(struct net_pkt *pkt,const struct in_addr *src, const struct in_addr *dst, struct net_if *iface, u8_t next_header_proto)
DECL|net_ipv4_finalize|function|void net_ipv4_finalize(struct net_pkt *pkt, u8_t next_header_proto)
DECL|net_ipv4_process_pkt|function|enum net_verdict net_ipv4_process_pkt(struct net_pkt *pkt)
DECL|net_ipv4_unspecified_address|function|const struct in_addr *net_ipv4_unspecified_address(void)
