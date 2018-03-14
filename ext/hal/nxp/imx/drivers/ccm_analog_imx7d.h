DECL|CCM_ANALOG_DisablePfdClock|function|static inline void CCM_ANALOG_DisablePfdClock(CCM_ANALOG_Type * base, uint32_t pfdClkGate)
DECL|CCM_ANALOG_DisablePllClock|function|static inline void CCM_ANALOG_DisablePllClock(CCM_ANALOG_Type * base, uint32_t pllClock)
DECL|CCM_ANALOG_EnablePfdClock|function|static inline void CCM_ANALOG_EnablePfdClock(CCM_ANALOG_Type * base, uint32_t pfdClkGate)
DECL|CCM_ANALOG_EnablePllClock|function|static inline void CCM_ANALOG_EnablePllClock(CCM_ANALOG_Type * base, uint32_t pllClock)
DECL|CCM_ANALOG_GetPfdFrac|function|static inline uint32_t CCM_ANALOG_GetPfdFrac(CCM_ANALOG_Type * base, uint32_t pfdFrac)
DECL|CCM_ANALOG_IsPfdStable|function|static inline bool CCM_ANALOG_IsPfdStable(CCM_ANALOG_Type * base, uint32_t pfdStable)
DECL|CCM_ANALOG_IsPllBypassed|function|static inline bool CCM_ANALOG_IsPllBypassed(CCM_ANALOG_Type * base, uint32_t pllControl)
DECL|CCM_ANALOG_IsPllLocked|function|static inline bool CCM_ANALOG_IsPllLocked(CCM_ANALOG_Type * base, uint32_t pllControl)
DECL|CCM_ANALOG_PowerDownPll|function|static inline void CCM_ANALOG_PowerDownPll(CCM_ANALOG_Type * base, uint32_t pllControl)
DECL|CCM_ANALOG_PowerUpPll|function|static inline void CCM_ANALOG_PowerUpPll(CCM_ANALOG_Type * base, uint32_t pllControl)
DECL|CCM_ANALOG_SetPfdFrac|function|static inline void CCM_ANALOG_SetPfdFrac(CCM_ANALOG_Type * base, uint32_t pfdFrac, uint32_t value)
DECL|CCM_ANALOG_SetPllBypass|function|static inline void CCM_ANALOG_SetPllBypass(CCM_ANALOG_Type * base, uint32_t pllControl, bool bypass)
DECL|CCM_ANALOG_TUPLE_REG_CLR|macro|CCM_ANALOG_TUPLE_REG_CLR
DECL|CCM_ANALOG_TUPLE_REG_OFF|macro|CCM_ANALOG_TUPLE_REG_OFF
DECL|CCM_ANALOG_TUPLE_REG_SET|macro|CCM_ANALOG_TUPLE_REG_SET
DECL|CCM_ANALOG_TUPLE_REG|macro|CCM_ANALOG_TUPLE_REG
DECL|CCM_ANALOG_TUPLE_SHIFT|macro|CCM_ANALOG_TUPLE_SHIFT
DECL|CCM_ANALOG_TUPLE|macro|CCM_ANALOG_TUPLE
DECL|__CCM_ANALOG_IMX7D_H__|macro|__CCM_ANALOG_IMX7D_H__
DECL|_ccm_analog_pfd_clkgate|enum|enum _ccm_analog_pfd_clkgate
DECL|_ccm_analog_pfd_frac|enum|enum _ccm_analog_pfd_frac
DECL|_ccm_analog_pfd_stable|enum|enum _ccm_analog_pfd_stable
DECL|_ccm_analog_pll_clock|enum|enum _ccm_analog_pll_clock
DECL|_ccm_analog_pll_control|enum|enum _ccm_analog_pll_control
DECL|ccmAnalogMainDiv1ClkGate|enumerator|ccmAnalogMainDiv1ClkGate = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_MAIN_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480 MAIN DIV1 Clock Gate.*/
DECL|ccmAnalogMainDiv2ClkGate|enumerator|ccmAnalogMainDiv2ClkGate = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_MAIN_DIV2_CLKGATE_SHIFT), /*!< CCM Analog 480 MAIN DIV2 Clock Gate.*/
DECL|ccmAnalogMainDiv4ClkGate|enumerator|ccmAnalogMainDiv4ClkGate = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_MAIN_DIV4_CLKGATE_SHIFT), /*!< CCM Analog 480 MAIN DIV4 Clock Gate.*/
DECL|ccmAnalogPfd0Div1ClkGate|enumerator|ccmAnalogPfd0Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD0_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480A PFD0 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd0Div2ClkGate|enumerator|ccmAnalogPfd0Div2ClkGate = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_PFD0_DIV2_CLKGATE_SHIFT), /*!< CCM Analog 480 PFD0 DIV2 Clock Gate.*/
DECL|ccmAnalogPfd0Frac|enumerator|ccmAnalogPfd0Frac = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD0_FRAC_SHIFT), /*!< CCM Analog 480A PFD0 fractional divider.*/
DECL|ccmAnalogPfd0Stable|enumerator|ccmAnalogPfd0Stable = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD0_STABLE_SHIFT), /*!< CCM Analog 480A PFD0 clock stable query.*/
DECL|ccmAnalogPfd1Div1ClkGate|enumerator|ccmAnalogPfd1Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD1_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480A PFD1 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd1Div2ClkGate|enumerator|ccmAnalogPfd1Div2ClkGate = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_PFD1_DIV2_CLKGATE_SHIFT), /*!< CCM Analog 480 PFD1 DIV2 Clock Gate.*/
DECL|ccmAnalogPfd1Frac|enumerator|ccmAnalogPfd1Frac = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD1_FRAC_SHIFT), /*!< CCM Analog 480A PFD1 fractional divider.*/
DECL|ccmAnalogPfd1Stable|enumerator|ccmAnalogPfd1Stable = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD1_STABLE_SHIFT), /*!< CCM Analog 480A PFD1 clock stable query.*/
DECL|ccmAnalogPfd2Div1ClkGate|enumerator|ccmAnalogPfd2Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD2_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480A PFD2 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd2Div2ClkGate|enumerator|ccmAnalogPfd2Div2ClkGate = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_PFD2_DIV2_CLKGATE_SHIFT), /*!< CCM Analog 480 PFD2 DIV2 Clock Gate.*/
DECL|ccmAnalogPfd2Frac|enumerator|ccmAnalogPfd2Frac = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD2_FRAC_SHIFT), /*!< CCM Analog 480A PFD2 fractional divider.*/
DECL|ccmAnalogPfd2Stable|enumerator|ccmAnalogPfd2Stable = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD2_STABLE_SHIFT), /*!< CCM Analog 480A PFD2 clock stable query.*/
DECL|ccmAnalogPfd3Div1ClkGate|enumerator|ccmAnalogPfd3Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD3_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480A PFD3 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd3Frac|enumerator|ccmAnalogPfd3Frac = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD3_FRAC_SHIFT), /*!< CCM Analog 480A PFD3 fractional divider.*/
DECL|ccmAnalogPfd3Stable|enumerator|ccmAnalogPfd3Stable = CCM_ANALOG_TUPLE(PFD_480A, CCM_ANALOG_PFD_480A_PFD3_STABLE_SHIFT), /*!< CCM Analog 480A PFD3 clock stable query.*/
DECL|ccmAnalogPfd4Div1ClkGate|enumerator|ccmAnalogPfd4Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD4_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480B PFD4 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd4Frac|enumerator|ccmAnalogPfd4Frac = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD4_FRAC_SHIFT), /*!< CCM Analog 480B PFD4 fractional divider.*/
DECL|ccmAnalogPfd4Stable|enumerator|ccmAnalogPfd4Stable = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD4_STABLE_SHIFT), /*!< CCM Analog 480B PFD4 clock stable query.*/
DECL|ccmAnalogPfd5Div1ClkGate|enumerator|ccmAnalogPfd5Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD5_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480B PFD5 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd5Frac|enumerator|ccmAnalogPfd5Frac = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD5_FRAC_SHIFT), /*!< CCM Analog 480B PFD5 fractional divider.*/
DECL|ccmAnalogPfd5Stable|enumerator|ccmAnalogPfd5Stable = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD5_STABLE_SHIFT), /*!< CCM Analog 480B PFD5 clock stable query.*/
DECL|ccmAnalogPfd6Div1ClkGate|enumerator|ccmAnalogPfd6Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD6_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480B PFD6 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd6Frac|enumerator|ccmAnalogPfd6Frac = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD6_FRAC_SHIFT), /*!< CCM Analog 480B PFD6 fractional divider.*/
DECL|ccmAnalogPfd6Stable|enumerator|ccmAnalogPfd6Stable = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD6_STABLE_SHIFT), /*!< CCM Analog 480B PFD6 clock stable query.*/
DECL|ccmAnalogPfd7Div1ClkGate|enumerator|ccmAnalogPfd7Div1ClkGate = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD7_DIV1_CLKGATE_SHIFT), /*!< CCM Analog 480B PFD7 DIV1 Clock Gate.*/
DECL|ccmAnalogPfd7Frac|enumerator|ccmAnalogPfd7Frac = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD7_FRAC_SHIFT), /*!< CCM Analog 480B PFD7 fractional divider.*/
DECL|ccmAnalogPfd7Stable|enumerator|ccmAnalogPfd7Stable = CCM_ANALOG_TUPLE(PFD_480B, CCM_ANALOG_PFD_480B_PFD7_STABLE_SHIFT), /*!< CCM Analog 480B PFD7 clock stable query.*/
DECL|ccmAnalogPll480Clock|enumerator|ccmAnalogPll480Clock = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_ENABLE_CLK_SHIFT), /*!< CCM Analog 480M PLL Clock.*/
DECL|ccmAnalogPll480Control|enumerator|ccmAnalogPll480Control = CCM_ANALOG_TUPLE(PLL_480, CCM_ANALOG_PLL_480_POWERDOWN_SHIFT), /*!< CCM Analog 480M PLL Control.*/
DECL|ccmAnalogPllArmClock|enumerator|ccmAnalogPllArmClock = CCM_ANALOG_TUPLE(PLL_ARM, CCM_ANALOG_PLL_ARM_ENABLE_CLK_SHIFT), /*!< CCM Analog ARM PLL Clock.*/
DECL|ccmAnalogPllArmControl|enumerator|ccmAnalogPllArmControl = CCM_ANALOG_TUPLE(PLL_ARM, CCM_ANALOG_PLL_ARM_POWERDOWN_SHIFT), /*!< CCM Analog ARM PLL Control.*/
DECL|ccmAnalogPllAudioClock|enumerator|ccmAnalogPllAudioClock = CCM_ANALOG_TUPLE(PLL_AUDIO, CCM_ANALOG_PLL_AUDIO_ENABLE_CLK_SHIFT), /*!< CCM Analog AUDIO PLL Clock.*/
DECL|ccmAnalogPllAudioControl|enumerator|ccmAnalogPllAudioControl = CCM_ANALOG_TUPLE(PLL_AUDIO, CCM_ANALOG_PLL_AUDIO_POWERDOWN_SHIFT), /*!< CCM Analog AUDIO PLL Control.*/
DECL|ccmAnalogPllDdrClock|enumerator|ccmAnalogPllDdrClock = CCM_ANALOG_TUPLE(PLL_DDR, CCM_ANALOG_PLL_DDR_ENABLE_CLK_SHIFT), /*!< CCM Analog DDR PLL Clock.*/
DECL|ccmAnalogPllDdrControl|enumerator|ccmAnalogPllDdrControl = CCM_ANALOG_TUPLE(PLL_DDR, CCM_ANALOG_PLL_DDR_POWERDOWN_SHIFT), /*!< CCM Analog DDR PLL Control.*/
DECL|ccmAnalogPllDdrDiv2Clock|enumerator|ccmAnalogPllDdrDiv2Clock = CCM_ANALOG_TUPLE(PLL_DDR, CCM_ANALOG_PLL_DDR_DIV2_ENABLE_CLK_SHIFT), /*!< CCM Analog DDR PLL divided by 2 Clock.*/
DECL|ccmAnalogPllEnet100MhzClock|enumerator|ccmAnalogPllEnet100MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_100MHZ_SHIFT), /*!< CCM Analog Ethernet 100M PLL Clock.*/
DECL|ccmAnalogPllEnet125MhzClock|enumerator|ccmAnalogPllEnet125MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_125MHZ_SHIFT), /*!< CCM Analog Ethernet 125M PLL Clock.*/
DECL|ccmAnalogPllEnet250MhzClock|enumerator|ccmAnalogPllEnet250MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_250MHZ_SHIFT), /*!< CCM Analog Ethernet 250M PLL Clock.*/
DECL|ccmAnalogPllEnet25MhzClock|enumerator|ccmAnalogPllEnet25MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_25MHZ_SHIFT), /*!< CCM Analog Ethernet 25M PLL Clock.*/
DECL|ccmAnalogPllEnet40MhzClock|enumerator|ccmAnalogPllEnet40MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_40MHZ_SHIFT), /*!< CCM Analog Ethernet 40M PLL Clock.*/
DECL|ccmAnalogPllEnet500MhzClock|enumerator|ccmAnalogPllEnet500MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_500MHZ_SHIFT), /*!< CCM Analog Ethernet 500M PLL Clock.*/
DECL|ccmAnalogPllEnet50MhzClock|enumerator|ccmAnalogPllEnet50MhzClock = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_CLK_50MHZ_SHIFT), /*!< CCM Analog Ethernet 50M PLL Clock.*/
DECL|ccmAnalogPllEnetControl|enumerator|ccmAnalogPllEnetControl = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_POWERDOWN_SHIFT), /*!< CCM Analog Ethernet PLL Control.*/
DECL|ccmAnalogPllVideoClock|enumerator|ccmAnalogPllVideoClock = CCM_ANALOG_TUPLE(PLL_VIDEO, CCM_ANALOG_PLL_VIDEO_ENABLE_CLK_SHIFT), /*!< CCM Analog VIDEO PLL Clock.*/
DECL|ccmAnalogPllVideoControl|enumerator|ccmAnalogPllVideoControl = CCM_ANALOG_TUPLE(PLL_VIDEO, CCM_ANALOG_PLL_VIDEO_POWERDOWN_SHIFT), /*!< CCM Analog VIDEO PLL Control.*/
