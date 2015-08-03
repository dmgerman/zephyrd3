DECL|M|member|size_t M; /* mode: 0 == encrypt, 1 == decrypt */
DECL|data|variable|data
DECL|key|member|unsigned char key[AES_BLKLEN];
DECL|la|member|size_t la; /* not used */
DECL|lm|member|size_t lm; /* overall message length */
DECL|msg|member|unsigned char msg[2000];
DECL|nonce|member|unsigned char nonce[AES_BLKLEN];
DECL|r_lm|member|size_t r_lm; /* overall result length */
DECL|result|member|unsigned char result[2000]; /* result */
DECL|test_vector|struct|struct test_vector {
