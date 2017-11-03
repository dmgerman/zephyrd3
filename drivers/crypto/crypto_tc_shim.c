DECL|CRYPTO_MAX_SESSION|macro|CRYPTO_MAX_SESSION
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|crypto_enc_funcs|variable|crypto_enc_funcs
DECL|do_cbc_decrypt|function|static int do_cbc_decrypt(struct cipher_ctx *ctx, struct cipher_pkt *op, u8_t *iv)
DECL|do_cbc_encrypt|function|static int do_cbc_encrypt(struct cipher_ctx *ctx, struct cipher_pkt *op, u8_t *iv)
DECL|do_ccm_decrypt_auth|function|static int do_ccm_decrypt_auth(struct cipher_ctx *ctx, struct cipher_aead_pkt *aead_op, u8_t *nonce)
DECL|do_ccm_encrypt_mac|function|static int do_ccm_encrypt_mac(struct cipher_ctx *ctx, struct cipher_aead_pkt *aead_op, u8_t *nonce)
DECL|do_ctr_op|function|static int do_ctr_op(struct cipher_ctx *ctx, struct cipher_pkt *op, u8_t *iv)
DECL|get_unused_session|function|static int get_unused_session(void)
DECL|tc_driver_state|variable|tc_driver_state
DECL|tc_query_caps|function|static int tc_query_caps(struct device *dev)
DECL|tc_session_free|function|static int tc_session_free(struct device *dev, struct cipher_ctx *sessn)
DECL|tc_session_setup|function|static int tc_session_setup(struct device *dev, struct cipher_ctx *ctx, enum cipher_algo algo, enum cipher_mode mode, enum cipher_op op_type)
DECL|tc_shim_init|function|static int tc_shim_init(struct device *dev)
