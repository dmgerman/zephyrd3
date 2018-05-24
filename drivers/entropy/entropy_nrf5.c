DECL|DEV_DATA|macro|DEV_DATA
DECL|RAND_DEFINE|macro|RAND_DEFINE
DECL|RAND_ISR_LEN|macro|RAND_ISR_LEN
DECL|RAND_THREAD_LEN|macro|RAND_THREAD_LEN
DECL|count|member|u8_t count;
DECL|entropy_nrf5_api_funcs|variable|entropy_nrf5_api_funcs
DECL|entropy_nrf5_data|variable|entropy_nrf5_data
DECL|entropy_nrf5_dev_data|struct|struct entropy_nrf5_dev_data {
DECL|entropy_nrf5_get_entropy_isr|function|static int entropy_nrf5_get_entropy_isr(struct device *dev, u8_t *buf, u16_t len,u32_t flags)
DECL|entropy_nrf5_get_entropy|function|static int entropy_nrf5_get_entropy(struct device *device, u8_t *buf, u16_t len)
DECL|entropy_nrf5_init|function|static int entropy_nrf5_init(struct device *device)
DECL|entropy_nrf_get_entropy_isr|function|u8_t entropy_nrf_get_entropy_isr(struct device *dev, u8_t *buf, u8_t len)
DECL|first|member|u8_t first;
DECL|get|function|static inline u8_t get(struct rand *rng, u8_t octets, u8_t *rand)
DECL|init|function|static void init(struct rand *rng, u8_t len, u8_t threshold)
DECL|isr_rand|function|static void isr_rand(void *arg)
DECL|isr|function|static int isr(struct rand *rng, bool store)
DECL|last|member|u8_t last;
DECL|rand|member|u8_t rand[0];
DECL|rand|struct|struct rand {
DECL|sem_lock|member|struct k_sem sem_lock;
DECL|sem_sync|member|struct k_sem sem_sync;
DECL|threshold|member|u8_t threshold;
