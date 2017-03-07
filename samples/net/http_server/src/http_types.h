DECL|HTTP_MAX_NUMBER_SERVER_CTX|macro|HTTP_MAX_NUMBER_SERVER_CTX
DECL|HTTP_MAX_NUMBER_URL|macro|HTTP_MAX_NUMBER_URL
DECL|HTTP_PARSER_MAX_FIELD_VALUES|macro|HTTP_PARSER_MAX_FIELD_VALUES
DECL|HTTP_URL_FLAGS|enum|enum HTTP_URL_FLAGS {
DECL|HTTP_URL_STANDARD|enumerator|HTTP_URL_STANDARD = 0
DECL|_HTTP_TYPES_H_|macro|_HTTP_TYPES_H_
DECL|flags|member|uint8_t flags;
DECL|http_root_url|struct|struct http_root_url {
DECL|http_url_ctx|struct|struct http_url_ctx {
DECL|root_len|member|uint16_t root_len;
DECL|root|member|const char *root;
DECL|urls_ctr|member|uint8_t urls_ctr;
DECL|urls|member|struct http_root_url urls[HTTP_MAX_NUMBER_URL];
DECL|write_cb|member|int (*write_cb)(struct http_server_ctx *http_ctx);
