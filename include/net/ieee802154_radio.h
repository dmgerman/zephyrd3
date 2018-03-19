DECL|IEEE802154_AR_FLAG_SET|macro|IEEE802154_AR_FLAG_SET
DECL|IEEE802154_FILTER_TYPE_IEEE_ADDR|enumerator|IEEE802154_FILTER_TYPE_IEEE_ADDR,
DECL|IEEE802154_FILTER_TYPE_PAN_ID|enumerator|IEEE802154_FILTER_TYPE_PAN_ID,
DECL|IEEE802154_FILTER_TYPE_SHORT_ADDR|enumerator|IEEE802154_FILTER_TYPE_SHORT_ADDR,
DECL|IEEE802154_FILTER_TYPE_SRC_IEEE_ADDR|enumerator|IEEE802154_FILTER_TYPE_SRC_IEEE_ADDR,
DECL|IEEE802154_FILTER_TYPE_SRC_SHORT_ADDR|enumerator|IEEE802154_FILTER_TYPE_SRC_SHORT_ADDR,
DECL|IEEE802154_HW_2_4_GHZ|enumerator|IEEE802154_HW_2_4_GHZ = BIT(4), /* 2.4Ghz radio supported */
DECL|IEEE802154_HW_CSMA|enumerator|IEEE802154_HW_CSMA = BIT(3), /* CSMA-CA supported */
DECL|IEEE802154_HW_FCS|enumerator|IEEE802154_HW_FCS = BIT(0), /* Frame Check-Sum supported */
DECL|IEEE802154_HW_FILTER|enumerator|IEEE802154_HW_FILTER = BIT(2), /* Filters PAN ID, long/short addr */
DECL|IEEE802154_HW_PROMISC|enumerator|IEEE802154_HW_PROMISC = BIT(1), /* Promiscuous mode supported */
DECL|IEEE802154_HW_SUB_GHZ|enumerator|IEEE802154_HW_SUB_GHZ = BIT(6), /* Sub-GHz radio supported */
DECL|IEEE802154_HW_TX_RX_ACK|enumerator|IEEE802154_HW_TX_RX_ACK = BIT(5), /* Handles ACK request on TX */
DECL|__IEEE802154_RADIO_H__|macro|__IEEE802154_RADIO_H__
DECL|__packed|variable|__packed
DECL|cca|member|int (*cca)(struct device *dev);
DECL|ed_scan|member|int (*ed_scan)(struct device *dev,
DECL|filter|member|int (*filter)(struct device *dev,
DECL|get_capabilities|member|enum ieee802154_hw_caps (*get_capabilities)(struct device *dev);
DECL|get_subg_channel_count|member|u16_t (*get_subg_channel_count)(struct device *dev);
DECL|ieee802154_filter_type|enum|enum ieee802154_filter_type {
DECL|ieee802154_filter|struct|struct ieee802154_filter {
DECL|ieee802154_hw_caps|enum|enum ieee802154_hw_caps {
DECL|ieee802154_init|macro|ieee802154_init
DECL|ieee802154_is_ar_flag_set|function|static inline bool ieee802154_is_ar_flag_set(struct net_pkt *pkt)
DECL|ieee802154_radio_api|struct|struct ieee802154_radio_api {
DECL|ieee802154_radio_handle_ack|function|static inline enum net_verdict ieee802154_radio_handle_ack(struct net_if *iface, struct net_pkt *pkt)
DECL|ieee802154_radio_send|function|static inline int ieee802154_radio_send(struct net_if *iface,struct net_pkt *pkt)
DECL|ieee_addr|member|u8_t *ieee_addr;
DECL|iface_api|member|struct net_if_api iface_api;
DECL|pan_id|member|u16_t pan_id;
DECL|set_channel|member|int (*set_channel)(struct device *dev, u16_t channel);
DECL|set_txpower|member|int (*set_txpower)(struct device *dev, s16_t dbm);
DECL|short_addr|member|u16_t short_addr;
DECL|start|member|int (*start)(struct device *dev);
DECL|stop|member|int (*stop)(struct device *dev);
DECL|tx|member|int (*tx)(struct device *dev,
