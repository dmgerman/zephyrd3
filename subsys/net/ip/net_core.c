DECL|CONFIG_NET_RX_STACK_SIZE|macro|CONFIG_NET_RX_STACK_SIZE
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|check_ip_addr|function|static inline int check_ip_addr(struct net_buf *buf)
DECL|check_ip_addr|macro|check_ip_addr
DECL|init_rx_queue|function|static void init_rx_queue(void)
DECL|l2_init|function|static inline void l2_init(void)
DECL|l3_init|function|static inline void l3_init(void)
DECL|net_init|function|static int net_init(struct device *unused)
DECL|net_recv_data|function|int net_recv_data(struct net_if *iface, struct net_buf *buf)
DECL|net_rx_thread|function|static void net_rx_thread(void)
DECL|net_send_data|function|int net_send_data(struct net_buf *buf)
DECL|process_data|function|static inline enum net_verdict process_data(struct net_buf *buf, bool is_loopback)
DECL|process_icmpv4_pkt|function|static inline enum net_verdict process_icmpv4_pkt(struct net_buf *buf, struct net_ipv4_hdr *ipv4)
DECL|process_ipv4_pkt|function|static inline enum net_verdict process_ipv4_pkt(struct net_buf *buf)
DECL|processing_data|function|static void processing_data(struct net_buf *buf, bool is_loopback)
DECL|rx_queue|variable|rx_queue
DECL|rx_tid|variable|rx_tid
