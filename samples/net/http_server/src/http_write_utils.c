DECL|HTTP_MAX_BODY_STR_SIZE|macro|HTTP_MAX_BODY_STR_SIZE
DECL|html_body|variable|html_body
DECL|http_add_chunk|function|int http_add_chunk(struct net_buf *tx, const char *str)
DECL|http_add_header|function|int http_add_header(struct net_buf *tx, const char *str)
DECL|http_strlen|function|uint16_t http_strlen(const char *str)
DECL|http_write_400_bad_request|function|int http_write_400_bad_request(struct http_server_ctx *ctx)
DECL|http_write_403_forbidden|function|int http_write_403_forbidden(struct http_server_ctx *ctx)
DECL|http_write_404_not_found|function|int http_write_404_not_found(struct http_server_ctx *ctx)
DECL|http_write_header_fields|function|int http_write_header_fields(struct http_server_ctx *ctx)
DECL|http_write_it_works|function|int http_write_it_works(struct http_server_ctx *ctx)
DECL|http_write_soft_404_not_found|function|int http_write_soft_404_not_found(struct http_server_ctx *ctx)
DECL|http_write|function|int http_write(struct http_server_ctx *ctx, const char *http_header, const char *html_header, const char *html_body, const char *html_footer)
DECL|print_http_headers|function|static void print_http_headers(struct http_server_ctx *ctx, char *str, uint16_t size)
