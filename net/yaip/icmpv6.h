DECL|NET_ICMPV6_ECHO_REPLY|macro|NET_ICMPV6_ECHO_REPLY
DECL|NET_ICMPV6_ECHO_REQUEST|macro|NET_ICMPV6_ECHO_REQUEST
DECL|__ICMPV6_H|macro|__ICMPV6_H
DECL|code|member|uint8_t code;
DECL|handler|member|icmpv6_callback_handler_t handler;
DECL|icmpv6_callback_handler_t|typedef|typedef enum net_verdict (*icmpv6_callback_handler_t)(struct net_buf *buf);
DECL|net_icmpv6_handler|struct|struct net_icmpv6_handler {
DECL|net_icmpv6_init|macro|net_icmpv6_init
DECL|node|member|sys_snode_t node;
DECL|type|member|uint8_t type;
