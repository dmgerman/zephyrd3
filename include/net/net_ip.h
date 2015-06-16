DECL|AF_INET6|macro|AF_INET6
DECL|AF_INET|macro|AF_INET
DECL|AF_UNSPEC|macro|AF_UNSPEC
DECL|IPPROTO_ICMPV6|enumerator|IPPROTO_ICMPV6 = 58,
DECL|IPPROTO_TCP|enumerator|IPPROTO_TCP = 6,
DECL|IPPROTO_UDP|enumerator|IPPROTO_UDP = 17,
DECL|PF_INET6|macro|PF_INET6
DECL|PF_INET|macro|PF_INET
DECL|PF_UNSPEC|macro|PF_UNSPEC
DECL|__NET_IP_H|macro|__NET_IP_H
DECL|family|member|sa_family_t family;
DECL|in4_u|member|} in4_u;
DECL|in6_addr|member|struct in6_addr in6_addr;
DECL|in6_addr|struct|struct in6_addr {
DECL|in6_u|member|} in6_u;
DECL|in_addr|member|struct in_addr in_addr;
DECL|in_addr|struct|struct in_addr {
DECL|ip_protocol|enum|enum ip_protocol {
DECL|ip_proto|member|enum ip_protocol ip_proto;
DECL|local_addr|member|struct net_addr *local_addr;
DECL|local_port|member|uint16_t local_port;
DECL|net_addr|struct|struct net_addr {
DECL|net_tuple|struct|struct net_tuple {
DECL|remote_addr|member|struct net_addr *remote_addr;
DECL|remote_port|member|uint16_t remote_port;
DECL|s4_addr16|macro|s4_addr16
DECL|s4_addr32|macro|s4_addr32
DECL|s4_addr|macro|s4_addr
DECL|s6_addr16|macro|s6_addr16
DECL|s6_addr32|macro|s6_addr32
DECL|s6_addr|macro|s6_addr
DECL|s_addr|macro|s_addr
DECL|sa_family_t|typedef|typedef unsigned short int sa_family_t;
DECL|u4_addr16|member|uint16_t u4_addr16[2]; /* In big endian */
DECL|u4_addr32|member|uint32_t u4_addr32[1]; /* In big endian */
DECL|u4_addr8|member|uint8_t u4_addr8[4];
DECL|u6_addr16|member|uint16_t u6_addr16[8]; /* In big endian */
DECL|u6_addr32|member|uint32_t u6_addr32[4]; /* In big endian */
DECL|u6_addr8|member|uint8_t u6_addr8[16];
