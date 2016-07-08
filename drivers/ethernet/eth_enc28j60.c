DECL|D10D24S|macro|D10D24S
DECL|MAX_BUFFER_LENGTH|macro|MAX_BUFFER_LENGTH
DECL|api_funcs|variable|api_funcs
DECL|enc28j60_fiber_main|function|static void enc28j60_fiber_main(int arg1, int unused)
DECL|eth_enc28j60_0_config|variable|eth_enc28j60_0_config
DECL|eth_enc28j60_0_runtime|variable|eth_enc28j60_0_runtime
DECL|eth_enc28j60_clear_eth_reg|function|static void eth_enc28j60_clear_eth_reg(struct device *dev, uint16_t reg_addr, uint8_t value)
DECL|eth_enc28j60_gpio_callback|function|static void eth_enc28j60_gpio_callback(struct device *dev, struct gpio_callback *cb, uint32_t pins)
DECL|eth_enc28j60_init_buffers|function|static void eth_enc28j60_init_buffers(struct device *dev)
DECL|eth_enc28j60_init_mac|function|static void eth_enc28j60_init_mac(struct device *dev)
DECL|eth_enc28j60_init_phy|function|static void eth_enc28j60_init_phy(struct device *dev)
DECL|eth_enc28j60_init|function|static int eth_enc28j60_init(struct device *dev)
DECL|eth_enc28j60_read_mem|function|static void eth_enc28j60_read_mem(struct device *dev, uint8_t *data_buffer, uint8_t buf_len)
DECL|eth_enc28j60_read_phy|function|static void eth_enc28j60_read_phy(struct device *dev, uint16_t reg_addr, int16_t *data)
DECL|eth_enc28j60_read_reg|function|static void eth_enc28j60_read_reg(struct device *dev, uint16_t reg_addr, uint8_t *value)
DECL|eth_enc28j60_reg_cb|function|void eth_enc28j60_reg_cb(struct device *dev, void (*cb)(uint8_t *buffer, uint16_t len))
DECL|eth_enc28j60_rx|function|static int eth_enc28j60_rx(struct device *dev)
DECL|eth_enc28j60_set_bank|function|static void eth_enc28j60_set_bank(struct device *dev, uint16_t reg_addr)
DECL|eth_enc28j60_set_eth_reg|function|static void eth_enc28j60_set_eth_reg(struct device *dev, uint16_t reg_addr, uint8_t value)
DECL|eth_enc28j60_soft_reset|function|static int eth_enc28j60_soft_reset(struct device *dev)
DECL|eth_enc28j60_tx|function|static int eth_enc28j60_tx(struct device *dev, uint8_t *buf, uint16_t len)
DECL|eth_enc28j60_write_mem|function|static void eth_enc28j60_write_mem(struct device *dev, uint8_t *data_buffer, uint8_t buf_len)
DECL|eth_enc28j60_write_phy|function|static void eth_enc28j60_write_phy(struct device *dev, uint16_t reg_addr, int16_t data)
DECL|eth_enc28j60_write_reg|function|static void eth_enc28j60_write_reg(struct device *dev, uint16_t reg_addr, uint8_t value)
DECL|eth_net_tx|function|static int eth_net_tx(struct net_buf *buf)
