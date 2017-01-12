DECL|ETH_MCUX_BUFFER_SIZE|macro|ETH_MCUX_BUFFER_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|api_funcs_0|variable|api_funcs_0
DECL|enet_handle|member|enet_handle_t enet_handle;
DECL|eth_0_config_func|function|static void eth_0_config_func(void)
DECL|eth_0_context|variable|eth_0_context
DECL|eth_0_iface_init|function|static void eth_0_iface_init(struct net_if *iface)
DECL|eth_0_init|function|static int eth_0_init(struct device *dev)
DECL|eth_callback|function|static void eth_callback(ENET_Type *base, enet_handle_t *handle, enet_event_t event, void *param)
DECL|eth_context|struct|struct eth_context {
DECL|eth_mcux_error_isr|function|static void eth_mcux_error_isr(void *p)
DECL|eth_mcux_rx_isr|function|static void eth_mcux_rx_isr(void *p)
DECL|eth_mcux_tx_isr|function|static void eth_mcux_tx_isr(void *p)
DECL|eth_rx|function|static void eth_rx(struct device *iface)
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_buf *buf)
DECL|frame_buf|member|uint8_t frame_buf[1500];
DECL|generate_mac|function|static void generate_mac(uint8_t *mac_addr)
DECL|iface|member|struct net_if *iface;
DECL|mac_addr|member|uint8_t mac_addr[6];
DECL|tx_buf_sem|member|struct k_sem tx_buf_sem;
