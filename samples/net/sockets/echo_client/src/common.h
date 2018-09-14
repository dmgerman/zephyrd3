DECL|CONFIG_NET_CONFIG_PEER_IPV4_ADDR|macro|CONFIG_NET_CONFIG_PEER_IPV4_ADDR
DECL|CONFIG_NET_CONFIG_PEER_IPV6_ADDR|macro|CONFIG_NET_CONFIG_PEER_IPV6_ADDR
DECL|MY_PORT|macro|MY_PORT
DECL|PEER_PORT|macro|PEER_PORT
DECL|configs|struct|struct configs {
DECL|counter|member|u32_t counter;
DECL|counter|member|u32_t counter;
DECL|data|struct|struct data {
DECL|expecting|member|u32_t expecting;
DECL|expecting|member|u32_t expecting;
DECL|init_vlan|function|static inline int init_vlan(void)
DECL|ipv4|member|struct data ipv4;
DECL|ipv6|member|struct data ipv6;
DECL|proto|member|const char *proto;
DECL|received|member|u32_t received;
DECL|recv|member|struct k_delayed_work recv;
DECL|sock|member|int sock;
DECL|sock|member|int sock;
DECL|tcp|member|} tcp;
DECL|transmit|member|struct k_delayed_work transmit;
DECL|udp|member|} udp;
