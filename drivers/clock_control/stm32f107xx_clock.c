DECL|ahb_prescaler|function|static int ahb_prescaler(int prescaler)
DECL|apb_prescaler|function|static int apb_prescaler(int prescaler)
DECL|base|member|u8_t *base;
DECL|get_ahb_clock|function|static u32_t get_ahb_clock(u32_t sysclk)
DECL|get_apb_clock|function|static u32_t get_apb_clock(u32_t ahb_clock, u32_t prescaler)
DECL|map_reg_val|function|static int map_reg_val(const struct regval_map *map, size_t cnt, int val)
DECL|pll2mul|function|static int pll2mul(int mul)
DECL|pllmul|function|static int pllmul(int mul)
DECL|prediv_prescaler|function|static int prediv_prescaler(int prescaler)
DECL|regval_map|struct|struct regval_map {
DECL|reg|member|int reg;
DECL|setup_flash|function|static inline void setup_flash(void)
DECL|stm32f10x_clock_control_api|variable|stm32f10x_clock_control_api
DECL|stm32f10x_clock_control_get_subsys_rate|function|int stm32f10x_clock_control_get_subsys_rate(struct device *clock, clock_control_subsys_t sub_system, u32_t *rate)
DECL|stm32f10x_clock_control_init|function|static int stm32f10x_clock_control_init(struct device *dev)
DECL|stm32f10x_clock_control_off|function|static inline int stm32f10x_clock_control_off(struct device *dev, clock_control_subsys_t sub_system)
DECL|stm32f10x_clock_control_on|function|static inline int stm32f10x_clock_control_on(struct device *dev, clock_control_subsys_t sub_system)
DECL|stm32f10x_rcc_data|struct|struct stm32f10x_rcc_data {
DECL|stm32f10x_rcc_data|variable|stm32f10x_rcc_data
DECL|val|member|int val;
