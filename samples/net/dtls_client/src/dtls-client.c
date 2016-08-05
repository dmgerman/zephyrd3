DECL|DEBUG|macro|DEBUG
DECL|DEBUG|macro|DEBUG
DECL|MY_PORT|macro|MY_PORT
DECL|PEER_IPADDR|macro|PEER_IPADDR
DECL|PEER_IPADDR|macro|PEER_IPADDR
DECL|PEER_PORT|macro|PEER_PORT
DECL|STACKSIZE|macro|STACKSIZE
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WAIT_TICKS|macro|WAIT_TICKS
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|connected|member|bool connected;
DECL|ctx|member|struct net_context *ctx;
DECL|data|struct|struct data {
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|expecting|member|int expecting;
DECL|fail|member|bool fail;
DECL|fiberStack|variable|fiberStack
DECL|get_context|function|static inline struct net_context *get_context(void)
DECL|get_ecdsa_key|function|static int get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_psk_info|function|static int get_psk_info(struct dtls_context_t *ctx,const session_t *session, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|handle_event|function|static int handle_event(struct dtls_context_t *ctx, session_t *session,dtls_alert_level_t level, unsigned short code)
DECL|in4addr_peer|variable|in4addr_peer
DECL|in6addr_peer|variable|in6addr_peer
DECL|init_app|function|static inline void init_app(void)
DECL|init_dtls|function|static void init_dtls(struct data *user_data, dtls_context_t **dtls)
DECL|ipsum_len|member|int ipsum_len;
DECL|lorem_ipsum|variable|lorem_ipsum
DECL|main|function|void main(void)
DECL|read_from_peer|function|static int read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|reverse|function|static inline void reverse(unsigned char *buf, int len)
DECL|send_message|function|static inline void send_message(const char *name,dtls_context_t *ctx, session_t *session)
DECL|send_to_peer|function|static int send_to_peer(struct dtls_context_t *ctx,session_t *session, uint8 *data, size_t len)
DECL|startup|function|void startup(void)
DECL|verify_ecdsa_key|function|static int verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
DECL|wait_reply|function|static inline bool wait_reply(const char *name, struct dtls_context_t *dtls, session_t *session)
