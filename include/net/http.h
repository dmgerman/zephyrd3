DECL|HTTP_ACCEPT_ENC|macro|HTTP_ACCEPT_ENC
DECL|HTTP_ACCEPT_LANG|macro|HTTP_ACCEPT_LANG
DECL|HTTP_ACCEPT|macro|HTTP_ACCEPT
DECL|HTTP_CONNECTION|macro|HTTP_CONNECTION
DECL|HTTP_CONTENT_LEN_SIZE|macro|HTTP_CONTENT_LEN_SIZE
DECL|HTTP_CRLF|macro|HTTP_CRLF
DECL|HTTP_CTX_FREE|enumerator|HTTP_CTX_FREE = 0,
DECL|HTTP_CTX_IN_USE|enumerator|HTTP_CTX_IN_USE
DECL|HTTP_CTX_STATE|enum|enum HTTP_CTX_STATE {
DECL|HTTP_DATA_FINAL|enumerator|HTTP_DATA_FINAL = 1,
DECL|HTTP_DATA_MORE|enumerator|HTTP_DATA_MORE = 0,
DECL|HTTP_HEADER_FIELDS|macro|HTTP_HEADER_FIELDS
DECL|HTTP_NETWORK_TIMEOUT|macro|HTTP_NETWORK_TIMEOUT
DECL|HTTP_PROTOCOL|macro|HTTP_PROTOCOL
DECL|HTTP_STATUS_STR_SIZE|macro|HTTP_STATUS_STR_SIZE
DECL|HTTP_USER_AGENT|macro|HTTP_USER_AGENT
DECL|__HTTP_H__|macro|__HTTP_H__
DECL|body_found|member|u8_t body_found:1;
DECL|body_start|member|u8_t *body_start;
DECL|cb|member|http_response_cb_t cb;
DECL|cl_present|member|u8_t cl_present:1;
DECL|content_length|member|size_t content_length;
DECL|content_type_value|member|const char *content_type_value;
DECL|ctx|member|struct net_context *ctx;
DECL|data_len|member|size_t data_len;
DECL|dns_id|member|u16_t dns_id;
DECL|field_values_ctr|member|u16_t field_values_ctr;
DECL|field_values|member|struct http_field_value field_values[CONFIG_HTTP_HEADER_FIELD_ITEMS];
DECL|header_fields|member|const char *header_fields;
DECL|host|member|const char *host;
DECL|host|member|const char *host;
DECL|http_client_ctx|struct|struct http_client_ctx {
DECL|http_client_request|struct|struct http_client_request {
DECL|http_client_send_get_req|function|static inline int http_client_send_get_req(struct http_client_ctx *http_ctx, const char *url, const char *host, const char *extra_header_fields, http_response_cb_t cb,
DECL|http_client_send_post_req|function|static inline int http_client_send_post_req(struct http_client_ctx *http_ctx, const char *url, const char *host, const char *extra_header_fields, const char *content_type,
DECL|http_field_value|struct|struct http_field_value {
DECL|http_final_call|enum|enum http_final_call {
DECL|http_receive_cb_t|typedef|typedef void (*http_receive_cb_t)(struct http_client_ctx *ctx,
DECL|http_response_cb_t|typedef|typedef void (*http_response_cb_t)(struct http_client_ctx *ctx,
DECL|http_server_ctx|struct|struct http_server_ctx {
DECL|http_status|member|char http_status[HTTP_STATUS_STR_SIZE];
DECL|key_len|member|u16_t key_len;
DECL|key|member|const char *key;
DECL|local|member|struct sockaddr local;
DECL|method|member|enum http_method method;
DECL|method|member|enum http_method method;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|parser_settings|member|struct http_parser_settings parser_settings;
DECL|parser|member|struct http_parser parser;
DECL|parser|member|struct http_parser parser;
DECL|payload_size|member|u16_t payload_size;
DECL|payload|member|const char *payload;
DECL|processed|member|size_t processed;
DECL|protocol|member|const char *protocol;
DECL|receive_cb|member|http_receive_cb_t receive_cb;
DECL|remote|member|struct sockaddr remote;
DECL|req|member|} req;
DECL|response_buf_len|member|size_t response_buf_len;
DECL|response_buf|member|u8_t *response_buf;
DECL|rsp|member|} rsp;
DECL|server|member|const char *server;
DECL|settings|member|struct http_parser_settings settings;
DECL|state|member|u8_t state;
DECL|tcp|member|} tcp;
DECL|timeout|member|s32_t timeout;
DECL|timeout|member|s32_t timeout;
DECL|url_len|member|u16_t url_len;
DECL|url|member|const char *url;
DECL|url|member|const char *url;
DECL|user_data|member|void *user_data;
DECL|value_len|member|u16_t value_len;
DECL|value|member|const char *value;
DECL|wait|member|struct k_sem wait;
