DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|ieee802154_decrypt_auth|function|bool ieee802154_decrypt_auth(struct ieee802154_security_ctx *sec_ctx, u8_t *frame, u8_t auth_payload_len, u8_t decrypt_payload_len, u8_t *src_ext_addr,
DECL|ieee802154_encrypt_auth|function|bool ieee802154_encrypt_auth(struct ieee802154_security_ctx *sec_ctx, u8_t *frame, u8_t auth_payload_len, u8_t encrypt_payload_len, u8_t *src_ext_addr)
DECL|ieee802154_security_init|function|int ieee802154_security_init(struct ieee802154_security_ctx *sec_ctx)
DECL|ieee802154_security_setup_session|function|int ieee802154_security_setup_session(struct ieee802154_security_ctx *sec_ctx, u8_t level, u8_t key_mode, u8_t *key, u8_t key_len)
