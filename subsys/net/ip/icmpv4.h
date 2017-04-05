DECL|NET_ICMPV4_DST_UNREACH_NO_PORT|macro|NET_ICMPV4_DST_UNREACH_NO_PORT
DECL|NET_ICMPV4_DST_UNREACH_NO_PROTO|macro|NET_ICMPV4_DST_UNREACH_NO_PROTO
DECL|NET_ICMPV4_DST_UNREACH|macro|NET_ICMPV4_DST_UNREACH
DECL|NET_ICMPV4_ECHO_REPLY|macro|NET_ICMPV4_ECHO_REPLY
DECL|NET_ICMPV4_ECHO_REQUEST|macro|NET_ICMPV4_ECHO_REQUEST
DECL|NET_ICMPV4_ECHO_REQ_BUF|macro|NET_ICMPV4_ECHO_REQ_BUF
DECL|__ICMPV4_H|macro|__ICMPV4_H
DECL|__packed|variable|__packed
DECL|code|member|uint8_t code;
DECL|handler|member|icmpv4_callback_handler_t handler;
DECL|icmpv4_callback_handler_t|typedef|typedef enum net_verdict (*icmpv4_callback_handler_t)(struct net_pkt *pkt);
DECL|identifier|member|uint16_t identifier;
DECL|net_icmpv4_echo_req|struct|struct net_icmpv4_echo_req {
DECL|net_icmpv4_handler|struct|struct net_icmpv4_handler {
DECL|net_icmpv4_init|macro|net_icmpv4_init
DECL|node|member|sys_snode_t node;
DECL|sequence|member|uint16_t sequence;
DECL|type|member|uint8_t type;
