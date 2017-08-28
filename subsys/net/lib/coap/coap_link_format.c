DECL|COAP_MARKER|macro|COAP_MARKER
DECL|MAX_BLOCK_WISE_TRANSFER_SIZE|macro|MAX_BLOCK_WISE_TRANSFER_SIZE
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|_coap_match_path_uri|function|bool _coap_match_path_uri(const char * const *path, const char *uri, u16_t len)
DECL|_coap_well_known_core_get|function|int _coap_well_known_core_get(struct coap_resource *resource, struct coap_packet *request, const struct sockaddr *from)
DECL|_coap_well_known_core_get|function|int _coap_well_known_core_get(struct coap_resource *resource, struct coap_packet *request, const struct sockaddr *from)
DECL|add_to_net_buf|function|static void add_to_net_buf(struct net_buf *buf, const char *str, u16_t len, u16_t *remaining, size_t *offset, size_t current)
DECL|default_block_size|function|enum coap_block_size default_block_size(void)
DECL|format_attributes|function|static int format_attributes(const char * const *attributes, struct net_buf *buf)
DECL|format_attributes|function|static int format_attributes(const char * const *attributes, struct net_buf *buf, u16_t *remaining, size_t *offset, size_t current, bool *more)
DECL|format_resource|function|static int format_resource(const struct coap_resource *resource, struct net_buf *buf)
DECL|format_resource|function|static int format_resource(const struct coap_resource *resource, struct net_buf *buf, u16_t *remaining, size_t *offset, size_t current, bool *more)
DECL|format_uri|function|static int format_uri(const char * const *path, struct net_buf *buf)
DECL|format_uri|function|static int format_uri(const char * const *path, struct net_buf *buf, u16_t *remaining, size_t *offset, size_t current, bool *more)
DECL|match_attributes|function|static bool match_attributes(const char * const *attributes, const struct coap_option *query)
DECL|match_path_uri|function|static bool match_path_uri(const char * const *path, const char *uri, u16_t len)
DECL|match_queries_resource|function|static bool match_queries_resource(const struct coap_resource *resource, const struct coap_option *query, int num_queries)
DECL|send_error_response|function|static int send_error_response(struct coap_resource *resource, struct coap_packet *request, const struct sockaddr *from)
