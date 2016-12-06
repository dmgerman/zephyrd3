DECL|DNS_QUERY_TYPE_AAAA|enumerator|DNS_QUERY_TYPE_AAAA = 28 /* IPv6 */
DECL|DNS_QUERY_TYPE_A|enumerator|DNS_QUERY_TYPE_A = 1, /* IPv4 */
DECL|_DNS_CLIENT_H_|macro|_DNS_CLIENT_H_
DECL|address|member|} address;
DECL|dns_context|struct|struct dns_context {
DECL|dns_query_type|enum|enum dns_query_type {
DECL|dns_server|member|struct sockaddr *dns_server;
DECL|elements|member|uint8_t elements;
DECL|ipv4|member|struct in_addr *ipv4;
DECL|ipv6|member|struct in6_addr *ipv6;
DECL|items|member|uint8_t items;
DECL|name|member|const char *name;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|query_type|member|uint16_t query_type;
DECL|rx_buf|member|struct net_buf *rx_buf;
DECL|rx_sem|member|struct k_sem rx_sem;
DECL|timeout|member|int32_t timeout;
