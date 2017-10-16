DECL|MAX_ITERATIONS|macro|MAX_ITERATIONS
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|RESULT_BUF_SIZE|macro|RESULT_BUF_SIZE
DECL|SEND_OPTIONS|macro|SEND_OPTIONS
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|ctx|member|struct http_client_ctx *ctx;
DECL|data_pool|function|static struct net_buf_pool *data_pool(void)
DECL|data_pool|macro|data_pool
DECL|do_async_http_req|function|static int do_async_http_req(struct http_client_ctx *ctx, enum http_method method, const char *url, const char *content_type, const char *payload)
DECL|do_async_reqs|function|static inline int do_async_reqs(struct http_client_ctx *ctx, int count)
DECL|do_sync_http_req|function|static int do_sync_http_req(struct http_client_ctx *ctx, enum http_method method, const char *url, const char *content_type, const char *payload)
DECL|do_sync_reqs|function|static inline int do_sync_reqs(struct http_client_ctx *ctx, int count)
DECL|header_len|member|size_t header_len;
DECL|http_ctx|variable|http_ctx
DECL|main|function|void main(void)
DECL|panic|function|void panic(const char *msg)
DECL|response|function|void response(struct http_client_ctx *ctx, u8_t *data, size_t buflen, size_t datalen, enum http_final_call data_end, void *user_data)
DECL|result|variable|result
DECL|total_len|member|size_t total_len;
DECL|tx_slab|function|static struct k_mem_slab *tx_slab(void)
DECL|tx_slab|macro|tx_slab
DECL|waiter|struct|struct waiter {
DECL|wait|member|struct k_sem wait;
