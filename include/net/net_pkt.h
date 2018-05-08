DECL|NET_IPV4_HDR|macro|NET_IPV4_HDR
DECL|NET_IPV6_HDR|macro|NET_IPV6_HDR
DECL|NET_PKT_DATA_POOL_DEFINE|macro|NET_PKT_DATA_POOL_DEFINE
DECL|NET_PKT_SLAB_DEFINE|macro|NET_PKT_SLAB_DEFINE
DECL|NET_PKT_TX_SLAB_DEFINE|macro|NET_PKT_TX_SLAB_DEFINE
DECL|__NET_PKT_H__|macro|__NET_PKT_H__
DECL|_reserved|member|int _reserved;
DECL|_unused|member|u8_t _unused : 1;
DECL|appdatalen|member|u16_t appdatalen;
DECL|appdata|member|u8_t *appdata; /* application data starts here */
DECL|context|member|struct net_context *context;
DECL|data_len|member|u16_t data_len; /* amount of payload data that can be added */
DECL|family|member|u8_t family : 4; /* IPv4 vs IPv6 */
DECL|forwarding|member|u8_t forwarding : 1; /* Are we forwarding this pkt
DECL|frags|member|struct net_buf *frags;
DECL|ieee802154_lqi|member|u8_t ieee802154_lqi; /* Link Quality Indicator */
DECL|ieee802154_rssi|member|u8_t ieee802154_rssi; /* Received Signal Strength Indication */
DECL|iface|member|struct net_if *iface;
DECL|ip_hdr_len|member|u8_t ip_hdr_len; /* pre-filled in order to avoid func call */
DECL|ipv4_ttl|member|u8_t ipv4_ttl;
DECL|ipv6_ext_len|member|u8_t ipv6_ext_len; /* length of extension headers */
DECL|ipv6_ext_opt_len|member|u8_t ipv6_ext_opt_len; /* IPv6 ND option length */
DECL|ipv6_frag_hdr_start|member|u8_t *ipv6_frag_hdr_start; /* Where starts the fragment header */
DECL|ipv6_fragment_id|member|u32_t ipv6_fragment_id; /* Fragment id */
DECL|ipv6_fragment_offset|member|u16_t ipv6_fragment_offset; /* Fragment offset of this packet */
DECL|ipv6_hop_limit|member|u8_t ipv6_hop_limit;
DECL|ipv6_prev_hdr_start|member|u16_t ipv6_prev_hdr_start;
DECL|ll_reserve|member|u8_t ll_reserve; /* link layer header length */
DECL|lladdr_dst|member|struct net_linkaddr lladdr_dst;
DECL|lladdr_src|member|struct net_linkaddr lladdr_src;
DECL|net_frag_read_u8|function|static inline struct net_buf *net_frag_read_u8(struct net_buf *frag, u16_t offset, u16_t *pos, u8_t *value)
DECL|net_frag_skip|function|static inline struct net_buf *net_frag_skip(struct net_buf *frag, u16_t offset, u16_t *pos, u16_t len)
DECL|net_pkt_allocs_cb_t|typedef|typedef void (*net_pkt_allocs_cb_t)(struct net_pkt *pkt,
DECL|net_pkt_appdatalen|function|static inline u16_t net_pkt_appdatalen(struct net_pkt *pkt)
DECL|net_pkt_appdata|function|static inline u8_t *net_pkt_appdata(struct net_pkt *pkt)
DECL|net_pkt_append_all|function|static inline bool net_pkt_append_all(struct net_pkt *pkt, u16_t len, const u8_t *data, s32_t timeout)
DECL|net_pkt_append_be16|function|static inline bool net_pkt_append_be16(struct net_pkt *pkt, u16_t data)
DECL|net_pkt_append_be32|function|static inline bool net_pkt_append_be32(struct net_pkt *pkt, u32_t data)
DECL|net_pkt_append_le32|function|static inline bool net_pkt_append_le32(struct net_pkt *pkt, u32_t data)
DECL|net_pkt_append_u8|function|static inline bool net_pkt_append_u8(struct net_pkt *pkt, u8_t data)
DECL|net_pkt_context|function|static inline struct net_context *net_pkt_context(struct net_pkt *pkt)
DECL|net_pkt_copy_all|function|static inline struct net_buf *net_pkt_copy_all(struct net_pkt *pkt, size_t reserve, s32_t timeout)
DECL|net_pkt_eof|function|static inline u8_t net_pkt_eof(struct net_pkt *pkt)
DECL|net_pkt_family|function|static inline u8_t net_pkt_family(struct net_pkt *pkt)
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
DECL|net_pkt_ieee802154_lqi|function|static inline u8_t net_pkt_ieee802154_lqi(struct net_pkt *pkt)
DECL|net_pkt_ieee802154_rssi|function|static inline u8_t net_pkt_ieee802154_rssi(struct net_pkt *pkt)
DECL|net_pkt_iface|function|static inline struct net_if *net_pkt_iface(struct net_pkt *pkt)
DECL|net_pkt_insert_be16|function|static inline bool net_pkt_insert_be16(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t data)
DECL|net_pkt_insert_be32|function|static inline bool net_pkt_insert_be32(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u32_t data)
DECL|net_pkt_insert_u8|function|static inline bool net_pkt_insert_u8(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u8_t data)
DECL|net_pkt_ip_data|function|static inline u8_t *net_pkt_ip_data(struct net_pkt *pkt)
DECL|net_pkt_ip_hdr_len|function|static inline u8_t net_pkt_ip_hdr_len(struct net_pkt *pkt)
DECL|net_pkt_ipv4_ttl|function|static inline u8_t net_pkt_ipv4_ttl(struct net_pkt *pkt)
DECL|net_pkt_ipv6_ext_len|function|static inline u8_t net_pkt_ipv6_ext_len(struct net_pkt *pkt)
DECL|net_pkt_ipv6_ext_len|macro|net_pkt_ipv6_ext_len
DECL|net_pkt_ipv6_ext_opt_len|function|static inline u8_t net_pkt_ipv6_ext_opt_len(struct net_pkt *pkt)
DECL|net_pkt_ipv6_fragment_id|function|static inline u32_t net_pkt_ipv6_fragment_id(struct net_pkt *pkt)
DECL|net_pkt_ipv6_fragment_offset|function|static inline u16_t net_pkt_ipv6_fragment_offset(struct net_pkt *pkt)
DECL|net_pkt_ipv6_fragment_start|function|static inline u8_t *net_pkt_ipv6_fragment_start(struct net_pkt *pkt)
DECL|net_pkt_ipv6_hdr_prev|function|static inline u16_t net_pkt_ipv6_hdr_prev(struct net_pkt *pkt)
DECL|net_pkt_ipv6_hop_limit|function|static inline u8_t net_pkt_ipv6_hop_limit(struct net_pkt *pkt)
DECL|net_pkt_ll_clear|function|static inline void net_pkt_ll_clear(struct net_pkt *pkt)
DECL|net_pkt_ll_dst|function|static inline struct net_linkaddr *net_pkt_ll_dst(struct net_pkt *pkt)
DECL|net_pkt_ll_if|function|static inline struct net_linkaddr *net_pkt_ll_if(struct net_pkt *pkt)
DECL|net_pkt_ll_reserve|function|static inline u8_t net_pkt_ll_reserve(struct net_pkt *pkt)
DECL|net_pkt_ll_src|function|static inline struct net_linkaddr *net_pkt_ll_src(struct net_pkt *pkt)
DECL|net_pkt_ll_swap|function|static inline void net_pkt_ll_swap(struct net_pkt *pkt)
DECL|net_pkt_ll|function|static inline u8_t *net_pkt_ll(struct net_pkt *pkt)
DECL|net_pkt_next_hdr|function|static inline u8_t *net_pkt_next_hdr(struct net_pkt *pkt)
DECL|net_pkt_orig_iface|function|static inline struct net_if *net_pkt_orig_iface(struct net_pkt *pkt)
DECL|net_pkt_print_frags|macro|net_pkt_print_frags
DECL|net_pkt_print|macro|net_pkt_print
DECL|net_pkt_priority|function|static inline u8_t net_pkt_priority(struct net_pkt *pkt)
DECL|net_pkt_priority|function|static inline u8_t net_pkt_priority(struct net_pkt *pkt)
DECL|net_pkt_queued|function|static inline u8_t net_pkt_queued(struct net_pkt *pkt)
DECL|net_pkt_ref|macro|net_pkt_ref
DECL|net_pkt_sent|function|static inline u8_t net_pkt_sent(struct net_pkt *pkt)
DECL|net_pkt_set_appdatalen|function|static inline void net_pkt_set_appdatalen(struct net_pkt *pkt, u16_t len)
DECL|net_pkt_set_appdata|function|static inline void net_pkt_set_appdata(struct net_pkt *pkt, u8_t *data)
DECL|net_pkt_set_context|function|static inline void net_pkt_set_context(struct net_pkt *pkt, struct net_context *ctx)
DECL|net_pkt_set_eof|function|static inline void net_pkt_set_eof(struct net_pkt *pkt, bool eof)
DECL|net_pkt_set_family|function|static inline void net_pkt_set_family(struct net_pkt *pkt, u8_t family)
DECL|net_pkt_set_forwarding|function|static inline void net_pkt_set_forwarding(struct net_pkt *pkt, bool forward)
DECL|net_pkt_set_ieee802154_lqi|function|static inline void net_pkt_set_ieee802154_lqi(struct net_pkt *pkt, u8_t lqi)
DECL|net_pkt_set_ieee802154_rssi|function|static inline void net_pkt_set_ieee802154_rssi(struct net_pkt *pkt, u8_t rssi)
DECL|net_pkt_set_iface|function|static inline void net_pkt_set_iface(struct net_pkt *pkt, struct net_if *iface)
DECL|net_pkt_set_ip_hdr_len|function|static inline void net_pkt_set_ip_hdr_len(struct net_pkt *pkt, u8_t len)
DECL|net_pkt_set_ipv4_ttl|function|static inline void net_pkt_set_ipv4_ttl(struct net_pkt *pkt,u8_t ttl)
DECL|net_pkt_set_ipv6_ext_len|function|static inline void net_pkt_set_ipv6_ext_len(struct net_pkt *pkt, u8_t len)
DECL|net_pkt_set_ipv6_ext_len|macro|net_pkt_set_ipv6_ext_len
DECL|net_pkt_set_ipv6_ext_opt_len|function|static inline void net_pkt_set_ipv6_ext_opt_len(struct net_pkt *pkt,u8_t len)
DECL|net_pkt_set_ipv6_fragment_id|function|static inline void net_pkt_set_ipv6_fragment_id(struct net_pkt *pkt,u32_t id)
DECL|net_pkt_set_ipv6_fragment_offset|function|static inline void net_pkt_set_ipv6_fragment_offset(struct net_pkt *pkt, u16_t offset)
DECL|net_pkt_set_ipv6_fragment_start|function|static inline void net_pkt_set_ipv6_fragment_start(struct net_pkt *pkt, u8_t *start)
DECL|net_pkt_set_ipv6_hdr_prev|function|static inline void net_pkt_set_ipv6_hdr_prev(struct net_pkt *pkt, u16_t offset)
DECL|net_pkt_set_ipv6_hop_limit|function|static inline void net_pkt_set_ipv6_hop_limit(struct net_pkt *pkt, u8_t hop_limit)
DECL|net_pkt_set_ll_reserve|function|static inline void net_pkt_set_ll_reserve(struct net_pkt *pkt, u8_t len)
DECL|net_pkt_set_next_hdr|function|static inline void net_pkt_set_next_hdr(struct net_pkt *pkt, u8_t *hdr)
DECL|net_pkt_set_orig_iface|function|static inline void net_pkt_set_orig_iface(struct net_pkt *pkt, struct net_if *iface)
DECL|net_pkt_set_priority|function|static inline void net_pkt_set_priority(struct net_pkt *pkt,u8_t priority)
DECL|net_pkt_set_queued|function|static inline void net_pkt_set_queued(struct net_pkt *pkt, bool send)
DECL|net_pkt_set_sent|function|static inline void net_pkt_set_sent(struct net_pkt *pkt, bool sent)
DECL|net_pkt_set_src_ipv6_addr|function|static inline void net_pkt_set_src_ipv6_addr(struct net_pkt *pkt)
DECL|net_pkt_set_token|function|static inline void net_pkt_set_token(struct net_pkt *pkt, void *token)
DECL|net_pkt_set_vlan_dei|function|static inline void net_pkt_set_vlan_dei(struct net_pkt *pkt, bool dei)
DECL|net_pkt_set_vlan_dei|function|static inline void net_pkt_set_vlan_dei(struct net_pkt *pkt, bool dei)
DECL|net_pkt_set_vlan_priority|function|static inline void net_pkt_set_vlan_priority(struct net_pkt *pkt, u8_t priority)
DECL|net_pkt_set_vlan_tag|function|static inline void net_pkt_set_vlan_tag(struct net_pkt *pkt, u16_t tag)
DECL|net_pkt_set_vlan_tag|function|static inline void net_pkt_set_vlan_tag(struct net_pkt *pkt, u16_t tag)
DECL|net_pkt_set_vlan_tci|function|static inline void net_pkt_set_vlan_tci(struct net_pkt *pkt, u16_t tci)
DECL|net_pkt_set_vlan_tci|function|static inline void net_pkt_set_vlan_tci(struct net_pkt *pkt, u16_t tci)
DECL|net_pkt_token|function|static inline void *net_pkt_token(struct net_pkt *pkt)
DECL|net_pkt_unref|macro|net_pkt_unref
DECL|net_pkt_vlan_dei|function|static inline bool net_pkt_vlan_dei(struct net_pkt *pkt)
DECL|net_pkt_vlan_dei|function|static inline bool net_pkt_vlan_dei(struct net_pkt *pkt)
DECL|net_pkt_vlan_priority|function|static inline u8_t net_pkt_vlan_priority(struct net_pkt *pkt)
DECL|net_pkt_vlan_priority|function|static inline u8_t net_pkt_vlan_priority(struct net_pkt *pkt)
DECL|net_pkt_vlan_tag|function|static inline u16_t net_pkt_vlan_tag(struct net_pkt *pkt)
DECL|net_pkt_vlan_tag|function|static inline u16_t net_pkt_vlan_tag(struct net_pkt *pkt)
DECL|net_pkt_vlan_tci|function|static inline u16_t net_pkt_vlan_tci(struct net_pkt *pkt)
DECL|net_pkt_vlan_tci|function|static inline u16_t net_pkt_vlan_tci(struct net_pkt *pkt)
DECL|net_pkt_work|function|static inline struct k_work *net_pkt_work(struct net_pkt *pkt)
DECL|net_pkt_write_be16|function|static inline struct net_buf *net_pkt_write_be16(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t *pos, u16_t data)
DECL|net_pkt_write_be32|function|static inline struct net_buf *net_pkt_write_be32(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t *pos, u32_t data)
DECL|net_pkt_write_u8|function|static inline struct net_buf *net_pkt_write_u8(struct net_pkt *pkt, struct net_buf *frag, u16_t offset, u16_t *pos, u8_t data)
DECL|net_pkt|struct|struct net_pkt {
DECL|next_hdr|member|u8_t *next_hdr; /* where is the next header */
DECL|orig_iface|member|struct net_if *orig_iface; /* Original network interface */
DECL|pkt_queued|member|u8_t pkt_queued: 1; /* For outgoing packet: is this packet queued
DECL|priority|member|u8_t priority;
DECL|ref|member|u8_t ref;
DECL|sent_list|member|sys_snode_t sent_list;
DECL|sent_or_eof|member|u8_t sent_or_eof: 1; /* For outgoing packet: is this sent or not
DECL|slab|member|struct k_mem_slab *slab;
DECL|token|member|void *token;
DECL|total_pkt_len|member|u16_t total_pkt_len;
DECL|vlan_tci|member|u16_t vlan_tci;
DECL|work|member|struct k_work work;
