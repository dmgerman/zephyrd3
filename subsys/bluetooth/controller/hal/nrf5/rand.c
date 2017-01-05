DECL|RAND_RESERVED|macro|RAND_RESERVED
DECL|count|member|uint8_t count;
DECL|first|member|uint8_t first;
DECL|isr_rand|function|void isr_rand(void *param)
DECL|last|member|uint8_t last;
DECL|rand_get|function|uint32_t rand_get(uint8_t octets, uint8_t *rand)
DECL|rand_init|function|void rand_init(uint8_t *context, uint8_t context_len)
DECL|rand|member|uint8_t rand[1];
DECL|rand|struct|struct rand {
DECL|rng|variable|rng
