DECL|__ahb_prescaler|function|static int __ahb_prescaler(int prescaler)
DECL|__apb_prescaler|function|static int __apb_prescaler(int prescaler)
DECL|__get_ahb_clock|function|uint32_t __get_ahb_clock(uint32_t sysclk)
DECL|__get_apb_clock|function|uint32_t __get_apb_clock(uint32_t ahb_clock, uint32_t prescaler)
DECL|__pllmul|function|static int __pllmul(int mul)
DECL|__setup_flash|function|static inline void __setup_flash(void)
DECL|base|member|uint8_t *base;
DECL|map_reg_val|function|int map_reg_val(const struct regval_map *map, size_t cnt, int val)
DECL|regval_map|struct|struct regval_map {
DECL|reg|member|int reg;
DECL|stm32f10x_clock_control_api|variable|stm32f10x_clock_control_api
DECL|stm32f10x_clock_control_get_subsys_rate|function|static int stm32f10x_clock_control_get_subsys_rate(struct device *clock, clock_control_subsys_t sub_system, uint32_t *rate)
DECL|stm32f10x_clock_control_init|function|int stm32f10x_clock_control_init(struct device *dev)
DECL|stm32f10x_clock_control_off|function|static inline int stm32f10x_clock_control_off(struct device *dev, clock_control_subsys_t sub_system)
DECL|stm32f10x_clock_control_on|function|static inline int stm32f10x_clock_control_on(struct device *dev, clock_control_subsys_t sub_system)
DECL|stm32f10x_rcc_data|struct|struct stm32f10x_rcc_data {
DECL|stm32f10x_rcc_data|variable|stm32f10x_rcc_data
DECL|val|member|int val;
