DECL|ENET_RX_RING_LEN|macro|ENET_RX_RING_LEN
DECL|ENET_TX_RING_LEN|macro|ENET_TX_RING_LEN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|base_addr|member|uint32_t base_addr;
DECL|config_func|member|eth_config_irq_t config_func;
DECL|enet_handle|member|enet_handle_t enet_handle;
DECL|eth_0_runtime|variable|eth_0_runtime
DECL|eth_callback|function|void eth_callback(ENET_Type *base, enet_handle_t *handle, enet_event_t event, void *param)
DECL|eth_config_0_irq|function|static void eth_config_0_irq(struct device *port)
DECL|eth_config_0|variable|eth_config_0
DECL|eth_config_irq_t|typedef|typedef void (*eth_config_irq_t)(struct device *port);
DECL|eth_config|struct|struct eth_config {
DECL|eth_initialize|function|static int eth_initialize(struct device *port)
DECL|eth_ksdk_error_isr|function|static void eth_ksdk_error_isr(void *port)
DECL|eth_ksdk_rx_isr|function|static void eth_ksdk_rx_isr(void *port)
DECL|eth_ksdk_tx_isr|function|static void eth_ksdk_tx_isr(void *port)
DECL|eth_net_tx|function|static int eth_net_tx(struct net_buf *buf)
DECL|eth_runtime|struct|struct eth_runtime {
DECL|eth_rx|function|static void eth_rx(struct device *port)
DECL|eth_tx|function|static int eth_tx(struct device *port, struct net_buf *buf)
DECL|generate_mac|function|static void generate_mac(uint8_t *mac_addr)
DECL|k64f_init_eth_hardware|function|k64f_init_eth_hardware(void)
DECL|tx_buf_sem|member|struct nano_sem tx_buf_sem;
