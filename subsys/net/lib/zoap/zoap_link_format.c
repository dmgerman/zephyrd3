DECL|COAP_MARKER|macro|COAP_MARKER
DECL|PKT_WAIT_TIME|macro|PKT_WAIT_TIME
DECL|_zoap_well_known_core_get|function|int _zoap_well_known_core_get(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
DECL|format_attributes|function|static int format_attributes(const char * const *attributes, struct net_buf *buf)
DECL|format_resource|function|static int format_resource(const struct zoap_resource *resource, struct net_buf *buf)
DECL|format_uri|function|static int format_uri(const char * const *path, struct net_buf *buf)
DECL|match_attributes|function|static bool match_attributes(const char * const *attributes, const struct zoap_option *query)
DECL|match_path_uri|function|static bool match_path_uri(const char * const *path, const char *uri, u16_t len)
DECL|match_queries_resource|function|static bool match_queries_resource(const struct zoap_resource *resource, const struct zoap_option *query, int num_queries)
DECL|send_error_response|function|static int send_error_response(struct zoap_resource *resource, struct zoap_packet *request, const struct sockaddr *from)
