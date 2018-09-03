DECL|ADC_CLOCKS|macro|ADC_CLOCKS
DECL|AOI_CLOCKS|macro|AOI_CLOCKS
DECL|BEE_CLOCKS|macro|BEE_CLOCKS
DECL|CCM_ANALOG_PLL_BYPASS_CLK_SRC_MASK|macro|CCM_ANALOG_PLL_BYPASS_CLK_SRC_MASK
DECL|CCM_ANALOG_PLL_BYPASS_CLK_SRC_SHIFT|macro|CCM_ANALOG_PLL_BYPASS_CLK_SRC_SHIFT
DECL|CCM_ANALOG_PLL_BYPASS_SHIFT|macro|CCM_ANALOG_PLL_BYPASS_SHIFT
DECL|CCM_ANALOG_TUPLE_REG_OFF|macro|CCM_ANALOG_TUPLE_REG_OFF
DECL|CCM_ANALOG_TUPLE_REG|macro|CCM_ANALOG_TUPLE_REG
DECL|CCM_ANALOG_TUPLE_SHIFT|macro|CCM_ANALOG_TUPLE_SHIFT
DECL|CCM_ANALOG_TUPLE|macro|CCM_ANALOG_TUPLE
DECL|CCM_NO_BUSY_WAIT|macro|CCM_NO_BUSY_WAIT
DECL|CCM_TUPLE_BUSY_SHIFT|macro|CCM_TUPLE_BUSY_SHIFT
DECL|CCM_TUPLE_MASK|macro|CCM_TUPLE_MASK
DECL|CCM_TUPLE_REG|macro|CCM_TUPLE_REG
DECL|CCM_TUPLE_SHIFT|macro|CCM_TUPLE_SHIFT
DECL|CCM_TUPLE|macro|CCM_TUPLE
DECL|CLKPN_FREQ|macro|CLKPN_FREQ
DECL|CLOCK_ControlGate|function|static inline void CLOCK_ControlGate(clock_ip_name_t name, clock_gate_value_t value)
DECL|CLOCK_DisableClock|function|static inline void CLOCK_DisableClock(clock_ip_name_t name)
DECL|CLOCK_EnableClock|function|static inline void CLOCK_EnableClock(clock_ip_name_t name)
DECL|CLOCK_GetCoreSysClkFreq|macro|CLOCK_GetCoreSysClkFreq
DECL|CLOCK_GetCpuClkFreq|function|static inline uint32_t CLOCK_GetCpuClkFreq(void)
DECL|CLOCK_GetDiv|function|static inline uint32_t CLOCK_GetDiv(clock_div_t divider)
DECL|CLOCK_GetMux|function|static inline uint32_t CLOCK_GetMux(clock_mux_t mux)
DECL|CLOCK_GetOscFreq|function|static inline uint32_t CLOCK_GetOscFreq(void)
DECL|CLOCK_GetPllBypassRefClk|function|static inline uint32_t CLOCK_GetPllBypassRefClk(CCM_ANALOG_Type *base, clock_pll_t pll)
DECL|CLOCK_GetRtcFreq|function|static inline uint32_t CLOCK_GetRtcFreq(void)
DECL|CLOCK_IsPllBypassed|function|static inline bool CLOCK_IsPllBypassed(CCM_ANALOG_Type *base, clock_pll_t pll)
DECL|CLOCK_IsPllEnabled|function|static inline bool CLOCK_IsPllEnabled(CCM_ANALOG_Type *base, clock_pll_t pll)
DECL|CLOCK_SetDiv|function|static inline void CLOCK_SetDiv(clock_div_t divider, uint32_t value)
DECL|CLOCK_SetMode|function|static inline void CLOCK_SetMode(clock_mode_t mode)
DECL|CLOCK_SetMux|function|static inline void CLOCK_SetMux(clock_mux_t mux, uint32_t value)
DECL|CLOCK_SetPllBypassRefClkSrc|function|static inline void CLOCK_SetPllBypassRefClkSrc(CCM_ANALOG_Type *base, clock_pll_t pll, uint32_t src)
DECL|CLOCK_SetPllBypass|function|static inline void CLOCK_SetPllBypass(CCM_ANALOG_Type *base, clock_pll_t pll, bool bypass)
DECL|CLOCK_SetRtcXtalFreq|function|static inline void CLOCK_SetRtcXtalFreq(uint32_t freq)
DECL|CLOCK_SetXtal0Freq|macro|CLOCK_SetXtal0Freq
DECL|CLOCK_SetXtal32Freq|macro|CLOCK_SetXtal32Freq
DECL|CLOCK_SetXtalFreq|function|static inline void CLOCK_SetXtalFreq(uint32_t freq)
DECL|CMP_CLOCKS|macro|CMP_CLOCKS
DECL|CSI_CLOCKS|macro|CSI_CLOCKS
DECL|DCDC_CLOCKS|macro|DCDC_CLOCKS
DECL|DCP_CLOCKS|macro|DCP_CLOCKS
DECL|DMAMUX_CLOCKS|macro|DMAMUX_CLOCKS
DECL|EDMA_CLOCKS|macro|EDMA_CLOCKS
DECL|ENC_CLOCKS|macro|ENC_CLOCKS
DECL|ENET_CLOCKS|macro|ENET_CLOCKS
DECL|EWM_CLOCKS|macro|EWM_CLOCKS
DECL|FLEXCAN_CLOCKS|macro|FLEXCAN_CLOCKS
DECL|FLEXCAN_PERIPH_CLOCKS|macro|FLEXCAN_PERIPH_CLOCKS
DECL|FLEXIO_CLOCKS|macro|FLEXIO_CLOCKS
DECL|FLEXRAM_CLOCKS|macro|FLEXRAM_CLOCKS
DECL|FLEXSPI_CLOCKS|macro|FLEXSPI_CLOCKS
DECL|FLEXSPI_EXSC_CLOCKS|macro|FLEXSPI_EXSC_CLOCKS
DECL|FSL_CLOCK_DRIVER_VERSION|macro|FSL_CLOCK_DRIVER_VERSION
DECL|FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL|macro|FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL
DECL|GPIO_CLOCKS|macro|GPIO_CLOCKS
DECL|GPT_CLOCKS|macro|GPT_CLOCKS
DECL|KPP_CLOCKS|macro|KPP_CLOCKS
DECL|LCDIF_CLOCKS|macro|LCDIF_CLOCKS
DECL|LCDIF_PERIPH_CLOCKS|macro|LCDIF_PERIPH_CLOCKS
DECL|LPI2C_CLOCKS|macro|LPI2C_CLOCKS
DECL|LPSPI_CLOCKS|macro|LPSPI_CLOCKS
DECL|LPUART_CLOCKS|macro|LPUART_CLOCKS
DECL|MQS_CLOCKS|macro|MQS_CLOCKS
DECL|OCRAM_EXSC_CLOCKS|macro|OCRAM_EXSC_CLOCKS
DECL|PIT_CLOCKS|macro|PIT_CLOCKS
DECL|PWM_CLOCKS|macro|PWM_CLOCKS
DECL|PXP_CLOCKS|macro|PXP_CLOCKS
DECL|RTWDOG_CLOCKS|macro|RTWDOG_CLOCKS
DECL|SAI_CLOCKS|macro|SAI_CLOCKS
DECL|SEMC_CLOCKS|macro|SEMC_CLOCKS
DECL|SEMC_EXSC_CLOCKS|macro|SEMC_EXSC_CLOCKS
DECL|SPDIF_CLOCKS|macro|SPDIF_CLOCKS
DECL|TMR_CLOCKS|macro|TMR_CLOCKS
DECL|TRNG_CLOCKS|macro|TRNG_CLOCKS
DECL|TSC_CLOCKS|macro|TSC_CLOCKS
DECL|USDHC_CLOCKS|macro|USDHC_CLOCKS
DECL|WDOG_CLOCKS|macro|WDOG_CLOCKS
DECL|XBARA_CLOCKS|macro|XBARA_CLOCKS
DECL|XBARB_CLOCKS|macro|XBARB_CLOCKS
DECL|_FSL_CLOCK_H_|macro|_FSL_CLOCK_H_
DECL|_clock_arm_pll_config|struct|typedef struct _clock_arm_pll_config
DECL|_clock_audio_pll_config|struct|typedef struct _clock_audio_pll_config
DECL|_clock_div|enum|typedef enum _clock_div
DECL|_clock_enet_pll_config|struct|typedef struct _clock_enet_pll_config
DECL|_clock_gate_value|enum|typedef enum _clock_gate_value
DECL|_clock_ip_name|enum|typedef enum _clock_ip_name
DECL|_clock_mode_t|enum|typedef enum _clock_mode_t
DECL|_clock_mux|enum|typedef enum _clock_mux
DECL|_clock_name|enum|typedef enum _clock_name
DECL|_clock_osc|enum|typedef enum _clock_osc
DECL|_clock_pfd|enum|typedef enum _clock_pfd
DECL|_clock_pll_clk_src|enum|enum _clock_pll_clk_src
DECL|_clock_pll|enum|typedef enum _clock_pll
DECL|_clock_sys_pll_config|struct|typedef struct _clock_sys_pll_config
DECL|_clock_usb_phy_src|enum|typedef enum _clock_usb_phy_src
DECL|_clock_usb_pll_config|struct|typedef struct _clock_usb_pll_config
DECL|_clock_usb_src|enum|typedef enum _clock_usb_src
DECL|_clock_video_pll_config|struct|typedef struct _clock_video_pll_config
DECL|clock_arm_pll_config_t|typedef|} clock_arm_pll_config_t;
DECL|clock_audio_pll_config_t|typedef|} clock_audio_pll_config_t;
DECL|clock_div_t|typedef|} clock_div_t;
DECL|clock_enet_pll_config_t|typedef|} clock_enet_pll_config_t;
DECL|clock_gate_value_t|typedef|} clock_gate_value_t;
DECL|clock_ip_name_t|typedef|} clock_ip_name_t;
DECL|clock_mode_t|typedef|} clock_mode_t;
DECL|clock_mux_t|typedef|} clock_mux_t;
DECL|clock_name_t|typedef|} clock_name_t;
DECL|clock_osc_t|typedef|} clock_osc_t;
DECL|clock_pfd_t|typedef|} clock_pfd_t;
DECL|clock_pll_t|typedef|} clock_pll_t;
DECL|clock_sys_pll_config_t|typedef|} clock_sys_pll_config_t;
DECL|clock_usb_phy_src_t|typedef|} clock_usb_phy_src_t;
DECL|clock_usb_pll_config_t|typedef|} clock_usb_pll_config_t;
DECL|clock_usb_src_t|typedef|} clock_usb_src_t;
DECL|clock_video_pll_config_t|typedef|} clock_video_pll_config_t;
DECL|denominator|member|uint32_t denominator; /*!< 30 bit denominator of fractional loop divider */
DECL|denominator|member|uint32_t denominator; /*!< 30 bit denominator of fractional loop divider */
DECL|denominator|member|uint32_t denominator; /*!< 30 bit denominator of fractional loop divider */
DECL|enableClkOutput1|member|bool enableClkOutput1; /*!< Power on and enable PLL clock output for ENET1 (ref_enetpll1). */
DECL|enableClkOutput25M|member|bool enableClkOutput25M; /*!< Power on and enable PLL clock output for ENET2 (ref_enetpll2). */
DECL|enableClkOutput|member|bool enableClkOutput; /*!< Power on and enable PLL clock output for ENET0 (ref_enetpll0). */
DECL|kCLOCK_Acmp1|enumerator|kCLOCK_Acmp1 = (3U << 8U) | CCM_CCGR3_CG10_SHIFT, /*!< CCGR3, CG10 */
DECL|kCLOCK_Acmp2|enumerator|kCLOCK_Acmp2 = (3U << 8U) | CCM_CCGR3_CG11_SHIFT, /*!< CCGR3, CG11 */
DECL|kCLOCK_Acmp3|enumerator|kCLOCK_Acmp3 = (3U << 8U) | CCM_CCGR3_CG12_SHIFT, /*!< CCGR3, CG12 */
DECL|kCLOCK_Acmp4|enumerator|kCLOCK_Acmp4 = (3U << 8U) | CCM_CCGR3_CG13_SHIFT, /*!< CCGR3, CG13 */
DECL|kCLOCK_Adc1|enumerator|kCLOCK_Adc1 = (1U << 8U) | CCM_CCGR1_CG8_SHIFT, /*!< CCGR1, CG8 */
DECL|kCLOCK_Adc2|enumerator|kCLOCK_Adc2 = (1U << 8U) | CCM_CCGR1_CG4_SHIFT, /*!< CCGR1, CG4 */
DECL|kCLOCK_AhbClk|enumerator|kCLOCK_AhbClk = 0x1U, /*!< AHB clock */
DECL|kCLOCK_AhbDiv|enumerator|kCLOCK_AhbDiv = CCM_TUPLE(
DECL|kCLOCK_Aips_lite|enumerator|kCLOCK_Aips_lite = (7U << 8U) | CCM_CCGR7_CG5_SHIFT, /*!< CCGR7, CG5 */
DECL|kCLOCK_Aips_tz1|enumerator|kCLOCK_Aips_tz1 = (0U << 8U) | CCM_CCGR0_CG0_SHIFT, /*!< CCGR0, CG0 */
DECL|kCLOCK_Aips_tz2|enumerator|kCLOCK_Aips_tz2 = (0U << 8U) | CCM_CCGR0_CG1_SHIFT, /*!< CCGR0, CG1 */
DECL|kCLOCK_Aips_tz3|enumerator|kCLOCK_Aips_tz3 = (6U << 8U) | CCM_CCGR6_CG9_SHIFT, /*!< CCGR6, CG9 */
DECL|kCLOCK_Aips_tz4|enumerator|kCLOCK_Aips_tz4 = (5U << 8U) | CCM_CCGR5_CG6_SHIFT, /*!< CCGR5, CG6 */
DECL|kCLOCK_Anadig|enumerator|kCLOCK_Anadig = (6U << 8U) | CCM_CCGR6_CG11_SHIFT, /*!< CCGR6, CG11 */
DECL|kCLOCK_Aoi1|enumerator|kCLOCK_Aoi1 = (3U << 8U) | CCM_CCGR3_CG4_SHIFT, /*!< CCGR3, CG4 */
DECL|kCLOCK_Aoi2|enumerator|kCLOCK_Aoi2 = (1U << 8U) | CCM_CCGR1_CG7_SHIFT, /*!< CCGR1, CG7 */
DECL|kCLOCK_ArmDiv|enumerator|kCLOCK_ArmDiv = CCM_TUPLE(
DECL|kCLOCK_ArmPllClk|enumerator|kCLOCK_ArmPllClk = 0x7U, /*!< ARMPLLCLK. */
DECL|kCLOCK_AudioPllClk|enumerator|kCLOCK_AudioPllClk = 0x16U, /*!< Audio PLLCLK. */
DECL|kCLOCK_Axbs_l|enumerator|kCLOCK_Axbs_l = (7U << 8U) | CCM_CCGR7_CG2_SHIFT, /*!< CCGR7, CG2 */
DECL|kCLOCK_Bee|enumerator|kCLOCK_Bee = (4U << 8U) | CCM_CCGR4_CG3_SHIFT, /*!< CCGR4, CG3 */
DECL|kCLOCK_Can1S|enumerator|kCLOCK_Can1S = (0U << 8U) | CCM_CCGR0_CG8_SHIFT, /*!< CCGR0, CG8 */
DECL|kCLOCK_Can1|enumerator|kCLOCK_Can1 = (0U << 8U) | CCM_CCGR0_CG7_SHIFT, /*!< CCGR0, CG7 */
DECL|kCLOCK_Can2S|enumerator|kCLOCK_Can2S = (0U << 8U) | CCM_CCGR0_CG10_SHIFT, /*!< CCGR0, CG10 */
DECL|kCLOCK_Can2|enumerator|kCLOCK_Can2 = (0U << 8U) | CCM_CCGR0_CG9_SHIFT, /*!< CCGR0, CG9 */
DECL|kCLOCK_Can3S|enumerator|kCLOCK_Can3S = (7U << 8U) | CCM_CCGR7_CG4_SHIFT, /*!< CCGR7, CG4 */
DECL|kCLOCK_Can3|enumerator|kCLOCK_Can3 = (7U << 8U) | CCM_CCGR7_CG3_SHIFT, /*!< CCGR7, CG3 */
DECL|kCLOCK_CanDiv|enumerator|kCLOCK_CanDiv = CCM_TUPLE(
DECL|kCLOCK_CanMux|enumerator|kCLOCK_CanMux = CCM_TUPLE(
DECL|kCLOCK_ClockNeededRunWait|enumerator|kCLOCK_ClockNeededRunWait = 3U, /*!< Clock is on during all modes, except STOP mode */
DECL|kCLOCK_ClockNeededRun|enumerator|kCLOCK_ClockNeededRun = 1U, /*!< Clock is on in run mode, but off in WAIT and STOP modes */
DECL|kCLOCK_ClockNotNeeded|enumerator|kCLOCK_ClockNotNeeded = 0U, /*!< Clock is off during all modes. */
DECL|kCLOCK_CoreSysClk|macro|kCLOCK_CoreSysClk
DECL|kCLOCK_CpuClk|enumerator|kCLOCK_CpuClk = 0x0U, /*!< CPU clock */
DECL|kCLOCK_CsiDiv|enumerator|kCLOCK_CsiDiv =
DECL|kCLOCK_CsiMux|enumerator|kCLOCK_CsiMux = CCM_TUPLE(
DECL|kCLOCK_Csi|enumerator|kCLOCK_Csi = (2U << 8U) | CCM_CCGR2_CG1_SHIFT, /*!< CCGR2, CG1 */
DECL|kCLOCK_Csu|enumerator|kCLOCK_Csu = (1U << 8U) | CCM_CCGR1_CG14_SHIFT, /*!< CCGR1, CG14 */
DECL|kCLOCK_Dcdc|enumerator|kCLOCK_Dcdc = (6U << 8U) | CCM_CCGR6_CG3_SHIFT, /*!< CCGR6, CG3 */
DECL|kCLOCK_Dcp|enumerator|kCLOCK_Dcp = (0U << 8U) | CCM_CCGR0_CG5_SHIFT, /*!< CCGR0, CG5 */
DECL|kCLOCK_Dma|enumerator|kCLOCK_Dma = (5U << 8U) | CCM_CCGR5_CG3_SHIFT, /*!< CCGR5, CG3 */
DECL|kCLOCK_Enc1|enumerator|kCLOCK_Enc1 = (4U << 8U) | CCM_CCGR4_CG12_SHIFT, /*!< CCGR4, CG12 */
DECL|kCLOCK_Enc2|enumerator|kCLOCK_Enc2 = (4U << 8U) | CCM_CCGR4_CG13_SHIFT, /*!< CCGR4, CG13 */
DECL|kCLOCK_Enc3|enumerator|kCLOCK_Enc3 = (4U << 8U) | CCM_CCGR4_CG14_SHIFT, /*!< CCGR4, CG14 */
DECL|kCLOCK_Enc4|enumerator|kCLOCK_Enc4 = (4U << 8U) | CCM_CCGR4_CG15_SHIFT, /*!< CCGR4, CG15 */
DECL|kCLOCK_Enet2|enumerator|kCLOCK_Enet2 = (7U << 8U) | CCM_CCGR7_CG0_SHIFT, /*!< CCGR7, CG0 */
DECL|kCLOCK_EnetPll0Clk|enumerator|kCLOCK_EnetPll0Clk = 0x13U, /*!< Enet PLLCLK ref_enetpll0. */
DECL|kCLOCK_EnetPll1Clk|enumerator|kCLOCK_EnetPll1Clk = 0x14U, /*!< Enet PLLCLK ref_enetpll1. */
DECL|kCLOCK_EnetPll2Clk|enumerator|kCLOCK_EnetPll2Clk = 0x15U, /*!< Enet PLLCLK ref_enetpll2. */
DECL|kCLOCK_Enet|enumerator|kCLOCK_Enet = (1U << 8U) | CCM_CCGR1_CG5_SHIFT, /*!< CCGR1, CG5 */
DECL|kCLOCK_Ewm0|enumerator|kCLOCK_Ewm0 = (3U << 8U) | CCM_CCGR3_CG7_SHIFT, /*!< CCGR3, CG7 */
DECL|kCLOCK_FlexRam|enumerator|kCLOCK_FlexRam = (3U << 8U) | CCM_CCGR3_CG9_SHIFT, /*!< CCGR3, CG9 */
DECL|kCLOCK_FlexSpi2|enumerator|kCLOCK_FlexSpi2 = (7U << 8U) | CCM_CCGR7_CG1_SHIFT, /*!< CCGR7, CG1 */
DECL|kCLOCK_FlexSpiExsc|enumerator|kCLOCK_FlexSpiExsc = (0U << 8U) | CCM_CCGR0_CG3_SHIFT, /*!< CCGR0, CG3 */
DECL|kCLOCK_FlexSpi|enumerator|kCLOCK_FlexSpi = (6U << 8U) | CCM_CCGR6_CG5_SHIFT, /*!< CCGR6, CG5 */
DECL|kCLOCK_Flexio1Div|enumerator|kCLOCK_Flexio1Div = CCM_TUPLE(CDCDR,
DECL|kCLOCK_Flexio1Mux|enumerator|kCLOCK_Flexio1Mux = CCM_TUPLE(CDCDR,
DECL|kCLOCK_Flexio1PreDiv|enumerator|kCLOCK_Flexio1PreDiv = CCM_TUPLE(CDCDR,
DECL|kCLOCK_Flexio1|enumerator|kCLOCK_Flexio1 = (5U << 8U) | CCM_CCGR5_CG1_SHIFT, /*!< CCGR5, CG1 */
DECL|kCLOCK_Flexio2Div|enumerator|kCLOCK_Flexio2Div = CCM_TUPLE(CS1CDR,
DECL|kCLOCK_Flexio2Mux|enumerator|kCLOCK_Flexio2Mux = CCM_TUPLE(CSCMR2,
DECL|kCLOCK_Flexio2PreDiv|enumerator|kCLOCK_Flexio2PreDiv = CCM_TUPLE(CS1CDR,
DECL|kCLOCK_Flexio2|enumerator|kCLOCK_Flexio2 = (3U << 8U) | CCM_CCGR3_CG0_SHIFT, /*!< CCGR3, CG0 */
DECL|kCLOCK_Flexio3|enumerator|kCLOCK_Flexio3 = (7U << 8U) | CCM_CCGR7_CG6_SHIFT, /*!< CCGR7, CG6 */
DECL|kCLOCK_Flexspi2Div|enumerator|kCLOCK_Flexspi2Div = CCM_TUPLE(
DECL|kCLOCK_Flexspi2Mux|enumerator|kCLOCK_Flexspi2Mux = CCM_TUPLE(CBCMR,
DECL|kCLOCK_FlexspiDiv|enumerator|kCLOCK_FlexspiDiv = CCM_TUPLE(
DECL|kCLOCK_FlexspiMux|enumerator|kCLOCK_FlexspiMux = CCM_TUPLE(CSCMR1,
DECL|kCLOCK_Gpio1|enumerator|kCLOCK_Gpio1 = (1U << 8U) | CCM_CCGR1_CG13_SHIFT, /*!< CCGR1, CG13 */
DECL|kCLOCK_Gpio2|enumerator|kCLOCK_Gpio2 = (0U << 8U) | CCM_CCGR0_CG15_SHIFT, /*!< CCGR0, CG15 */
DECL|kCLOCK_Gpio3|enumerator|kCLOCK_Gpio3 = (2U << 8U) | CCM_CCGR2_CG13_SHIFT, /*!< CCGR2, CG13 */
DECL|kCLOCK_Gpio4|enumerator|kCLOCK_Gpio4 = (3U << 8U) | CCM_CCGR3_CG6_SHIFT, /*!< CCGR3, CG6 */
DECL|kCLOCK_Gpio5|enumerator|kCLOCK_Gpio5 = (1U << 8U) | CCM_CCGR1_CG15_SHIFT, /*!< CCGR1, CG15 */
DECL|kCLOCK_Gpt1S|enumerator|kCLOCK_Gpt1S = (1U << 8U) | CCM_CCGR1_CG11_SHIFT, /*!< CCGR1, CG11 */
DECL|kCLOCK_Gpt1|enumerator|kCLOCK_Gpt1 = (1U << 8U) | CCM_CCGR1_CG10_SHIFT, /*!< CCGR1, CG10 */
DECL|kCLOCK_Gpt2S|enumerator|kCLOCK_Gpt2S = (0U << 8U) | CCM_CCGR0_CG13_SHIFT, /*!< CCGR0, CG13 */
DECL|kCLOCK_Gpt2|enumerator|kCLOCK_Gpt2 = (0U << 8U) | CCM_CCGR0_CG12_SHIFT, /*!< CCGR0, CG12 */
DECL|kCLOCK_IomuxcGpr|enumerator|kCLOCK_IomuxcGpr = (4U << 8U) | CCM_CCGR4_CG2_SHIFT, /*!< CCGR4, CG2 */
DECL|kCLOCK_IomuxcSnvsGpr|enumerator|kCLOCK_IomuxcSnvsGpr = (3U << 8U) | CCM_CCGR3_CG15_SHIFT, /*!< CCGR3, CG15 */
DECL|kCLOCK_IomuxcSnvs|enumerator|kCLOCK_IomuxcSnvs = (2U << 8U) | CCM_CCGR2_CG2_SHIFT, /*!< CCGR2, CG2 */
DECL|kCLOCK_Iomuxc|enumerator|kCLOCK_Iomuxc = (4U << 8U) | CCM_CCGR4_CG1_SHIFT, /*!< CCGR4, CG1 */
DECL|kCLOCK_IpInvalid|enumerator|kCLOCK_IpInvalid = -1,
DECL|kCLOCK_IpgClk|enumerator|kCLOCK_IpgClk = 0x3U, /*!< IPG clock */
DECL|kCLOCK_IpgDiv|enumerator|kCLOCK_IpgDiv =
DECL|kCLOCK_Ipmux1|enumerator|kCLOCK_Ipmux1 = (2U << 8U) | CCM_CCGR2_CG8_SHIFT, /*!< CCGR2, CG8 */
DECL|kCLOCK_Ipmux2|enumerator|kCLOCK_Ipmux2 = (2U << 8U) | CCM_CCGR2_CG9_SHIFT, /*!< CCGR2, CG9 */
DECL|kCLOCK_Ipmux3|enumerator|kCLOCK_Ipmux3 = (2U << 8U) | CCM_CCGR2_CG10_SHIFT, /*!< CCGR2, CG10 */
DECL|kCLOCK_Ipmux4|enumerator|kCLOCK_Ipmux4 = (6U << 8U) | CCM_CCGR6_CG4_SHIFT, /*!< CCGR6, CG4 */
DECL|kCLOCK_Kpp|enumerator|kCLOCK_Kpp = (5U << 8U) | CCM_CCGR5_CG4_SHIFT, /*!< CCGR5, CG4 */
DECL|kCLOCK_LcdPixel|enumerator|kCLOCK_LcdPixel = (3U << 8U) | CCM_CCGR3_CG5_SHIFT, /*!< CCGR3, CG5 */
DECL|kCLOCK_LcdifDiv|enumerator|kCLOCK_LcdifDiv = CCM_TUPLE(
DECL|kCLOCK_LcdifPreDiv|enumerator|kCLOCK_LcdifPreDiv = CCM_TUPLE(
DECL|kCLOCK_LcdifPreMux|enumerator|kCLOCK_LcdifPreMux = CCM_TUPLE(CSCDR2,
DECL|kCLOCK_Lcd|enumerator|kCLOCK_Lcd = (2U << 8U) | CCM_CCGR2_CG14_SHIFT, /*!< CCGR2, CG14 */
DECL|kCLOCK_Lpi2c1|enumerator|kCLOCK_Lpi2c1 = (2U << 8U) | CCM_CCGR2_CG3_SHIFT, /*!< CCGR2, CG3 */
DECL|kCLOCK_Lpi2c2|enumerator|kCLOCK_Lpi2c2 = (2U << 8U) | CCM_CCGR2_CG4_SHIFT, /*!< CCGR2, CG4 */
DECL|kCLOCK_Lpi2c3|enumerator|kCLOCK_Lpi2c3 = (2U << 8U) | CCM_CCGR2_CG5_SHIFT, /*!< CCGR2, CG5 */
DECL|kCLOCK_Lpi2c4|enumerator|kCLOCK_Lpi2c4 = (6U << 8U) | CCM_CCGR6_CG12_SHIFT, /*!< CCGR6, CG12 */
DECL|kCLOCK_Lpi2cDiv|enumerator|kCLOCK_Lpi2cDiv = CCM_TUPLE(CSCDR2,
DECL|kCLOCK_Lpi2cMux|enumerator|kCLOCK_Lpi2cMux = CCM_TUPLE(
DECL|kCLOCK_Lpspi1|enumerator|kCLOCK_Lpspi1 = (1U << 8U) | CCM_CCGR1_CG0_SHIFT, /*!< CCGR1, CG0 */
DECL|kCLOCK_Lpspi2|enumerator|kCLOCK_Lpspi2 = (1U << 8U) | CCM_CCGR1_CG1_SHIFT, /*!< CCGR1, CG1 */
DECL|kCLOCK_Lpspi3|enumerator|kCLOCK_Lpspi3 = (1U << 8U) | CCM_CCGR1_CG2_SHIFT, /*!< CCGR1, CG2 */
DECL|kCLOCK_Lpspi4|enumerator|kCLOCK_Lpspi4 = (1U << 8U) | CCM_CCGR1_CG3_SHIFT, /*!< CCGR1, CG3 */
DECL|kCLOCK_LpspiDiv|enumerator|kCLOCK_LpspiDiv = CCM_TUPLE(
DECL|kCLOCK_LpspiMux|enumerator|kCLOCK_LpspiMux = CCM_TUPLE(
DECL|kCLOCK_Lpuart1|enumerator|kCLOCK_Lpuart1 = (5U << 8U) | CCM_CCGR5_CG12_SHIFT, /*!< CCGR5, CG12 */
DECL|kCLOCK_Lpuart2|enumerator|kCLOCK_Lpuart2 = (0U << 8U) | CCM_CCGR0_CG14_SHIFT, /*!< CCGR0, CG14 */
DECL|kCLOCK_Lpuart3|enumerator|kCLOCK_Lpuart3 = (0U << 8U) | CCM_CCGR0_CG6_SHIFT, /*!< CCGR0, CG6 */
DECL|kCLOCK_Lpuart4|enumerator|kCLOCK_Lpuart4 = (1U << 8U) | CCM_CCGR1_CG12_SHIFT, /*!< CCGR1, CG12 */
DECL|kCLOCK_Lpuart5|enumerator|kCLOCK_Lpuart5 = (3U << 8U) | CCM_CCGR3_CG1_SHIFT, /*!< CCGR3, CG1 */
DECL|kCLOCK_Lpuart6|enumerator|kCLOCK_Lpuart6 = (3U << 8U) | CCM_CCGR3_CG3_SHIFT, /*!< CCGR3, CG3 */
DECL|kCLOCK_Lpuart7|enumerator|kCLOCK_Lpuart7 = (5U << 8U) | CCM_CCGR5_CG13_SHIFT, /*!< CCGR5, CG13 */
DECL|kCLOCK_Lpuart8|enumerator|kCLOCK_Lpuart8 = (6U << 8U) | CCM_CCGR6_CG7_SHIFT, /*!< CCGR6, CG7 */
DECL|kCLOCK_ModeRun|enumerator|kCLOCK_ModeRun = 0U, /*!< Remain in run mode. */
DECL|kCLOCK_ModeStop|enumerator|kCLOCK_ModeStop = 2U, /*!< Transfer to stop mode. */
DECL|kCLOCK_ModeWait|enumerator|kCLOCK_ModeWait = 1U, /*!< Transfer to wait mode. */
DECL|kCLOCK_Mqs|enumerator|kCLOCK_Mqs = (0U << 8U) | CCM_CCGR0_CG2_SHIFT, /*!< CCGR0, CG2 */
DECL|kCLOCK_Ocotp|enumerator|kCLOCK_Ocotp = (2U << 8U) | CCM_CCGR2_CG6_SHIFT, /*!< CCGR2, CG6 */
DECL|kCLOCK_OcramExsc|enumerator|kCLOCK_OcramExsc = (2U << 8U) | CCM_CCGR2_CG0_SHIFT, /*!< CCGR2, CG0 */
DECL|kCLOCK_Ocram|enumerator|kCLOCK_Ocram = (3U << 8U) | CCM_CCGR3_CG14_SHIFT, /*!< CCGR3, CG14 */
DECL|kCLOCK_OscClk|enumerator|kCLOCK_OscClk = 0x5U, /*!< OSC clock selected by PMU_LOWPWR_CTRL[OSC_SEL]. */
DECL|kCLOCK_PerClk|enumerator|kCLOCK_PerClk = 0x4U, /*!< PER clock */
DECL|kCLOCK_PerclkDiv|enumerator|kCLOCK_PerclkDiv = CCM_TUPLE(
DECL|kCLOCK_PerclkMux|enumerator|kCLOCK_PerclkMux = CCM_TUPLE(CSCMR1,
DECL|kCLOCK_PeriphClk2Div|enumerator|kCLOCK_PeriphClk2Div = CCM_TUPLE(CBCDR,
DECL|kCLOCK_PeriphClk2Mux|enumerator|kCLOCK_PeriphClk2Mux = CCM_TUPLE(CBCMR,
DECL|kCLOCK_PeriphMux|enumerator|kCLOCK_PeriphMux = CCM_TUPLE(CBCDR,
DECL|kCLOCK_Pfd0|enumerator|kCLOCK_Pfd0 = 0U, /*!< PLL PFD0 */
DECL|kCLOCK_Pfd1|enumerator|kCLOCK_Pfd1 = 1U, /*!< PLL PFD1 */
DECL|kCLOCK_Pfd2|enumerator|kCLOCK_Pfd2 = 2U, /*!< PLL PFD2 */
DECL|kCLOCK_Pfd3|enumerator|kCLOCK_Pfd3 = 3U, /*!< PLL PFD3 */
DECL|kCLOCK_Pit|enumerator|kCLOCK_Pit = (1U << 8U) | CCM_CCGR1_CG6_SHIFT, /*!< CCGR1, CG6 */
DECL|kCLOCK_Pll3SwMux|enumerator|kCLOCK_Pll3SwMux = CCM_TUPLE(CCSR,
DECL|kCLOCK_PllArm|enumerator|kCLOCK_PllArm = CCM_ANALOG_TUPLE(PLL_ARM, CCM_ANALOG_PLL_ARM_ENABLE_SHIFT), /*!< PLL ARM */
DECL|kCLOCK_PllAudio|enumerator|kCLOCK_PllAudio = CCM_ANALOG_TUPLE(PLL_AUDIO, CCM_ANALOG_PLL_AUDIO_ENABLE_SHIFT), /*!< PLL Audio */
DECL|kCLOCK_PllClkSrc24M|enumerator|kCLOCK_PllClkSrc24M = 0U, /*!< Pll clock source 24M */
DECL|kCLOCK_PllEnet25M|enumerator|kCLOCK_PllEnet25M = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_SHIFT), /*!< PLL Enet2 */
DECL|kCLOCK_PllEnet2|enumerator|kCLOCK_PllEnet2 = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENET2_REF_EN_SHIFT), /*!< PLL Enet1 */
DECL|kCLOCK_PllEnet|enumerator|kCLOCK_PllEnet = CCM_ANALOG_TUPLE(PLL_ENET, CCM_ANALOG_PLL_ENET_ENABLE_SHIFT), /*!< PLL Enet0 */
DECL|kCLOCK_PllSrcClkPN|enumerator|kCLOCK_PllSrcClkPN = 1U, /*!< Pll clock source CLK1_P and CLK1_N */
DECL|kCLOCK_PllSys|enumerator|kCLOCK_PllSys = CCM_ANALOG_TUPLE(PLL_SYS, CCM_ANALOG_PLL_SYS_ENABLE_SHIFT), /*!< PLL SYS */
DECL|kCLOCK_PllUsb1|enumerator|kCLOCK_PllUsb1 = CCM_ANALOG_TUPLE(PLL_USB1, CCM_ANALOG_PLL_USB1_ENABLE_SHIFT), /*!< PLL USB1 */
DECL|kCLOCK_PllUsb2|enumerator|kCLOCK_PllUsb2 = CCM_ANALOG_TUPLE(PLL_USB2, CCM_ANALOG_PLL_USB2_ENABLE_SHIFT), /*!< PLL USB2 */
DECL|kCLOCK_PllVideo|enumerator|kCLOCK_PllVideo = CCM_ANALOG_TUPLE(PLL_VIDEO, CCM_ANALOG_PLL_VIDEO_ENABLE_SHIFT), /*!< PLL Video */
DECL|kCLOCK_PrePeriphMux|enumerator|kCLOCK_PrePeriphMux = CCM_TUPLE(CBCMR,
DECL|kCLOCK_Pwm1|enumerator|kCLOCK_Pwm1 = (4U << 8U) | CCM_CCGR4_CG8_SHIFT, /*!< CCGR4, CG8 */
DECL|kCLOCK_Pwm2|enumerator|kCLOCK_Pwm2 = (4U << 8U) | CCM_CCGR4_CG9_SHIFT, /*!< CCGR4, CG9 */
DECL|kCLOCK_Pwm3|enumerator|kCLOCK_Pwm3 = (4U << 8U) | CCM_CCGR4_CG10_SHIFT, /*!< CCGR4, CG10 */
DECL|kCLOCK_Pwm4|enumerator|kCLOCK_Pwm4 = (4U << 8U) | CCM_CCGR4_CG11_SHIFT, /*!< CCGR4, CG11 */
DECL|kCLOCK_Pxp|enumerator|kCLOCK_Pxp = (2U << 8U) | CCM_CCGR2_CG15_SHIFT, /*!< CCGR2, CG15 */
DECL|kCLOCK_RcOsc|enumerator|kCLOCK_RcOsc = 0U, /*!< On chip OSC. */
DECL|kCLOCK_Rom|enumerator|kCLOCK_Rom = (5U << 8U) | CCM_CCGR5_CG0_SHIFT, /*!< CCGR5, CG0 */
DECL|kCLOCK_RtcClk|enumerator|kCLOCK_RtcClk = 0x6U, /*!< RTC clock. (RTCCLK) */
DECL|kCLOCK_Sai1Div|enumerator|kCLOCK_Sai1Div = CCM_TUPLE(
DECL|kCLOCK_Sai1Mux|enumerator|kCLOCK_Sai1Mux = CCM_TUPLE(
DECL|kCLOCK_Sai1PreDiv|enumerator|kCLOCK_Sai1PreDiv = CCM_TUPLE(CS1CDR,
DECL|kCLOCK_Sai1|enumerator|kCLOCK_Sai1 = (5U << 8U) | CCM_CCGR5_CG9_SHIFT, /*!< CCGR5, CG9 */
DECL|kCLOCK_Sai2Div|enumerator|kCLOCK_Sai2Div = CCM_TUPLE(
DECL|kCLOCK_Sai2Mux|enumerator|kCLOCK_Sai2Mux = CCM_TUPLE(
DECL|kCLOCK_Sai2PreDiv|enumerator|kCLOCK_Sai2PreDiv = CCM_TUPLE(CS2CDR,
DECL|kCLOCK_Sai2|enumerator|kCLOCK_Sai2 = (5U << 8U) | CCM_CCGR5_CG10_SHIFT, /*!< CCGR5, CG10 */
DECL|kCLOCK_Sai3Div|enumerator|kCLOCK_Sai3Div = CCM_TUPLE(
DECL|kCLOCK_Sai3Mux|enumerator|kCLOCK_Sai3Mux = CCM_TUPLE(
DECL|kCLOCK_Sai3PreDiv|enumerator|kCLOCK_Sai3PreDiv = CCM_TUPLE(CS1CDR,
DECL|kCLOCK_Sai3|enumerator|kCLOCK_Sai3 = (5U << 8U) | CCM_CCGR5_CG11_SHIFT, /*!< CCGR5, CG11 */
DECL|kCLOCK_SemcAltMux|enumerator|kCLOCK_SemcAltMux = CCM_TUPLE(CBCDR,
DECL|kCLOCK_SemcClk|enumerator|kCLOCK_SemcClk = 0x2U, /*!< SEMC clock */
DECL|kCLOCK_SemcDiv|enumerator|kCLOCK_SemcDiv = CCM_TUPLE(CBCDR,
DECL|kCLOCK_SemcExsc|enumerator|kCLOCK_SemcExsc = (1U << 8U) | CCM_CCGR1_CG9_SHIFT, /*!< CCGR1, CG9 */
DECL|kCLOCK_SemcMux|enumerator|kCLOCK_SemcMux = CCM_TUPLE(
DECL|kCLOCK_Semc|enumerator|kCLOCK_Semc = (3U << 8U) | CCM_CCGR3_CG2_SHIFT, /*!< CCGR3, CG2 */
DECL|kCLOCK_SimEms|enumerator|kCLOCK_SimEms = (4U << 8U) | CCM_CCGR4_CG7_SHIFT, /*!< CCGR4, CG7 */
DECL|kCLOCK_SimM7|enumerator|kCLOCK_SimM7 = (4U << 8U) | CCM_CCGR4_CG4_SHIFT, /*!< CCGR4, CG4 */
DECL|kCLOCK_SimMain|enumerator|kCLOCK_SimMain = (5U << 8U) | CCM_CCGR5_CG8_SHIFT, /*!< CCGR5, CG8 */
DECL|kCLOCK_SimM|enumerator|kCLOCK_SimM = (4U << 8U) | CCM_CCGR4_CG6_SHIFT, /*!< CCGR4, CG6 */
DECL|kCLOCK_SimPer|enumerator|kCLOCK_SimPer = (6U << 8U) | CCM_CCGR6_CG10_SHIFT, /*!< CCGR6, CG10 */
DECL|kCLOCK_Sim_M_Main|enumerator|kCLOCK_Sim_M_Main = (0U << 8U) | CCM_CCGR0_CG4_SHIFT, /*!< CCGR0, CG4 */
DECL|kCLOCK_SnvsHp|enumerator|kCLOCK_SnvsHp = (5U << 8U) | CCM_CCGR5_CG14_SHIFT, /*!< CCGR5, CG14 */
DECL|kCLOCK_SnvsLp|enumerator|kCLOCK_SnvsLp = (5U << 8U) | CCM_CCGR5_CG15_SHIFT, /*!< CCGR5, CG15 */
DECL|kCLOCK_Spdif0Div|enumerator|kCLOCK_Spdif0Div = CCM_TUPLE(CDCDR,
DECL|kCLOCK_Spdif0PreDiv|enumerator|kCLOCK_Spdif0PreDiv = CCM_TUPLE(CDCDR,
DECL|kCLOCK_SpdifMux|enumerator|kCLOCK_SpdifMux = CCM_TUPLE(
DECL|kCLOCK_Spdif|enumerator|kCLOCK_Spdif = (5U << 8U) | CCM_CCGR5_CG7_SHIFT, /*!< CCGR5, CG7 */
DECL|kCLOCK_SysPllClk|enumerator|kCLOCK_SysPllClk = 0xEU, /*!< SYSPLLCLK. */
DECL|kCLOCK_SysPllPfd0Clk|enumerator|kCLOCK_SysPllPfd0Clk = 0xFU, /*!< SYSPLLPDF0CLK. */
DECL|kCLOCK_SysPllPfd1Clk|enumerator|kCLOCK_SysPllPfd1Clk = 0x10U, /*!< SYSPLLPFD1CLK. */
DECL|kCLOCK_SysPllPfd2Clk|enumerator|kCLOCK_SysPllPfd2Clk = 0x11U, /*!< SYSPLLPFD2CLK. */
DECL|kCLOCK_SysPllPfd3Clk|enumerator|kCLOCK_SysPllPfd3Clk = 0x12U, /*!< SYSPLLPFD3CLK. */
DECL|kCLOCK_Timer1|enumerator|kCLOCK_Timer1 = (6U << 8U) | CCM_CCGR6_CG13_SHIFT, /*!< CCGR6, CG13 */
DECL|kCLOCK_Timer2|enumerator|kCLOCK_Timer2 = (6U << 8U) | CCM_CCGR6_CG14_SHIFT, /*!< CCGR6, CG14 */
DECL|kCLOCK_Timer3|enumerator|kCLOCK_Timer3 = (6U << 8U) | CCM_CCGR6_CG15_SHIFT, /*!< CCGR6, CG15 */
DECL|kCLOCK_Timer4|enumerator|kCLOCK_Timer4 = (6U << 8U) | CCM_CCGR6_CG8_SHIFT, /*!< CCGR6, CG8 */
DECL|kCLOCK_TraceDiv|enumerator|kCLOCK_TraceDiv = CCM_TUPLE(
DECL|kCLOCK_TraceMux|enumerator|kCLOCK_TraceMux = CCM_TUPLE(
DECL|kCLOCK_Trace|enumerator|kCLOCK_Trace = (0U << 8U) | CCM_CCGR0_CG11_SHIFT, /*!< CCGR0, CG11 */
DECL|kCLOCK_Trng|enumerator|kCLOCK_Trng = (6U << 8U) | CCM_CCGR6_CG6_SHIFT, /*!< CCGR6, CG6 */
DECL|kCLOCK_Tsc|enumerator|kCLOCK_Tsc = (4U << 8U) | CCM_CCGR4_CG5_SHIFT, /*!< CCGR4, CG5 */
DECL|kCLOCK_UartDiv|enumerator|kCLOCK_UartDiv = CCM_TUPLE(
DECL|kCLOCK_UartMux|enumerator|kCLOCK_UartMux = CCM_TUPLE(
DECL|kCLOCK_Usb1PllClk|enumerator|kCLOCK_Usb1PllClk = 0x8U, /*!< USB1PLLCLK. */
DECL|kCLOCK_Usb1PllPfd0Clk|enumerator|kCLOCK_Usb1PllPfd0Clk = 0x9U, /*!< USB1PLLPDF0CLK. */
DECL|kCLOCK_Usb1PllPfd1Clk|enumerator|kCLOCK_Usb1PllPfd1Clk = 0xAU, /*!< USB1PLLPFD1CLK. */
DECL|kCLOCK_Usb1PllPfd2Clk|enumerator|kCLOCK_Usb1PllPfd2Clk = 0xBU, /*!< USB1PLLPFD2CLK. */
DECL|kCLOCK_Usb1PllPfd3Clk|enumerator|kCLOCK_Usb1PllPfd3Clk = 0xCU, /*!< USB1PLLPFD3CLK. */
DECL|kCLOCK_Usb2PllClk|enumerator|kCLOCK_Usb2PllClk = 0xDU, /*!< USB2PLLCLK. */
DECL|kCLOCK_Usb480M|enumerator|kCLOCK_Usb480M = 0, /*!< Use 480M. */
DECL|kCLOCK_UsbOh3|enumerator|kCLOCK_UsbOh3 = (6U << 8U) | CCM_CCGR6_CG0_SHIFT, /*!< CCGR6, CG0 */
DECL|kCLOCK_UsbSrcUnused|enumerator|kCLOCK_UsbSrcUnused = 0xFFFFFFFFU, /*!< Used when the function does not
DECL|kCLOCK_Usbphy480M|enumerator|kCLOCK_Usbphy480M = 0, /*!< Use 480M. */
DECL|kCLOCK_Usdhc1Div|enumerator|kCLOCK_Usdhc1Div = CCM_TUPLE(
DECL|kCLOCK_Usdhc1Mux|enumerator|kCLOCK_Usdhc1Mux = CCM_TUPLE(CSCMR1,
DECL|kCLOCK_Usdhc1|enumerator|kCLOCK_Usdhc1 = (6U << 8U) | CCM_CCGR6_CG1_SHIFT, /*!< CCGR6, CG1 */
DECL|kCLOCK_Usdhc2Div|enumerator|kCLOCK_Usdhc2Div = CCM_TUPLE(
DECL|kCLOCK_Usdhc2Mux|enumerator|kCLOCK_Usdhc2Mux = CCM_TUPLE(CSCMR1,
DECL|kCLOCK_Usdhc2|enumerator|kCLOCK_Usdhc2 = (6U << 8U) | CCM_CCGR6_CG2_SHIFT, /*!< CCGR6, CG2 */
DECL|kCLOCK_VideoPllClk|enumerator|kCLOCK_VideoPllClk = 0x17U, /*!< Video PLLCLK. */
DECL|kCLOCK_Wdog1|enumerator|kCLOCK_Wdog1 = (3U << 8U) | CCM_CCGR3_CG8_SHIFT, /*!< CCGR3, CG8 */
DECL|kCLOCK_Wdog2|enumerator|kCLOCK_Wdog2 = (5U << 8U) | CCM_CCGR5_CG5_SHIFT, /*!< CCGR5, CG5 */
DECL|kCLOCK_Wdog3|enumerator|kCLOCK_Wdog3 = (5U << 8U) | CCM_CCGR5_CG2_SHIFT, /*!< CCGR5, CG2 */
DECL|kCLOCK_Xbar1|enumerator|kCLOCK_Xbar1 = (2U << 8U) | CCM_CCGR2_CG11_SHIFT, /*!< CCGR2, CG11 */
DECL|kCLOCK_Xbar2|enumerator|kCLOCK_Xbar2 = (2U << 8U) | CCM_CCGR2_CG12_SHIFT, /*!< CCGR2, CG12 */
DECL|kCLOCK_Xbar3|enumerator|kCLOCK_Xbar3 = (2U << 8U) | CCM_CCGR2_CG7_SHIFT, /*!< CCGR2, CG7 */
DECL|kCLOCK_XtalOsc|enumerator|kCLOCK_XtalOsc = 1U, /*!< 24M Xtal OSC */
DECL|loopDivider1|member|uint8_t loopDivider1; /*!< Controls the frequency of the ENET1 reference clock.
DECL|loopDivider|member|uint32_t loopDivider; /*!< PLL loop divider. Valid range for divider value: 54-108. Fout=Fin*loopDivider/2. */
DECL|loopDivider|member|uint8_t loopDivider; /*!< Controls the frequency of the ENET0 reference clock.
DECL|loopDivider|member|uint8_t loopDivider; /*!< PLL loop divider.
DECL|loopDivider|member|uint8_t loopDivider; /*!< PLL loop divider. Intended to be 1 (528M).
DECL|loopDivider|member|uint8_t loopDivider; /*!< PLL loop divider. Valid range for DIV_SELECT divider value: 27~54. */
DECL|loopDivider|member|uint8_t loopDivider; /*!< PLL loop divider. Valid range for DIV_SELECT divider value: 27~54. */
DECL|numerator|member|uint32_t numerator; /*!< 30 bit numerator of fractional loop divider.*/
DECL|numerator|member|uint32_t numerator; /*!< 30 bit numerator of fractional loop divider.*/
DECL|numerator|member|uint32_t numerator; /*!< 30 bit numerator of fractional loop divider.*/
DECL|postDivider|member|uint8_t postDivider; /*!< Divider after the PLL, should only be 1, 2, 4, 8, 16. */
DECL|postDivider|member|uint8_t postDivider; /*!< Divider after the PLL, should only be 1, 2, 4, 8, 16. */
DECL|src|member|uint8_t src; /*!< Pll clock source, reference _clock_pll_clk_src */
DECL|src|member|uint8_t src; /*!< Pll clock source, reference _clock_pll_clk_src */
DECL|src|member|uint8_t src; /*!< Pll clock source, reference _clock_pll_clk_src */
DECL|src|member|uint8_t src; /*!< Pll clock source, reference _clock_pll_clk_src */
DECL|src|member|uint8_t src; /*!< Pll clock source, reference _clock_pll_clk_src */
DECL|src|member|uint8_t src; /*!< Pll clock source, reference _clock_pll_clk_src */
