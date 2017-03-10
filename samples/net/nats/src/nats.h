DECL|__NATS_H|macro|__NATS_H
DECL|conn|member|struct net_context *conn;
DECL|nats_msg|struct|struct nats_msg {
DECL|nats|struct|struct nats {
DECL|on_auth_required|member|int (*on_auth_required)(const struct nats *nats,
DECL|on_message|member|int (*on_message)(const struct nats *nats,
DECL|payload_len|member|size_t payload_len;
DECL|payload|member|const char *payload;
DECL|reply_to|member|const char *reply_to;
DECL|sid|member|const char *sid;
DECL|subject|member|const char *subject;
