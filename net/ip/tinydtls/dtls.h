DECL|DTLS_COOKIE_LENGTH|macro|DTLS_COOKIE_LENGTH
DECL|DTLS_COOKIE_SECRET_LENGTH|macro|DTLS_COOKIE_SECRET_LENGTH
DECL|DTLS_CT_ALERT|macro|DTLS_CT_ALERT
DECL|DTLS_CT_APPLICATION_DATA|macro|DTLS_CT_APPLICATION_DATA
DECL|DTLS_CT_CHANGE_CIPHER_SPEC|macro|DTLS_CT_CHANGE_CIPHER_SPEC
DECL|DTLS_CT_HANDSHAKE|macro|DTLS_CT_HANDSHAKE
DECL|DTLS_HT_CERTIFICATE_REQUEST|macro|DTLS_HT_CERTIFICATE_REQUEST
DECL|DTLS_HT_CERTIFICATE_VERIFY|macro|DTLS_HT_CERTIFICATE_VERIFY
DECL|DTLS_HT_CERTIFICATE|macro|DTLS_HT_CERTIFICATE
DECL|DTLS_HT_CLIENT_HELLO|macro|DTLS_HT_CLIENT_HELLO
DECL|DTLS_HT_CLIENT_KEY_EXCHANGE|macro|DTLS_HT_CLIENT_KEY_EXCHANGE
DECL|DTLS_HT_FINISHED|macro|DTLS_HT_FINISHED
DECL|DTLS_HT_HELLO_REQUEST|macro|DTLS_HT_HELLO_REQUEST
DECL|DTLS_HT_HELLO_VERIFY_REQUEST|macro|DTLS_HT_HELLO_VERIFY_REQUEST
DECL|DTLS_HT_SERVER_HELLO_DONE|macro|DTLS_HT_SERVER_HELLO_DONE
DECL|DTLS_HT_SERVER_HELLO|macro|DTLS_HT_SERVER_HELLO
DECL|DTLS_HT_SERVER_KEY_EXCHANGE|macro|DTLS_HT_SERVER_KEY_EXCHANGE
DECL|DTLS_PSK_HINT|enumerator|DTLS_PSK_HINT, DTLS_PSK_IDENTITY, DTLS_PSK_KEY
DECL|DTLS_PSK_IDENTITY|enumerator|DTLS_PSK_HINT, DTLS_PSK_IDENTITY, DTLS_PSK_KEY
DECL|DTLS_PSK_KEY|enumerator|DTLS_PSK_HINT, DTLS_PSK_IDENTITY, DTLS_PSK_KEY
DECL|DTLS_VERSION|macro|DTLS_VERSION
DECL|DTLS_VERSION|macro|DTLS_VERSION
DECL|_DTLS_DTLS_H_|macro|_DTLS_DTLS_H_
DECL|app|member|void *app; /**< application-specific data */
DECL|content_type|member|uint8 content_type; /**< content type of the included message */
DECL|cookie_length|member|uint8 cookie_length; /**< Length of the included cookie */
DECL|cookie_secret_age|member|clock_time_t cookie_secret_age; /**< the time the secret has been generated */
DECL|cookie_secret|member|unsigned char cookie_secret[DTLS_COOKIE_SECRET_LENGTH];
DECL|cookie|member|uint8 cookie[]; /**< up to 32 bytes making up the cookie */
DECL|curve|member|dtls_ecdh_curve curve;
DECL|dtls_client_hello_t|typedef|} dtls_client_hello_t;
DECL|dtls_context_t|struct|typedef struct dtls_context_t {
DECL|dtls_context_t|typedef|} dtls_context_t;
DECL|dtls_credentials_type_t|enum|typedef enum dtls_credentials_type_t {
DECL|dtls_credentials_type_t|typedef|} dtls_credentials_type_t;
DECL|dtls_ecdsa_key_t|struct|typedef struct dtls_ecdsa_key_t {
DECL|dtls_ecdsa_key_t|typedef|} dtls_ecdsa_key_t;
DECL|dtls_get_app_data|macro|dtls_get_app_data
DECL|dtls_handler_t|typedef|} dtls_handler_t;
DECL|dtls_handshake_header_t|typedef|} dtls_handshake_header_t;
DECL|dtls_hello_verify_t|typedef|} dtls_hello_verify_t;
DECL|dtls_record_header_t|typedef|} dtls_record_header_t;
DECL|dtls_set_app_data|macro|dtls_set_app_data
DECL|dtls_set_handler|function|static inline void dtls_set_handler(dtls_context_t *ctx, dtls_handler_t *h) {
DECL|epoch|member|uint16 epoch; /**< counter for cipher state changes */
DECL|event|member|int (*event)(struct dtls_context_t *ctx, session_t *session,
DECL|fragment_length|member|uint24 fragment_length; /**< Fragment length. */
DECL|fragment_offset|member|uint24 fragment_offset; /**< Fragment offset. */
DECL|get_ecdsa_key|member|int (*get_ecdsa_key)(struct dtls_context_t *ctx,
DECL|get_psk_info|member|int (*get_psk_info)(struct dtls_context_t *ctx,
DECL|gmt_random|member|uint32 gmt_random; /**< GMT time of the random byte creation */
DECL|h|member|dtls_handler_t *h; /**< callback handlers */
DECL|length|member|uint16 length; /**< length of the following fragment */
DECL|length|member|uint24 length; /**< length of this message */
DECL|message_seq|member|uint16 message_seq; /**< Message sequence number */
DECL|msg_type|member|uint8 msg_type; /**< Type of handshake message (one of DTLS_HT_) */
DECL|priv_key|member|const unsigned char *priv_key; /** < private key as bytes > */
DECL|pub_key_x|member|const unsigned char *pub_key_x; /** < x part of the public key for the given private key > */
DECL|pub_key_y|member|const unsigned char *pub_key_y; /** < y part of the public key for the given private key > */
DECL|random|member|unsigned char random[28]; /**< Client random bytes */
DECL|readbuf|member|unsigned char readbuf[DTLS_MAX_BUF];
DECL|read|member|int (*read)(struct dtls_context_t *ctx,
DECL|retransmit_timer|member|struct etimer retransmit_timer; /**< fires when the next packet must be sent */
DECL|sequence_number|member|uint48 sequence_number; /**< sequence number */
DECL|verify_ecdsa_key|member|int (*verify_ecdsa_key)(struct dtls_context_t *ctx,
DECL|version|member|uint16 version; /**< Client version */
DECL|version|member|uint16 version; /**< Protocol version */
DECL|version|member|uint16 version; /**< Server version */
DECL|write|member|int (*write)(struct dtls_context_t *ctx,
