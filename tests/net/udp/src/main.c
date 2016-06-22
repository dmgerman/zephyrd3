DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|REGISTER_FAIL|macro|REGISTER_FAIL
DECL|REGISTER|macro|REGISTER
DECL|STACKSIZE|macro|STACKSIZE
DECL|TEST_IPV4_FAIL|macro|TEST_IPV4_FAIL
DECL|TEST_IPV4_OK|macro|TEST_IPV4_OK
DECL|TEST_IPV6_FAIL|macro|TEST_IPV6_FAIL
DECL|TEST_IPV6_OK|macro|TEST_IPV6_OK
DECL|TIMEOUT|macro|TIMEOUT
DECL|UNREGISTER|macro|UNREGISTER
DECL|_ETH_L2_LAYER|macro|_ETH_L2_LAYER
DECL|fail|variable|fail
DECL|fiberStack|variable|fiberStack
DECL|handle|member|void *handle;
DECL|if_get_addr|function|static inline struct in_addr *if_get_addr(struct net_if *iface)
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|local_addr|member|const struct sockaddr *local_addr;
DECL|local_port|member|uint16_t local_port;
DECL|mac_addr|member|uint8_t mac_addr[sizeof(struct net_eth_addr)];
DECL|main_fiber|function|void main_fiber(void)
DECL|main|function|void main(void)
DECL|net_udp_context_data|variable|net_udp_context_data
DECL|net_udp_context|struct|struct net_udp_context {
DECL|net_udp_dev_init|function|int net_udp_dev_init(struct device *dev)
DECL|net_udp_get_mac|function|static uint8_t *net_udp_get_mac(struct device *dev)
DECL|net_udp_if_api|variable|net_udp_if_api
DECL|net_udp_iface_init|function|static void net_udp_iface_init(struct net_if *iface)
DECL|recv_lock|variable|recv_lock
DECL|remote_addr|member|const struct sockaddr *remote_addr;
DECL|remote_port|member|uint16_t remote_port;
DECL|returned_ud|variable|returned_ud
DECL|send_ipv4_udp_msg|function|static bool send_ipv4_udp_msg(struct net_if *iface, struct in_addr *src, struct in_addr *dst, uint16_t src_port, uint16_t dst_port,
DECL|send_ipv6_udp_msg|function|static bool send_ipv6_udp_msg(struct net_if *iface, struct in6_addr *src, struct in6_addr *dst, uint16_t src_port, uint16_t dst_port,
DECL|send_status|variable|send_status
DECL|set_port|function|static void set_port(sa_family_t family, struct sockaddr *raddr, struct sockaddr *laddr, uint16_t rport, uint16_t lport)
DECL|setup_ipv4_udp|function|static void setup_ipv4_udp(struct net_buf *buf, struct in_addr *remote_addr, struct in_addr *local_addr, uint16_t remote_port, uint16_t local_port)
DECL|setup_ipv6_udp|function|static void setup_ipv6_udp(struct net_buf *buf, struct in6_addr *remote_addr, struct in6_addr *local_addr, uint16_t remote_port, uint16_t local_port)
DECL|test_fail|function|static enum net_verdict test_fail(struct net_conn *conn, struct net_buf *buf, void *user_data)
DECL|test_ok|function|static enum net_verdict test_ok(struct net_conn *conn,struct net_buf *buf, void *user_data)
DECL|tester_send|function|static int tester_send(struct net_if *iface, struct net_buf *buf)
DECL|test|member|char *test;
DECL|ud|struct|struct ud {
