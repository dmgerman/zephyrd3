DECL|RAND_RESERVED|macro|RAND_RESERVED
DECL|count|member|u8_t count;
DECL|first|member|u8_t first;
DECL|isr_rand|function|void isr_rand(void *param)
DECL|last|member|u8_t last;
DECL|rand_get|function|size_t rand_get(size_t octets, u8_t *rand)
DECL|rand_init|function|void rand_init(u8_t *context, u8_t context_len)
DECL|rand|member|u8_t rand[1];
DECL|rand|struct|struct rand {
DECL|rng|variable|rng
