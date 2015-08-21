DECL|ZERO_BYTE|macro|ZERO_BYTE
DECL|add_round_key|function|static inline void add_round_key(uint8_t *s, const uint32_t *k)
DECL|inv_mix_columns|function|static inline void inv_mix_columns(uint8_t *s)
DECL|inv_sbox|variable|inv_sbox
DECL|inv_shift_rows|function|static inline void inv_shift_rows(uint8_t *s)
DECL|inv_sub_bytes|function|static inline void inv_sub_bytes(uint8_t *s)
DECL|mult8|macro|mult8
DECL|mult9|macro|mult9
DECL|mult_row_column|function|static inline void mult_row_column(uint8_t *out, const uint8_t *in)
DECL|multb|macro|multb
DECL|multd|macro|multd
DECL|multe|macro|multe
DECL|tc_aes128_set_decrypt_key|function|int32_t tc_aes128_set_decrypt_key(TCAesKeySched_t s, const uint8_t *k)
DECL|tc_aes_decrypt|function|int32_t tc_aes_decrypt(uint8_t *out, const uint8_t *in, const TCAesKeySched_t s)
