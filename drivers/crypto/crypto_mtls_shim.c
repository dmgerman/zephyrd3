DECL|CRYPTO_MAX_SESSION|macro|CRYPTO_MAX_SESSION
DECL|MTLS_SUPPORT|macro|MTLS_SUPPORT
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|in_use|member|bool in_use;
DECL|mtls_ccm_decrypt_auth|function|static int mtls_ccm_decrypt_auth(struct cipher_ctx *ctx, struct cipher_aead_pkt *apkt, u8_t *nonce)
DECL|mtls_ccm_encrypt_auth|function|static int mtls_ccm_encrypt_auth(struct cipher_ctx *ctx, struct cipher_aead_pkt *apkt, u8_t *nonce)
DECL|mtls_crypto_funcs|variable|mtls_crypto_funcs
DECL|mtls_get_unused_session_index|function|static int mtls_get_unused_session_index(void)
DECL|mtls_query_caps|function|static int mtls_query_caps(struct device *dev)
DECL|mtls_session_free|function|static int mtls_session_free(struct device *dev, struct cipher_ctx *ctx)
DECL|mtls_session_setup|function|static int mtls_session_setup(struct device *dev, struct cipher_ctx *ctx, enum cipher_algo algo, enum cipher_mode mode, enum cipher_op op_type)
DECL|mtls_sessions|variable|mtls_sessions
DECL|mtls_shim_init|function|static int mtls_shim_init(struct device *dev)
DECL|mtls_shim_session|struct|struct mtls_shim_session {
DECL|mtls|member|mbedtls_ccm_context mtls;
