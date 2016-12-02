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
DECL|NET_IPV6_MTU|macro|NET_IPV6_MTU
DECL|NET_SOCKADDR_MAX_SIZE|macro|NET_SOCKADDR_MAX_SIZE
DECL|NET_SOCKADDR_MAX_SIZE|macro|NET_SOCKADDR_MAX_SIZE
DECL|NET_SOCKADDR_MAX_SIZE|macro|NET_SOCKADDR_MAX_SIZE
DECL|NET_SOCKADDR_PTR_MAX_SIZE|macro|NET_SOCKADDR_PTR_MAX_SIZE
DECL|NET_SOCKADDR_PTR_MAX_SIZE|macro|NET_SOCKADDR_PTR_MAX_SIZE
DECL|NET_SOCKADDR_PTR_MAX_SIZE|macro|NET_SOCKADDR_PTR_MAX_SIZE
DECL|NET_TCPH_LEN|macro|NET_TCPH_LEN
DECL|NET_UDPH_LEN|macro|NET_UDPH_LEN
DECL|PF_INET6|macro|PF_INET6
DECL|PF_INET|macro|PF_INET
DECL|PF_UNSPEC|macro|PF_UNSPEC
DECL|SOCK_DGRAM|enumerator|SOCK_DGRAM = 1,
DECL|SOCK_STREAM|enumerator|SOCK_STREAM,
DECL|__NET_IP_H|macro|__NET_IP_H
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|ack|member|uint8_t ack[4];
DECL|chksum|member|uint16_t chksum;
DECL|chksum|member|uint16_t chksum;
DECL|chksum|member|uint16_t chksum;
DECL|chksum|member|uint16_t chksum;
DECL|code|member|uint8_t code;
DECL|data|member|char data[NET_SOCKADDR_MAX_SIZE - sizeof(sa_family_t)];
DECL|data|member|char data[NET_SOCKADDR_PTR_MAX_SIZE - sizeof(sa_family_t)];
DECL|dst_port|member|uint16_t dst_port;
DECL|dst_port|member|uint16_t dst_port;
DECL|dst|member|struct in6_addr dst;
DECL|dst|member|struct in_addr dst;
DECL|family|member|sa_family_t family;
DECL|family|member|sa_family_t family;
DECL|family|member|sa_family_t family;
DECL|flags|member|uint8_t flags;
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
DECL|ip_proto|member|enum net_ip_protocol ip_proto;
DECL|len|member|uint16_t len;
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
DECL|net_ip_protocol|enum|enum net_ip_protocol {
DECL|net_ipaddr_copy|macro|net_ipaddr_copy
DECL|net_ipv4_addr_cmp|function|static inline bool net_ipv4_addr_cmp(const struct in_addr *addr1, const struct in_addr *addr2)
DECL|net_ipv4_addr_mask_cmp|function|static inline bool net_ipv4_addr_mask_cmp(struct net_if *iface, struct in_addr *addr)
DECL|net_ipv4_broadcast_address|function|static inline const struct in_addr *net_ipv4_broadcast_address(void)
DECL|net_ipv4_hdr|struct|struct net_ipv4_hdr {
DECL|net_ipv6_addr_based_on_ll|function|static inline bool net_ipv6_addr_based_on_ll(const struct in6_addr *addr, const struct net_linkaddr *lladdr)
DECL|net_ipv6_addr_cmp|function|static inline bool net_ipv6_addr_cmp(const struct in6_addr *addr1, const struct in6_addr *addr2)
DECL|net_ipv6_addr_create_iid|function|static inline void net_ipv6_addr_create_iid(struct in6_addr *addr, struct net_linkaddr *lladdr)
DECL|net_ipv6_addr_create_ll_allnodes_mcast|function|static inline void net_ipv6_addr_create_ll_allnodes_mcast(struct in6_addr *addr)
DECL|net_ipv6_addr_create_solicited_node|function|static inline void net_ipv6_addr_create_solicited_node(struct in6_addr *src, struct in6_addr *dst)
DECL|net_ipv6_addr_create|function|static inline void net_ipv6_addr_create(struct in6_addr *addr,uint16_t addr0, uint16_t addr1, uint16_t addr2, uint16_t addr3, uint16_t addr4, uint16_t addr5, uint16_t addr6, uint16_t addr7)
DECL|net_ipv6_hdr|struct|struct net_ipv6_hdr {
DECL|net_ipv6_unspecified_address|function|static inline const struct in6_addr *net_ipv6_unspecified_address(void)
DECL|net_is_ipv6_addr_loopback|function|static inline bool net_is_ipv6_addr_loopback(struct in6_addr *addr)
DECL|net_is_ipv6_addr_mcast_global|function|static inline bool net_is_ipv6_addr_mcast_global(const struct in6_addr *addr)
DECL|net_is_ipv6_addr_mcast|function|static inline bool net_is_ipv6_addr_mcast(const struct in6_addr *addr)
DECL|net_is_ipv6_addr_solicited_node|function|static inline bool net_is_ipv6_addr_solicited_node(const struct in6_addr *addr)
DECL|net_is_ipv6_addr_unspecified|function|static inline bool net_is_ipv6_addr_unspecified(const struct in6_addr *addr)
DECL|net_is_ipv6_ll_addr|function|static inline bool net_is_ipv6_ll_addr(const struct in6_addr *addr)
DECL|net_is_ipv6_prefix|function|static inline bool net_is_ipv6_prefix(const uint8_t *addr1, const uint8_t *addr2, uint8_t length)
DECL|net_is_my_ipv4_addr|function|static inline bool net_is_my_ipv4_addr(const struct in_addr *addr)
DECL|net_is_my_ipv6_addr|function|static inline bool net_is_my_ipv6_addr(struct in6_addr *addr)
DECL|net_is_my_ipv6_maddr|function|static inline bool net_is_my_ipv6_maddr(struct in6_addr *maddr)
DECL|net_sin6_ptr|function|struct sockaddr_in6_ptr *net_sin6_ptr(const struct sockaddr_ptr *addr)
DECL|net_sin6|function|static inline struct sockaddr_in6 *net_sin6(const struct sockaddr *addr)
DECL|net_sin_ptr|function|struct sockaddr_in_ptr *net_sin_ptr(const struct sockaddr_ptr *addr)
DECL|net_sin|function|static inline struct sockaddr_in *net_sin(const struct sockaddr *addr)
DECL|net_sock_type|enum|enum net_sock_type {
DECL|net_tcp_hdr|struct|struct net_tcp_hdr {
DECL|net_tuple|struct|struct net_tuple {
DECL|net_udp_hdr|struct|struct net_udp_hdr {
DECL|nexthdr|member|uint8_t nexthdr;
DECL|ntohl|macro|ntohl
DECL|ntohs|macro|ntohs
DECL|offset|member|uint8_t offset;
DECL|offset|member|uint8_t offset[2];
DECL|optdata|member|uint8_t optdata[0];
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
DECL|seq|member|uint8_t seq[4];
DECL|sin6_addr|member|struct in6_addr *sin6_addr; /* IPv6 address */
DECL|sin6_addr|member|struct in6_addr sin6_addr; /* IPv6 address */
DECL|sin6_family|member|sa_family_t sin6_family; /* AF_INET6 */
DECL|sin6_family|member|sa_family_t sin6_family; /* AF_INET6 */
DECL|sin6_port|member|uint16_t sin6_port; /* Port number */
DECL|sin6_port|member|uint16_t sin6_port; /* Port number */
DECL|sin6_scope_id|member|uint8_t sin6_scope_id; /* interfaces for a scope */
DECL|sin6_scope_id|member|uint8_t sin6_scope_id; /* interfaces for a scope */
DECL|sin_addr|member|struct in_addr *sin_addr; /* IPv4 address */
DECL|sin_addr|member|struct in_addr sin_addr; /* IPv4 address */
DECL|sin_family|member|sa_family_t sin_family; /* AF_INET */
DECL|sin_family|member|sa_family_t sin_family; /* AF_INET */
DECL|sin_port|member|uint16_t sin_port; /* Port number */
DECL|sin_port|member|uint16_t sin_port; /* Port number */
DECL|sockaddr_in6_ptr|struct|struct sockaddr_in6_ptr {
DECL|sockaddr_in6|struct|struct sockaddr_in6 {
DECL|sockaddr_in_ptr|struct|struct sockaddr_in_ptr {
DECL|sockaddr_in|struct|struct sockaddr_in {
DECL|sockaddr_ptr|struct|struct sockaddr_ptr {
DECL|sockaddr|struct|struct sockaddr {
DECL|socklen_t|typedef|typedef size_t socklen_t;
DECL|src_port|member|uint16_t src_port;
DECL|src_port|member|uint16_t src_port;
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
DECL|urg|member|uint8_t urg[2];
DECL|vhl|member|uint8_t vhl;
DECL|vtc|member|uint8_t vtc;
DECL|wnd|member|uint8_t wnd[2];
