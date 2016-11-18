DECL|CONFIG_NET_RX_STACK_SIZE|macro|CONFIG_NET_RX_STACK_SIZE
DECL|GET_STAT|macro|GET_STAT
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|PRINT_STATISTICS_INTERVAL|macro|PRINT_STATISTICS_INTERVAL
DECL|PRINT|macro|PRINT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|check_ip_addr|function|static inline int check_ip_addr(struct net_buf *buf)
DECL|check_ip_addr|macro|check_ip_addr
DECL|check_unknown_option|function|static inline struct net_buf *check_unknown_option(struct net_buf *buf, uint8_t opt_type, uint16_t length)
DECL|handle_ext_hdr_options|function|static inline struct net_buf *handle_ext_hdr_options(struct net_buf *buf, struct net_buf *frag, int total_len, uint16_t len, uint16_t offset,
DECL|init_rx_queue|function|static void init_rx_queue(void)
DECL|l2_init|function|static inline void l2_init(void)
DECL|l3_init|function|static inline void l3_init(void)
DECL|net_init|function|static int net_init(struct device *unused)
DECL|net_print_statistics|macro|net_print_statistics
DECL|net_print_statistics|macro|net_print_statistics
DECL|net_recv_data|function|int net_recv_data(struct net_if *iface, struct net_buf *buf)
DECL|net_rx_thread|function|static void net_rx_thread(void)
DECL|net_send_data|function|int net_send_data(struct net_buf *buf)
DECL|net_stats|variable|net_stats
DECL|process_data|function|static inline enum net_verdict process_data(struct net_buf *buf, bool is_loopback)
DECL|process_icmpv4_pkt|function|static inline enum net_verdict process_icmpv4_pkt(struct net_buf *buf, struct net_ipv4_hdr *ipv4)
DECL|process_icmpv6_pkt|function|static inline enum net_verdict process_icmpv6_pkt(struct net_buf *buf, struct net_ipv6_hdr *ipv6)
DECL|process_ipv4_pkt|function|static inline enum net_verdict process_ipv4_pkt(struct net_buf *buf)
DECL|process_ipv6_pkt|function|static inline enum net_verdict process_ipv6_pkt(struct net_buf *buf)
DECL|processing_data|function|static void processing_data(struct net_buf *buf, bool is_loopback)
DECL|rx_queue|variable|rx_queue
DECL|rx_tid|variable|rx_tid
DECL|stats|function|static inline void stats(void)
