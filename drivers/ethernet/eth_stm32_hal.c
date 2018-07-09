DECL|HAL_ETH_RxCpltCallback|function|void HAL_ETH_RxCpltCallback(ETH_HandleTypeDef *heth_handle)
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|disable_mcast_filter|function|static inline void disable_mcast_filter(ETH_HandleTypeDef *heth)
DECL|eth0_config|variable|eth0_config
DECL|eth0_data|variable|eth0_data
DECL|eth0_irq_config|function|static void eth0_irq_config(void)
DECL|eth_api|variable|eth_api
DECL|eth_iface_init|function|static void eth_iface_init(struct net_if *iface)
DECL|eth_initialize|function|static int eth_initialize(struct device *dev)
DECL|eth_isr|function|static void eth_isr(void *arg)
DECL|eth_rx|function|static struct net_pkt *eth_rx(struct device *dev)
DECL|eth_stm32_hal_get_capabilities|function|static enum ethernet_hw_caps eth_stm32_hal_get_capabilities(struct device *dev)
DECL|eth_tx|function|static int eth_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|generate_mac|function|static void generate_mac(u8_t *mac_addr)
DECL|rx_thread|function|static void rx_thread(void *arg1, void *unused1, void *unused2)
