DECL|DEBUG_NET_BUFS|macro|DEBUG_NET_BUFS
DECL|DEBUG_NET_BUFS|macro|DEBUG_NET_BUFS
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_MAX_DATA|macro|NET_BUF_MAX_DATA
DECL|NET_MAC_BUF_MAX_SIZE|macro|NET_MAC_BUF_MAX_SIZE
DECL|__NET_BUF_H|macro|__NET_BUF_H
DECL|__unused|member|int __unused;
DECL|__unused|member|int __unused;
DECL|buf|member|uint8_t buf[NET_BUF_MAX_DATA];
DECL|context|member|struct net_context *context;
DECL|data|member|uint8_t *data;
DECL|dest|member|linkaddr_t dest;
DECL|in_use|member|bool in_use;
DECL|in_use|member|bool in_use;
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|last_tx_status|member|int last_tx_status;
DECL|len|member|uint16_t len;
DECL|nd6_defrt|member|void *nd6_defrt;
DECL|nd6_ifaddr|member|void *nd6_ifaddr;
DECL|nd6_nbr|member|void *nd6_nbr;
DECL|nd6_opt_llao|member|uint8_t *nd6_opt_llao;
DECL|nd6_opt_offset|member|uint8_t nd6_opt_offset;
DECL|nd6_opt_prefix_info|member|void *nd6_opt_prefix_info;
DECL|nd6_prefix|member|void *nd6_prefix;
DECL|net_buf_get_reserve|macro|net_buf_get_reserve
DECL|net_buf_get|macro|net_buf_get
DECL|net_buf_put|macro|net_buf_put
DECL|net_buf_tail|macro|net_buf_tail
DECL|net_buf|struct|struct net_buf {
DECL|net_mbuf|struct|struct net_mbuf {
DECL|packetbuf_hdr_len|member|uint8_t packetbuf_hdr_len;
DECL|packetbuf_payload_len|member|int packetbuf_payload_len;
DECL|packetbuf_ptr|member|uint8_t *packetbuf_ptr;
DECL|pkt_buflen|member|uint16_t pkt_buflen, pkt_bufptr;
DECL|pkt_bufptr|member|uint16_t pkt_buflen, pkt_bufptr;
DECL|pkt_hdrptr|member|uint8_t pkt_hdrptr;
DECL|pkt_packetbuf_addrs|member|struct packetbuf_addr pkt_packetbuf_addrs[PACKETBUF_NUM_ADDRS];
DECL|pkt_packetbuf_attrs|member|struct packetbuf_attr pkt_packetbuf_attrs[PACKETBUF_NUM_ATTRS];
DECL|pkt_packetbufptr|member|uint8_t *pkt_packetbufptr;
DECL|pkt_packetbuf|member|uint8_t pkt_packetbuf[PACKETBUF_SIZE + PACKETBUF_HDR_SIZE];
DECL|src|member|linkaddr_t src;
DECL|uip_addr|macro|uip_addr
DECL|uip_appdatalen|macro|uip_appdatalen
DECL|uip_appdatalen|member|uint16_t uip_appdatalen;
DECL|uip_appdata|macro|uip_appdata
DECL|uip_appdata|member|void *uip_appdata; /* application data */
DECL|uip_buf|macro|uip_buf
DECL|uip_conn|macro|uip_conn
DECL|uip_conn|member|void *uip_conn;
DECL|uip_defrt|macro|uip_defrt
DECL|uip_ext_bitmap|macro|uip_ext_bitmap
DECL|uip_ext_bitmap|member|uint8_t uip_ext_bitmap;
DECL|uip_ext_len|macro|uip_ext_len
DECL|uip_ext_len|member|uint8_t uip_ext_len;
DECL|uip_ext_opt_offset|macro|uip_ext_opt_offset
DECL|uip_ext_opt_offset|member|uint8_t uip_ext_opt_offset;
DECL|uip_flags|macro|uip_flags
DECL|uip_flags|member|uint8_t uip_flags;
DECL|uip_last_tx_status|macro|uip_last_tx_status
DECL|uip_len|macro|uip_len
DECL|uip_nbr|macro|uip_nbr
DECL|uip_nd6_ipaddr|macro|uip_nd6_ipaddr
DECL|uip_nd6_opt_llao|macro|uip_nd6_opt_llao
DECL|uip_nd6_opt_offset|macro|uip_nd6_opt_offset
DECL|uip_nd6_opt_prefix_info|macro|uip_nd6_opt_prefix_info
DECL|uip_next_hdr|macro|uip_next_hdr
DECL|uip_next_hdr|member|uint8_t *uip_next_hdr;
DECL|uip_packetbuf_hdr_len|macro|uip_packetbuf_hdr_len
DECL|uip_packetbuf_payload_len|macro|uip_packetbuf_payload_len
DECL|uip_packetbuf_ptr|macro|uip_packetbuf_ptr
DECL|uip_pkt_buflen|macro|uip_pkt_buflen
DECL|uip_pkt_bufptr|macro|uip_pkt_bufptr
DECL|uip_pkt_hdrptr|macro|uip_pkt_hdrptr
DECL|uip_pkt_packetbuf_addrs|macro|uip_pkt_packetbuf_addrs
DECL|uip_pkt_packetbuf_attrs|macro|uip_pkt_packetbuf_attrs
DECL|uip_pkt_packetbufptr|macro|uip_pkt_packetbufptr
DECL|uip_pkt_packetbuf|macro|uip_pkt_packetbuf
DECL|uip_prefix|macro|uip_prefix
DECL|uip_sappdata|macro|uip_sappdata
DECL|uip_sappdata|member|void *uip_sappdata; /* app data to be sent */
DECL|uip_set_addr|macro|uip_set_addr
DECL|uip_set_conn|macro|uip_set_conn
DECL|uip_set_defrt|macro|uip_set_defrt
DECL|uip_set_nbr|macro|uip_set_nbr
DECL|uip_set_nd6_opt_llao|macro|uip_set_nd6_opt_llao
DECL|uip_set_nd6_opt_prefix_info|macro|uip_set_nd6_opt_prefix_info
DECL|uip_set_prefix|macro|uip_set_prefix
DECL|uip_set_udp_conn|macro|uip_set_udp_conn
DECL|uip_slen|macro|uip_slen
DECL|uip_slen|member|uint16_t uip_slen;
DECL|uip_udp_conn|macro|uip_udp_conn
DECL|uip_udp_conn|member|void *uip_udp_conn;
DECL|uip_uncomp_hdr_len|macro|uip_uncomp_hdr_len
DECL|uncomp_hdr_len|member|uint8_t uncomp_hdr_len;
