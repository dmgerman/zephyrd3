DECL|AES128|enumerator|typedef enum { AES128=0
DECL|DTLS_BLK_LENGTH|macro|DTLS_BLK_LENGTH
DECL|DTLS_ECDH_CURVE_SECP256R1|enumerator|DTLS_ECDH_CURVE_SECP256R1
DECL|DTLS_EC_KEY_SIZE|macro|DTLS_EC_KEY_SIZE
DECL|DTLS_IV_LENGTH|macro|DTLS_IV_LENGTH
DECL|DTLS_KEY_LENGTH|macro|DTLS_KEY_LENGTH
DECL|DTLS_MAC_KEY_LENGTH|macro|DTLS_MAC_KEY_LENGTH
DECL|DTLS_MAC_LENGTH|macro|DTLS_MAC_LENGTH
DECL|DTLS_MASTER_SECRET_LENGTH|macro|DTLS_MASTER_SECRET_LENGTH
DECL|DTLS_PSK_MAX_CLIENT_IDENTITY_LEN|macro|DTLS_PSK_MAX_CLIENT_IDENTITY_LEN
DECL|DTLS_PSK_MAX_KEY_LEN|macro|DTLS_PSK_MAX_KEY_LEN
DECL|DTLS_RANDOM_LENGTH|macro|DTLS_RANDOM_LENGTH
DECL|MAX_KEYBLOCK_LENGTH|macro|MAX_KEYBLOCK_LENGTH
DECL|_DTLS_CRYPTO_H_|macro|_DTLS_CRYPTO_H_
DECL|aes128_ccm_t|typedef|} aes128_ccm_t;
DECL|cipher|member|dtls_cipher_t cipher; /**< cipher type */
DECL|cipher|member|dtls_cipher_t cipher; /**< cipher type */
DECL|client|member|uint8 client[DTLS_RANDOM_LENGTH]; /**< client random gmt and bytes */
DECL|compression|member|dtls_compression_t compression; /**< compression method */
DECL|compression|member|dtls_compression_t compression; /**< compression method */
DECL|ctx|member|rijndael_ctx ctx; /**< AES-128 encryption context */
DECL|data|member|aes128_ccm_t data; /**< The crypto context */
DECL|do_client_auth|member|unsigned int do_client_auth:1;
DECL|dtls_cipher_context_t|struct|typedef struct dtls_cipher_context_t {
DECL|dtls_cipher_context_t|typedef|} dtls_cipher_context_t;
DECL|dtls_crypto_alg|typedef|} dtls_crypto_alg;
DECL|dtls_ecdh_curve|typedef|} dtls_ecdh_curve;
DECL|dtls_handshake_parameters_ecdsa_t|typedef|} dtls_handshake_parameters_ecdsa_t;
DECL|dtls_handshake_parameters_psk_t|typedef|} dtls_handshake_parameters_psk_t;
DECL|dtls_handshake_parameters_t|typedef|} dtls_handshake_parameters_t;
DECL|dtls_kb_client_iv|macro|dtls_kb_client_iv
DECL|dtls_kb_client_mac_secret|macro|dtls_kb_client_mac_secret
DECL|dtls_kb_client_write_key|macro|dtls_kb_client_write_key
DECL|dtls_kb_digest_size|macro|dtls_kb_digest_size
DECL|dtls_kb_iv_size|macro|dtls_kb_iv_size
DECL|dtls_kb_key_size|macro|dtls_kb_key_size
DECL|dtls_kb_local_iv|macro|dtls_kb_local_iv
DECL|dtls_kb_local_mac_secret|macro|dtls_kb_local_mac_secret
DECL|dtls_kb_local_write_key|macro|dtls_kb_local_write_key
DECL|dtls_kb_mac_secret_size|macro|dtls_kb_mac_secret_size
DECL|dtls_kb_remote_iv|macro|dtls_kb_remote_iv
DECL|dtls_kb_remote_mac_secret|macro|dtls_kb_remote_mac_secret
DECL|dtls_kb_remote_write_key|macro|dtls_kb_remote_write_key
DECL|dtls_kb_server_iv|macro|dtls_kb_server_iv
DECL|dtls_kb_server_mac_secret|macro|dtls_kb_server_mac_secret
DECL|dtls_kb_server_write_key|macro|dtls_kb_server_write_key
DECL|dtls_kb_size|macro|dtls_kb_size
DECL|dtls_security_parameters_t|typedef|} dtls_security_parameters_t;
DECL|ecdsa|member|dtls_handshake_parameters_ecdsa_t ecdsa;
DECL|epoch|member|uint16_t epoch; /**< counter for cipher state changes*/
DECL|hs_state|member|dtls_hs_state_t hs_state; /**< handshake protocol status */
DECL|id_length|member|uint16_t id_length;
DECL|identity|member|unsigned char identity[DTLS_PSK_MAX_CLIENT_IDENTITY_LEN];
DECL|key_block|member|uint8 key_block[MAX_KEYBLOCK_LENGTH];
DECL|keyx|member|} keyx;
DECL|master_secret|member|uint8 master_secret[DTLS_MASTER_SECRET_LENGTH];
DECL|other_eph_pub_x|member|uint8 other_eph_pub_x[32];
DECL|other_eph_pub_y|member|uint8 other_eph_pub_y[32];
DECL|other_pub_x|member|uint8 other_pub_x[32];
DECL|other_pub_y|member|uint8 other_pub_y[32];
DECL|own_eph_priv|member|uint8 own_eph_priv[32];
DECL|psk|member|dtls_handshake_parameters_psk_t psk;
DECL|random_t|struct|struct random_t {
DECL|random|member|} random;
DECL|rseq|member|uint64_t rseq; /**< sequence number of last record sent */
DECL|server|member|uint8 server[DTLS_RANDOM_LENGTH]; /**< server random gmt and bytes */
DECL|tmp|member|} tmp;
