DECL|__IEEE802154_UTILS_H__|macro|__IEEE802154_UTILS_H__
DECL|ieee802154_cca|function|static inline int ieee802154_cca(struct net_if *iface)
DECL|ieee802154_filter_ieee_addr|function|static inline void ieee802154_filter_ieee_addr(struct net_if *iface, u8_t *ieee_addr)
DECL|ieee802154_filter_pan_id|function|static inline void ieee802154_filter_pan_id(struct net_if *iface, u16_t pan_id)
DECL|ieee802154_filter_short_addr|function|static inline void ieee802154_filter_short_addr(struct net_if *iface,u16_t short_addr)
DECL|ieee802154_get_hw_capabilities|function|enum ieee802154_hw_caps ieee802154_get_hw_capabilities(struct net_if *iface)
DECL|ieee802154_set_channel|function|static inline int ieee802154_set_channel(struct net_if *iface, u16_t channel)
DECL|ieee802154_set_tx_power|function|static inline int ieee802154_set_tx_power(struct net_if *iface, s16_t dbm)
DECL|ieee802154_start|function|static inline int ieee802154_start(struct net_if *iface)
DECL|ieee802154_stop|function|static inline int ieee802154_stop(struct net_if *iface)
DECL|ieee802154_tx|function|static inline int ieee802154_tx(struct net_if *iface,struct net_pkt *pkt, struct net_buf *frag)
DECL|ieee802154_verify_channel|function|static inline bool ieee802154_verify_channel(struct net_if *iface, u16_t channel)
