DECL|HTTP_CONTENT_TYPE|macro|HTTP_CONTENT_TYPE
DECL|HTTP_CONT_LEN_SIZE|macro|HTTP_CONT_LEN_SIZE
DECL|HTTP_EOF|macro|HTTP_EOF
DECL|HTTP_PROTOCOL|macro|HTTP_PROTOCOL
DECL|http_request_get|function|int http_request_get(struct net_context *net_ctx, int32_t timeout, char *url, char *header_fields)
DECL|http_request_head|function|int http_request_head(struct net_context *net_ctx, int32_t timeout, char *url, char *header_fields)
DECL|http_request_options|function|int http_request_options(struct net_context *net_ctx, int32_t timeout, char *url, char *header_fields)
DECL|http_request_post|function|int http_request_post(struct net_context *net_ctx, int32_t timeout, char *url, char *header_fields, char *content_type_value, char *payload)
DECL|http_request|function|int http_request(struct net_context *net_ctx, int32_t timeout, struct http_client_request *req)
