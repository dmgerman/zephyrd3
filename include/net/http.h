DECL|HTTP_CTX_FREE|enumerator|HTTP_CTX_FREE = 0,
DECL|HTTP_CTX_IN_USE|enumerator|HTTP_CTX_IN_USE
DECL|HTTP_CTX_STATE|enum|enum HTTP_CTX_STATE {
DECL|__HTTP_H__|macro|__HTTP_H__
DECL|content_type_value|member|char *content_type_value;
DECL|field_values_ctr|member|u16_t field_values_ctr;
DECL|field_values|member|struct http_field_value field_values[CONFIG_HTTP_HEADER_FIELD_ITEMS];
DECL|header_fields|member|char *header_fields;
DECL|http_client_request|struct|struct http_client_request {
DECL|http_field_value|struct|struct http_field_value {
DECL|http_server_ctx|struct|struct http_server_ctx {
DECL|key_len|member|u16_t key_len;
DECL|key|member|const char *key;
DECL|method|member|char *method;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|parser_settings|member|struct http_parser_settings parser_settings;
DECL|parser|member|struct http_parser parser;
DECL|payload_size|member|u16_t payload_size;
DECL|payload|member|char *payload;
DECL|protocol|member|char *protocol;
DECL|state|member|u8_t state;
DECL|timeout|member|s32_t timeout;
DECL|url_len|member|u16_t url_len;
DECL|url|member|char *url;
DECL|url|member|const char *url;
DECL|value_len|member|u16_t value_len;
DECL|value|member|const char *value;
