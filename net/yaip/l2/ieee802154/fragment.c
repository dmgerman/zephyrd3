DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|calc_max_payload|function|static inline uint8_t calc_max_payload(struct net_buf *buf, uint8_t offset)
DECL|compact_frag|function|static inline uint8_t compact_frag(struct net_buf *frag, uint8_t moved)
DECL|datagram_tag|variable|datagram_tag
DECL|ieee802154_fragment|function|bool ieee802154_fragment(struct net_buf *buf, int hdr_diff)
DECL|move_frag_data|function|static inline uint8_t move_frag_data(struct net_buf *frag, struct net_buf *next, uint8_t max, uint8_t data_len)
DECL|set_datagram_size|function|static inline void set_datagram_size(uint8_t *ptr, uint16_t size)
DECL|set_datagram_tag|function|static inline void set_datagram_tag(uint8_t *ptr, uint16_t tag)
DECL|set_up_frag_hdr|function|static inline void set_up_frag_hdr(struct net_buf *buf, uint16_t size, uint8_t offset)
