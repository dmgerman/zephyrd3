DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|arp_entry|struct|struct arp_entry {
DECL|arp_table|variable|arp_table
DECL|arp_update|function|static inline void arp_update(struct net_if *iface, struct in_addr *src, struct net_eth_addr *hwaddr)
DECL|eth|member|struct net_eth_addr eth;
DECL|find_entry|function|static inline struct arp_entry *find_entry(struct net_if *iface, struct in_addr *dst, struct arp_entry **free_entry, struct arp_entry **non_pending)
DECL|if_get_addr|function|static inline struct in_addr *if_get_addr(struct net_if *iface)
DECL|iface|member|struct net_if *iface;
DECL|ip|member|struct in_addr ip;
DECL|net_arp_clear_cache|function|void net_arp_clear_cache(void)
DECL|net_arp_init|function|void net_arp_init(void)
DECL|net_arp_input|function|enum net_verdict net_arp_input(struct net_pkt *pkt)
DECL|net_arp_prepare|function|struct net_pkt *net_arp_prepare(struct net_pkt *pkt)
DECL|pending|member|struct net_pkt *pending;
DECL|prepare_arp_reply|function|static inline struct net_pkt *prepare_arp_reply(struct net_if *iface,struct net_pkt *req)
DECL|prepare_arp|function|static inline struct net_pkt *prepare_arp(struct net_if *iface, struct in_addr *next_addr, struct arp_entry *entry, struct net_pkt *pending)
DECL|send_pending|function|static inline void send_pending(struct net_if *iface, struct net_pkt **pkt)
DECL|time|member|u32_t time; /* FIXME - implement timeout functionality */
