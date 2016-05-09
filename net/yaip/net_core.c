DECL|CONFIG_NET_RX_STACK_SIZE|macro|CONFIG_NET_RX_STACK_SIZE
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|init_rx_queue|function|static void init_rx_queue(void)
DECL|net_init|function|static int net_init(struct device *unused)
DECL|net_recv|function|int net_recv(struct net_if *iface, struct net_buf *buf)
DECL|net_rx_fiber|function|static void net_rx_fiber(int unused1, int unused2)
DECL|network_initialization|function|static int network_initialization(void)
DECL|process_data|function|static inline enum net_verdict process_data(struct net_buf *buf)
DECL|rx_fiber_id|variable|rx_fiber_id
DECL|rx_fiber_stack|variable|rx_fiber_stack
DECL|rx_queue|variable|rx_queue
