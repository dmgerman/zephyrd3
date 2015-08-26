DECL|MY_IPADDR|macro|MY_IPADDR
DECL|MY_IPADDR|macro|MY_IPADDR
DECL|MY_PORT|macro|MY_PORT
DECL|PRINT|macro|PRINT
DECL|PRINT|macro|PRINT
DECL|STACKSIZE|macro|STACKSIZE
DECL|WAIT_TICKS|macro|WAIT_TICKS
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|fiberStack|variable|fiberStack
DECL|get_context|function|static inline struct net_context *get_context(void)
DECL|get_ecdsa_key|function|static int get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_psk_info|function|static int get_psk_info(struct dtls_context_t *ctx,const session_t *session, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|handle_event|function|static int handle_event(struct dtls_context_t *ctx, session_t *session,dtls_alert_level_t level, unsigned short code)
DECL|in4addr_any|variable|in4addr_any
DECL|in4addr_my|variable|in4addr_my
DECL|in6addr_any|variable|in6addr_any
DECL|in6addr_my|variable|in6addr_my
DECL|init_dtls|function|static void init_dtls(struct net_context *recv, dtls_context_t **dtls)
DECL|init_server|function|static inline void init_server()
DECL|main|function|void main(void)
DECL|my_mac|variable|my_mac
DECL|read_from_peer|function|static int read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *data, size_t len)
DECL|receive_message|function|static inline void receive_message(const char *name, struct net_context *recv, dtls_context_t *dtls)
DECL|reverse|function|static inline void reverse(unsigned char *buf, int len)
DECL|send_to_peer|function|static int send_to_peer(struct dtls_context_t *ctx,session_t *session, uint8 *data, size_t len)
DECL|startup|function|void startup(void)
DECL|verify_ecdsa_key|function|static int verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
