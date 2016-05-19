DECL|AF_INET6|macro|AF_INET6
DECL|AF_INET|macro|AF_INET
DECL|AF_UNSPEC|macro|AF_UNSPEC
DECL|IN6ADDR_ANY_INIT|macro|IN6ADDR_ANY_INIT
DECL|IN6ADDR_LOOPBACK_INIT|macro|IN6ADDR_LOOPBACK_INIT
DECL|INADDR_ANY|macro|INADDR_ANY
DECL|INET6_ADDRSTRLEN|macro|INET6_ADDRSTRLEN
DECL|IPPROTO_ICMPV6|enumerator|IPPROTO_ICMPV6 = 58,
DECL|IPPROTO_ICMP|enumerator|IPPROTO_ICMP = 1,
DECL|IPPROTO_TCP|enumerator|IPPROTO_TCP = 6,
DECL|IPPROTO_UDP|enumerator|IPPROTO_UDP = 17,
DECL|NET_ADDR_ANY_STATE|enumerator|NET_ADDR_ANY_STATE = -1,
DECL|NET_ADDR_ANY|enumerator|NET_ADDR_ANY = 0,
DECL|NET_ADDR_AUTOCONF|enumerator|NET_ADDR_AUTOCONF,
DECL|NET_ADDR_DEPRECATED|enumerator|NET_ADDR_DEPRECATED,
DECL|NET_ADDR_DHCP|enumerator|NET_ADDR_DHCP,
DECL|NET_ADDR_MANUAL|enumerator|NET_ADDR_MANUAL,
DECL|NET_ADDR_PREFERRED|enumerator|NET_ADDR_PREFERRED,
DECL|NET_ADDR_TENTATIVE|enumerator|NET_ADDR_TENTATIVE = 0,
DECL|NET_ICMPH_LEN|macro|NET_ICMPH_LEN
DECL|NET_ICMPV4H_LEN|macro|NET_ICMPV4H_LEN
DECL|NET_ICMPV6H_LEN|macro|NET_ICMPV6H_LEN
DECL|NET_IPV4H_LEN|macro|NET_IPV4H_LEN
DECL|NET_IPV4ICMPH_LEN|macro|NET_IPV4ICMPH_LEN
DECL|NET_IPV4TCPH_LEN|macro|NET_IPV4TCPH_LEN
DECL|NET_IPV4UDPH_LEN|macro|NET_IPV4UDPH_LEN
DECL|NET_IPV6H_LEN|macro|NET_IPV6H_LEN
DECL|NET_IPV6ICMPH_LEN|macro|NET_IPV6ICMPH_LEN
DECL|NET_IPV6TCPH_LEN|macro|NET_IPV6TCPH_LEN
DECL|NET_IPV6UDPH_LEN|macro|NET_IPV6UDPH_LEN
DECL|NET_IPV6_FRAGH_LEN|macro|NET_IPV6_FRAGH_LEN
DECL|NET_TCPH_LEN|macro|NET_TCPH_LEN
DECL|NET_UDPH_LEN|macro|NET_UDPH_LEN
DECL|PF_INET6|macro|PF_INET6
DECL|PF_INET|macro|PF_INET
DECL|PF_UNSPEC|macro|PF_UNSPEC
DECL|__NET_IP_H|macro|__NET_IP_H
DECL|chksum|member|uint16_t chksum;
DECL|chksum|member|uint16_t chksum;
DECL|code|member|uint8_t code;
DECL|dst|member|struct in6_addr dst;
DECL|dst|member|struct in_addr dst;
DECL|family|member|sa_family_t family;
DECL|flow|member|uint16_t flow;
DECL|hop_limit|member|uint8_t hop_limit;
DECL|htonl|macro|htonl
DECL|htons|macro|htons
DECL|id|member|uint8_t id[2];
DECL|in4_u|member|} in4_u;
DECL|in6_addr|member|struct in6_addr in6_addr;
DECL|in6_addr|struct|struct in6_addr {
DECL|in6_u|member|} in6_u;
DECL|in_addr|member|struct in_addr in_addr;
DECL|in_addr|struct|struct in_addr {
DECL|ip_protocol|enum|enum ip_protocol {
DECL|ip_proto|member|enum ip_protocol ip_proto;
DECL|len|member|uint8_t len[2];
DECL|len|member|uint8_t len[2];
DECL|local_addr|member|struct net_addr *local_addr;
DECL|local_port|member|uint16_t local_port;
DECL|net_addr_state|enum|enum net_addr_state {
DECL|net_addr_type2str|function|static inline char *net_addr_type2str(enum net_addr_type type)
DECL|net_addr_type2str|function|static inline char *net_addr_type2str(enum net_addr_type type)
DECL|net_addr_type|enum|enum net_addr_type {
DECL|net_addr|struct|struct net_addr {
DECL|net_icmp_hdr|struct|struct net_icmp_hdr {
DECL|net_ipaddr_copy|macro|net_ipaddr_copy
DECL|net_ipv4_hdr|struct|struct net_ipv4_hdr {
DECL|net_ipv6_hdr|struct|struct net_ipv6_hdr {
DECL|net_ipv6_unspecified_address|function|static inline struct in6_addr *net_ipv6_unspecified_address(void)
DECL|net_is_ipv6_addr_loopback|function|static inline bool net_is_ipv6_addr_loopback(struct in6_addr *addr)
DECL|net_is_ipv6_addr_mcast|function|static inline bool net_is_ipv6_addr_mcast(struct in6_addr *addr)
DECL|net_is_ipv6_ll_addr|function|static inline bool net_is_ipv6_ll_addr(struct in6_addr *addr)
DECL|net_is_ipv6_prefix|function|static inline bool net_is_ipv6_prefix(uint8_t *addr1, uint8_t *addr2, uint8_t length)
DECL|net_is_my_ipv4_addr|function|static inline bool net_is_my_ipv4_addr(struct in_addr *addr)
DECL|net_is_my_ipv6_addr|function|static inline bool net_is_my_ipv6_addr(struct in6_addr *addr)
DECL|net_is_my_ipv6_maddr|function|static inline bool net_is_my_ipv6_maddr(struct in6_addr *maddr)
DECL|net_tuple|struct|struct net_tuple {
DECL|nexthdr|member|uint8_t nexthdr;
DECL|ntohl|macro|ntohl
DECL|ntohs|macro|ntohs
DECL|offset|member|uint8_t offset[2];
DECL|proto|member|uint8_t proto;
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
DECL|src|member|struct in6_addr src;
DECL|src|member|struct in_addr src;
DECL|tcflow|member|uint8_t tcflow;
DECL|tos|member|uint8_t tos;
DECL|ttl|member|uint8_t ttl;
DECL|type|member|uint8_t type;
DECL|u4_addr16|member|uint16_t u4_addr16[2]; /* In big endian */
DECL|u4_addr32|member|uint32_t u4_addr32[1]; /* In big endian */
DECL|u4_addr8|member|uint8_t u4_addr8[4];
DECL|u6_addr16|member|uint16_t u6_addr16[8]; /* In big endian */
DECL|u6_addr32|member|uint32_t u6_addr32[4]; /* In big endian */
DECL|u6_addr8|member|uint8_t u6_addr8[16];
DECL|vhl|member|uint8_t vhl;
DECL|vtc|member|uint8_t vtc;
