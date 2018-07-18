DECL|COAP_BUF_SIZE|macro|COAP_BUF_SIZE
DECL|DEBUG_THRESHOLD|macro|DEBUG_THRESHOLD
DECL|MBEDTLS_EXIT_FAILURE|macro|MBEDTLS_EXIT_FAILURE
DECL|MBEDTLS_EXIT_SUCCESS|macro|MBEDTLS_EXIT_SUCCESS
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|curr_ctx|variable|curr_ctx
DECL|dtls_server|function|void dtls_server(void)
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
DECL|my_debug|function|static void my_debug(void *ctx, int level, const char *file, int line, const char *str)
DECL|pers|variable|pers
DECL|piggyback_get|function|static int piggyback_get(struct coap_resource *resource, struct coap_packet *request)
DECL|psk_id|variable|psk_id
DECL|psk|variable|psk
DECL|query_get|function|static int query_get(struct coap_resource *resource, struct coap_packet *request)
DECL|query_path|variable|query_path
DECL|resources|variable|resources
DECL|segments_path|variable|segments_path
DECL|send_response|function|static int send_response(struct coap_packet *request, u8_t response_code)
DECL|snapshot|member|u32_t snapshot;
DECL|test_del|function|static int test_del(struct coap_resource *resource, struct coap_packet *request)
DECL|test_path|variable|test_path
DECL|test_post|function|static int test_post(struct coap_resource *resource, struct coap_packet *request)
DECL|test_put|function|static int test_put(struct coap_resource *resource, struct coap_packet *request)
DECL|thread_data|variable|thread_data
