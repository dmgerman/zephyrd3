DECL|ARP_REQUEST_TIMEOUT|macro|ARP_REQUEST_TIMEOUT
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|arp_cache_initialized|variable|arp_cache_initialized
DECL|arp_request_timeout|function|static void arp_request_timeout(struct k_work *work)
DECL|arp_table|variable|arp_table
DECL|arp_update|function|static inline void arp_update(struct net_if *iface, struct in_addr *src, struct net_eth_addr *hwaddr)
DECL|find_entry|function|static inline struct arp_entry *find_entry(struct net_if *iface, struct in_addr *dst, struct arp_entry **free_entry, struct arp_entry **non_pending)
DECL|if_get_addr|function|static inline struct in_addr *if_get_addr(struct net_if *iface)
DECL|net_arp_clear_cache|function|void net_arp_clear_cache(struct net_if *iface)
DECL|net_arp_foreach|function|int net_arp_foreach(net_arp_cb_t cb, void *user_data)
DECL|net_arp_init|function|void net_arp_init(void)
DECL|net_arp_input|function|enum net_verdict net_arp_input(struct net_pkt *pkt)
DECL|net_arp_prepare|function|struct net_pkt *net_arp_prepare(struct net_pkt *pkt)
DECL|prepare_arp_reply|function|static inline struct net_pkt *prepare_arp_reply(struct net_if *iface,struct net_pkt *req)
DECL|prepare_arp|function|static inline struct net_pkt *prepare_arp(struct net_if *iface, struct in_addr *next_addr, struct arp_entry *entry, struct net_pkt *pending)
DECL|send_pending|function|static inline void send_pending(struct net_if *iface, struct net_pkt **pkt)
