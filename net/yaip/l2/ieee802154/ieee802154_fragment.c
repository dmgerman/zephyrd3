DECL|FRAG_REASSEMBLY_TIMEOUT|macro|FRAG_REASSEMBLY_TIMEOUT
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|REASS_CACHE_SIZE|macro|REASS_CACHE_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|add_frag_to_cache|function|static inline enum net_verdict add_frag_to_cache(struct net_buf *buf, bool first)
DECL|buf|member|struct net_buf *buf; /* Reassemble buffer */
DECL|cache|variable|cache
DECL|calc_max_payload|function|static inline uint8_t calc_max_payload(struct net_buf *buf, uint8_t offset)
DECL|clear_reass_cache|function|static inline void clear_reass_cache(uint16_t size, uint16_t tag)
DECL|compact_frag|function|static inline uint8_t compact_frag(struct net_buf *frag, uint8_t moved)
DECL|datagram_tag|variable|datagram_tag
DECL|frag_cache|struct|struct frag_cache {
DECL|get_datagram_size|function|static inline uint16_t get_datagram_size(uint8_t *ptr)
DECL|get_datagram_tag|function|static inline uint16_t get_datagram_tag(uint8_t *ptr)
DECL|get_reass_cache|function|static inline struct frag_cache *get_reass_cache(struct net_buf *buf, uint16_t size, uint16_t tag)
DECL|ieee802154_fragment|function|bool ieee802154_fragment(struct net_buf *buf, int hdr_diff)
DECL|ieee802154_reassemble|function|enum net_verdict ieee802154_reassemble(struct net_buf *buf)
DECL|move_frag_data|function|static inline uint8_t move_frag_data(struct net_buf *frag, struct net_buf *next, uint8_t max, uint8_t data_len)
DECL|reass_timeout|function|static void reass_timeout(struct k_work *work)
DECL|remove_frag_header|function|static inline void remove_frag_header(struct net_buf *frag, uint8_t hdr_len)
DECL|set_datagram_size|function|static inline void set_datagram_size(uint8_t *ptr, uint16_t size)
DECL|set_datagram_tag|function|static inline void set_datagram_tag(uint8_t *ptr, uint16_t tag)
DECL|set_reass_cache|function|static inline struct frag_cache *set_reass_cache(struct net_buf *buf, uint16_t size, uint16_t tag)
DECL|set_up_frag_hdr|function|static inline void set_up_frag_hdr(struct net_buf *buf, uint16_t size, uint8_t offset)
DECL|size|member|uint16_t size; /* Datagram size */
DECL|tag|member|uint16_t tag; /* Datagram tag */
DECL|timer|member|struct k_delayed_work timer; /* Reassemble timer */
DECL|update_protocol_header_lengths|function|static void update_protocol_header_lengths(struct net_buf *buf, uint16_t size)
DECL|used|member|bool used;
