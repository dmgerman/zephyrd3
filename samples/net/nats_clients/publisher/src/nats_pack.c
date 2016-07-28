DECL|CLANG_VERSION|macro|CLANG_VERSION
DECL|CLANG_VERSION|macro|CLANG_VERSION
DECL|CLANG|macro|CLANG
DECL|CLANG|macro|CLANG
DECL|MSG_MSG_MIN_SIZE|macro|MSG_MSG_MIN_SIZE
DECL|NATS_STR_COMMA|macro|NATS_STR_COMMA
DECL|NATS_STR_NULL|macro|NATS_STR_NULL
DECL|NATS_STR_TRUE_FALSE|macro|NATS_STR_TRUE_FALSE
DECL|PING_MSG|macro|PING_MSG
DECL|PING_PONG_MSG_LEN|macro|PING_PONG_MSG_LEN
DECL|PONG_MSG|macro|PONG_MSG
DECL|min|macro|min
DECL|nats_find_msg|function|int nats_find_msg(struct app_buf_t *buf, char *str)
DECL|nats_isblank|function|static int nats_isblank(int c)
DECL|nats_pack_connect|function|int nats_pack_connect(struct app_buf_t *buf, int verbose, int pedantic, int ssl_req, char *auth_token, char *user, char *pass, char *name, char *lang, char *version)
DECL|nats_pack_info|function|int nats_pack_info(struct app_buf_t *buf, char *server_id, char *version, char *go, char *host, int port, int auth_req, int ssl_req, int max_payload)
DECL|nats_pack_msg|function|int nats_pack_msg(struct app_buf_t *buf, char *subject, char *sid, char *reply_to, char *payload)
DECL|nats_pack_ping|function|int nats_pack_ping(struct app_buf_t *buf)
DECL|nats_pack_pong|function|int nats_pack_pong(struct app_buf_t *buf)
DECL|nats_pack_pub|function|int nats_pack_pub(struct app_buf_t *buf, char *subject, char *reply_to, char *payload)
DECL|nats_pack_quickcon|function|int nats_pack_quickcon(struct app_buf_t *buf, char *name, int verbose)
DECL|nats_pack_sub|function|int nats_pack_sub(struct app_buf_t *buf, char *subject, char *queue_grp, char *sid)
DECL|nats_pack_unsub|function|int nats_pack_unsub(struct app_buf_t *buf, char *sid, int max_msgs)
DECL|nats_pack|function|static int nats_pack(struct app_buf_t *buf, enum nats_msg_type type)
DECL|nats_unpack_info|function|int nats_unpack_info(struct app_buf_t *buf)
DECL|nats_unpack_msg|function|int nats_unpack_msg(struct app_buf_t *buf, int *subject_start, int *subject_len, int *sid_start, int *sid_len, int *reply_start, int *reply_len, int *payload_start, int *payload_len)
DECL|nats_unpack_ping|function|int nats_unpack_ping(struct app_buf_t *buf)
DECL|nats_unpack_pong|function|int nats_unpack_pong(struct app_buf_t *buf)
DECL|nats_unpack|function|static int nats_unpack(struct app_buf_t *buf, enum nats_msg_type type)
