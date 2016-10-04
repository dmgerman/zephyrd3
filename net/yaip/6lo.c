DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|__packed|variable|__packed
DECL|cid|member|uint8_t cid : 4;
DECL|compress_IPHC_header|function|static inline bool compress_IPHC_header(struct net_buf *buf,fragment_handler_t fragment)
DECL|compress_da|function|static inline uint8_t compress_da(struct net_ipv6_hdr *ipv6, struct net_buf *buf, struct net_buf *frag, uint8_t offset)
DECL|compress_hoplimit|function|static inline uint8_t compress_hoplimit(struct net_ipv6_hdr *ipv6,struct net_buf *frag, uint8_t offset)
DECL|compress_ipv6_header|function|static inline bool compress_ipv6_header(struct net_buf *buf,fragment_handler_t fragment)
DECL|compress_nh_udp|function|static inline uint8_t compress_nh_udp(struct net_udp_hdr *udp, struct net_buf *frag, uint8_t offset)
DECL|compress_nh|function|static inline uint8_t compress_nh(struct net_ipv6_hdr *ipv6, struct net_buf *frag, uint8_t offset)
DECL|compress_sa|function|static inline uint8_t compress_sa(struct net_ipv6_hdr *ipv6, struct net_buf *buf, struct net_buf *frag, uint8_t offset)
DECL|compress_tfl|function|static inline uint8_t compress_tfl(struct net_ipv6_hdr *ipv6, struct net_buf *frag, uint8_t offset)
DECL|compress|member|uint8_t compress : 1;
DECL|ctx_6co|variable|ctx_6co
DECL|get_6co_cid|function|static inline uint8_t get_6co_cid(struct net_icmpv6_nd_opt_6co *opt)
DECL|get_6co_compress|function|static inline uint8_t get_6co_compress(struct net_icmpv6_nd_opt_6co *opt)
DECL|iface|member|struct net_if *iface;
DECL|is_used|member|uint8_t is_used : 1;
DECL|lifetime|member|uint16_t lifetime;
DECL|net_6lo_addr_16_bit_compressible|function|static inline bool net_6lo_addr_16_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_compress|function|bool net_6lo_compress(struct net_buf *buf, bool iphc, fragment_handler_t fragment)
DECL|net_6lo_context|struct|struct net_6lo_context {
DECL|net_6lo_ll_prefix_padded_with_zeros|function|static inline bool net_6lo_ll_prefix_padded_with_zeros(struct in6_addr *addr)
DECL|net_6lo_maddr_32_bit_compressible|function|static inline bool net_6lo_maddr_32_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_maddr_48_bit_compressible|function|static inline bool net_6lo_maddr_48_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_maddr_8_bit_compressible|function|static inline bool net_6lo_maddr_8_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_set_context|function|void net_6lo_set_context(struct net_if *iface, struct net_icmpv6_nd_opt_6co *context)
DECL|net_6lo_uncompress|function|bool net_6lo_uncompress(struct net_buf *buf)
DECL|prefix|member|struct in6_addr prefix;
DECL|set_6lo_context|function|static inline void set_6lo_context(struct net_if *iface, uint8_t index, struct net_icmpv6_nd_opt_6co *context)
DECL|uncompress_IPHC_header|function|static inline bool uncompress_IPHC_header(struct net_buf *buf)
DECL|uncompress_da|function|static inline uint8_t uncompress_da(struct net_buf *buf, struct net_ipv6_hdr *ipv6, uint8_t offset)
DECL|uncompress_hoplimit|function|static inline uint8_t uncompress_hoplimit(struct net_buf *buf, struct net_ipv6_hdr *ipv6, uint8_t offset)
DECL|uncompress_ipv6_header|function|static inline bool uncompress_ipv6_header(struct net_buf *buf)
DECL|uncompress_nh_udp|function|static inline uint8_t uncompress_nh_udp(struct net_buf *buf,struct net_udp_hdr *udp, uint8_t offset)
DECL|uncompress_sa|function|static inline uint8_t uncompress_sa(struct net_buf *buf, struct net_ipv6_hdr *ipv6, uint8_t offset)
DECL|uncompress_tfl|function|static inline uint8_t uncompress_tfl(struct net_buf *buf, struct net_ipv6_hdr *ipv6, uint8_t offset)
DECL|unused|member|uint8_t unused : 2;
