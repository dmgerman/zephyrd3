DECL|TCHmacState_t|typedef|typedef struct tc_hmac_state_struct *TCHmacState_t;
DECL|__TC_HMAC_H__|macro|__TC_HMAC_H__
DECL|hash_state|member|struct tc_sha256_state_struct hash_state; /* the internal state required by h */
DECL|key|member|uint8_t key[2*TC_SHA256_BLOCK_SIZE]; /* HMAC key schedule */
DECL|tc_hmac_state_struct|struct|struct tc_hmac_state_struct {
