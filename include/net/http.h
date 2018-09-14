DECL|CONFIG_HTTP_HEADERS|macro|CONFIG_HTTP_HEADERS
DECL|CONFIG_HTTP_SERVER_NUM_URLS|macro|CONFIG_HTTP_SERVER_NUM_URLS
DECL|HTTP_CONNECTION|enumerator|HTTP_CONNECTION = 1,
DECL|HTTP_CRLF|macro|HTTP_CRLF
DECL|HTTP_DATA_FINAL|enumerator|HTTP_DATA_FINAL = 1,
DECL|HTTP_DATA_MORE|enumerator|HTTP_DATA_MORE = 0,
DECL|HTTP_PROTOCOL|macro|HTTP_PROTOCOL
DECL|HTTP_STATE_CLOSED|enumerator|HTTP_STATE_CLOSED,
DECL|HTTP_STATE_HEADER_RECEIVED|enumerator|HTTP_STATE_HEADER_RECEIVED,
DECL|HTTP_STATE_OPEN|enumerator|HTTP_STATE_OPEN,
DECL|HTTP_STATE_RECEIVING_HEADER|enumerator|HTTP_STATE_RECEIVING_HEADER,
DECL|HTTP_STATE_WAITING_HEADER|enumerator|HTTP_STATE_WAITING_HEADER,
DECL|HTTP_STATUS_STR_SIZE|macro|HTTP_STATUS_STR_SIZE
DECL|HTTP_URL_STANDARD|enumerator|HTTP_URL_STANDARD = 0,
DECL|HTTP_URL_WEBSOCKET|enumerator|HTTP_URL_WEBSOCKET,
DECL|HTTP_VERDICT_ACCEPT|enumerator|HTTP_VERDICT_ACCEPT,
DECL|HTTP_VERDICT_DROP|enumerator|HTTP_VERDICT_DROP,
DECL|WS_CONNECTION|enumerator|WS_CONNECTION,
DECL|ZEPHYR_INCLUDE_NET_HTTP_H_|macro|ZEPHYR_INCLUDE_NET_HTTP_H_
DECL|ZEPHYR_USER_AGENT|macro|ZEPHYR_USER_AGENT
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|app_ctx|member|struct net_app_ctx app_ctx;
DECL|body_found|member|u8_t body_found:1;
DECL|body_start|member|u8_t *body_start;
DECL|cb|member|http_response_cb_t cb;
DECL|cb|member|struct http_cb cb;
DECL|cl_present|member|u8_t cl_present:1;
DECL|close|member|http_close_cb_t close;
DECL|connect_wait|member|struct k_sem connect_wait;
DECL|connect|member|http_connect_cb_t connect;
DECL|content_length|member|size_t content_length;
DECL|content_type_value|member|const char *content_type_value;
DECL|data_len|member|size_t data_len;
DECL|data_len|member|size_t data_len;
DECL|data_read|member|u32_t data_read;
DECL|data_waiting|member|u32_t data_waiting;
DECL|default_cb|member|http_url_cb_t default_cb;
DECL|default_url|member|struct http_root_url default_url;
DECL|field_values_ctr|member|u16_t field_values_ctr;
DECL|field_values|member|struct http_field_value field_values[CONFIG_HTTP_HEADERS];
DECL|flags|member|u8_t flags;
DECL|header_fields|member|const char *header_fields;
DECL|host|member|const char *host;
DECL|host|member|const char *host;
DECL|http_cb|struct|struct http_cb {
DECL|http_change_state|macro|http_change_state
DECL|http_client_send_get_req|function|static inline int http_client_send_get_req(struct http_ctx *http_ctx, const char *url, const char *host, const char *extra_header_fields, http_response_cb_t cb,
DECL|http_close_cb_t|typedef|typedef void (*http_close_cb_t)(struct http_ctx *ctx,
DECL|http_connect_cb_t|typedef|typedef void (*http_connect_cb_t)(struct http_ctx *ctx,
DECL|http_connection_type|enum|enum http_connection_type {
DECL|http_ctx|struct|struct http_ctx {
DECL|http_field_value|struct|struct http_field_value {
DECL|http_final_call|enum|enum http_final_call {
DECL|http_recv_cb_t|typedef|typedef void (*http_recv_cb_t)(struct http_ctx *ctx,
DECL|http_request|struct|struct http_request {
DECL|http_response_cb_t|typedef|typedef void (*http_response_cb_t)(struct http_ctx *ctx,
DECL|http_root_url|struct|struct http_root_url {
DECL|http_send_cb_t|typedef|typedef void (*http_send_cb_t)(struct http_ctx *ctx,
DECL|http_server_add_url|function|struct http_root_url *http_server_add_url(struct http_server_urls *urls, const char *url, u8_t flags)
DECL|http_server_cb_t|typedef|typedef void (*http_server_cb_t)(struct http_ctx *entry,
DECL|http_server_conn_add|macro|http_server_conn_add
DECL|http_server_conn_del|macro|http_server_conn_del
DECL|http_server_conn_foreach|macro|http_server_conn_foreach
DECL|http_server_conn_monitor|macro|http_server_conn_monitor
DECL|http_server_disable|function|static inline int http_server_disable(struct http_ctx *ctx)
DECL|http_server_enable|function|static inline int http_server_enable(struct http_ctx *ctx)
DECL|http_server_init|function|static inline int http_server_init(struct http_ctx *ctx, struct http_server_urls *urls, struct sockaddr *server_addr, u8_t *request_buf, size_t request_buf_len,
DECL|http_server_set_tls|function|static inline int http_server_set_tls(struct http_ctx *ctx, const char *server_banner, u8_t *personalization_data, size_t personalization_data_len, net_app_cert_cb_t cert_cb,
DECL|http_server_urls|struct|struct http_server_urls {
DECL|http_state|enum|enum http_state {
DECL|http_status|member|char http_status[HTTP_STATUS_STR_SIZE];
DECL|http_url_cb_t|typedef|typedef enum http_verdict (*http_url_cb_t)(struct http_ctx *ctx,
DECL|http_url_flags|enum|enum http_url_flags {
DECL|http_verdict|enum|enum http_verdict {
DECL|http|member|} http;
DECL|is_client|member|u8_t is_client : 1;
DECL|is_connected|member|u8_t is_connected : 1;
DECL|is_init|member|u8_t is_init : 1;
DECL|is_tls|member|u8_t is_tls : 1;
DECL|is_used|member|u8_t is_used;
DECL|key_len|member|u16_t key_len;
DECL|key|member|const char *key;
DECL|local|member|struct sockaddr local;
DECL|masking_value|member|u32_t masking_value;
DECL|message_complete|member|u8_t message_complete:1;
DECL|method|member|enum http_method method;
DECL|method|member|enum http_method method;
DECL|msg_type_flag|member|u32_t msg_type_flag;
DECL|node|member|sys_snode_t node;
DECL|parser_settings|member|struct http_parser_settings parser_settings;
DECL|parser|member|struct http_parser parser;
DECL|payload_size|member|u16_t payload_size;
DECL|payload|member|const char *payload;
DECL|pending|member|struct net_pkt *pending;
DECL|pending|member|struct net_pkt *pending;
DECL|processed|member|size_t processed;
DECL|protocol|member|const char *protocol;
DECL|recv|member|http_recv_cb_t recv;
DECL|request_buf_len|member|size_t request_buf_len;
DECL|request_buf|member|u8_t *request_buf;
DECL|req|member|} req;
DECL|response_buf_len|member|size_t response_buf_len;
DECL|response_buf|member|u8_t *response_buf;
DECL|root_len|member|u16_t root_len;
DECL|root|member|const char *root;
DECL|rsp|member|} rsp;
DECL|send|member|http_send_cb_t send;
DECL|server_addr|member|struct sockaddr *server_addr;
DECL|server|member|const char *server;
DECL|state|member|enum http_state state;
DECL|timeout|member|s32_t timeout;
DECL|url_len|member|u16_t url_len;
DECL|urls|member|struct http_root_url urls[CONFIG_HTTP_SERVER_NUM_URLS];
DECL|urls|member|struct http_server_urls *urls;
DECL|url|member|const char *url;
DECL|url|member|const char *url;
DECL|user_data|member|u8_t *user_data;
DECL|user_data|member|u8_t *user_data;
DECL|user_data|member|void *user_data;
DECL|value_len|member|u16_t value_len;
DECL|value|member|const char *value;
DECL|wait|member|struct k_sem wait;
DECL|websocket|member|} websocket;
