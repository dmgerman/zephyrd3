DECL|ACK_TIMEOUT|macro|ACK_TIMEOUT
DECL|L2_CTX_TYPE|macro|L2_CTX_TYPE
DECL|L2_CTX_TYPE|macro|L2_CTX_TYPE
DECL|L2|macro|L2
DECL|L2|macro|L2
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|MTU|macro|MTU
DECL|MTU|macro|MTU
DECL|NRF5_802154_CFG|macro|NRF5_802154_CFG
DECL|NRF5_802154_DATA|macro|NRF5_802154_DATA
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|nrf5_802154_config|struct|struct nrf5_802154_config {
DECL|nrf5_cca|function|static int nrf5_cca(struct device *dev)
DECL|nrf5_config|function|static void nrf5_config(struct device *dev)
DECL|nrf5_data|variable|nrf5_data
DECL|nrf5_filter|function|static int nrf5_filter(struct device *dev, bool set, enum ieee802154_filter_type type, const struct ieee802154_filter *filter)
DECL|nrf5_get_capabilities|function|static enum ieee802154_hw_caps nrf5_get_capabilities(struct device *dev)
DECL|nrf5_get_eui64|function|static void nrf5_get_eui64(u8_t *mac)
DECL|nrf5_iface_init|function|static void nrf5_iface_init(struct net_if *iface)
DECL|nrf5_init|function|static int nrf5_init(struct device *dev)
DECL|nrf5_radio_api|variable|nrf5_radio_api
DECL|nrf5_radio_cfg|variable|nrf5_radio_cfg
DECL|nrf5_radio_irq|function|static void nrf5_radio_irq(void *arg)
DECL|nrf5_rx_thread|function|static void nrf5_rx_thread(void *arg1, void *arg2, void *arg3)
DECL|nrf5_set_channel|function|static int nrf5_set_channel(struct device *dev, u16_t channel)
DECL|nrf5_set_ieee_addr|function|static int nrf5_set_ieee_addr(struct device *dev, const u8_t *ieee_addr)
DECL|nrf5_set_pan_id|function|static int nrf5_set_pan_id(struct device *dev, u16_t pan_id)
DECL|nrf5_set_short_addr|function|static int nrf5_set_short_addr(struct device *dev, u16_t short_addr)
DECL|nrf5_set_txpower|function|static int nrf5_set_txpower(struct device *dev, s16_t dbm)
DECL|nrf5_start|function|static int nrf5_start(struct device *dev)
DECL|nrf5_stop|function|static int nrf5_stop(struct device *dev)
DECL|nrf5_tx|function|static int nrf5_tx(struct device *dev, struct net_pkt *pkt, struct net_buf *frag)
DECL|nrf_drv_radio802154_busy_channel|function|void nrf_drv_radio802154_busy_channel(void)
DECL|nrf_drv_radio802154_energy_detected|function|void nrf_drv_radio802154_energy_detected(s8_t result)
DECL|nrf_drv_radio802154_received|function|void nrf_drv_radio802154_received(u8_t *p_data, s8_t power, s8_t lqi)
DECL|nrf_drv_radio802154_transmitted|function|void nrf_drv_radio802154_transmitted(bool pending_bit)
