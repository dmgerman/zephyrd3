DECL|ETH_HDR_LEN|macro|ETH_HDR_LEN
DECL|ETH_HDR_LEN|macro|ETH_HDR_LEN
DECL|NET_BUF_TIMEOUT|macro|NET_BUF_TIMEOUT
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_ETH_MTU|macro|_ETH_MTU
DECL|api|variable|api
DECL|check_gptp_msg|function|static struct gptp_hdr *check_gptp_msg(struct net_if *iface, struct net_pkt *pkt)
DECL|create_rx_handler|function|static void create_rx_handler(struct eth_context *ctx)
DECL|dev_fd|member|int dev_fd;
DECL|eth_context_data|variable|eth_context_data
DECL|eth_context|member|struct eth_context *eth_context;
DECL|eth_context|struct|struct eth_context {
DECL|eth_get_mac|function|static struct net_linkaddr *eth_get_mac(struct eth_context *ctx)
DECL|eth_get_ptp_clock|function|static struct device *eth_get_ptp_clock(struct device *dev)
DECL|eth_if_api|variable|eth_if_api
DECL|eth_iface_init|function|static void eth_iface_init(struct net_if *iface)
DECL|eth_init|function|static int eth_init(struct device *dev)
DECL|eth_posix_native_get_capabilities|function|enum ethernet_hw_caps eth_posix_native_get_capabilities(struct device *dev)
DECL|eth_rx|function|static void eth_rx(struct eth_context *ctx)
DECL|eth_send|function|static int eth_send(struct net_if *iface, struct net_pkt *pkt)
DECL|get_context|function|static struct eth_context *get_context(struct net_if *iface)
DECL|get_iface|function|static inline struct net_if *get_iface(struct eth_context *ctx, u16_t vlan_tag)
DECL|get_stats|function|static struct net_stats_eth *get_stats(struct device *dev)
DECL|if_name|member|const char *if_name;
DECL|iface|member|struct net_if *iface;
DECL|init_done|member|bool init_done;
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|need_timestamping|function|static bool need_timestamping(struct gptp_hdr *hdr)
DECL|promisc_mode|member|bool promisc_mode;
DECL|ptp_0_context|variable|ptp_0_context
DECL|ptp_clock_adjust_native_posix|function|static int ptp_clock_adjust_native_posix(struct device *clk, int increment)
DECL|ptp_clock_get_native_posix|function|static int ptp_clock_get_native_posix(struct device *clk, struct net_ptp_time *tm)
DECL|ptp_clock_rate_adjust_native_posix|function|static int ptp_clock_rate_adjust_native_posix(struct device *clk, float ratio)
DECL|ptp_clock_set_native_posix|function|static int ptp_clock_set_native_posix(struct device *clk, struct net_ptp_time *tm)
DECL|ptp_clock|member|struct device *ptp_clock;
DECL|ptp_context|struct|struct ptp_context {
DECL|ptp_init|function|static int ptp_init(struct device *port)
DECL|read_data|function|static int read_data(struct eth_context *ctx, int fd)
DECL|recv|member|u8_t recv[_ETH_MTU + ETH_HDR_LEN];
DECL|rx_thread_data|variable|rx_thread_data
DECL|send|member|u8_t send[_ETH_MTU + ETH_HDR_LEN];
DECL|set_config|function|static int set_config(struct device *dev, enum ethernet_config_type type, const struct ethernet_config *config)
DECL|stats|member|struct net_stats_eth stats;
DECL|status|member|bool status;
DECL|update_gptp|function|static void update_gptp(struct net_if *iface, struct net_pkt *pkt,bool send)
DECL|update_gptp|macro|update_gptp
DECL|update_pkt_priority|function|static void update_pkt_priority(struct gptp_hdr *hdr, struct net_pkt *pkt)
