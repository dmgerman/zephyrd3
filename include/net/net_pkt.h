DECL|NET_ICMP_BUF|macro|NET_ICMP_BUF
DECL|NET_IPV4_BUF|macro|NET_IPV4_BUF
DECL|NET_IPV6_BUF|macro|NET_IPV6_BUF
DECL|NET_PKT_DATA_POOL_DEFINE|macro|NET_PKT_DATA_POOL_DEFINE
DECL|NET_PKT_TX_SLAB_DEFINE|macro|NET_PKT_TX_SLAB_DEFINE
DECL|NET_TCP_BUF|macro|NET_TCP_BUF
DECL|NET_UDP_BUF|macro|NET_UDP_BUF
DECL|__NET_PKT_H__|macro|__NET_PKT_H__
DECL|_unused|member|int _unused;
DECL|appdatalen|member|uint16_t appdatalen;
DECL|appdata|member|uint8_t *appdata; /* application data starts here */
DECL|context|member|struct net_context *context;
DECL|ext_bitmap|member|uint8_t ext_bitmap;
DECL|ext_len|member|uint8_t ext_len; /* length of extension headers */
DECL|ext_opt_len|member|uint8_t ext_opt_len; /* IPv6 ND option length */
DECL|family|member|uint8_t family; /* IPv4 vs IPv6 */
DECL|forwarding|member|bool forwarding; /* Are we forwarding this pkt */
DECL|frags|member|struct net_buf *frags;
DECL|ieee802154_rssi|member|uint8_t ieee802154_rssi;
DECL|iface|member|struct net_if *iface;
DECL|ip_hdr_len|member|uint8_t ip_hdr_len; /* pre-filled in order to avoid func call */
DECL|ipv6_frag_hdr_start|member|uint8_t *ipv6_frag_hdr_start;
DECL|ipv6_fragment_id|member|uint32_t ipv6_fragment_id;
DECL|ipv6_fragment_offset|member|uint16_t ipv6_fragment_offset;
DECL|ipv6_hop_limit|member|uint8_t ipv6_hop_limit;
DECL|ipv6_prev_hdr_start|member|uint16_t ipv6_prev_hdr_start;
DECL|ll_reserve|member|uint8_t ll_reserve; /* link layer header length */
DECL|lladdr_dst|member|struct net_linkaddr lladdr_dst;
DECL|lladdr_src|member|struct net_linkaddr lladdr_src;
DECL|net_frag_read_u8|function|static inline struct net_buf *net_frag_read_u8(struct net_buf *frag, uint16_t offset, uint16_t *pos, uint8_t *value)
DECL|net_frag_skip|function|static inline struct net_buf *net_frag_skip(struct net_buf *frag, uint16_t offset, uint16_t *pos, uint16_t len)
DECL|net_pkt_add_ext_bitmap|function|static inline void net_pkt_add_ext_bitmap(struct net_pkt *pkt, uint8_t bm)
DECL|net_pkt_allocs_cb_t|typedef|typedef void (*net_pkt_allocs_cb_t)(struct net_pkt *pkt,
DECL|net_pkt_appdatalen|function|static inline uint16_t net_pkt_appdatalen(struct net_pkt *pkt)
DECL|net_pkt_appdata|function|static inline uint8_t *net_pkt_appdata(struct net_pkt *pkt)
DECL|net_pkt_append_be16|function|static inline bool net_pkt_append_be16(struct net_pkt *pkt, uint16_t data)
DECL|net_pkt_append_be32|function|static inline bool net_pkt_append_be32(struct net_pkt *pkt, uint32_t data)
DECL|net_pkt_append_le32|function|static inline bool net_pkt_append_le32(struct net_pkt *pkt, uint32_t data)
DECL|net_pkt_append_u8|function|static inline bool net_pkt_append_u8(struct net_pkt *pkt, uint8_t data)
DECL|net_pkt_context|function|static inline struct net_context *net_pkt_context(struct net_pkt *pkt)
DECL|net_pkt_copy_all|function|static inline struct net_buf *net_pkt_copy_all(struct net_pkt *pkt, size_t reserve, int32_t timeout)
DECL|net_pkt_ext_bitmap|function|static inline uint8_t net_pkt_ext_bitmap(struct net_pkt *pkt)
DECL|net_pkt_ext_len|function|static inline uint8_t net_pkt_ext_len(struct net_pkt *pkt)
DECL|net_pkt_ext_opt_len|function|static inline uint8_t net_pkt_ext_opt_len(struct net_pkt *pkt)
DECL|net_pkt_family|function|static inline uint8_t net_pkt_family(struct net_pkt *pkt)
DECL|net_pkt_forwarding|function|static inline bool net_pkt_forwarding(struct net_pkt *pkt)
DECL|net_pkt_forwarding|function|static inline bool net_pkt_forwarding(struct net_pkt *pkt)
DECL|net_pkt_frag_add|macro|net_pkt_frag_add
DECL|net_pkt_frag_del|macro|net_pkt_frag_del
DECL|net_pkt_frag_insert|macro|net_pkt_frag_insert
DECL|net_pkt_frag_ref|macro|net_pkt_frag_ref
DECL|net_pkt_frag_unref|macro|net_pkt_frag_unref
DECL|net_pkt_get_data|macro|net_pkt_get_data
DECL|net_pkt_get_frag|macro|net_pkt_get_frag
DECL|net_pkt_get_len|function|static inline size_t net_pkt_get_len(struct net_pkt *pkt)
DECL|net_pkt_get_reserve_data|macro|net_pkt_get_reserve_data
DECL|net_pkt_get_reserve_rx_data|macro|net_pkt_get_reserve_rx_data
DECL|net_pkt_get_reserve_rx|macro|net_pkt_get_reserve_rx
DECL|net_pkt_get_reserve_tx_data|macro|net_pkt_get_reserve_tx_data
DECL|net_pkt_get_reserve_tx|macro|net_pkt_get_reserve_tx
DECL|net_pkt_get_reserve|macro|net_pkt_get_reserve
DECL|net_pkt_get_rx|macro|net_pkt_get_rx
DECL|net_pkt_get_tx|macro|net_pkt_get_tx
DECL|net_pkt_icmp_data|function|static inline uint8_t *net_pkt_icmp_data(struct net_pkt *pkt)
DECL|net_pkt_ieee802154_rssi|function|static inline uint8_t net_pkt_ieee802154_rssi(struct net_pkt *pkt)
DECL|net_pkt_iface|function|static inline struct net_if *net_pkt_iface(struct net_pkt *pkt)
DECL|net_pkt_insert_be16|function|static inline bool net_pkt_insert_be16(struct net_pkt *pkt, struct net_buf *frag, uint16_t offset, uint16_t data)
DECL|net_pkt_insert_be32|function|static inline bool net_pkt_insert_be32(struct net_pkt *pkt, struct net_buf *frag, uint16_t offset, uint32_t data)
DECL|net_pkt_insert_u8|function|static inline bool net_pkt_insert_u8(struct net_pkt *pkt, struct net_buf *frag, uint16_t offset, uint8_t data)
DECL|net_pkt_ip_data|function|static inline uint8_t *net_pkt_ip_data(struct net_pkt *pkt)
DECL|net_pkt_ip_hdr_len|function|static inline uint8_t net_pkt_ip_hdr_len(struct net_pkt *pkt)
DECL|net_pkt_ipv6_fragment_id|function|static inline uint32_t net_pkt_ipv6_fragment_id(struct net_pkt *pkt)
DECL|net_pkt_ipv6_fragment_offset|function|static inline uint16_t net_pkt_ipv6_fragment_offset(struct net_pkt *pkt)
DECL|net_pkt_ipv6_fragment_start|function|static inline uint8_t *net_pkt_ipv6_fragment_start(struct net_pkt *pkt)
DECL|net_pkt_ipv6_hdr_prev|function|static inline uint16_t net_pkt_ipv6_hdr_prev(struct net_pkt *pkt)
DECL|net_pkt_ipv6_hop_limit|function|static inline uint8_t net_pkt_ipv6_hop_limit(struct net_pkt *pkt)
DECL|net_pkt_ll_clear|function|static inline void net_pkt_ll_clear(struct net_pkt *pkt)
DECL|net_pkt_ll_dst|function|static inline struct net_linkaddr *net_pkt_ll_dst(struct net_pkt *pkt)
DECL|net_pkt_ll_if|function|static inline struct net_linkaddr *net_pkt_ll_if(struct net_pkt *pkt)
DECL|net_pkt_ll_reserve|function|static inline uint8_t net_pkt_ll_reserve(struct net_pkt *pkt)
DECL|net_pkt_ll_src|function|static inline struct net_linkaddr *net_pkt_ll_src(struct net_pkt *pkt)
DECL|net_pkt_ll_swap|function|static inline void net_pkt_ll_swap(struct net_pkt *pkt)
DECL|net_pkt_ll|function|static inline uint8_t *net_pkt_ll(struct net_pkt *pkt)
DECL|net_pkt_next_hdr|function|static inline uint8_t *net_pkt_next_hdr(struct net_pkt *pkt)
DECL|net_pkt_print_frags|macro|net_pkt_print_frags
DECL|net_pkt_print|macro|net_pkt_print
DECL|net_pkt_ref|macro|net_pkt_ref
DECL|net_pkt_sent|function|static inline uint8_t net_pkt_sent(struct net_pkt *pkt)
DECL|net_pkt_set_appdatalen|function|static inline void net_pkt_set_appdatalen(struct net_pkt *pkt, uint16_t len)
DECL|net_pkt_set_appdata|function|static inline void net_pkt_set_appdata(struct net_pkt *pkt, uint8_t *data)
DECL|net_pkt_set_context|function|static inline void net_pkt_set_context(struct net_pkt *pkt,struct net_context *ctx)
DECL|net_pkt_set_ext_bitmap|function|static inline void net_pkt_set_ext_bitmap(struct net_pkt *pkt, uint8_t bm)
DECL|net_pkt_set_ext_len|function|static inline void net_pkt_set_ext_len(struct net_pkt *pkt, uint8_t len)
DECL|net_pkt_set_ext_opt_len|function|static inline void net_pkt_set_ext_opt_len(struct net_pkt *pkt, uint8_t len)
DECL|net_pkt_set_family|function|static inline void net_pkt_set_family(struct net_pkt *pkt, uint8_t family)
DECL|net_pkt_set_forwarding|function|static inline void net_pkt_set_forwarding(struct net_pkt *pkt, bool forward)
DECL|net_pkt_set_ieee802154_rssi|function|static inline void net_pkt_set_ieee802154_rssi(struct net_pkt *pkt,uint8_t rssi)
DECL|net_pkt_set_iface|function|static inline void net_pkt_set_iface(struct net_pkt *pkt, struct net_if *iface)
DECL|net_pkt_set_ip_hdr_len|function|static inline void net_pkt_set_ip_hdr_len(struct net_pkt *pkt, uint8_t len)
DECL|net_pkt_set_ipv6_fragment_id|function|static inline void net_pkt_set_ipv6_fragment_id(struct net_pkt *pkt,uint32_t id)
DECL|net_pkt_set_ipv6_fragment_offset|function|static inline void net_pkt_set_ipv6_fragment_offset(struct net_pkt *pkt, uint16_t offset)
DECL|net_pkt_set_ipv6_fragment_start|function|static inline void net_pkt_set_ipv6_fragment_start(struct net_pkt *pkt, uint8_t *start)
DECL|net_pkt_set_ipv6_hdr_prev|function|static inline void net_pkt_set_ipv6_hdr_prev(struct net_pkt *pkt, uint16_t offset)
DECL|net_pkt_set_ipv6_hop_limit|function|static inline void net_pkt_set_ipv6_hop_limit(struct net_pkt *pkt, uint8_t hop_limit)
DECL|net_pkt_set_ll_reserve|function|static inline void net_pkt_set_ll_reserve(struct net_pkt *pkt, uint8_t len)
DECL|net_pkt_set_next_hdr|function|static inline void net_pkt_set_next_hdr(struct net_pkt *pkt, uint8_t *hdr)
DECL|net_pkt_set_sent|function|static inline void net_pkt_set_sent(struct net_pkt *pkt, bool sent)
DECL|net_pkt_set_src_ipv6_addr|function|static inline void net_pkt_set_src_ipv6_addr(struct net_pkt *pkt)
DECL|net_pkt_set_token|function|static inline void net_pkt_set_token(struct net_pkt *pkt, void *token)
DECL|net_pkt_tcp_data|function|static inline uint8_t *net_pkt_tcp_data(struct net_pkt *pkt)
DECL|net_pkt_token|function|static inline void *net_pkt_token(struct net_pkt *pkt)
DECL|net_pkt_udp_data|function|static inline uint8_t *net_pkt_udp_data(struct net_pkt *pkt)
DECL|net_pkt_unref|macro|net_pkt_unref
DECL|net_pkt_write_be16|function|static inline struct net_buf *net_pkt_write_be16(struct net_pkt *pkt, struct net_buf *frag, uint16_t offset, uint16_t *pos, uint16_t data)
DECL|net_pkt_write_be32|function|static inline struct net_buf *net_pkt_write_be32(struct net_pkt *pkt, struct net_buf *frag, uint16_t offset, uint16_t *pos, uint32_t data)
DECL|net_pkt_write_u8|function|static inline struct net_buf *net_pkt_write_u8(struct net_pkt *pkt, struct net_buf *frag, uint16_t offset, uint16_t *pos, uint8_t data)
DECL|net_pkt|struct|struct net_pkt {
DECL|next_hdr|member|uint8_t *next_hdr; /* where is the next header */
DECL|ref|member|uint8_t ref;
DECL|sent_list|member|sys_snode_t sent_list;
DECL|sent|member|bool sent; /* Is this net_pkt sent or not */
DECL|slab|member|struct k_mem_slab *slab;
DECL|token|member|void *token;
