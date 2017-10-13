DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|clock|member|struct device *clock;
DECL|entropy_stm32_got_error|function|static int entropy_stm32_got_error(RNG_TypeDef *rng)
DECL|entropy_stm32_rng_api|variable|entropy_stm32_rng_api
DECL|entropy_stm32_rng_config|variable|entropy_stm32_rng_config
DECL|entropy_stm32_rng_data|variable|entropy_stm32_rng_data
DECL|entropy_stm32_rng_dev_cfg|struct|struct entropy_stm32_rng_dev_cfg {
DECL|entropy_stm32_rng_dev_data|struct|struct entropy_stm32_rng_dev_data {
DECL|entropy_stm32_rng_get_entropy|function|static int entropy_stm32_rng_get_entropy(struct device *dev, u8_t *buffer, u16_t length)
DECL|entropy_stm32_rng_init|function|static int entropy_stm32_rng_init(struct device *dev)
DECL|entropy_stm32_rng_reset|function|static void entropy_stm32_rng_reset(RNG_TypeDef *rng)
DECL|entropy_stm32_wait_ready|function|static int entropy_stm32_wait_ready(RNG_TypeDef *rng)
DECL|pclken|member|struct stm32_pclken pclken;
DECL|rng|member|RNG_TypeDef *rng;
DECL|sys_rand32_get|function|u32_t sys_rand32_get(void)
