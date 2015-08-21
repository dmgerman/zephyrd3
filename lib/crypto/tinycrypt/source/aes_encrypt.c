DECL|add_round_key|function|static inline void add_round_key(uint8_t *s, const uint32_t *k)
DECL|mix_columns|function|static inline void mix_columns(uint8_t *s)
DECL|mult_row_column|function|static inline void mult_row_column(uint8_t *out, const uint8_t *in)
DECL|rotword|function|static inline uint32_t rotword(uint32_t a)
DECL|sbox|variable|sbox
DECL|shift_rows|function|static inline void shift_rows(uint8_t *s)
DECL|sub_bytes|function|static inline void sub_bytes(uint8_t *s)
DECL|subbyte|macro|subbyte
DECL|subword|macro|subword
DECL|tc_aes128_set_encrypt_key|function|int32_t tc_aes128_set_encrypt_key(TCAesKeySched_t s, const uint8_t *k)
DECL|tc_aes_encrypt|function|int32_t tc_aes_encrypt(uint8_t *out, const uint8_t *in, const TCAesKeySched_t s)
DECL|triple|macro|triple
