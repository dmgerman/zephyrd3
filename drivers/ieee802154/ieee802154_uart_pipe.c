DECL|BROADCAST_ADDRESS|macro|BROADCAST_ADDRESS
DECL|DEST_ADDR_OFFSET|macro|DEST_ADDR_OFFSET
DECL|DEST_ADDR_TYPE_EXTENDED|macro|DEST_ADDR_TYPE_EXTENDED
DECL|DEST_ADDR_TYPE_MASK|macro|DEST_ADDR_TYPE_MASK
DECL|DEST_ADDR_TYPE_OFFSET|macro|DEST_ADDR_TYPE_OFFSET
DECL|DEST_ADDR_TYPE_SHORT|macro|DEST_ADDR_TYPE_SHORT
DECL|EXTENDED_ADDRESS_SIZE|macro|EXTENDED_ADDRESS_SIZE
DECL|PAN_ID_OFFSET|macro|PAN_ID_OFFSET
DECL|PAN_ID_SIZE|macro|PAN_ID_SIZE
DECL|SHORT_ADDRESS_SIZE|macro|SHORT_ADDRESS_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dev_ext_addr|variable|dev_ext_addr
DECL|dev_pan_id|variable|dev_pan_id
DECL|dev_short_addr|variable|dev_short_addr
DECL|get_mac|function|static inline u8_t *get_mac(struct device *dev)
DECL|received_dest_addr_matched|function|static bool received_dest_addr_matched(u8_t *rx_buffer)
DECL|upipe_cca|function|static int upipe_cca(struct device *dev)
DECL|upipe_context_data|variable|upipe_context_data
DECL|upipe_dev|variable|upipe_dev
DECL|upipe_filter|function|static int upipe_filter(struct device *dev,bool set, enum ieee802154_filter_type type, const struct ieee802154_filter *filter)
DECL|upipe_get_capabilities|function|static enum ieee802154_hw_caps upipe_get_capabilities(struct device *dev)
DECL|upipe_iface_init|function|static void upipe_iface_init(struct net_if *iface)
DECL|upipe_init|function|static int upipe_init(struct device *dev)
DECL|upipe_radio_api|variable|upipe_radio_api
DECL|upipe_rx|function|static u8_t *upipe_rx(u8_t *buf, size_t *off)
DECL|upipe_set_channel|function|static int upipe_set_channel(struct device *dev, u16_t channel)
DECL|upipe_set_ieee_addr|function|static int upipe_set_ieee_addr(struct device *dev, const u8_t *ieee_addr)
DECL|upipe_set_pan_id|function|static int upipe_set_pan_id(struct device *dev, u16_t pan_id)
DECL|upipe_set_short_addr|function|static int upipe_set_short_addr(struct device *dev, u16_t short_addr)
DECL|upipe_set_txpower|function|static int upipe_set_txpower(struct device *dev, s16_t dbm)
DECL|upipe_start|function|static int upipe_start(struct device *dev)
DECL|upipe_stop|function|static int upipe_stop(struct device *dev)
DECL|upipe_tx|function|static int upipe_tx(struct device *dev, struct net_pkt *pkt, struct net_buf *frag)
