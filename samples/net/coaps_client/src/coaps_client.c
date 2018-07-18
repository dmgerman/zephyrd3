DECL|COAP_BUF_SIZE|macro|COAP_BUF_SIZE
DECL|DEBUG_THRESHOLD|macro|DEBUG_THRESHOLD
DECL|MBEDTLS_EXIT_FAILURE|macro|MBEDTLS_EXIT_FAILURE
DECL|MBEDTLS_EXIT_SUCCESS|macro|MBEDTLS_EXIT_SUCCESS
DECL|NUM_REPLIES|macro|NUM_REPLIES
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|dtls_client|function|void dtls_client(void)
DECL|dtls_timing_context|struct|struct dtls_timing_context {
DECL|dtls_timing_get_delay|function|int dtls_timing_get_delay(void *data)
DECL|dtls_timing_set_delay|function|void dtls_timing_set_delay(void *data, uint32_t int_ms, uint32_t fin_ms)
DECL|entropy_source|function|static int entropy_source(void *data, unsigned char *output, size_t len, size_t *olen)
DECL|fin_ms|member|u32_t fin_ms;
DECL|heap|variable|heap
DECL|init_app|function|static inline int init_app(void)
DECL|int_ms|member|u32_t int_ms;
DECL|main|function|void main(void)
DECL|mbedtls_time_t|macro|mbedtls_time_t
DECL|mcast_addr|variable|mcast_addr
DECL|msg_dump|function|static void msg_dump(const char *s, u8_t *data, unsigned int len)
DECL|my_debug|function|static void my_debug(void *ctx, int level, const char *file, int line, const char *str)
DECL|payload|variable|payload
DECL|pers|variable|pers
DECL|psk_id|variable|psk_id
DECL|psk|variable|psk
DECL|replies|variable|replies
DECL|resource_reply_cb|function|static int resource_reply_cb(const struct coap_packet *response, struct coap_reply *reply, const struct sockaddr *from)
DECL|snapshot|member|u32_t snapshot;
DECL|test_path|variable|test_path
DECL|thread_data|variable|thread_data
