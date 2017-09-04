DECL|IEEE802154_HW_2_4_GHZ|enumerator|IEEE802154_HW_2_4_GHZ = BIT(4), /* 2.4Ghz radio supported */
DECL|IEEE802154_HW_CSMA|enumerator|IEEE802154_HW_CSMA = BIT(3), /* CSMA-CA supported */
DECL|IEEE802154_HW_FCS|enumerator|IEEE802154_HW_FCS = BIT(0), /* Frame Check-Sum supported */
DECL|IEEE802154_HW_FILTER|enumerator|IEEE802154_HW_FILTER = BIT(2), /* Filters PAN ID, long/short addr */
DECL|IEEE802154_HW_PROMISC|enumerator|IEEE802154_HW_PROMISC = BIT(1), /* Promiscuous mode supported */
DECL|__IEEE802154_RADIO_H__|macro|__IEEE802154_RADIO_H__
DECL|__packed|variable|__packed
DECL|cca|member|int (*cca)(struct device *dev);
DECL|get_capabilities|member|enum ieee802154_hw_caps (*get_capabilities)(struct device *dev);
DECL|ieee802154_hw_caps|enum|enum ieee802154_hw_caps {
DECL|ieee802154_radio_api|struct|struct ieee802154_radio_api {
DECL|iface_api|member|struct net_if_api iface_api;
DECL|set_channel|member|int (*set_channel)(struct device *dev, u16_t channel);
DECL|set_ieee_addr|member|int (*set_ieee_addr)(struct device *dev, const u8_t *ieee_addr);
DECL|set_pan_id|member|int (*set_pan_id)(struct device *dev, u16_t pan_id);
DECL|set_short_addr|member|int (*set_short_addr)(struct device *dev, u16_t short_addr);
DECL|set_txpower|member|int (*set_txpower)(struct device *dev, s16_t dbm);
DECL|start|member|int (*start)(struct device *dev);
DECL|stop|member|int (*stop)(struct device *dev);
DECL|tx|member|int (*tx)(struct device *dev,
