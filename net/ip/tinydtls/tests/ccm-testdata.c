DECL|L|member|size_t M, L;
DECL|M|member|size_t M, L;
DECL|data|variable|data
DECL|key|member|unsigned char key[DTLS_CCM_BLOCKSIZE];
DECL|la|member|size_t la; /* number of bytes additional data */
DECL|lm|member|size_t lm; /* overall message length */
DECL|msg|member|unsigned char msg[200];
DECL|nonce|member|unsigned char nonce[DTLS_CCM_BLOCKSIZE];
DECL|r_lm|member|size_t r_lm; /* overall result length */
DECL|result|member|unsigned char result[200]; /* result */
DECL|test_vector|struct|struct test_vector {
