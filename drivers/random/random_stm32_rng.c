DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|clock|member|struct device *clock;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|random_stm32_got_error|function|static int random_stm32_got_error(RNG_TypeDef *rng)
DECL|random_stm32_rng_api|variable|random_stm32_rng_api
DECL|random_stm32_rng_config|variable|random_stm32_rng_config
DECL|random_stm32_rng_data|variable|random_stm32_rng_data
DECL|random_stm32_rng_dev_cfg|struct|struct random_stm32_rng_dev_cfg {
DECL|random_stm32_rng_dev_data|struct|struct random_stm32_rng_dev_data {
DECL|random_stm32_rng_get_entropy|function|static int random_stm32_rng_get_entropy(struct device *dev, u8_t *buffer,u16_t length)
DECL|random_stm32_rng_init|function|static int random_stm32_rng_init(struct device *dev)
DECL|random_stm32_rng_reset|function|static void random_stm32_rng_reset(RNG_TypeDef *rng)
DECL|random_stm32_wait_ready|function|static int random_stm32_wait_ready(RNG_TypeDef *rng)
DECL|rng|member|RNG_TypeDef *rng;
DECL|sys_rand32_get|function|u32_t sys_rand32_get(void)
