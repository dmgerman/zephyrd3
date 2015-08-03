DECL|DTLS_CLIENT|enumerator|typedef enum { DTLS_CLIENT=0, DTLS_SERVER } dtls_peer_type;
DECL|DTLS_SERVER|enumerator|typedef enum { DTLS_CLIENT=0, DTLS_SERVER } dtls_peer_type;
DECL|_DTLS_PEER_H_|macro|_DTLS_PEER_H_
DECL|dtls_peer_is_connected|function|static inline int dtls_peer_is_connected(const dtls_peer_t *peer) {
DECL|dtls_peer_state|function|static inline dtls_state_t dtls_peer_state(const dtls_peer_t *peer) {
DECL|dtls_peer_type|typedef|typedef enum { DTLS_CLIENT=0, DTLS_SERVER } dtls_peer_type;
DECL|dtls_peer_t|struct|typedef struct dtls_peer_t {
DECL|dtls_peer_t|typedef|} dtls_peer_t;
DECL|dtls_security_params_epoch|function|static inline dtls_security_parameters_t *dtls_security_params_epoch(dtls_peer_t *peer, uint16_t epoch)
DECL|dtls_security_params_free_other|function|static inline void dtls_security_params_free_other(dtls_peer_t *peer)
DECL|dtls_security_params_next|function|static inline dtls_security_parameters_t *dtls_security_params_next(dtls_peer_t *peer)
DECL|dtls_security_params_switch|function|static inline void dtls_security_params_switch(dtls_peer_t *peer)
DECL|dtls_security_params|function|static inline dtls_security_parameters_t *dtls_security_params(dtls_peer_t *peer)
DECL|handshake_params|member|dtls_handshake_parameters_t *handshake_params;
DECL|next|member|struct dtls_peer_t *next;
DECL|role|member|dtls_peer_type role; /**< denotes if this host is DTLS_CLIENT or DTLS_SERVER */
DECL|security_params|member|dtls_security_parameters_t *security_params[2];
DECL|session|member|session_t session; /**< peer address and local interface */
DECL|state|member|dtls_state_t state; /**< DTLS engine state */
