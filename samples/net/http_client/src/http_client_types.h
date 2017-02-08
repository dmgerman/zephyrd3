DECL|_HTTP_CLIENT_TYPES_H_|macro|_HTTP_CLIENT_TYPES_H_
DECL|body_found|member|uint8_t body_found:1;
DECL|cl_present|member|uint8_t cl_present:1;
DECL|content_length|member|uint32_t content_length;
DECL|http_client_ctx|struct|struct http_client_ctx {
DECL|http_status|member|char http_status[HTTP_STATUS_STR_SIZE];
DECL|parser|member|struct http_parser parser;
DECL|processed|member|uint32_t processed;
DECL|settings|member|struct http_parser_settings settings;
DECL|tcp_ctx|member|struct tcp_client_ctx tcp_ctx;
