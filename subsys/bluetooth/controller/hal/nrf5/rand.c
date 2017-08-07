DECL|count|member|u8_t count;
DECL|first|member|u8_t first;
DECL|get|function|static size_t get(struct rand *rng, size_t octets, u8_t *rand)
DECL|init|function|static void init(struct rand **rng, u8_t *context, u8_t len, u8_t threshold)
DECL|isr_rand|function|void isr_rand(void *param)
DECL|isr|function|static int isr(struct rand *rng, bool store)
DECL|last|member|u8_t last;
DECL|rand_get|function|size_t rand_get(size_t octets, u8_t *rand)
DECL|rand_init|function|void rand_init(u8_t *context, u8_t context_len, u8_t threshold)
DECL|rand_isr_get|function|size_t rand_isr_get(size_t octets, u8_t *rand)
DECL|rand_isr_init|function|void rand_isr_init(u8_t *context, u8_t context_len, u8_t threshold)
DECL|rand|member|u8_t rand[1];
DECL|rand|struct|struct rand {
DECL|rng_isr|variable|rng_isr
DECL|rng_thr|variable|rng_thr
DECL|threshold|member|u8_t threshold;
