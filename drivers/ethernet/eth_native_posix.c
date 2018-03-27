DECL|ETH_HDR_LEN|macro|ETH_HDR_LEN
DECL|ETH_HDR_LEN|macro|ETH_HDR_LEN
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_ETH_MTU|macro|_ETH_MTU
DECL|create_rx_handler|function|static void create_rx_handler(struct eth_context *ctx)
DECL|dev_fd|member|int dev_fd;
DECL|eth_context_data|variable|eth_context_data
DECL|eth_context|struct|struct eth_context {
DECL|eth_get_mac|function|static struct net_linkaddr *eth_get_mac(struct eth_context *ctx)
DECL|eth_if_api|variable|eth_if_api
DECL|eth_iface_init|function|static void eth_iface_init(struct net_if *iface)
DECL|eth_init|function|static int eth_init(struct device *dev)
DECL|eth_posix_native_get_capabilities|function|static enum eth_hw_caps eth_posix_native_get_capabilities(struct device *dev)
DECL|eth_rx|function|static void eth_rx(struct eth_context *ctx)
DECL|eth_send|function|static int eth_send(struct net_if *iface, struct net_pkt *pkt)
DECL|get_context|function|static struct eth_context *get_context(struct net_if *iface)
DECL|get_iface|function|static inline struct net_if *get_iface(struct eth_context *ctx, u16_t vlan_tag)
DECL|if_name|member|const char *if_name;
DECL|iface|member|struct net_if *iface;
DECL|init_done|member|bool init_done;
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|read_data|function|static int read_data(struct eth_context *ctx, int fd)
DECL|recv|member|u8_t recv[_ETH_MTU + ETH_HDR_LEN];
DECL|rx_thread_data|variable|rx_thread_data
DECL|send|member|u8_t send[_ETH_MTU + ETH_HDR_LEN];
DECL|status|member|bool status;
