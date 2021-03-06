DECL|ccm_cbc_mac|function|static void ccm_cbc_mac(uint8_t *T, const uint8_t *data, unsigned int dlen,unsigned int flag, TCAesKeySched_t sched)
DECL|ccm_ctr_mode|function|static int ccm_ctr_mode(uint8_t *out, unsigned int outlen, const uint8_t *in,unsigned int inlen, uint8_t *ctr, const TCAesKeySched_t sched)
DECL|tc_ccm_config|function|int tc_ccm_config(TCCcmMode_t c, TCAesKeySched_t sched, uint8_t *nonce, unsigned int nlen, unsigned int mlen)
DECL|tc_ccm_decryption_verification|function|int tc_ccm_decryption_verification(uint8_t *out, unsigned int olen, const uint8_t *associated_data, unsigned int alen, const uint8_t *payload, unsigned int plen, TCCcmMode_t c)
DECL|tc_ccm_generation_encryption|function|int tc_ccm_generation_encryption(uint8_t *out, unsigned int olen, const uint8_t *associated_data, unsigned int alen, const uint8_t *payload, unsigned int plen, TCCcmMode_t c)
