DECL|CLIENT_PORT|macro|CLIENT_PORT
DECL|MAX_BUF_SIZE|macro|MAX_BUF_SIZE
DECL|MAX_READ_BUF|macro|MAX_READ_BUF
DECL|MAX_TIMEOUT|macro|MAX_TIMEOUT
DECL|MAX|macro|MAX
DECL|PSK_DEFAULT_IDENTITY|macro|PSK_DEFAULT_IDENTITY
DECL|PSK_DEFAULT_KEY|macro|PSK_DEFAULT_KEY
DECL|PSK_ID_MAXLEN|macro|PSK_ID_MAXLEN
DECL|PSK_MAXLEN|macro|PSK_MAXLEN
DECL|PSK_OPTIONS|macro|PSK_OPTIONS
DECL|SERVER_PORT|macro|SERVER_PORT
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|bind_device|function|static int bind_device(int fd, const char *interface, void *addr, int len)
DECL|buf|member|uint8 buf[MAX_READ_BUF];
DECL|cb|variable|cb
DECL|debug|variable|debug
DECL|dtls_context|variable|dtls_context
DECL|dtls_handle_read|function|static int dtls_handle_read(struct dtls_context_t *ctx, session_t *session, struct server_data *user_data)
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|fd|member|int fd;
DECL|get_address|function|static int get_address(int ifindex, int family, void *address)
DECL|get_ecdsa_key|function|static int get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_ifindex|function|static int get_ifindex(const char *name)
DECL|get_psk_info|function|static int get_psk_info(struct dtls_context_t *ctx UNUSED_PARAM,const session_t *session UNUSED_PARAM, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|get_socket|function|static int get_socket(int family)
DECL|handle_event|function|static int handle_event(struct dtls_context_t *ctx, session_t *session,dtls_alert_level_t level, unsigned short code)
DECL|len|member|int len;
DECL|main|function|int main(int argc, char**argv)
DECL|packets|variable|packets
DECL|packet|member|int packet;
DECL|print_data|function|static void print_data(const unsigned char *packet, int length)
DECL|psk_id_length|variable|psk_id_length
DECL|psk_id|variable|psk_id
DECL|psk_key_length|variable|psk_key_length
DECL|psk_key|variable|psk_key
DECL|quit|variable|quit
DECL|read_from_peer|function|static int read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *read_data, size_t read_len)
DECL|receive_and_reply|function|static int receive_and_reply(dtls_context_t *ctx, session_t *session, fd_set *rfds, int fd)
DECL|renegotiate|variable|renegotiate
DECL|reverse|function|static inline void reverse(unsigned char *buf, int len)
DECL|send_to_peer|function|static int send_to_peer(struct dtls_context_t *ctx,session_t *session, uint8 *data, size_t len)
DECL|server_data|struct|struct server_data {
DECL|signal_handler|function|void signal_handler(int signum)
DECL|sleep_ms|function|static inline void sleep_ms(int ms)
DECL|verify_ecdsa_key|function|static int verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
