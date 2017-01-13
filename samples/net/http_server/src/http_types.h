DECL|HTTP_CTX_FREE|enumerator|HTTP_CTX_FREE = 0,
DECL|HTTP_CTX_IN_USE|enumerator|HTTP_CTX_IN_USE
DECL|HTTP_CTX_STATE|enum|enum HTTP_CTX_STATE {
DECL|HTTP_MAX_NUMBER_SERVER_CTX|macro|HTTP_MAX_NUMBER_SERVER_CTX
DECL|HTTP_MAX_NUMBER_URL|macro|HTTP_MAX_NUMBER_URL
DECL|HTTP_PARSER_MAX_FIELD_VALUES|macro|HTTP_PARSER_MAX_FIELD_VALUES
DECL|HTTP_URL_FLAGS|enum|enum HTTP_URL_FLAGS {
DECL|HTTP_URL_STANDARD|enumerator|HTTP_URL_STANDARD = 0
DECL|_HTTP_TYPES_H_|macro|_HTTP_TYPES_H_
DECL|field_values_ctr|member|uint16_t field_values_ctr;
DECL|field_values|member|struct http_field_value field_values[HTTP_PARSER_MAX_FIELD_VALUES];
DECL|flags|member|uint8_t flags;
DECL|http_field_value|struct|struct http_field_value {
DECL|http_root_url|struct|struct http_root_url {
DECL|http_server_ctx|struct|struct http_server_ctx {
DECL|http_url_ctx|struct|struct http_url_ctx {
DECL|key_len|member|uint16_t key_len;
DECL|key|member|const char *key;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|parser_settings|member|struct http_parser_settings parser_settings;
DECL|parser|member|struct http_parser parser;
DECL|root_len|member|uint16_t root_len;
DECL|root|member|const char *root;
DECL|url_len|member|uint16_t url_len;
DECL|urls_ctr|member|uint8_t urls_ctr;
DECL|urls|member|struct http_root_url urls[HTTP_MAX_NUMBER_URL];
DECL|url|member|const char *url;
DECL|used|member|uint8_t used;
DECL|value_len|member|uint16_t value_len;
DECL|value|member|const char *value;
DECL|write_cb|member|int (*write_cb)(struct http_server_ctx *http_ctx);
