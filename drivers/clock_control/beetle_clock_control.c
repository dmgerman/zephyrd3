DECL|MAINCLK_BASE_FREQ|macro|MAINCLK_BASE_FREQ
DECL|beetle_ahb_set_clock_off|function|static inline void beetle_ahb_set_clock_off(u8_t bit, enum arm_soc_state_t state)
DECL|beetle_ahb_set_clock_on|function|static inline void beetle_ahb_set_clock_on(u8_t bit, enum arm_soc_state_t state)
DECL|beetle_apb_set_clock_off|function|static inline void beetle_apb_set_clock_off(u8_t bit, enum arm_soc_state_t state)
DECL|beetle_apb_set_clock_on|function|static inline void beetle_apb_set_clock_on(u8_t bit, enum arm_soc_state_t state)
DECL|beetle_cc_cfg|variable|beetle_cc_cfg
DECL|beetle_clock_control_api|variable|beetle_clock_control_api
DECL|beetle_clock_control_cfg_t|struct|struct beetle_clock_control_cfg_t {
DECL|beetle_clock_control_get_subsys_rate|function|static int beetle_clock_control_get_subsys_rate(struct device *clock, clock_control_subsys_t sub_system, u32_t *rate)
DECL|beetle_clock_control_init|function|static int beetle_clock_control_init(struct device *dev)
DECL|beetle_clock_control_off|function|static inline int beetle_clock_control_off(struct device *dev, clock_control_subsys_t sub_system)
DECL|beetle_clock_control_on|function|static inline int beetle_clock_control_on(struct device *dev, clock_control_subsys_t sub_system)
DECL|beetle_get_prescaler|function|static u32_t beetle_get_prescaler(u32_t mainclk)
DECL|beetle_pll_enable|function|static int beetle_pll_enable(u32_t mainclk)
DECL|beetle_round_freq|function|static u32_t beetle_round_freq(u32_t mainclk)
DECL|beetle_set_clock|function|static inline void beetle_set_clock(volatile u32_t *base, u8_t bit, enum arm_soc_state_t state)
DECL|clock_control_id|member|u32_t clock_control_id;
DECL|freq|member|u32_t freq;
