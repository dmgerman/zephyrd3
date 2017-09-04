DECL|CONFIG_DNS_NUM_CONCUR_QUERIES|macro|CONFIG_DNS_NUM_CONCUR_QUERIES
DECL|CONFIG_DNS_RESOLVER_MAX_SERVERS|macro|CONFIG_DNS_RESOLVER_MAX_SERVERS
DECL|DNS_EAI_ADDRFAMILY|enumerator|DNS_EAI_ADDRFAMILY = -9, /* Address family for NAME not supported */
DECL|DNS_EAI_AGAIN|enumerator|DNS_EAI_AGAIN = -3, /* Temporary failure in name resolution */
DECL|DNS_EAI_ALLDONE|enumerator|DNS_EAI_ALLDONE = -103, /* All requests done */
DECL|DNS_EAI_BADFLAGS|enumerator|DNS_EAI_BADFLAGS = -1, /* Invalid value for `ai_flags' field */
DECL|DNS_EAI_CANCELED|enumerator|DNS_EAI_CANCELED = -101, /* Request canceled */
DECL|DNS_EAI_FAIL|enumerator|DNS_EAI_FAIL = -4, /* Non-recoverable failure in name res */
DECL|DNS_EAI_FAMILY|enumerator|DNS_EAI_FAMILY = -6, /* `ai_family' not supported */
DECL|DNS_EAI_IDN_ENCODE|enumerator|DNS_EAI_IDN_ENCODE = -105, /* IDN encoding failed */
DECL|DNS_EAI_INPROGRESS|enumerator|DNS_EAI_INPROGRESS = -100, /* Processing request in progress */
DECL|DNS_EAI_MEMORY|enumerator|DNS_EAI_MEMORY = -10, /* Memory allocation failure */
DECL|DNS_EAI_NODATA|enumerator|DNS_EAI_NODATA = -5, /* No address associated with NAME */
DECL|DNS_EAI_NONAME|enumerator|DNS_EAI_NONAME = -2, /* NAME or SERVICE is unknown */
DECL|DNS_EAI_NOTCANCELED|enumerator|DNS_EAI_NOTCANCELED = -102, /* Request not canceled */
DECL|DNS_EAI_OVERFLOW|enumerator|DNS_EAI_OVERFLOW = -12, /* Argument buffer overflow */
DECL|DNS_EAI_SERVICE|enumerator|DNS_EAI_SERVICE = -8, /* SRV not supported for `ai_socktype' */
DECL|DNS_EAI_SOCKTYPE|enumerator|DNS_EAI_SOCKTYPE = -7, /* `ai_socktype' not supported */
DECL|DNS_EAI_SYSTEM|enumerator|DNS_EAI_SYSTEM = -11, /* System error returned in `errno' */
DECL|DNS_MAX_MCAST_SERVERS|macro|DNS_MAX_MCAST_SERVERS
DECL|DNS_MAX_NAME_SIZE|macro|DNS_MAX_NAME_SIZE
DECL|DNS_QUERY_TYPE_AAAA|enumerator|DNS_QUERY_TYPE_AAAA = 28 /* IPv6 */
DECL|DNS_QUERY_TYPE_A|enumerator|DNS_QUERY_TYPE_A = 1, /* IPv4 */
DECL|LLMNR_SERVER_COUNT|macro|LLMNR_SERVER_COUNT
DECL|LLMNR_SERVER_COUNT|macro|LLMNR_SERVER_COUNT
DECL|LLMNR_SERVER_COUNT|macro|LLMNR_SERVER_COUNT
DECL|MDNS_SERVER_COUNT|macro|MDNS_SERVER_COUNT
DECL|MDNS_SERVER_COUNT|macro|MDNS_SERVER_COUNT
DECL|MDNS_SERVER_COUNT|macro|MDNS_SERVER_COUNT
DECL|_DNS_RESOLVE_H|macro|_DNS_RESOLVE_H
DECL|ai_addrlen|member|socklen_t ai_addrlen;
DECL|ai_addr|member|struct sockaddr ai_addr;
DECL|ai_canonname|member|char ai_canonname[DNS_MAX_NAME_SIZE + 1];
DECL|ai_family|member|u8_t ai_family;
DECL|buf_timeout|member|s32_t buf_timeout;
DECL|cb|member|dns_resolve_cb_t cb;
DECL|ctx|member|struct dns_resolve_context *ctx;
DECL|dns_addrinfo|struct|struct dns_addrinfo {
DECL|dns_cancel_addr_info|function|static inline int dns_cancel_addr_info(u16_t dns_id)
DECL|dns_get_addr_info|function|static inline int dns_get_addr_info(const char *query, enum dns_query_type type, u16_t *dns_id, dns_resolve_cb_t cb, void *user_data,
DECL|dns_init_resolver|macro|dns_init_resolver
DECL|dns_pending_query|struct|struct dns_pending_query {
DECL|dns_query_type|enum|enum dns_query_type {
DECL|dns_resolve_cb_t|typedef|typedef void (*dns_resolve_cb_t)(enum dns_resolve_status status,
DECL|dns_resolve_context|struct|struct dns_resolve_context {
DECL|dns_resolve_status|enum|enum dns_resolve_status {
DECL|dns_server|member|struct sockaddr dns_server;
DECL|id|member|u16_t id;
DECL|is_llmnr|member|u8_t is_llmnr : 1;
DECL|is_mdns|member|u8_t is_mdns : 1;
DECL|is_used|member|bool is_used;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|queries|member|} queries[CONFIG_DNS_NUM_CONCUR_QUERIES];
DECL|query_type|member|enum dns_query_type query_type;
DECL|query|member|const char *query;
DECL|servers|member|} servers[CONFIG_DNS_RESOLVER_MAX_SERVERS + DNS_MAX_MCAST_SERVERS];
DECL|timeout|member|s32_t timeout;
DECL|timer|member|struct k_delayed_work timer;
DECL|user_data|member|void *user_data;
