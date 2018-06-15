DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|check_ip_addr|function|static inline int check_ip_addr(struct net_pkt *pkt)
DECL|check_ip_addr|macro|check_ip_addr
DECL|init_rx_queues|function|static void init_rx_queues(void)
DECL|l3_init|function|static inline void l3_init(void)
DECL|net_init|function|static int net_init(struct device *unused)
DECL|net_post_init|function|static void net_post_init(void)
DECL|net_queue_rx|function|static void net_queue_rx(struct net_if *iface, struct net_pkt *pkt)
DECL|net_recv_data|function|int net_recv_data(struct net_if *iface, struct net_pkt *pkt)
DECL|net_rx|function|static void net_rx(struct net_if *iface, struct net_pkt *pkt)
DECL|net_send_data|function|int net_send_data(struct net_pkt *pkt)
DECL|process_data|function|static inline enum net_verdict process_data(struct net_pkt *pkt, bool is_loopback)
DECL|process_rx_packet|function|static void process_rx_packet(struct k_work *work)
DECL|processing_data|function|static void processing_data(struct net_pkt *pkt, bool is_loopback)
