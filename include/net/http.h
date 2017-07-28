DECL|HTTP_ACCEPT_ENC|macro|HTTP_ACCEPT_ENC
DECL|HTTP_ACCEPT_LANG|macro|HTTP_ACCEPT_LANG
DECL|HTTP_ACCEPT|macro|HTTP_ACCEPT
DECL|HTTP_CONNECTION|macro|HTTP_CONNECTION
DECL|HTTP_CONTENT_LEN_SIZE|macro|HTTP_CONTENT_LEN_SIZE
DECL|HTTP_CRLF|macro|HTTP_CRLF
DECL|HTTP_DATA_FINAL|enumerator|HTTP_DATA_FINAL = 1,
DECL|HTTP_DATA_MORE|enumerator|HTTP_DATA_MORE = 0,
DECL|HTTP_HEADER_FIELDS|macro|HTTP_HEADER_FIELDS
DECL|HTTP_NETWORK_TIMEOUT|macro|HTTP_NETWORK_TIMEOUT
DECL|HTTP_PROTOCOL|macro|HTTP_PROTOCOL
DECL|HTTP_STATUS_STR_SIZE|macro|HTTP_STATUS_STR_SIZE
DECL|HTTP_URL_STANDARD|enumerator|HTTP_URL_STANDARD = 0,
DECL|HTTP_USER_AGENT|macro|HTTP_USER_AGENT
DECL|MBEDTLS_EXIT_FAILURE|macro|MBEDTLS_EXIT_FAILURE
DECL|MBEDTLS_EXIT_SUCCESS|macro|MBEDTLS_EXIT_SUCCESS
DECL|__HTTP_H__|macro|__HTTP_H__
DECL|body_found|member|u8_t body_found:1;
DECL|body_start|member|u8_t *body_start;
DECL|ca_cert|member|mbedtls_x509_crt ca_cert;
DECL|cb|member|http_response_cb_t cb;
DECL|cert_cb|member|https_ca_cert_cb_t cert_cb;
DECL|cert_cb|member|https_server_cert_cb_t cert_cb;
DECL|cert_host|member|const char *cert_host;
DECL|cl_present|member|u8_t cl_present:1;
DECL|conf|member|mbedtls_ssl_config conf;
DECL|conf|member|mbedtls_ssl_config conf;
DECL|content_length|member|size_t content_length;
DECL|content_type_value|member|const char *content_type_value;
DECL|ctr_drbg|member|mbedtls_ctr_drbg_context ctr_drbg;
DECL|ctr_drbg|member|mbedtls_ctr_drbg_context ctr_drbg;
DECL|ctx|member|struct net_context *ctx;
DECL|data_len|member|size_t data_len;
DECL|data_len|member|size_t data_len;
DECL|data_pool|member|net_pkt_get_pool_func_t data_pool;
DECL|data_pool|member|net_pkt_get_pool_func_t data_pool;
DECL|default_url|member|struct http_root_url default_url;
DECL|dns_id|member|u16_t dns_id;
DECL|enabled|member|bool enabled;
DECL|entropy_src_cb|member|https_entropy_src_cb_t entropy_src_cb;
DECL|entropy_src_cb|member|https_entropy_src_cb_t entropy_src_cb;
DECL|entropy|member|mbedtls_entropy_context entropy;
DECL|entropy|member|mbedtls_entropy_context entropy;
DECL|field_values_ctr|member|u16_t field_values_ctr;
DECL|field_values|member|field_values[CONFIG_HTTP_HEADER_FIELD_ITEMS];
DECL|flags|member|u8_t flags;
DECL|frag|member|struct net_buf *frag;
DECL|header_fields|member|const char *header_fields;
DECL|host|member|const char *host;
DECL|host|member|const char *host;
DECL|http_client_ctx|struct|struct http_client_ctx {
DECL|http_client_request|struct|struct http_client_request {
DECL|http_client_send_get_req|function|static inline int http_client_send_get_req(struct http_client_ctx *http_ctx, const char *url, const char *host, const char *extra_header_fields, http_response_cb_t cb,
DECL|http_client_send_post_req|function|static inline int http_client_send_post_req(struct http_client_ctx *http_ctx, const char *url, const char *host, const char *extra_header_fields, const char *content_type,
DECL|http_client_set_net_pkt_pool|macro|http_client_set_net_pkt_pool
DECL|http_field_value|struct|struct http_field_value {
DECL|http_final_call|enum|enum http_final_call {
DECL|http_heap_init|macro|http_heap_init
DECL|http_receive_cb_t|typedef|typedef void (*http_receive_cb_t)(struct http_client_ctx *ctx,
DECL|http_response_cb_t|typedef|typedef void (*http_response_cb_t)(struct http_client_ctx *ctx,
DECL|http_root_url|struct|struct http_root_url {
DECL|http_send_data_t|typedef|typedef int (*http_send_data_t)(struct net_pkt *pkt,
DECL|http_server_cb_t|typedef|typedef void (*http_server_cb_t)(struct http_server_ctx *entry,
DECL|http_server_conn_foreach|macro|http_server_conn_foreach
DECL|http_server_conn_monitor|macro|http_server_conn_monitor
DECL|http_server_ctx|struct|struct http_server_ctx {
DECL|http_server_set_net_pkt_pool|macro|http_server_set_net_pkt_pool
DECL|http_server_urls|struct|struct http_server_urls {
DECL|http_status|member|char http_status[HTTP_STATUS_STR_SIZE];
DECL|http_url_cb_t|typedef|typedef int (*http_url_cb_t)(struct http_server_ctx *ctx);
DECL|http_url_flags|enum|enum http_url_flags {
DECL|https_ca_cert_cb_t|typedef|typedef int (*https_ca_cert_cb_t)(struct http_client_ctx *ctx,
DECL|https_context|struct|struct https_context {
DECL|https_entropy_src_cb_t|typedef|typedef int (*https_entropy_src_cb_t)(void *data, unsigned char *output,
DECL|https_server_cert_cb_t|typedef|typedef int (*https_server_cert_cb_t)(struct http_server_ctx *ctx,
DECL|https|member|} https;
DECL|https|member|} https;
DECL|is_https|member|bool is_https;
DECL|is_https|member|bool is_https;
DECL|is_used|member|u8_t is_used;
DECL|key_len|member|u16_t key_len;
DECL|key|member|const char *key;
DECL|local|member|struct sockaddr local;
DECL|mbedtls_time_t|macro|mbedtls_time_t
DECL|mbedtls|member|} mbedtls;
DECL|mbedtls|member|} mbedtls;
DECL|method|member|enum http_method method;
DECL|method|member|enum http_method method;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|net_ipv4_ctx|member|struct net_context *net_ipv4_ctx;
DECL|net_ipv6_ctx|member|struct net_context *net_ipv6_ctx;
DECL|node|member|sys_snode_t node;
DECL|parser|member|struct http_parser parser;
DECL|parser|member|struct http_parser parser;
DECL|payload_size|member|u16_t payload_size;
DECL|payload|member|const char *payload;
DECL|personalization_data_len|member|size_t personalization_data_len;
DECL|personalization_data_len|member|size_t personalization_data_len;
DECL|personalization_data|member|u8_t *personalization_data;
DECL|personalization_data|member|u8_t *personalization_data;
DECL|pkey|member|mbedtls_pk_context pkey;
DECL|pool|member|struct k_mem_pool *pool;
DECL|pool|member|struct k_mem_pool *pool;
DECL|processed|member|size_t processed;
DECL|protocol|member|const char *protocol;
DECL|receive_cb|member|http_receive_cb_t receive_cb;
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|remaining|member|int remaining;
DECL|remote|member|struct sockaddr remote;
DECL|request_buf_len|member|size_t request_buf_len;
DECL|request_buf|member|u8_t *request_buf;
DECL|req|member|} req;
DECL|req|member|} req;
DECL|response_buf_len|member|size_t response_buf_len;
DECL|response_buf|member|u8_t *response_buf;
DECL|root_len|member|u16_t root_len;
DECL|root|member|const char *root;
DECL|rsp|member|} rsp;
DECL|rx_fifo|member|struct k_fifo rx_fifo;
DECL|rx_pkt|member|struct net_pkt *rx_pkt;
DECL|send_data|member|http_send_data_t send_data;
DECL|send_data|member|http_send_data_t send_data;
DECL|server|member|const char *server;
DECL|settings|member|struct http_parser_settings settings;
DECL|settings|member|struct http_parser_settings settings;
DECL|srvcert|member|mbedtls_x509_crt srvcert;
DECL|ssl_ctx|member|struct https_context ssl_ctx;
DECL|ssl_ctx|member|struct https_context ssl_ctx;
DECL|ssl|member|mbedtls_ssl_context ssl;
DECL|ssl|member|mbedtls_ssl_context ssl;
DECL|stack_size|member|int stack_size;
DECL|stack_size|member|int stack_size;
DECL|stack|member|u8_t *stack;
DECL|stack|member|u8_t *stack;
DECL|tcp|member|} tcp;
DECL|thread|member|struct k_thread thread;
DECL|thread|member|struct k_thread thread;
DECL|tid|member|k_tid_t tid;
DECL|tid|member|k_tid_t tid;
DECL|timeout|member|s32_t timeout;
DECL|timeout|member|s32_t timeout;
DECL|timer_cancelled|member|u8_t timer_cancelled;
DECL|timer|member|struct k_delayed_work timer;
DECL|tx_fifo|member|struct k_fifo tx_fifo;
DECL|tx_sem|member|struct k_sem tx_sem;
DECL|tx_slab|member|net_pkt_get_slab_func_t tx_slab;
DECL|tx_slab|member|net_pkt_get_slab_func_t tx_slab;
DECL|url_len|member|u16_t url_len;
DECL|urls|member|struct http_root_url urls[CONFIG_HTTP_SERVER_NUM_URLS];
DECL|urls|member|struct http_server_urls *urls;
DECL|url|member|const char *url;
DECL|url|member|const char *url;
DECL|user_data|member|void *user_data;
DECL|value_len|member|u16_t value_len;
DECL|value|member|const char *value;
DECL|wait|member|struct k_sem wait;
DECL|write_cb|member|http_url_cb_t write_cb;
