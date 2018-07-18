DECL|AI_ARR_MAX|macro|AI_ARR_MAX
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ai_arr|member|struct zsock_addrinfo *ai_arr;
DECL|dns_resolve_cb|function|static void dns_resolve_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|getaddrinfo_state|struct|struct getaddrinfo_state {
DECL|hints|member|const struct zsock_addrinfo *hints;
DECL|idx|member|u16_t idx;
DECL|port|member|u16_t port;
DECL|sem|member|struct k_sem sem;
DECL|status|member|int status;
DECL|zsock_getaddrinfo_internal|function|static int zsock_getaddrinfo_internal(const char *host, const char *service, const struct zsock_addrinfo *hints, struct zsock_addrinfo *res)
DECL|zsock_getaddrinfo|function|int zsock_getaddrinfo(const char *host, const char *service, const struct zsock_addrinfo *hints, struct zsock_addrinfo **res)
