DECL|CCM_FLAGS|macro|CCM_FLAGS
DECL|MASK_L|macro|MASK_L
DECL|SET_COUNTER|macro|SET_COUNTER
DECL|add_auth_data|function|add_auth_data(rijndael_ctx *ctx, const unsigned char *msg, size_t la, unsigned char B[DTLS_CCM_BLOCKSIZE], unsigned char X[DTLS_CCM_BLOCKSIZE])
DECL|block0|function|block0(size_t M, /* number of auth bytes */ size_t L, /* number of bytes to encode message length */ size_t la, /* l(a) octets additional authenticated data */ size_t lm, /* l(m) message length */ unsigned char nonce[DTLS_CCM_BLOCKSIZE],
DECL|dtls_ccm_decrypt_message|function|dtls_ccm_decrypt_message(rijndael_ctx *ctx, size_t M, size_t L, unsigned char nonce[DTLS_CCM_BLOCKSIZE], unsigned char *msg, size_t lm, const unsigned char *aad, size_t la)
DECL|dtls_ccm_encrypt_message|function|dtls_ccm_encrypt_message(rijndael_ctx *ctx, size_t M, size_t L, unsigned char nonce[DTLS_CCM_BLOCKSIZE], unsigned char *msg, size_t lm, const unsigned char *aad, size_t la)
DECL|encrypt|function|encrypt(rijndael_ctx *ctx, size_t L, unsigned long counter,unsigned char *msg, size_t len, unsigned char A[DTLS_CCM_BLOCKSIZE], unsigned char S[DTLS_CCM_BLOCKSIZE])
DECL|mac|function|mac(rijndael_ctx *ctx, unsigned char *msg, size_t len, unsigned char B[DTLS_CCM_BLOCKSIZE], unsigned char X[DTLS_CCM_BLOCKSIZE])
