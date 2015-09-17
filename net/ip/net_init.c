DECL|DEBUG|macro|DEBUG
DECL|DEFAULT_TIMER_WAKEUP|macro|DEFAULT_TIMER_WAKEUP
DECL|MAX_TIMER_WAKEUP|macro|MAX_TIMER_WAKEUP
DECL|PRINT_STATISTICS_INTERVAL|macro|PRINT_STATISTICS_INTERVAL
DECL|RSTAT|macro|RSTAT
DECL|STACKSIZE_UNIT|macro|STACKSIZE_UNIT
DECL|STAT|macro|STAT
DECL|check_and_send_packet|function|static int check_and_send_packet(struct net_buf *buf)
DECL|drv|member|struct net_driver *drv;
DECL|init_rx_queue|function|static void init_rx_queue(void)
DECL|init_timer_fiber|function|static void init_timer_fiber(void)
DECL|init_tx_queue|function|static void init_tx_queue(void)
DECL|net_dev|struct|static struct net_dev {
DECL|net_init|function|int net_init(void)
DECL|net_print_statistics|macro|net_print_statistics
DECL|net_print_statistics|macro|net_print_statistics
DECL|net_receive|function|struct net_buf *net_receive(struct net_context *context, int32_t timeout)
DECL|net_recv|function|int net_recv(struct net_buf *buf)
DECL|net_register_driver|function|int net_register_driver(struct net_driver *drv)
DECL|net_reply|function|int net_reply(struct net_context *context, struct net_buf *buf)
DECL|net_rx_fiber|function|static void net_rx_fiber(void)
DECL|net_send|function|int net_send(struct net_buf *buf)
DECL|net_set_mac|function|int net_set_mac(uint8_t *mac, uint8_t len)
DECL|net_tcpip_output|function|static uint8_t net_tcpip_output(struct net_buf *buf, const uip_lladdr_t *lladdr)
DECL|net_timer_fiber|function|static void net_timer_fiber(void)
DECL|net_tx_fiber|function|static void net_tx_fiber(void)
DECL|net_unregister_driver|function|void net_unregister_driver(struct net_driver *drv)
DECL|netdev|variable|netdev
DECL|network_initialization|function|static int network_initialization(void)
DECL|rx_fiber_stack|variable|rx_fiber_stack
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|stats|function|static void stats(void)
DECL|timer_fiber_stack|variable|timer_fiber_stack
DECL|tx_fiber_stack|variable|tx_fiber_stack
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|udp_packet_receive|function|static void udp_packet_receive(struct simple_udp_connection *c, const uip_ipaddr_t *source_addr, uint16_t source_port, const uip_ipaddr_t *dest_addr, uint16_t dest_port,
DECL|udp_packet_reply|function|static void udp_packet_reply(struct simple_udp_connection *c, const uip_ipaddr_t *source_addr, uint16_t source_port, const uip_ipaddr_t *dest_addr, uint16_t dest_port,
DECL|udp_prepare_and_send|function|static inline int udp_prepare_and_send(struct net_context *context, struct net_buf *buf)
