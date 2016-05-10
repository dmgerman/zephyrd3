DECL|NBUF_MAX_DATA|macro|NBUF_MAX_DATA
DECL|NBUF_MAX_DATA|macro|NBUF_MAX_DATA
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_DEBUG_NBUFS|macro|NET_DEBUG_NBUFS
DECL|NET_DEBUG_NBUFS|macro|NET_DEBUG_NBUFS
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|NET_IPV4_BUF|macro|NET_IPV4_BUF
DECL|NET_IPV6_BUF|macro|NET_IPV6_BUF
DECL|NET_NBUF_DATA|enumerator|NET_NBUF_DATA = 2,
DECL|NET_NBUF_RX|enumerator|NET_NBUF_RX = 0,
DECL|NET_NBUF_TX|enumerator|NET_NBUF_TX = 1,
DECL|__NBUF_H|macro|__NBUF_H
DECL|appdatalen|member|uint16_t appdatalen;
DECL|appdata|member|uint8_t *appdata; /* application data */
DECL|context|member|struct net_context *context;
DECL|ext_bitmap|member|uint8_t ext_bitmap;
DECL|ext_len|member|uint8_t ext_len; /* length of extension headers */
DECL|family|member|uint8_t family; /* IPv4 vs IPv6 */
DECL|iface|member|struct net_if *iface;
DECL|ip_hdr_len|member|uint8_t ip_hdr_len; /* pre-filled in order to avoid func call */
DECL|ll_reserve|member|uint8_t ll_reserve; /* link layer header length */
DECL|net_nbuf_appdatalen|macro|net_nbuf_appdatalen
DECL|net_nbuf_appdata|macro|net_nbuf_appdata
DECL|net_nbuf_context|macro|net_nbuf_context
DECL|net_nbuf_ext_bitmap|macro|net_nbuf_ext_bitmap
DECL|net_nbuf_ext_len|macro|net_nbuf_ext_len
DECL|net_nbuf_family|macro|net_nbuf_family
DECL|net_nbuf_get_data|macro|net_nbuf_get_data
DECL|net_nbuf_get_reserve_data|macro|net_nbuf_get_reserve_data
DECL|net_nbuf_get_reserve_rx|macro|net_nbuf_get_reserve_rx
DECL|net_nbuf_get_reserve_tx|macro|net_nbuf_get_reserve_tx
DECL|net_nbuf_get_rx|macro|net_nbuf_get_rx
DECL|net_nbuf_get_tx|macro|net_nbuf_get_tx
DECL|net_nbuf_icmp_data|macro|net_nbuf_icmp_data
DECL|net_nbuf_iface|macro|net_nbuf_iface
DECL|net_nbuf_ip_data|macro|net_nbuf_ip_data
DECL|net_nbuf_ip_hdr_len|macro|net_nbuf_ip_hdr_len
DECL|net_nbuf_len|macro|net_nbuf_len
DECL|net_nbuf_ll_dest|macro|net_nbuf_ll_dest
DECL|net_nbuf_ll_reserve|macro|net_nbuf_ll_reserve
DECL|net_nbuf_ll_src|macro|net_nbuf_ll_src
DECL|net_nbuf_next_hdr|macro|net_nbuf_next_hdr
DECL|net_nbuf_ref|macro|net_nbuf_ref
DECL|net_nbuf_reserve|macro|net_nbuf_reserve
DECL|net_nbuf_set_src_ipv6_addr|macro|net_nbuf_set_src_ipv6_addr
DECL|net_nbuf_tcp_data|macro|net_nbuf_tcp_data
DECL|net_nbuf_type|enum|enum net_nbuf_type {
DECL|net_nbuf_type|macro|net_nbuf_type
DECL|net_nbuf_udp_data|macro|net_nbuf_udp_data
DECL|net_nbuf_unref|macro|net_nbuf_unref
DECL|net_nbuf|struct|struct net_nbuf {
DECL|next_hdr|member|uint8_t *next_hdr;
DECL|reserve|member|uint16_t reserve; /* length of the protocol headers */
DECL|type|member|enum net_nbuf_type type;
