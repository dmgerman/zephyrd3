DECL|CMD_BUF_LEN|macro|CMD_BUF_LEN
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|FIELD|macro|FIELD
DECL|FIELD|macro|FIELD
DECL|TRANSMITV_LITERAL|macro|TRANSMITV_LITERAL
DECL|auth_required|member|bool auth_required;
DECL|base|member|const void *base;
DECL|char_in_set|function|static bool char_in_set(char chr, const char *set)
DECL|copy_pkt_to_buf|function|static int copy_pkt_to_buf(struct net_buf *src, uint16_t offset, char *dst, size_t dst_size, size_t n_bytes)
DECL|go|member|const char *go;
DECL|handle_server_cmd|function|static int handle_server_cmd(struct nats *nats, char *cmd, size_t len, struct net_buf *buf, uint16_t offset)
DECL|handle_server_info|function|static int handle_server_info(struct nats *nats, char *payload, size_t len, struct net_buf *buf, uint16_t offset)
DECL|handle_server_msg|function|static int handle_server_msg(struct nats *nats, char *payload, size_t len, struct net_buf *buf, uint16_t offset)
DECL|handle_server_ping|function|static int handle_server_ping(struct nats *nats, char *payload, size_t len, struct net_buf *buf, uint16_t offset)
DECL|host|member|const char *host;
DECL|ignore|function|static int ignore(struct nats *nats, char *payload, size_t len, struct net_buf *buf, uint16_t offset)
DECL|io_vec|struct|struct io_vec {
DECL|is_sid_valid|function|static bool is_sid_valid(const char *sid, size_t len)
DECL|is_subject_valid|function|static bool is_subject_valid(const char *subject, size_t len)
DECL|len|member|size_t len;
DECL|max_payload|member|size_t max_payload;
DECL|nats_connect|function|int nats_connect(struct nats *nats, struct sockaddr *addr, socklen_t addrlen)
DECL|nats_disconnect|function|int nats_disconnect(struct nats *nats)
DECL|nats_info|struct|struct nats_info {
DECL|nats_publish|function|int nats_publish(const struct nats *nats, const char *subject, size_t subject_len, const char *reply_to, size_t reply_to_len, const char *payload, size_t payload_len)
DECL|nats_subscribe|function|int nats_subscribe(const struct nats *nats, const char *subject, size_t subject_len, const char *queue_group, size_t queue_group_len, const char *sid, size_t sid_len)
DECL|nats_unsubscribe|function|int nats_unsubscribe(const struct nats *nats, const char *sid, size_t sid_len, size_t max_msgs)
DECL|port|member|uint16_t port;
DECL|receive_cb|function|static void receive_cb(struct net_context *ctx, struct net_buf *buf, int status, void *user_data)
DECL|server_id|member|const char *server_id;
DECL|ssl_required|member|bool ssl_required;
DECL|strsep|function|static char *strsep(char *strp, const char *delims)
DECL|transmitv|function|static int transmitv(struct net_context *conn, int iovcnt, struct io_vec *iov)
DECL|transmit|function|static inline int transmit(struct net_context *conn, const char buffer[], size_t len)
DECL|version|member|const char *version;
