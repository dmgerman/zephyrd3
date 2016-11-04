DECL|cipher_text|member|uint8_t cipher_text[16];
DECL|done|member|uint32_t volatile done;
DECL|ecb_cb|function|static void ecb_cb(uint32_t status, uint8_t *cipher_be, void *context)
DECL|ecb_cleanup|function|static void ecb_cleanup(void)
DECL|ecb_encrypt_nonblocking|function|uint32_t ecb_encrypt_nonblocking(struct ecb *ecb)
DECL|ecb_encrypt|function|void ecb_encrypt(uint8_t const *const key_le, uint8_t const *const clear_text_le, uint8_t * const cipher_text_le, uint8_t * const cipher_text_be)
DECL|ecb_isr|function|void ecb_isr(void)
DECL|ecb_ut_context|struct|struct ecb_ut_context {
DECL|ecb_ut|function|uint32_t ecb_ut(void)
DECL|status|member|uint32_t status;
