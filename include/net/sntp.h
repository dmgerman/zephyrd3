DECL|ZEPHYR_INCLUDE_NET_SNTP_H_|macro|ZEPHYR_INCLUDE_NET_SNTP_H_
DECL|cb|member|sntp_resp_cb_t cb;
DECL|expected_orig_ts|member|u32_t expected_orig_ts;
DECL|is_init|member|bool is_init;
DECL|net_app_ctx|member|struct net_app_ctx net_app_ctx;
DECL|sntp_ctx|struct|struct sntp_ctx {
DECL|sntp_resp_cb_t|typedef|typedef void (*sntp_resp_cb_t)(struct sntp_ctx *ctx,
DECL|user_data|member|void *user_data;
