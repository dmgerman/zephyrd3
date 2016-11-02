DECL|_ECB_H_|macro|_ECB_H_
DECL|context|member|void *context;
DECL|ecb_fp|typedef|typedef void (*ecb_fp) (uint32_t status, uint8_t *cipher_be,
DECL|ecb|struct|struct ecb {
DECL|fp_ecb|member|ecb_fp fp_ecb;
DECL|in_clear_text_be|member|uint8_t in_clear_text_be[16];
DECL|in_clear_text_le|member|uint8_t *in_clear_text_le;
DECL|in_key_be|member|uint8_t in_key_be[16];
DECL|in_key_le|member|uint8_t *in_key_le;
DECL|out_cipher_text_be|member|uint8_t out_cipher_text_be[16];
