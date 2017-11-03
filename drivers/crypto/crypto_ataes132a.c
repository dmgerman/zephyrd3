DECL|ATAES132A_AES_KEY_SIZE|macro|ATAES132A_AES_KEY_SIZE
DECL|CRYPTO_MAX_SESSION|macro|CRYPTO_MAX_SESSION
DECL|D10D24S|macro|D10D24S
DECL|MAX_RETRIES|macro|MAX_RETRIES
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ataes132a_aes_ccm_decrypt|function|int ataes132a_aes_ccm_decrypt(struct device *dev, u8_t key_id, struct ataes132a_mac_mode *mac_mode, struct ataes132a_mac_packet *mac_packet, struct cipher_aead_pkt *aead_op,
DECL|ataes132a_aes_ccm_encrypt|function|int ataes132a_aes_ccm_encrypt(struct device *dev, u8_t key_id, struct ataes132a_mac_mode *mac_mode, struct cipher_aead_pkt *aead_op, u8_t *nonce_buf,
DECL|ataes132a_aes_ecb_block|function|int ataes132a_aes_ecb_block(struct device *dev, u8_t key_id, struct cipher_pkt *pkt)
DECL|ataes132a_config|variable|ataes132a_config
DECL|ataes132a_data|variable|ataes132a_data
DECL|ataes132a_init_states|function|static void ataes132a_init_states(void)
DECL|ataes132a_init|function|int ataes132a_init(struct device *dev)
DECL|ataes132a_query_caps|function|static int ataes132a_query_caps(struct device *dev)
DECL|ataes132a_send_command|function|static int ataes132a_send_command(struct device *dev, u8_t opcode, u8_t mode, u8_t *params, u8_t nparams, u8_t *response, u8_t *nresponse)
DECL|ataes132a_session_free|function|static int ataes132a_session_free(struct device *dev, struct cipher_ctx *session)
DECL|ataes132a_session_setup|function|static int ataes132a_session_setup(struct device *dev, struct cipher_ctx *ctx, enum cipher_algo algo, enum cipher_mode mode, enum cipher_op op_type)
DECL|ataes132a_state|variable|ataes132a_state
DECL|crypto_enc_funcs|variable|crypto_enc_funcs
DECL|do_block|function|static int do_block(struct cipher_ctx *ctx, struct cipher_pkt *pkt)
DECL|do_ccm_decrypt_auth|function|static int do_ccm_decrypt_auth(struct cipher_ctx *ctx, struct cipher_aead_pkt *aead_op, u8_t *nonce)
DECL|do_ccm_encrypt_mac|function|static int do_ccm_encrypt_mac(struct cipher_ctx *ctx, struct cipher_aead_pkt *aead_op, u8_t *nonce)
