DECL|context|member|void *context;
DECL|ecb_fp|typedef|typedef void (*ecb_fp) (u32_t status, u8_t *cipher_be, void *context);
DECL|ecb|struct|struct ecb {
DECL|fp_ecb|member|ecb_fp fp_ecb;
DECL|in_clear_text_be|member|u8_t in_clear_text_be[16];
DECL|in_clear_text_le|member|u8_t *in_clear_text_le;
DECL|in_key_be|member|u8_t in_key_be[16];
DECL|in_key_le|member|u8_t *in_key_le;
DECL|out_cipher_text_be|member|u8_t out_cipher_text_be[16];
