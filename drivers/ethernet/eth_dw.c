DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|TX_BUSY_LOOP_SPINS|macro|TX_BUSY_LOOP_SPINS
DECL|api_funcs|variable|api_funcs
DECL|eth_0_runtime|variable|eth_0_runtime
DECL|eth_config_0_irq|function|static void eth_config_0_irq(struct device *port)
DECL|eth_config_0|variable|eth_config_0
DECL|eth_dw_get_capabilities|function|static enum ethernet_hw_caps eth_dw_get_capabilities(struct device *dev)
DECL|eth_dw_isr|function|static void eth_dw_isr(struct device *port)
DECL|eth_initialize_internal|function|static int eth_initialize_internal(struct net_if *iface)
DECL|eth_initialize|function|static void eth_initialize(struct net_if *iface)
DECL|eth_read|function|static inline u32_t eth_read(u32_t base_addr, u32_t offset)
DECL|eth_rx|function|static void eth_rx(struct device *port)
DECL|eth_setup|function|static inline int eth_setup(struct device *dev)
DECL|eth_setup|macro|eth_setup
DECL|eth_tx_data|function|static void eth_tx_data(struct eth_runtime *context, u8_t *data, u16_t len)
DECL|eth_tx_spin_wait|function|static void eth_tx_spin_wait(struct eth_runtime *context)
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|eth_write|function|static inline void eth_write(u32_t base_addr, u32_t offset, u32_t val)
