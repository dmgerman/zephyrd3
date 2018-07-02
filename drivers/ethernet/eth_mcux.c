DECL|ENET_FRAME_MAX_VALNFRAMELEN|macro|ENET_FRAME_MAX_VALNFRAMELEN
DECL|ETH_MCUX_BUFFER_SIZE|macro|ETH_MCUX_BUFFER_SIZE
DECL|ETH_MCUX_BUFFER_SIZE|macro|ETH_MCUX_BUFFER_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|api_funcs|variable|api_funcs
DECL|delayed_phy_work|member|struct k_delayed_work delayed_phy_work;
DECL|enabled|member|bool enabled;
DECL|enet_handle|member|enet_handle_t enet_handle;
DECL|eth_0_config_func|function|static void eth_0_config_func(void)
DECL|eth_0_context|variable|eth_0_context
DECL|eth_0_init|function|static int eth_0_init(struct device *dev)
DECL|eth_callback|function|static void eth_callback(ENET_Type *base, enet_handle_t *handle, enet_event_t event, void *param)
DECL|eth_context|struct|struct eth_context {
DECL|eth_iface_init|function|static void eth_iface_init(struct net_if *iface)
DECL|eth_mcux_decode_duplex_and_speed|function|static void eth_mcux_decode_duplex_and_speed(u32_t status, phy_duplex_t *p_phy_duplex, phy_speed_t *p_phy_speed)
DECL|eth_mcux_delayed_phy_work|function|static void eth_mcux_delayed_phy_work(struct k_work *item)
DECL|eth_mcux_error_isr|function|static void eth_mcux_error_isr(void *p)
DECL|eth_mcux_get_capabilities|function|static enum ethernet_hw_caps eth_mcux_get_capabilities(struct device *dev)
DECL|eth_mcux_phy_enter_reset|function|static void eth_mcux_phy_enter_reset(struct eth_context *context)
DECL|eth_mcux_phy_event|function|static void eth_mcux_phy_event(struct eth_context *context)
DECL|eth_mcux_phy_start|function|static void eth_mcux_phy_start(struct eth_context *context)
DECL|eth_mcux_phy_state_autoneg|enumerator|eth_mcux_phy_state_autoneg,
DECL|eth_mcux_phy_state_closing|enumerator|eth_mcux_phy_state_closing
DECL|eth_mcux_phy_state_initial|enumerator|eth_mcux_phy_state_initial,
DECL|eth_mcux_phy_state_read_duplex|enumerator|eth_mcux_phy_state_read_duplex,
DECL|eth_mcux_phy_state_read_status|enumerator|eth_mcux_phy_state_read_status,
DECL|eth_mcux_phy_state_reset|enumerator|eth_mcux_phy_state_reset,
DECL|eth_mcux_phy_state_restart|enumerator|eth_mcux_phy_state_restart,
DECL|eth_mcux_phy_state_wait|enumerator|eth_mcux_phy_state_wait,
DECL|eth_mcux_phy_state|enum|enum eth_mcux_phy_state {
DECL|eth_mcux_phy_stop|function|void eth_mcux_phy_stop(struct eth_context *context)
DECL|eth_mcux_phy_work|function|static void eth_mcux_phy_work(struct k_work *item)
DECL|eth_mcux_rx_isr|function|static void eth_mcux_rx_isr(void *p)
DECL|eth_mcux_tx_isr|function|static void eth_mcux_tx_isr(void *p)
DECL|eth_rx|function|static void eth_rx(struct device *iface)
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|frame_buf|member|u8_t frame_buf[1500 + 14]; /* Max MTU + ethernet header size */
DECL|generate_mac|function|static void generate_mac(u8_t *mac_addr)
DECL|generate_mac|function|static void generate_mac(u8_t *mac_addr)
DECL|get_iface|function|static inline struct net_if *get_iface(struct eth_context *ctx, u16_t vlan_tag)
DECL|iface|member|struct net_if *iface;
DECL|link_up|member|bool link_up;
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|net_if_mcast_cb|function|static void net_if_mcast_cb(struct net_if *iface, const struct in6_addr *addr, bool is_joined)
DECL|phy_duplex|member|phy_duplex_t phy_duplex;
DECL|phy_speed|member|phy_speed_t phy_speed;
DECL|phy_state_name|function|static const char *phy_state_name(enum eth_mcux_phy_state state)
DECL|phy_state|member|enum eth_mcux_phy_state phy_state;
DECL|phy_work|member|struct k_work phy_work;
DECL|tx_buf_sem|member|struct k_sem tx_buf_sem;
