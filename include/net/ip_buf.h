DECL|DEBUG_IP_BUFS|macro|DEBUG_IP_BUFS
DECL|DEBUG_IP_BUFS|macro|DEBUG_IP_BUFS
DECL|IP_BUF_MAX_DATA|macro|IP_BUF_MAX_DATA
DECL|IP_BUF_RX|enumerator|IP_BUF_RX = 0,
DECL|IP_BUF_TX|enumerator|IP_BUF_TX = 1,
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_IN_USE|macro|NET_BUF_CHECK_IF_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_CHECK_IF_NOT_IN_USE|macro|NET_BUF_CHECK_IF_NOT_IN_USE
DECL|NET_BUF_IP|macro|NET_BUF_IP
DECL|NET_BUF_UDP|macro|NET_BUF_UDP
DECL|STACK_DIRECTION_DOWN|enumerator|STACK_DIRECTION_DOWN,
DECL|STACK_DIRECTION_UP|enumerator|STACK_DIRECTION_UP,
DECL|__IP_BUF_H|macro|__IP_BUF_H
DECL|context|member|struct net_context *context;
DECL|dest|member|linkaddr_t dest;
DECL|ip_buf_appdatalen|macro|ip_buf_appdatalen
DECL|ip_buf_appdata|macro|ip_buf_appdata
DECL|ip_buf_context|macro|ip_buf_context
DECL|ip_buf_get_reserve_rx|macro|ip_buf_get_reserve_rx
DECL|ip_buf_get_reserve_tx|macro|ip_buf_get_reserve_tx
DECL|ip_buf_get_rx|macro|ip_buf_get_rx
DECL|ip_buf_get_tx|macro|ip_buf_get_tx
DECL|ip_buf_len|macro|ip_buf_len
DECL|ip_buf_ll_dest|macro|ip_buf_ll_dest
DECL|ip_buf_ll_src|macro|ip_buf_ll_src
DECL|ip_buf_reserve|macro|ip_buf_reserve
DECL|ip_buf_type|enum|enum ip_buf_type {
DECL|ip_buf_type|macro|ip_buf_type
DECL|ip_buf_unref|macro|ip_buf_unref
DECL|ip_buf|struct|struct ip_buf {
DECL|ipaddr|member|uip_ipaddr_t ipaddr;
DECL|len|member|uint16_t len; /* Contiki will set this to 0 if packet is discarded */
DECL|nd6_defrt|member|void *nd6_defrt;
DECL|nd6_ifaddr|member|void *nd6_ifaddr;
DECL|nd6_nbr|member|void *nd6_nbr;
DECL|nd6_opt_llao|member|uint8_t *nd6_opt_llao;
DECL|nd6_opt_offset|member|uint8_t nd6_opt_offset;
DECL|nd6_opt_prefix_info|member|void *nd6_opt_prefix_info;
DECL|nd6_prefix|member|void *nd6_prefix;
DECL|net_analyze_stack|function|static inline void net_analyze_stack(const char *name, unsigned char *stack, size_t size)
DECL|net_analyze_stack|macro|net_analyze_stack
DECL|net_calculate_unused|function|static inline unsigned net_calculate_unused(const char *stack, unsigned size, int stack_growth)
DECL|net_get_stack_dir|function|static inline unsigned net_get_stack_dir(struct net_buf *buf, struct net_buf **ref)
DECL|reserve|member|uint16_t reserve; /* length of the protocol headers */
DECL|src|member|linkaddr_t src;
DECL|type|member|enum ip_buf_type type;
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
DECL|uip_len|macro|uip_len
DECL|uip_nbr|macro|uip_nbr
DECL|uip_nd6_ipaddr|macro|uip_nd6_ipaddr
DECL|uip_nd6_opt_llao|macro|uip_nd6_opt_llao
DECL|uip_nd6_opt_offset|macro|uip_nd6_opt_offset
DECL|uip_nd6_opt_prefix_info|macro|uip_nd6_opt_prefix_info
DECL|uip_next_hdr|macro|uip_next_hdr
DECL|uip_next_hdr|member|uint8_t *uip_next_hdr;
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
