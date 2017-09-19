DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ai_arr|variable|ai_arr
DECL|ai_state|variable|ai_state
DECL|dns_resolve_cb|function|static void dns_resolve_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|getaddrinfo_state|struct|struct getaddrinfo_state {
DECL|hints|member|const struct zsock_addrinfo *hints;
DECL|idx|member|int idx;
DECL|sem|member|struct k_sem sem;
DECL|status|member|int status;
DECL|zsock_getaddrinfo|function|int zsock_getaddrinfo(const char *host, const char *service, const struct zsock_addrinfo *hints, struct zsock_addrinfo **res)
