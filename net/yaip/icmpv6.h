DECL|NET_ICMPV6_ECHO_REPLY|macro|NET_ICMPV6_ECHO_REPLY
DECL|NET_ICMPV6_ECHO_REQUEST|macro|NET_ICMPV6_ECHO_REQUEST
DECL|NET_ICMPV6_NA_BUF|macro|NET_ICMPV6_NA_BUF
DECL|NET_ICMPV6_NA_FLAG_OVERRIDE|macro|NET_ICMPV6_NA_FLAG_OVERRIDE
DECL|NET_ICMPV6_NA_FLAG_ROUTER|macro|NET_ICMPV6_NA_FLAG_ROUTER
DECL|NET_ICMPV6_NA_FLAG_SOLICITED|macro|NET_ICMPV6_NA_FLAG_SOLICITED
DECL|NET_ICMPV6_NA|macro|NET_ICMPV6_NA
DECL|NET_ICMPV6_ND_OPT_HDR_BUF|macro|NET_ICMPV6_ND_OPT_HDR_BUF
DECL|NET_ICMPV6_ND_OPT_SLLAO|macro|NET_ICMPV6_ND_OPT_SLLAO
DECL|NET_ICMPV6_ND_OPT_TLLAO|macro|NET_ICMPV6_ND_OPT_TLLAO
DECL|NET_ICMPV6_NS_BUF|macro|NET_ICMPV6_NS_BUF
DECL|NET_ICMPV6_NS|macro|NET_ICMPV6_NS
DECL|NET_ICMPV6_OPT_DATA_OFFSET|macro|NET_ICMPV6_OPT_DATA_OFFSET
DECL|NET_ICMPV6_OPT_LEN_OFFSET|macro|NET_ICMPV6_OPT_LEN_OFFSET
DECL|NET_ICMPV6_OPT_TYPE_OFFSET|macro|NET_ICMPV6_OPT_TYPE_OFFSET
DECL|NET_ICMPV6_RA_FLAG_AUTONOMOUS|macro|NET_ICMPV6_RA_FLAG_AUTONOMOUS
DECL|NET_ICMPV6_RA_FLAG_ONLINK|macro|NET_ICMPV6_RA_FLAG_ONLINK
DECL|__ICMPV6_H|macro|__ICMPV6_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|code|member|uint8_t code;
DECL|flags|member|uint8_t flags;
DECL|handler|member|icmpv6_callback_handler_t handler;
DECL|icmpv6_callback_handler_t|typedef|typedef enum net_verdict (*icmpv6_callback_handler_t)(struct net_buf *buf);
DECL|len|member|uint8_t len;
DECL|net_icmpv6_handler|struct|struct net_icmpv6_handler {
DECL|net_icmpv6_init|macro|net_icmpv6_init
DECL|net_icmpv6_na_hdr|struct|struct net_icmpv6_na_hdr {
DECL|net_icmpv6_nd_opt_hdr|struct|struct net_icmpv6_nd_opt_hdr {
DECL|net_icmpv6_ns_hdr|struct|struct net_icmpv6_ns_hdr {
DECL|node|member|sys_snode_t node;
DECL|reserved|member|uint32_t reserved;
DECL|reserved|member|uint8_t reserved[3];
DECL|tgt|member|struct in6_addr tgt;
DECL|tgt|member|struct in6_addr tgt;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
