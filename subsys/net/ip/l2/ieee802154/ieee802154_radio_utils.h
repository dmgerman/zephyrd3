DECL|__IEEE802154_RADIO_UTILS_H__|macro|__IEEE802154_RADIO_UTILS_H__
DECL|handle_ack|function|static inline int handle_ack(struct ieee802154_context *ctx, struct net_pkt *pkt)
DECL|ieee802154_radio_tx_frag_t|typedef|typedef int (ieee802154_radio_tx_frag_t)(struct net_if *iface,
DECL|prepare_for_ack|function|static inline bool prepare_for_ack(struct ieee802154_context *ctx, struct net_pkt *pkt, struct net_buf *frag)
DECL|tx_packet_fragments|function|static inline int tx_packet_fragments(struct net_if *iface, struct net_pkt *pkt, ieee802154_radio_tx_frag_t *tx_func)
DECL|wait_for_ack|function|static inline int wait_for_ack(struct net_if *iface, bool ack_required)
