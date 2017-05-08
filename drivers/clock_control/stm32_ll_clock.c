DECL|_ahb_prescaler|macro|_ahb_prescaler
DECL|_apb1_prescaler|macro|_apb1_prescaler
DECL|_apb2_prescaler|macro|_apb2_prescaler
DECL|ahb_prescaler|macro|ahb_prescaler
DECL|apb1_prescaler|macro|apb1_prescaler
DECL|apb2_prescaler|macro|apb2_prescaler
DECL|config_bus_clk_init|function|static void config_bus_clk_init(LL_UTILS_ClkInitTypeDef *clk_init)
DECL|get_bus_clock|function|static u32_t get_bus_clock(u32_t clock, u32_t prescaler)
DECL|stm32_clock_control_api|variable|stm32_clock_control_api
DECL|stm32_clock_control_get_subsys_rate|function|static int stm32_clock_control_get_subsys_rate(struct device *clock,clock_control_subsys_t sub_system, u32_t *rate)
DECL|stm32_clock_control_init|function|static int stm32_clock_control_init(struct device *dev)
DECL|stm32_clock_control_off|function|static inline int stm32_clock_control_off(struct device *dev, clock_control_subsys_t sub_system)
DECL|stm32_clock_control_on|function|static inline int stm32_clock_control_on(struct device *dev, clock_control_subsys_t sub_system)
DECL|stm32_clock_switch_to_hsi|function|static void stm32_clock_switch_to_hsi(uint32_t ahb_prescaler)
