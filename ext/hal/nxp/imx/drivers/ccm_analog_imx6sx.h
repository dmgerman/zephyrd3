DECL|CCM_ANALOG_DisablePfdClock|function|static inline void CCM_ANALOG_DisablePfdClock(CCM_ANALOG_Type * base, uint32_t pfdClkGate)
DECL|CCM_ANALOG_DisablePllClock|function|static inline void CCM_ANALOG_DisablePllClock(CCM_ANALOG_Type * base, uint32_t pllClock)
DECL|CCM_ANALOG_EnablePfdClock|function|static inline void CCM_ANALOG_EnablePfdClock(CCM_ANALOG_Type * base, uint32_t pfdClkGate)
DECL|CCM_ANALOG_EnablePllClock|function|static inline void CCM_ANALOG_EnablePllClock(CCM_ANALOG_Type * base, uint32_t pllClock)
DECL|CCM_ANALOG_GetPfdFrac|function|static inline uint32_t CCM_ANALOG_GetPfdFrac(CCM_ANALOG_Type * base, uint32_t pfdFrac)
DECL|CCM_ANALOG_IsPfdStable|function|static inline bool CCM_ANALOG_IsPfdStable(CCM_ANALOG_Type * base, uint32_t pfdStable)
DECL|CCM_ANALOG_IsPllBypassed|function|static inline bool CCM_ANALOG_IsPllBypassed(CCM_ANALOG_Type * base, uint32_t pllControl)
DECL|CCM_ANALOG_IsPllLocked|function|static inline bool CCM_ANALOG_IsPllLocked(CCM_ANALOG_Type * base, uint32_t pllControl)
DECL|CCM_ANALOG_SetPfdFrac|function|static inline void CCM_ANALOG_SetPfdFrac(CCM_ANALOG_Type * base, uint32_t pfdFrac, uint32_t value)
DECL|CCM_ANALOG_TUPLE_OFFSET|macro|CCM_ANALOG_TUPLE_OFFSET
DECL|CCM_ANALOG_TUPLE_REG_CLR|macro|CCM_ANALOG_TUPLE_REG_CLR
DECL|CCM_ANALOG_TUPLE_REG_OFF|macro|CCM_ANALOG_TUPLE_REG_OFF
DECL|CCM_ANALOG_TUPLE_REG_SET|macro|CCM_ANALOG_TUPLE_REG_SET
DECL|CCM_ANALOG_TUPLE_REG|macro|CCM_ANALOG_TUPLE_REG
DECL|CCM_ANALOG_TUPLE_SHIFT|macro|CCM_ANALOG_TUPLE_SHIFT
DECL|CCM_ANALOG_TUPLE|macro|CCM_ANALOG_TUPLE
DECL|__CCM_ANALOG_IMX6SX_H__|macro|__CCM_ANALOG_IMX6SX_H__
DECL|_ccm_analog_pfd_clkgate|enum|enum _ccm_analog_pfd_clkgate
DECL|_ccm_analog_pfd_frac|enum|enum _ccm_analog_pfd_frac
DECL|_ccm_analog_pfd_stable|enum|enum _ccm_analog_pfd_stable
DECL|_ccm_analog_pll_clock|enum|enum _ccm_analog_pll_clock
DECL|_ccm_analog_pll_control|enum|enum _ccm_analog_pll_control
DECL|ccmAnalogPll2Pfd0ClkGate|enumerator|ccmAnalogPll2Pfd0ClkGate = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD0_CLKGATE_SHIFT), /*!< CCM Analog PLL2 PFD0 Clock Gate.*/
DECL|ccmAnalogPll2Pfd0Frac|enumerator|ccmAnalogPll2Pfd0Frac = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD0_FRAC_SHIFT), /*!< CCM Analog PLL2 PFD0 fractional divider.*/
DECL|ccmAnalogPll2Pfd0Stable|enumerator|ccmAnalogPll2Pfd0Stable = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD0_STABLE_SHIFT), /*!< CCM Analog PLL2 PFD0 clock stable query.*/
DECL|ccmAnalogPll2Pfd1ClkGate|enumerator|ccmAnalogPll2Pfd1ClkGate = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD1_CLKGATE_SHIFT), /*!< CCM Analog PLL2 PFD1 Clock Gate.*/
DECL|ccmAnalogPll2Pfd1Frac|enumerator|ccmAnalogPll2Pfd1Frac = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD1_FRAC_SHIFT), /*!< CCM Analog PLL2 PFD1 fractional divider.*/
DECL|ccmAnalogPll2Pfd1Stable|enumerator|ccmAnalogPll2Pfd1Stable = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD1_STABLE_SHIFT), /*!< CCM Analog PLL2 PFD1 clock stable query.*/
DECL|ccmAnalogPll2Pfd2ClkGate|enumerator|ccmAnalogPll2Pfd2ClkGate = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD2_CLKGATE_SHIFT), /*!< CCM Analog PLL2 PFD2 Clock Gate.*/
DECL|ccmAnalogPll2Pfd2Frac|enumerator|ccmAnalogPll2Pfd2Frac = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD2_FRAC_SHIFT), /*!< CCM Analog PLL2 PFD2 fractional divider.*/
DECL|ccmAnalogPll2Pfd2Stable|enumerator|ccmAnalogPll2Pfd2Stable = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD2_STABLE_SHIFT), /*!< CCM Analog PLL2 PFD2 clock stable query.*/
DECL|ccmAnalogPll2Pfd3ClkGate|enumerator|ccmAnalogPll2Pfd3ClkGate = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD3_CLKGATE_SHIFT), /*!< CCM Analog PLL2 PFD3 Clock Gate.*/
DECL|ccmAnalogPll2Pfd3Frac|enumerator|ccmAnalogPll2Pfd3Frac = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT), /*!< CCM Analog PLL2 PFD3 fractional divider.*/
DECL|ccmAnalogPll2Pfd3Stable|enumerator|ccmAnalogPll2Pfd3Stable = CCM_ANALOG_TUPLE(PFD_528, CCM_ANALOG_PFD_528_PFD3_STABLE_SHIFT), /*!< CCM Analog PLL2 PFD3 clock stable query.*/
DECL|ccmAnalogPll3Pfd0ClkGate|enumerator|ccmAnalogPll3Pfd0ClkGate = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD0_CLKGATE_SHIFT), /*!< CCM Analog PLL3 PFD0 Clock Gate.*/
DECL|ccmAnalogPll3Pfd0Frac|enumerator|ccmAnalogPll3Pfd0Frac = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD0_FRAC_SHIFT), /*!< CCM Analog PLL3 PFD0 fractional divider.*/
DECL|ccmAnalogPll3Pfd0Stable|enumerator|ccmAnalogPll3Pfd0Stable = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD0_STABLE_SHIFT), /*!< CCM Analog PLL3 PFD0 clock stable query.*/
DECL|ccmAnalogPll3Pfd1ClkGate|enumerator|ccmAnalogPll3Pfd1ClkGate = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD1_CLKGATE_SHIFT), /*!< CCM Analog PLL3 PFD1 Clock Gate.*/
DECL|ccmAnalogPll3Pfd1Frac|enumerator|ccmAnalogPll3Pfd1Frac = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD1_FRAC_SHIFT), /*!< CCM Analog PLL3 PFD1 fractional divider.*/
DECL|ccmAnalogPll3Pfd1Stable|enumerator|ccmAnalogPll3Pfd1Stable = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD1_STABLE_SHIFT), /*!< CCM Analog PLL3 PFD1 clock stable query.*/
DECL|ccmAnalogPll3Pfd2ClkGate|enumerator|ccmAnalogPll3Pfd2ClkGate = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD2_CLKGATE_SHIFT), /*!< CCM Analog PLL3 PFD2 Clock Gate.*/
DECL|ccmAnalogPll3Pfd2Frac|enumerator|ccmAnalogPll3Pfd2Frac = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD2_FRAC_SHIFT), /*!< CCM Analog PLL3 PFD2 fractional divider.*/
DECL|ccmAnalogPll3Pfd2Stable|enumerator|ccmAnalogPll3Pfd2Stable = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD2_STABLE_SHIFT), /*!< CCM Analog PLL3 PFD2 clock stable query.*/
DECL|ccmAnalogPll3Pfd3ClkGate|enumerator|ccmAnalogPll3Pfd3ClkGate = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD3_CLKGATE_SHIFT), /*!< CCM Analog PLL3 PFD3 Clock Gate.*/
DECL|ccmAnalogPll3Pfd3Frac|enumerator|ccmAnalogPll3Pfd3Frac = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT), /*!< CCM Analog PLL3 PFD3 fractional divider.*/
DECL|ccmAnalogPll3Pfd3Stable|enumerator|ccmAnalogPll3Pfd3Stable = CCM_ANALOG_TUPLE(PFD_480, CCM_ANALOG_PFD_480_PFD3_STABLE_SHIFT), /*!< CCM Analog PLL3 PFD3 clock stable query.*/
DECL|ccmAnalogPllArmClock|enumerator|ccmAnalogPllArmClock = CCM_ANALOG_TUPLE(PLL_ARM, CCM_ANALOG_PLL_ARM_ENABLE_SHIFT), /*!< CCM Analog ARM PLL Clock.*/
DECL|ccmAnalogPllArmControl|enumerator|ccmAnalogPllArmControl = CCM_ANALOG_TUPLE(PLL_ARM, CCM_ANALOG_PLL_ARM_POWERDOWN_SHIFT), /*!< CCM Analog ARM PLL Control.*/
DECL|ccmAnalogPllAudioClock|enumerator|ccmAnalogPllAudioClock = CCM_ANALOG_TUPLE(PLL_AUDIO, CCM_ANALOG_PLL_AUDIO_ENABLE_SHIFT), /*!< CCM Analog AUDIO PLL Clock.*/
DECL|ccmAnalogPllAudioControl|enumerator|ccmAnalogPllAudioControl = CCM_ANALOG_TUPLE(PLL_AUDIO, CCM_ANALOG_PLL_AUDIO_POWERDOWN_SHIFT), /*!< CCM Analog AUDIO PLL Control.*/
DECL|ccmAnalogPllEnet1Clock125Mhz|enumerator|ccmAnalogPllEnet1Clock125Mhz = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENET1_125M_EN_SHIFT), /*!< CCM Analog ETHERNET1 125MHz PLL Clock.*/
DECL|ccmAnalogPllEnet2Clock125Mhz|enumerator|ccmAnalogPllEnet2Clock125Mhz = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENET2_125M_EN_SHIFT), /*!< CCM Analog ETHERNET2 125MHz PLL Clock.*/
DECL|ccmAnalogPllEnetClock25Mhz|enumerator|ccmAnalogPllEnetClock25Mhz = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_SHIFT), /*!< CCM Analog ETHERNET 25MHz PLL Clock.*/
DECL|ccmAnalogPllEnetControl|enumerator|ccmAnalogPllEnetControl = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_POWERDOWN_SHIFT), /*!< CCM Analog ETHERNET PLL Control.*/
DECL|ccmAnalogPllSysClock|enumerator|ccmAnalogPllSysClock = CCM_ANALOG_TUPLE(PLL_SYS, CCM_ANALOG_PLL_SYS_ENABLE_SHIFT), /*!< CCM Analog SYSTEM PLL Clock.*/
DECL|ccmAnalogPllSysControl|enumerator|ccmAnalogPllSysControl = CCM_ANALOG_TUPLE(PLL_SYS, CCM_ANALOG_PLL_SYS_POWERDOWN_SHIFT), /*!< CCM Analog SYSTEM PLL Control.*/
DECL|ccmAnalogPllUsb1Clock|enumerator|ccmAnalogPllUsb1Clock = CCM_ANALOG_TUPLE(PLL_USB1, CCM_ANALOG_PLL_USB1_ENABLE_SHIFT), /*!< CCM Analog USB1 PLL Clock.*/
DECL|ccmAnalogPllUsb1Control|enumerator|ccmAnalogPllUsb1Control = CCM_ANALOG_TUPLE(PLL_USB1, CCM_ANALOG_PLL_USB1_POWER_SHIFT), /*!< CCM Analog USB1 PLL Control.*/
DECL|ccmAnalogPllUsb2Clock|enumerator|ccmAnalogPllUsb2Clock = CCM_ANALOG_TUPLE(PLL_USB2, CCM_ANALOG_PLL_USB2_ENABLE_SHIFT), /*!< CCM Analog USB2 PLL Clock.*/
DECL|ccmAnalogPllUsb2Control|enumerator|ccmAnalogPllUsb2Control = CCM_ANALOG_TUPLE(PLL_USB2, CCM_ANALOG_PLL_USB2_POWER_SHIFT), /*!< CCM Analog USB2 PLL Control.*/
DECL|ccmAnalogPllVideoClock|enumerator|ccmAnalogPllVideoClock = CCM_ANALOG_TUPLE(PLL_VIDEO, CCM_ANALOG_PLL_VIDEO_ENABLE_SHIFT), /*!< CCM Analog VIDEO PLL Clock.*/
DECL|ccmAnalogPllVideoControl|enumerator|ccmAnalogPllVideoControl = CCM_ANALOG_TUPLE(PLL_VIDEO, CCM_ANALOG_PLL_VIDEO_POWERDOWN_SHIFT), /*!< CCM Analog VIDEO PLL Control.*/
