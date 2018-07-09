DECL|D10D24S|macro|D10D24S
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|api_funcs|variable|api_funcs
DECL|eth_enc28j60_0_config|variable|eth_enc28j60_0_config
DECL|eth_enc28j60_0_runtime|variable|eth_enc28j60_0_runtime
DECL|eth_enc28j60_clear_eth_reg|function|static void eth_enc28j60_clear_eth_reg(struct device *dev, u16_t reg_addr, u8_t value)
DECL|eth_enc28j60_get_capabilities|function|static enum ethernet_hw_caps eth_enc28j60_get_capabilities(struct device *dev)
DECL|eth_enc28j60_gpio_callback|function|static void eth_enc28j60_gpio_callback(struct device *dev, struct gpio_callback *cb, u32_t pins)
DECL|eth_enc28j60_iface_init|function|static void eth_enc28j60_iface_init(struct net_if *iface)
DECL|eth_enc28j60_init_buffers|function|static void eth_enc28j60_init_buffers(struct device *dev)
DECL|eth_enc28j60_init_mac|function|static void eth_enc28j60_init_mac(struct device *dev)
DECL|eth_enc28j60_init_phy|function|static void eth_enc28j60_init_phy(struct device *dev)
DECL|eth_enc28j60_init|function|static int eth_enc28j60_init(struct device *dev)
DECL|eth_enc28j60_read_mem|function|static void eth_enc28j60_read_mem(struct device *dev, u8_t *data_buffer, u16_t buf_len)
DECL|eth_enc28j60_read_reg|function|static void eth_enc28j60_read_reg(struct device *dev, u16_t reg_addr, u8_t *value)
DECL|eth_enc28j60_rx_thread|function|static void eth_enc28j60_rx_thread(struct device *dev)
DECL|eth_enc28j60_rx|function|static int eth_enc28j60_rx(struct device *dev)
DECL|eth_enc28j60_set_bank|function|static void eth_enc28j60_set_bank(struct device *dev, u16_t reg_addr)
DECL|eth_enc28j60_set_eth_reg|function|static void eth_enc28j60_set_eth_reg(struct device *dev, u16_t reg_addr, u8_t value)
DECL|eth_enc28j60_soft_reset|function|static int eth_enc28j60_soft_reset(struct device *dev)
DECL|eth_enc28j60_tx|function|static int eth_enc28j60_tx(struct net_if *iface, struct net_pkt *pkt)
DECL|eth_enc28j60_write_mem|function|static void eth_enc28j60_write_mem(struct device *dev, u8_t *data_buffer, u16_t buf_len)
DECL|eth_enc28j60_write_phy|function|static void eth_enc28j60_write_phy(struct device *dev, u16_t reg_addr, s16_t data)
DECL|eth_enc28j60_write_reg|function|static void eth_enc28j60_write_reg(struct device *dev, u16_t reg_addr, u8_t value)
