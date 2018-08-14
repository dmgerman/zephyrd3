DECL|MBEDTLS_EXIT_FAILURE|macro|MBEDTLS_EXIT_FAILURE
DECL|MBEDTLS_EXIT_SUCCESS|macro|MBEDTLS_EXIT_SUCCESS
DECL|NET_APP_CLIENT|enumerator|NET_APP_CLIENT,
DECL|NET_APP_SERVER|enumerator|NET_APP_SERVER,
DECL|NET_APP_TLS_POOL_DEFINE|macro|NET_APP_TLS_POOL_DEFINE
DECL|NET_APP_UNSPEC|enumerator|NET_APP_UNSPEC = 0,
DECL|__NET_APP_H|macro|__NET_APP_H
DECL|__packed|variable|__packed
DECL|_padding|member|u8_t _padding : 5;
DECL|app_type|member|enum net_app_type app_type;
DECL|block|member|struct k_mem_block block;
DECL|ca_cert_cb|member|net_app_ca_cert_cb_t ca_cert_cb;
DECL|ca_cert|member|mbedtls_x509_crt ca_cert;
DECL|cb|member|net_context_send_cb_t cb;
DECL|cb|member|struct net_app_cb cb;
DECL|cert_cb|member|net_app_cert_cb_t cert_cb;
DECL|cert_host|member|const char *cert_host;
DECL|client_id|member|char client_id;
DECL|client|member|} client;
DECL|close_requested|member|u8_t close_requested : 1;
DECL|close|member|net_app_close_cb_t close;
DECL|conf|member|mbedtls_ssl_config conf;
DECL|connect_cb_called|member|u8_t connect_cb_called : 1;
DECL|connect_wait|member|struct k_sem connect_wait;
DECL|connection_closing|member|u8_t connection_closing : 1;
DECL|connect|member|net_app_connect_cb_t connect;
DECL|cookie_ctx|member|mbedtls_ssl_cookie_ctx cookie_ctx;
DECL|ctr_drbg|member|mbedtls_ctr_drbg_context ctr_drbg;
DECL|ctx|member|struct net_context *ctx;
DECL|ctx|member|struct net_context *ctx;
DECL|data_pool|member|net_pkt_get_pool_func_t data_pool;
DECL|default_ctx|member|struct net_app_endpoint *default_ctx;
DECL|dir|member|u8_t dir;
DECL|dns_id|member|u16_t dns_id;
DECL|dns_wait|member|struct k_sem dns_wait;
DECL|dtls_timing_context|struct|struct dtls_timing_context {
DECL|dtls|member|} dtls;
DECL|entropy_src_cb|member|net_app_entropy_src_cb_t entropy_src_cb;
DECL|entropy|member|mbedtls_entropy_context entropy;
DECL|fin_ms|member|u32_t fin_ms;
DECL|fin_timer|member|struct k_delayed_work fin_timer;
DECL|frag|member|struct net_buf *frag;
DECL|handshake_done|member|u8_t handshake_done : 1;
DECL|hdr|member|struct net_buf *hdr; /* IP + UDP/TCP header */
DECL|int_ms|member|u32_t int_ms;
DECL|ipv4|member|struct net_app_endpoint ipv4;
DECL|ipv6|member|struct net_app_endpoint ipv6;
DECL|is_enabled|member|u8_t is_enabled : 1;
DECL|is_init|member|u8_t is_init : 1;
DECL|is_tls|member|u8_t is_tls : 1;
DECL|local|member|struct sockaddr local;
DECL|mbedtls_time_t|macro|mbedtls_time_t
DECL|mbedtls|member|} mbedtls;
DECL|net_app_ca_cert_cb_t|typedef|typedef int (*net_app_ca_cert_cb_t)(struct net_app_ctx *ctx,
DECL|net_app_cb|struct|struct net_app_cb {
DECL|net_app_cert_cb_t|typedef|typedef int (*net_app_cert_cb_t)(struct net_app_ctx *ctx,
DECL|net_app_close_cb_t|typedef|typedef void (*net_app_close_cb_t)(struct net_app_ctx *ctx,
DECL|net_app_connect_cb_t|typedef|typedef void (*net_app_connect_cb_t)(struct net_app_ctx *ctx,
DECL|net_app_ctx_cb_t|typedef|typedef void (*net_app_ctx_cb_t)(struct net_app_ctx *ctx, void *user_data);
DECL|net_app_ctx|struct|struct net_app_ctx {
DECL|net_app_endpoint|struct|struct net_app_endpoint {
DECL|net_app_entropy_src_cb_t|typedef|typedef int (*net_app_entropy_src_cb_t)(void *data, unsigned char *output,
DECL|net_app_fifo_block|struct|struct net_app_fifo_block {
DECL|net_app_init_tcp_client|function|static inline int net_app_init_tcp_client(struct net_app_ctx *ctx, struct sockaddr *client_addr, struct sockaddr *peer_addr, const char *peer_addr_str, u16_t peer_port,
DECL|net_app_init_tcp_server|function|static inline int net_app_init_tcp_server(struct net_app_ctx *ctx, struct sockaddr *server_addr, u16_t port, void *user_data)
DECL|net_app_init_udp_client|function|static inline int net_app_init_udp_client(struct net_app_ctx *ctx, struct sockaddr *client_addr, struct sockaddr *peer_addr, const char *peer_addr_str, u16_t peer_port,
DECL|net_app_init_udp_server|function|static inline int net_app_init_udp_server(struct net_app_ctx *ctx, struct sockaddr *server_addr, u16_t port, void *user_data)
DECL|net_app_recv_cb_t|typedef|typedef void (*net_app_recv_cb_t)(struct net_app_ctx *ctx,
DECL|net_app_send_cb_t|typedef|typedef void (*net_app_send_cb_t)(struct net_app_ctx *ctx,
DECL|net_app_send_data_t|typedef|typedef int (*net_app_send_data_t)(struct net_pkt *pkt,
DECL|net_app_set_net_pkt_pool|macro|net_app_set_net_pkt_pool
DECL|net_app_type|enum|enum net_app_type {
DECL|net_ctxs|member|struct net_context *net_ctxs[CONFIG_NET_APP_SERVER_NUM_CONN];
DECL|node|member|sys_snode_t node;
DECL|personalization_data_len|member|size_t personalization_data_len;
DECL|personalization_data|member|u8_t *personalization_data;
DECL|pkey|member|mbedtls_pk_context pkey;
DECL|pkt|member|struct net_pkt *pkt;
DECL|pool|member|struct k_mem_pool *pool;
DECL|proto|member|enum net_ip_protocol proto;
DECL|recv_cb|member|net_context_recv_cb_t recv_cb;
DECL|recv|member|net_app_recv_cb_t recv;
DECL|remaining|member|int remaining;
DECL|remote|member|struct sockaddr remote;
DECL|request_buf_len|member|size_t request_buf_len;
DECL|request_buf|member|u8_t *request_buf;
DECL|rx_pkt|member|struct net_pkt *rx_pkt;
DECL|send_data|member|net_app_send_data_t send_data;
DECL|send|member|net_app_send_cb_t send;
DECL|server|member|} server;
DECL|snapshot|member|u32_t snapshot;
DECL|sock_type|member|enum net_sock_type sock_type;
DECL|srvcert|member|mbedtls_x509_crt srvcert;
DECL|ssl_ctx|member|struct tls_context ssl_ctx;
DECL|ssl|member|mbedtls_ssl_context ssl;
DECL|stack_size|member|int stack_size;
DECL|stack|member|k_thread_stack_t *stack;
DECL|thread|member|struct k_thread thread;
DECL|tid|member|k_tid_t tid;
DECL|timing_ctx|member|struct dtls_timing_context timing_ctx;
DECL|tls_context|struct|struct tls_context {
DECL|tls|member|} tls;
DECL|token|member|void *token; /* Used when sending data */
DECL|tx_pending|member|u8_t tx_pending : 1;
DECL|tx_rx_fifo|member|struct k_fifo tx_rx_fifo;
DECL|tx_sem|member|struct k_sem tx_sem;
DECL|tx_slab|member|net_pkt_get_slab_func_t tx_slab;
DECL|user_data|member|void *user_data;
