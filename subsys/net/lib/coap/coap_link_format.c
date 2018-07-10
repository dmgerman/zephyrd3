DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_BLOCK_WISE_TRANSFER_SIZE|macro|MAX_BLOCK_WISE_TRANSFER_SIZE
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|_coap_match_path_uri|function|bool _coap_match_path_uri(const char * const *path, const char *uri, u16_t len)
DECL|append_to_net_pkt|function|static bool append_to_net_pkt(struct net_pkt *pkt, const char *str, u16_t len, u16_t *remaining, size_t *offset, size_t current)
DECL|clear_more_flag|function|int clear_more_flag(struct coap_packet *cpkt)
DECL|coap_well_known_core_get|function|int coap_well_known_core_get(struct coap_resource *resource, struct coap_packet *request, struct coap_packet *response, struct net_pkt *pkt)
DECL|coap_well_known_core_get|function|int coap_well_known_core_get(struct coap_resource *resource, struct coap_packet *request, struct coap_packet *response, struct net_pkt *pkt)
DECL|default_block_size|function|enum coap_block_size default_block_size(void)
DECL|format_attributes|function|static int format_attributes(const char * const *attributes, struct net_pkt *pkt)
DECL|format_attributes|function|static int format_attributes(const char * const *attributes, struct net_pkt *pkt, u16_t *remaining, size_t *offset, size_t current, bool *more)
DECL|format_resource|function|static int format_resource(const struct coap_resource *resource, struct net_pkt *pkt)
DECL|format_resource|function|static int format_resource(const struct coap_resource *resource, struct net_pkt *pkt, u16_t *remaining, size_t *offset, size_t current, bool *more)
DECL|format_uri|function|static int format_uri(const char * const *path, struct net_pkt *pkt)
DECL|format_uri|function|static int format_uri(const char * const *path, struct net_pkt *pkt, u16_t *remaining, size_t *offset, size_t current, bool *more)
DECL|match_attributes|function|static bool match_attributes(const char * const *attributes, const struct coap_option *query)
DECL|match_path_uri|function|static bool match_path_uri(const char * const *path, const char *uri, u16_t len)
DECL|match_queries_resource|function|static bool match_queries_resource(const struct coap_resource *resource, const struct coap_option *query, int num_queries)
