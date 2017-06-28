DECL|NET_ICMPV6_DST_UNREACH_ADMIN|macro|NET_ICMPV6_DST_UNREACH_ADMIN
DECL|NET_ICMPV6_DST_UNREACH_NO_ADDR|macro|NET_ICMPV6_DST_UNREACH_NO_ADDR
DECL|NET_ICMPV6_DST_UNREACH_NO_PORT|macro|NET_ICMPV6_DST_UNREACH_NO_PORT
DECL|NET_ICMPV6_DST_UNREACH_NO_ROUTE|macro|NET_ICMPV6_DST_UNREACH_NO_ROUTE
DECL|NET_ICMPV6_DST_UNREACH_REJ_ROUTE|macro|NET_ICMPV6_DST_UNREACH_REJ_ROUTE
DECL|NET_ICMPV6_DST_UNREACH_SCOPE|macro|NET_ICMPV6_DST_UNREACH_SCOPE
DECL|NET_ICMPV6_DST_UNREACH_SRC_ADDR|macro|NET_ICMPV6_DST_UNREACH_SRC_ADDR
DECL|NET_ICMPV6_DST_UNREACH|macro|NET_ICMPV6_DST_UNREACH
DECL|NET_ICMPV6_ECHO_REPLY|macro|NET_ICMPV6_ECHO_REPLY
DECL|NET_ICMPV6_ECHO_REQUEST|macro|NET_ICMPV6_ECHO_REQUEST
DECL|NET_ICMPV6_MLD_QUERY|macro|NET_ICMPV6_MLD_QUERY
DECL|NET_ICMPV6_MLDv2|macro|NET_ICMPV6_MLDv2
DECL|NET_ICMPV6_NA_FLAG_OVERRIDE|macro|NET_ICMPV6_NA_FLAG_OVERRIDE
DECL|NET_ICMPV6_NA_FLAG_ROUTER|macro|NET_ICMPV6_NA_FLAG_ROUTER
DECL|NET_ICMPV6_NA_FLAG_SOLICITED|macro|NET_ICMPV6_NA_FLAG_SOLICITED
DECL|NET_ICMPV6_NA|macro|NET_ICMPV6_NA
DECL|NET_ICMPV6_ND_M_FLAG|macro|NET_ICMPV6_ND_M_FLAG
DECL|NET_ICMPV6_ND_OPT_6CO|macro|NET_ICMPV6_ND_OPT_6CO
DECL|NET_ICMPV6_ND_OPT_DNSSL|macro|NET_ICMPV6_ND_OPT_DNSSL
DECL|NET_ICMPV6_ND_OPT_MTU|macro|NET_ICMPV6_ND_OPT_MTU
DECL|NET_ICMPV6_ND_OPT_PREFIX_INFO|macro|NET_ICMPV6_ND_OPT_PREFIX_INFO
DECL|NET_ICMPV6_ND_OPT_RDNSS|macro|NET_ICMPV6_ND_OPT_RDNSS
DECL|NET_ICMPV6_ND_OPT_ROUTE|macro|NET_ICMPV6_ND_OPT_ROUTE
DECL|NET_ICMPV6_ND_OPT_SLLAO|macro|NET_ICMPV6_ND_OPT_SLLAO
DECL|NET_ICMPV6_ND_OPT_TLLAO|macro|NET_ICMPV6_ND_OPT_TLLAO
DECL|NET_ICMPV6_ND_O_FLAG|macro|NET_ICMPV6_ND_O_FLAG
DECL|NET_ICMPV6_NS|macro|NET_ICMPV6_NS
DECL|NET_ICMPV6_OPT_DATA_OFFSET|macro|NET_ICMPV6_OPT_DATA_OFFSET
DECL|NET_ICMPV6_OPT_LEN_OFFSET|macro|NET_ICMPV6_OPT_LEN_OFFSET
DECL|NET_ICMPV6_OPT_TYPE_OFFSET|macro|NET_ICMPV6_OPT_TYPE_OFFSET
DECL|NET_ICMPV6_PACKET_TOO_BIG|macro|NET_ICMPV6_PACKET_TOO_BIG
DECL|NET_ICMPV6_PARAM_PROBLEM|macro|NET_ICMPV6_PARAM_PROBLEM
DECL|NET_ICMPV6_PARAM_PROB_HEADER|macro|NET_ICMPV6_PARAM_PROB_HEADER
DECL|NET_ICMPV6_PARAM_PROB_NEXTHEADER|macro|NET_ICMPV6_PARAM_PROB_NEXTHEADER
DECL|NET_ICMPV6_PARAM_PROB_OPTION|macro|NET_ICMPV6_PARAM_PROB_OPTION
DECL|NET_ICMPV6_RA_FLAG_AUTONOMOUS|macro|NET_ICMPV6_RA_FLAG_AUTONOMOUS
DECL|NET_ICMPV6_RA_FLAG_ONLINK|macro|NET_ICMPV6_RA_FLAG_ONLINK
DECL|NET_ICMPV6_RA|macro|NET_ICMPV6_RA
DECL|NET_ICMPV6_RS|macro|NET_ICMPV6_RS
DECL|NET_ICMPV6_TIME_EXCEEDED|macro|NET_ICMPV6_TIME_EXCEEDED
DECL|NET_ICMPV6_UNUSED_LEN|macro|NET_ICMPV6_UNUSED_LEN
DECL|__ICMPV6_H|macro|__ICMPV6_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|code|member|u8_t code;
DECL|context_len|member|u8_t context_len;
DECL|cur_hop_limit|member|u8_t cur_hop_limit;
DECL|flags|member|u8_t flags;
DECL|flags|member|u8_t flags;
DECL|flags|member|u8_t flags;
DECL|flag|member|u8_t flag; /*res:3,c:1,cid:4 */
DECL|handler|member|icmpv6_callback_handler_t handler;
DECL|icmpv6_callback_handler_t|typedef|typedef enum net_verdict (*icmpv6_callback_handler_t)(struct net_pkt *pkt);
DECL|len|member|u8_t len;
DECL|len|member|u8_t len;
DECL|len|member|u8_t len;
DECL|len|member|u8_t len;
DECL|lifetime|member|u16_t lifetime;
DECL|mtu|member|u32_t mtu;
DECL|net_icmpv6_handler|struct|struct net_icmpv6_handler {
DECL|net_icmpv6_init|macro|net_icmpv6_init
DECL|net_icmpv6_na_hdr|struct|struct net_icmpv6_na_hdr {
DECL|net_icmpv6_nd_opt_6co|struct|struct net_icmpv6_nd_opt_6co {
DECL|net_icmpv6_nd_opt_hdr|struct|struct net_icmpv6_nd_opt_hdr {
DECL|net_icmpv6_nd_opt_mtu|struct|struct net_icmpv6_nd_opt_mtu {
DECL|net_icmpv6_nd_opt_prefix_info|struct|struct net_icmpv6_nd_opt_prefix_info {
DECL|net_icmpv6_ns_hdr|struct|struct net_icmpv6_ns_hdr {
DECL|net_icmpv6_ra_hdr|struct|struct net_icmpv6_ra_hdr {
DECL|net_icmpv6_rs_hdr|struct|struct net_icmpv6_rs_hdr {
DECL|node|member|sys_snode_t node;
DECL|preferred_lifetime|member|u32_t preferred_lifetime;
DECL|prefix_len|member|u8_t prefix_len;
DECL|prefix|member|struct in6_addr prefix;
DECL|prefix|member|struct in6_addr prefix;
DECL|reachable_time|member|u32_t reachable_time;
DECL|reserved|member|u16_t reserved;
DECL|reserved|member|u16_t reserved;
DECL|reserved|member|u32_t reserved;
DECL|reserved|member|u32_t reserved;
DECL|reserved|member|u32_t reserved;
DECL|reserved|member|u8_t reserved[3];
DECL|retrans_timer|member|u32_t retrans_timer;
DECL|router_lifetime|member|u16_t router_lifetime;
DECL|tgt|member|struct in6_addr tgt;
DECL|tgt|member|struct in6_addr tgt;
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
DECL|type|member|u8_t type;
DECL|valid_lifetime|member|u32_t valid_lifetime;
