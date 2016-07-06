DECL|NET_ICMP_BUF|macro|NET_ICMP_BUF
DECL|NET_IPV4_BUF|macro|NET_IPV4_BUF
DECL|NET_IPV6_BUF|macro|NET_IPV6_BUF
DECL|NET_NBUF_DATA|enumerator|NET_NBUF_DATA = 2,
DECL|NET_NBUF_RX|enumerator|NET_NBUF_RX = 0,
DECL|NET_NBUF_TX|enumerator|NET_NBUF_TX = 1,
DECL|NET_UDP_BUF|macro|NET_UDP_BUF
DECL|__NBUF_H|macro|__NBUF_H
DECL|appdatalen|member|uint16_t appdatalen;
DECL|appdata|member|uint8_t *appdata; /* application data */
DECL|context|member|struct net_context *context;
DECL|ext_bitmap|member|uint8_t ext_bitmap;
DECL|ext_len|member|uint8_t ext_len; /* length of extension headers */
DECL|ext_opt_len|member|uint8_t ext_opt_len; /* IPv6 ND option length */
DECL|family|member|uint8_t family; /* IPv4 vs IPv6 */
DECL|iface|member|struct net_if *iface;
DECL|ip_hdr_len|member|uint8_t ip_hdr_len; /* pre-filled in order to avoid func call */
DECL|ll_reserve|member|uint8_t ll_reserve; /* link layer header length */
DECL|lladdr_dst|member|struct net_linkaddr lladdr_dst;
DECL|lladdr_src|member|struct net_linkaddr lladdr_src;
DECL|net_nbuf_appdatalen|function|static inline uint16_t net_nbuf_appdatalen(struct net_buf *buf)
DECL|net_nbuf_appdata|function|static inline uint8_t *net_nbuf_appdata(struct net_buf *buf)
DECL|net_nbuf_context|function|static inline struct net_context *net_nbuf_context(struct net_buf *buf)
DECL|net_nbuf_copy_all|function|static inline struct net_buf *net_nbuf_copy_all(struct net_buf *buf,size_t reserve)
DECL|net_nbuf_ext_bitmap|function|static inline uint8_t net_nbuf_ext_bitmap(struct net_buf *buf)
DECL|net_nbuf_ext_len|function|static inline uint8_t net_nbuf_ext_len(struct net_buf *buf)
DECL|net_nbuf_ext_opt_len|function|static inline uint8_t net_nbuf_ext_opt_len(struct net_buf *buf)
DECL|net_nbuf_family|function|static inline uint8_t net_nbuf_family(struct net_buf *buf)
DECL|net_nbuf_get_data|macro|net_nbuf_get_data
DECL|net_nbuf_get_len|function|static inline uint16_t net_nbuf_get_len(struct net_buf *buf)
DECL|net_nbuf_get_reserve_data|macro|net_nbuf_get_reserve_data
DECL|net_nbuf_get_reserve_rx|macro|net_nbuf_get_reserve_rx
DECL|net_nbuf_get_reserve_tx|macro|net_nbuf_get_reserve_tx
DECL|net_nbuf_get_rx|macro|net_nbuf_get_rx
DECL|net_nbuf_get_tx|macro|net_nbuf_get_tx
DECL|net_nbuf_icmp_data|function|static inline uint8_t *net_nbuf_icmp_data(struct net_buf *buf)
DECL|net_nbuf_iface|function|static inline struct net_if *net_nbuf_iface(struct net_buf *buf)
DECL|net_nbuf_ip_data|function|static inline uint8_t *net_nbuf_ip_data(struct net_buf *buf)
DECL|net_nbuf_ip_hdr_len|function|static inline uint8_t net_nbuf_ip_hdr_len(struct net_buf *buf)
DECL|net_nbuf_ll_clear|function|static inline void net_nbuf_ll_clear(struct net_buf *buf)
DECL|net_nbuf_ll_dst|function|static inline struct net_linkaddr *net_nbuf_ll_dst(struct net_buf *buf)
DECL|net_nbuf_ll_if|function|static inline struct net_linkaddr *net_nbuf_ll_if(struct net_buf *buf)
DECL|net_nbuf_ll_reserve|function|static inline uint8_t net_nbuf_ll_reserve(struct net_buf *buf)
DECL|net_nbuf_ll_src|function|static inline struct net_linkaddr *net_nbuf_ll_src(struct net_buf *buf)
DECL|net_nbuf_ll_swap|function|static inline void net_nbuf_ll_swap(struct net_buf *buf)
DECL|net_nbuf_ll|function|static inline uint8_t *net_nbuf_ll(struct net_buf *buf)
DECL|net_nbuf_next_hdr|function|static inline uint8_t *net_nbuf_next_hdr(struct net_buf *buf)
DECL|net_nbuf_print_frags|macro|net_nbuf_print_frags
DECL|net_nbuf_print|macro|net_nbuf_print
DECL|net_nbuf_ref|macro|net_nbuf_ref
DECL|net_nbuf_reserve|function|static inline uint16_t net_nbuf_reserve(struct net_buf *buf)
DECL|net_nbuf_set_appdatalen|function|static inline void net_nbuf_set_appdatalen(struct net_buf *buf, uint16_t len)
DECL|net_nbuf_set_appdata|function|static inline void net_nbuf_set_appdata(struct net_buf *buf, uint8_t *data)
DECL|net_nbuf_set_context|function|static inline void net_nbuf_set_context(struct net_buf *buf,struct net_context *ctx)
DECL|net_nbuf_set_ext_bitmap|function|static inline void net_nbuf_set_ext_bitmap(struct net_buf *buf, uint8_t bm)
DECL|net_nbuf_set_ext_len|function|static inline void net_nbuf_set_ext_len(struct net_buf *buf, uint8_t len)
DECL|net_nbuf_set_ext_opt_len|function|static inline void net_nbuf_set_ext_opt_len(struct net_buf *buf, uint8_t len)
DECL|net_nbuf_set_family|function|static inline void net_nbuf_set_family(struct net_buf *buf, uint8_t family)
DECL|net_nbuf_set_iface|function|static inline void net_nbuf_set_iface(struct net_buf *buf, struct net_if *iface)
DECL|net_nbuf_set_ip_hdr_len|function|static inline void net_nbuf_set_ip_hdr_len(struct net_buf *buf, uint8_t len)
DECL|net_nbuf_set_len|function|static inline void net_nbuf_set_len(struct net_buf *buf, uint16_t len)
DECL|net_nbuf_set_ll_reserve|function|static inline void net_nbuf_set_ll_reserve(struct net_buf *buf, uint8_t len)
DECL|net_nbuf_set_next_hdr|function|static inline void net_nbuf_set_next_hdr(struct net_buf *buf, uint8_t *hdr)
DECL|net_nbuf_set_src_ipv6_addr|function|static inline void net_nbuf_set_src_ipv6_addr(struct net_buf *buf)
DECL|net_nbuf_set_token|function|static inline void net_nbuf_set_token(struct net_buf *buf, void *token)
DECL|net_nbuf_set_type|function|static inline void net_nbuf_set_type(struct net_buf *buf, uint8_t type)
DECL|net_nbuf_tcp_data|function|static inline uint8_t *net_nbuf_tcp_data(struct net_buf *buf)
DECL|net_nbuf_token|function|static inline void *net_nbuf_token(struct net_buf *buf)
DECL|net_nbuf_type|enum|enum net_nbuf_type {
DECL|net_nbuf_type|function|static inline enum net_nbuf_type net_nbuf_type(struct net_buf *buf)
DECL|net_nbuf_udp_data|function|static inline uint8_t *net_nbuf_udp_data(struct net_buf *buf)
DECL|net_nbuf_unref|macro|net_nbuf_unref
DECL|net_nbuf|struct|struct net_nbuf {
DECL|next_hdr|member|uint8_t *next_hdr;
DECL|reserve|member|uint16_t reserve; /* length of the protocol headers */
DECL|token|member|void *token;
DECL|type|member|enum net_nbuf_type type;
