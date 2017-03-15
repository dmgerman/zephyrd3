DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|bt_encrypt|function|int bt_encrypt(const uint8_t key[16], const uint8_t plaintext[16], uint8_t enc_data[16])
DECL|bt_rand|function|int bt_rand(void *buf, size_t len)
DECL|prng_init|function|int prng_init(void)
DECL|prng_reseed|function|static int prng_reseed(struct tc_hmac_prng_struct *h)
DECL|prng|variable|prng
