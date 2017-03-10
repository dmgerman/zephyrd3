DECL|HTTP_STATUS_200_OK|macro|HTTP_STATUS_200_OK
DECL|HTTP_STATUS_400_BR|macro|HTTP_STATUS_400_BR
DECL|HTTP_STATUS_403_FBD|macro|HTTP_STATUS_403_FBD
DECL|HTTP_STATUS_404_NF|macro|HTTP_STATUS_404_NF
DECL|http_add_chunk|function|static int http_add_chunk(struct net_buf *tx, int32_t timeout, const char *str)
DECL|http_add_header|function|static int http_add_header(struct net_buf *tx, int32_t timeout, const char *str)
DECL|http_response_400|function|int http_response_400(struct http_server_ctx *ctx, const char *html_payload)
DECL|http_response_403|function|int http_response_403(struct http_server_ctx *ctx, const char *html_payload)
DECL|http_response_404|function|int http_response_404(struct http_server_ctx *ctx, const char *html_payload)
DECL|http_response|function|int http_response(struct http_server_ctx *ctx, const char *http_header, const char *html_payload)
DECL|http_strlen|function|static inline uint16_t http_strlen(const char *str)
