DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|__packed|variable|__packed
DECL|cid|member|u8_t cid : 4;
DECL|compress_IPHC_header|function|static inline bool compress_IPHC_header(struct net_pkt *pkt,fragment_handler_t fragment)
DECL|compress_da_ctx|function|static inline u8_t compress_da_ctx(struct net_ipv6_hdr *ipv6, struct net_pkt *pkt, struct net_buf *frag, u8_t offset, struct net_6lo_context *dst)
DECL|compress_da_mcast|function|static inline u8_t compress_da_mcast(struct net_ipv6_hdr *ipv6, struct net_pkt *pkt, struct net_buf *frag, u8_t offset)
DECL|compress_da|function|static inline u8_t compress_da(struct net_ipv6_hdr *ipv6, struct net_pkt *pkt, struct net_buf *frag, u8_t offset)
DECL|compress_hoplimit|function|static inline u8_t compress_hoplimit(struct net_ipv6_hdr *ipv6, struct net_buf *frag, u8_t offset)
DECL|compress_ipv6_header|function|static inline bool compress_ipv6_header(struct net_pkt *pkt,fragment_handler_t fragment)
DECL|compress_nh_udp|function|static inline u8_t compress_nh_udp(struct net_udp_hdr *udp, struct net_buf *frag, u8_t offset)
DECL|compress_nh|function|static inline u8_t compress_nh(struct net_ipv6_hdr *ipv6, struct net_buf *frag, u8_t offset)
DECL|compress_sa_ctx|function|static inline u8_t compress_sa_ctx(struct net_ipv6_hdr *ipv6, struct net_pkt *pkt, struct net_buf *frag, u8_t offset, struct net_6lo_context *src)
DECL|compress_sa|function|static inline u8_t compress_sa(struct net_ipv6_hdr *ipv6, struct net_pkt *pkt, struct net_buf *frag, u8_t offset)
DECL|compress_tfl|function|static inline u8_t compress_tfl(struct net_ipv6_hdr *ipv6, struct net_buf *frag, u8_t offset)
DECL|compress|member|u8_t compress : 1;
DECL|ctx_6co|variable|ctx_6co
DECL|get_6co_cid|function|static inline u8_t get_6co_cid(struct net_icmpv6_nd_opt_6co *opt)
DECL|get_6co_compress|function|static inline u8_t get_6co_compress(struct net_icmpv6_nd_opt_6co *opt)
DECL|get_6lo_context_by_addr|function|get_6lo_context_by_addr(struct net_if *iface, struct in6_addr *addr)
DECL|get_6lo_context_by_cid|function|get_6lo_context_by_cid(struct net_if *iface, u8_t cid)
DECL|iface|member|struct net_if *iface;
DECL|is_src_and_dst_addr_ctx_based|function|static inline bool is_src_and_dst_addr_ctx_based(struct net_ipv6_hdr *ipv6, struct net_pkt *pkt, struct net_buf *frag, struct net_6lo_context **src, struct net_6lo_context **dst)
DECL|is_used|member|u8_t is_used : 1;
DECL|lifetime|member|u16_t lifetime;
DECL|net_6lo_addr_16_bit_compressible|function|static inline bool net_6lo_addr_16_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_compress|function|bool net_6lo_compress(struct net_pkt *pkt, bool iphc, fragment_handler_t fragment)
DECL|net_6lo_context|struct|struct net_6lo_context {
DECL|net_6lo_ll_prefix_padded_with_zeros|function|static inline bool net_6lo_ll_prefix_padded_with_zeros(struct in6_addr *addr)
DECL|net_6lo_maddr_32_bit_compressible|function|static inline bool net_6lo_maddr_32_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_maddr_48_bit_compressible|function|static inline bool net_6lo_maddr_48_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_maddr_8_bit_compressible|function|static inline bool net_6lo_maddr_8_bit_compressible(struct in6_addr *addr)
DECL|net_6lo_set_context|function|void net_6lo_set_context(struct net_if *iface, struct net_icmpv6_nd_opt_6co *context)
DECL|net_6lo_uncompress|function|bool net_6lo_uncompress(struct net_pkt *pkt)
DECL|prefix|member|struct in6_addr prefix;
DECL|set_6lo_context|function|static inline void set_6lo_context(struct net_if *iface, u8_t index, struct net_icmpv6_nd_opt_6co *context)
DECL|uncompress_IPHC_header|function|static inline bool uncompress_IPHC_header(struct net_pkt *pkt)
DECL|uncompress_cid|function|static inline void uncompress_cid(struct net_pkt *pkt, struct net_6lo_context **src, struct net_6lo_context **dst)
DECL|uncompress_da_ctx|function|static inline u8_t uncompress_da_ctx(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset, struct net_6lo_context *ctx)
DECL|uncompress_da_mcast|function|static inline u8_t uncompress_da_mcast(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset)
DECL|uncompress_da|function|static inline u8_t uncompress_da(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset)
DECL|uncompress_hoplimit|function|static inline u8_t uncompress_hoplimit(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset)
DECL|uncompress_ipv6_header|function|static inline bool uncompress_ipv6_header(struct net_pkt *pkt)
DECL|uncompress_nh_udp|function|static inline u8_t uncompress_nh_udp(struct net_pkt *pkt, struct net_udp_hdr *udp, u8_t offset)
DECL|uncompress_sa_ctx|function|static inline u8_t uncompress_sa_ctx(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset, struct net_6lo_context *ctx)
DECL|uncompress_sa|function|static inline u8_t uncompress_sa(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset)
DECL|uncompress_tfl|function|static inline u8_t uncompress_tfl(struct net_pkt *pkt, struct net_ipv6_hdr *ipv6, u8_t offset)
DECL|unused|member|u8_t unused : 2;
