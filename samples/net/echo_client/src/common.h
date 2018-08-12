DECL|CONFIG_NET_CONFIG_PEER_IPV4_ADDR|macro|CONFIG_NET_CONFIG_PEER_IPV4_ADDR
DECL|CONFIG_NET_CONFIG_PEER_IPV6_ADDR|macro|CONFIG_NET_CONFIG_PEER_IPV6_ADDR
DECL|CONNECT_TIME|macro|CONNECT_TIME
DECL|MY_PORT|macro|MY_PORT
DECL|PEER_PORT|macro|PEER_PORT
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|configs|struct|struct configs {
DECL|data|struct|struct data {
DECL|expecting_tcp|member|u32_t expecting_tcp;
DECL|expecting_udp|member|u32_t expecting_udp;
DECL|ipv4|member|struct data ipv4;
DECL|ipv6|member|struct data ipv6;
DECL|proto|member|const char *proto;
DECL|received_tcp|member|u32_t received_tcp;
DECL|recv|member|struct k_delayed_work recv;
DECL|udp|member|struct net_app_ctx *udp;
