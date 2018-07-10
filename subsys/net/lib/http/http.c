DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|_http_add_header|function|static int _http_add_header(struct http_ctx *ctx, s32_t timeout, const char *name, const char *value, const struct sockaddr *dst, void *user_send_data)
DECL|get_net_pkt|function|static inline struct net_pkt *get_net_pkt(struct http_ctx *ctx, const struct sockaddr *dst)
DECL|http_add_header_field|function|int http_add_header_field(struct http_ctx *ctx, const char *name, const char *value, const struct sockaddr *dst, void *user_send_data)
DECL|http_add_header|function|int http_add_header(struct http_ctx *ctx, const char *field, const struct sockaddr *dst, void *user_send_data)
DECL|http_close|function|int http_close(struct http_ctx *ctx)
DECL|http_prepare_and_send|function|int http_prepare_and_send(struct http_ctx *ctx, const char *payload, size_t payload_len, const struct sockaddr *dst, void *user_send_data)
DECL|http_release|function|int http_release(struct http_ctx *ctx)
DECL|http_send_chunk|function|int http_send_chunk(struct http_ctx *ctx, const char *buf, size_t len, const struct sockaddr *dst, void *user_send_data)
DECL|http_send_flush|function|int http_send_flush(struct http_ctx *ctx, void *user_send_data)
DECL|http_send_msg_raw|function|int http_send_msg_raw(struct http_ctx *ctx, struct net_pkt *pkt, void *user_send_data)
DECL|http_set_cb|function|int http_set_cb(struct http_ctx *ctx,http_connect_cb_t connect_cb, http_recv_cb_t recv_cb, http_send_cb_t send_cb, http_close_cb_t close_cb)
