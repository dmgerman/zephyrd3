DECL|ADC16_CLOCKS|macro|ADC16_CLOCKS
DECL|BUS_CLK|macro|BUS_CLK
DECL|CLK_GATE_ABSTRACT_BITS_SHIFT|macro|CLK_GATE_ABSTRACT_BITS_SHIFT
DECL|CLK_GATE_ABSTRACT_REG_OFFSET|macro|CLK_GATE_ABSTRACT_REG_OFFSET
DECL|CLK_GATE_BIT_SHIFT_MASK|macro|CLK_GATE_BIT_SHIFT_MASK
DECL|CLK_GATE_BIT_SHIFT_SHIFT|macro|CLK_GATE_BIT_SHIFT_SHIFT
DECL|CLK_GATE_DEFINE|macro|CLK_GATE_DEFINE
DECL|CLK_GATE_REG_OFFSET_MASK|macro|CLK_GATE_REG_OFFSET_MASK
DECL|CLK_GATE_REG_OFFSET_SHIFT|macro|CLK_GATE_REG_OFFSET_SHIFT
DECL|CLOCK_DisableClock|function|static inline void CLOCK_DisableClock(clock_ip_name_t name)
DECL|CLOCK_DisablePll0|function|static inline void CLOCK_DisablePll0(void)
DECL|CLOCK_DisableUsbfs0Clock|function|static inline void CLOCK_DisableUsbfs0Clock(void)
DECL|CLOCK_EnableClock|function|static inline void CLOCK_EnableClock(clock_ip_name_t name)
DECL|CLOCK_SetClkOutClock|function|static inline void CLOCK_SetClkOutClock(uint32_t src)
DECL|CLOCK_SetEr32kClock|function|static inline void CLOCK_SetEr32kClock(uint32_t src)
DECL|CLOCK_SetFllExtRefDiv|function|static inline void CLOCK_SetFllExtRefDiv(uint8_t frdiv)
DECL|CLOCK_SetLowPowerEnable|function|static inline void CLOCK_SetLowPowerEnable(bool enable)
DECL|CLOCK_SetLpsci0Clock|function|static inline void CLOCK_SetLpsci0Clock(uint32_t src)
DECL|CLOCK_SetOutDiv|function|static inline void CLOCK_SetOutDiv(uint32_t outdiv1, uint32_t outdiv4)
DECL|CLOCK_SetPllFllSelClock|function|static inline void CLOCK_SetPllFllSelClock(uint32_t src)
DECL|CLOCK_SetRtcClkOutClock|function|static inline void CLOCK_SetRtcClkOutClock(uint32_t src)
DECL|CLOCK_SetSimSafeDivs|function|static inline void CLOCK_SetSimSafeDivs(void)
DECL|CLOCK_SetTpmClock|function|static inline void CLOCK_SetTpmClock(uint32_t src)
DECL|CLOCK_SetXtal0Freq|function|static inline void CLOCK_SetXtal0Freq(uint32_t freq)
DECL|CLOCK_SetXtal32Freq|function|static inline void CLOCK_SetXtal32Freq(uint32_t freq)
DECL|CMP_CLOCKS|macro|CMP_CLOCKS
DECL|DAC_CLOCKS|macro|DAC_CLOCKS
DECL|DMAMUX_CLOCKS|macro|DMAMUX_CLOCKS
DECL|DMA_CLOCKS|macro|DMA_CLOCKS
DECL|FSL_CLOCK_DRIVER_VERSION|macro|FSL_CLOCK_DRIVER_VERSION
DECL|FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL|macro|FSL_SDK_DISABLE_DRIVER_CLOCK_CONTROL
DECL|FTF_CLOCKS|macro|FTF_CLOCKS
DECL|I2C0_CLK_SRC|macro|I2C0_CLK_SRC
DECL|I2C1_CLK_SRC|macro|I2C1_CLK_SRC
DECL|I2C_CLOCKS|macro|I2C_CLOCKS
DECL|LPO_CLK_FREQ|macro|LPO_CLK_FREQ
DECL|LPTMR_CLOCKS|macro|LPTMR_CLOCKS
DECL|MCG_CONFIG_CHECK_PARAM|macro|MCG_CONFIG_CHECK_PARAM
DECL|OSC0|macro|OSC0
DECL|OSC_SetCapLoad|function|static inline void OSC_SetCapLoad(OSC_Type *base, uint8_t capLoad)
DECL|OSC_SetExtRefClkConfig|function|static inline void OSC_SetExtRefClkConfig(OSC_Type *base, oscer_config_t const *config)
DECL|PIT_CLOCKS|macro|PIT_CLOCKS
DECL|PORT_CLOCKS|macro|PORT_CLOCKS
DECL|RTC_CLOCKS|macro|RTC_CLOCKS
DECL|SPI0_CLK_SRC|macro|SPI0_CLK_SRC
DECL|SPI1_CLK_SRC|macro|SPI1_CLK_SRC
DECL|SPI_CLOCKS|macro|SPI_CLOCKS
DECL|SYS_CLK|macro|SYS_CLK
DECL|TPM_CLOCKS|macro|TPM_CLOCKS
DECL|TSI_CLOCKS|macro|TSI_CLOCKS
DECL|UART0_CLOCKS|macro|UART0_CLOCKS
DECL|UART1_CLK_SRC|macro|UART1_CLK_SRC
DECL|UART2_CLK_SRC|macro|UART2_CLK_SRC
DECL|UART_CLOCKS|macro|UART_CLOCKS
DECL|_FSL_CLOCK_H_|macro|_FSL_CLOCK_H_
DECL|_clock_ip_name|enum|typedef enum _clock_ip_name
DECL|_clock_name|enum|typedef enum _clock_name
DECL|_clock_usb_src|enum|typedef enum _clock_usb_src
DECL|_mcg_atm_select|enum|typedef enum _mcg_atm_select
DECL|_mcg_clkout_src|enum|typedef enum _mcg_clkout_src
DECL|_mcg_config|struct|typedef struct _mcg_config
DECL|_mcg_dmx32|enum|typedef enum _mcg_dmx32
DECL|_mcg_drs|enum|typedef enum _mcg_drs
DECL|_mcg_fll_src|enum|typedef enum _mcg_fll_src
DECL|_mcg_irc_mode|enum|typedef enum _mcg_irc_mode
DECL|_mcg_irclk_enable_mode|enum|enum _mcg_irclk_enable_mode
DECL|_mcg_mode|enum|typedef enum _mcg_mode
DECL|_mcg_monitor_mode|enum|typedef enum _mcg_monitor_mode
DECL|_mcg_oscsel|enum|typedef enum _mcg_oscsel
DECL|_mcg_pll_clk_select|enum|typedef enum _mcg_pll_clk_select
DECL|_mcg_pll_config|struct|typedef struct _mcg_pll_config
DECL|_mcg_pll_enable_mode|enum|enum _mcg_pll_enable_mode
DECL|_mcg_pll_ref_src|enum|typedef enum _mcg_pll_ref_src
DECL|_mcg_status_flags_t|enum|enum _mcg_status_flags_t
DECL|_mcg_status|enum|enum _mcg_status
DECL|_osc_cap_load|enum|enum _osc_cap_load
DECL|_osc_config|struct|typedef struct _osc_config
DECL|_osc_mode|enum|typedef enum _osc_mode
DECL|_oscer_config|struct|typedef struct _oscer_config
DECL|_oscer_enable_mode|enum|enum _oscer_enable_mode
DECL|_sim_clock_config|struct|typedef struct _sim_clock_config
DECL|capLoad|member|uint8_t capLoad; /*!< Capacitor load setting. */
DECL|clkdiv1|member|uint32_t clkdiv1; /*!< SIM_CLKDIV1. */
DECL|clock_ip_name_t|typedef|} clock_ip_name_t;
DECL|clock_name_t|typedef|} clock_name_t;
DECL|clock_usb_src_t|typedef|} clock_usb_src_t;
DECL|dmx32|member|mcg_dmx32_t dmx32; /*!< MCG_C4[DMX32]. */
DECL|drs|member|mcg_drs_t drs; /*!< DCO range MCG_C4[DRST_DRS]. */
DECL|enableMode|member|uint8_t enableMode; /*!< Enable mode. OR'ed value of @ref _mcg_pll_enable_mode. */
DECL|enableMode|member|uint8_t enableMode; /*!< OSCERCLK enable mode. OR'ed value of @ref _oscer_enable_mode. */
DECL|er32kSrc|member|uint8_t er32kSrc; /*!< ERCLK32K source selection. */
DECL|fcrdiv|member|uint8_t fcrdiv; /*!< Divider, MCG_SC[FCRDIV]. */
DECL|frdiv|member|uint8_t frdiv; /*!< Divider MCG_C1[FRDIV]. */
DECL|freq|member|uint32_t freq; /*!< External clock frequency. */
DECL|irclkEnableMode|member|uint8_t irclkEnableMode; /*!< MCGIRCLK enable mode. */
DECL|ircs|member|mcg_irc_mode_t ircs; /*!< Source, MCG_C2[IRCS]. */
DECL|kCLOCK_Adc0|enumerator|kCLOCK_Adc0 = CLK_GATE_DEFINE(0x103CU, 27U),
DECL|kCLOCK_BusClk|enumerator|kCLOCK_BusClk, /*!< Bus clock */
DECL|kCLOCK_Cmp0|enumerator|kCLOCK_Cmp0 = CLK_GATE_DEFINE(0x1034U, 19U),
DECL|kCLOCK_CoreSysClk|enumerator|kCLOCK_CoreSysClk, /*!< Core/system clock */
DECL|kCLOCK_Dac0|enumerator|kCLOCK_Dac0 = CLK_GATE_DEFINE(0x103CU, 31U),
DECL|kCLOCK_Dma0|enumerator|kCLOCK_Dma0 = CLK_GATE_DEFINE(0x1040U, 8U),
DECL|kCLOCK_Dmamux0|enumerator|kCLOCK_Dmamux0 = CLK_GATE_DEFINE(0x103CU, 1U),
DECL|kCLOCK_Er32kClk|enumerator|kCLOCK_Er32kClk, /*!< External reference 32K clock (ERCLK32K) */
DECL|kCLOCK_FlashClk|enumerator|kCLOCK_FlashClk, /*!< Flash clock */
DECL|kCLOCK_FlexBusClk|enumerator|kCLOCK_FlexBusClk, /*!< FlexBus clock */
DECL|kCLOCK_Ftf0|enumerator|kCLOCK_Ftf0 = CLK_GATE_DEFINE(0x103CU, 0U),
DECL|kCLOCK_I2c0|enumerator|kCLOCK_I2c0 = CLK_GATE_DEFINE(0x1034U, 6U),
DECL|kCLOCK_I2c1|enumerator|kCLOCK_I2c1 = CLK_GATE_DEFINE(0x1034U, 7U),
DECL|kCLOCK_IpInvalid|enumerator|kCLOCK_IpInvalid = 0U,
DECL|kCLOCK_LpoClk|enumerator|kCLOCK_LpoClk, /*!< LPO clock */
DECL|kCLOCK_Lptmr0|enumerator|kCLOCK_Lptmr0 = CLK_GATE_DEFINE(0x1038U, 0U),
DECL|kCLOCK_McgExtPllClk|enumerator|kCLOCK_McgExtPllClk, /*!< EXT_PLLCLK */
DECL|kCLOCK_McgFixedFreqClk|enumerator|kCLOCK_McgFixedFreqClk, /*!< MCG fixed frequency clock (MCGFFCLK) */
DECL|kCLOCK_McgFllClk|enumerator|kCLOCK_McgFllClk, /*!< MCGFLLCLK */
DECL|kCLOCK_McgInternalRefClk|enumerator|kCLOCK_McgInternalRefClk, /*!< MCG internal reference clock (MCGIRCLK) */
DECL|kCLOCK_McgPll0Clk|enumerator|kCLOCK_McgPll0Clk, /*!< MCGPLL0CLK */
DECL|kCLOCK_Osc0ErClk|enumerator|kCLOCK_Osc0ErClk, /*!< OSC0 external reference clock (OSC0ERCLK) */
DECL|kCLOCK_Pit0|enumerator|kCLOCK_Pit0 = CLK_GATE_DEFINE(0x103CU, 23U),
DECL|kCLOCK_PlatClk|enumerator|kCLOCK_PlatClk, /*!< Platform clock */
DECL|kCLOCK_PllFllSelClk|enumerator|kCLOCK_PllFllSelClk, /*!< The clock after SIM[PLLFLLSEL]. */
DECL|kCLOCK_PortA|enumerator|kCLOCK_PortA = CLK_GATE_DEFINE(0x1038U, 9U),
DECL|kCLOCK_PortB|enumerator|kCLOCK_PortB = CLK_GATE_DEFINE(0x1038U, 10U),
DECL|kCLOCK_PortC|enumerator|kCLOCK_PortC = CLK_GATE_DEFINE(0x1038U, 11U),
DECL|kCLOCK_PortD|enumerator|kCLOCK_PortD = CLK_GATE_DEFINE(0x1038U, 12U),
DECL|kCLOCK_PortE|enumerator|kCLOCK_PortE = CLK_GATE_DEFINE(0x1038U, 13U),
DECL|kCLOCK_Rtc0|enumerator|kCLOCK_Rtc0 = CLK_GATE_DEFINE(0x103CU, 29U),
DECL|kCLOCK_Spi0|enumerator|kCLOCK_Spi0 = CLK_GATE_DEFINE(0x1034U, 22U),
DECL|kCLOCK_Spi1|enumerator|kCLOCK_Spi1 = CLK_GATE_DEFINE(0x1034U, 23U),
DECL|kCLOCK_Tpm0|enumerator|kCLOCK_Tpm0 = CLK_GATE_DEFINE(0x103CU, 24U),
DECL|kCLOCK_Tpm1|enumerator|kCLOCK_Tpm1 = CLK_GATE_DEFINE(0x103CU, 25U),
DECL|kCLOCK_Tpm2|enumerator|kCLOCK_Tpm2 = CLK_GATE_DEFINE(0x103CU, 26U),
DECL|kCLOCK_Tsi0|enumerator|kCLOCK_Tsi0 = CLK_GATE_DEFINE(0x1038U, 5U),
DECL|kCLOCK_Uart0|enumerator|kCLOCK_Uart0 = CLK_GATE_DEFINE(0x1034U, 10U),
DECL|kCLOCK_Uart1|enumerator|kCLOCK_Uart1 = CLK_GATE_DEFINE(0x1034U, 11U),
DECL|kCLOCK_Uart2|enumerator|kCLOCK_Uart2 = CLK_GATE_DEFINE(0x1034U, 12U),
DECL|kCLOCK_UsbSrcExt|enumerator|kCLOCK_UsbSrcExt = SIM_SOPT2_USBSRC(0U) /*!< Use USB_CLKIN. */
DECL|kCLOCK_UsbSrcPll0|enumerator|kCLOCK_UsbSrcPll0 = SIM_SOPT2_USBSRC(1U) | SIM_SOPT2_PLLFLLSEL(1U), /*!< Use PLL0. */
DECL|kCLOCK_Usbfs0|enumerator|kCLOCK_Usbfs0 = CLK_GATE_DEFINE(0x1034U, 18U),
DECL|kMCG_AtmSel32k|enumerator|kMCG_AtmSel32k, /*!< 32 kHz Internal Reference Clock selected */
DECL|kMCG_AtmSel4m|enumerator|kMCG_AtmSel4m /*!< 4 MHz Internal Reference Clock selected */
DECL|kMCG_ClkOutSrcExternal|enumerator|kMCG_ClkOutSrcExternal, /*!< External reference clock is selected */
DECL|kMCG_ClkOutSrcInternal|enumerator|kMCG_ClkOutSrcInternal, /*!< Internal reference clock is selected */
DECL|kMCG_ClkOutSrcOut|enumerator|kMCG_ClkOutSrcOut, /*!< Output of the FLL is selected (reset default) */
DECL|kMCG_Dmx32Default|enumerator|kMCG_Dmx32Default, /*!< DCO has a default range of 25% */
DECL|kMCG_Dmx32Fine|enumerator|kMCG_Dmx32Fine /*!< DCO is fine-tuned for maximum frequency with 32.768 kHz reference */
DECL|kMCG_DrsHigh|enumerator|kMCG_DrsHigh /*!< High frequency range */
DECL|kMCG_DrsLow|enumerator|kMCG_DrsLow, /*!< Low frequency range */
DECL|kMCG_DrsMidHigh|enumerator|kMCG_DrsMidHigh, /*!< Mid-High frequency range */
DECL|kMCG_DrsMid|enumerator|kMCG_DrsMid, /*!< Mid frequency range */
DECL|kMCG_FllSrcExternal|enumerator|kMCG_FllSrcExternal, /*!< External reference clock is selected */
DECL|kMCG_FllSrcInternal|enumerator|kMCG_FllSrcInternal /*!< The slow internal reference clock is selected */
DECL|kMCG_IrcFast|enumerator|kMCG_IrcFast /*!< Fast internal reference clock selected */
DECL|kMCG_IrcSlow|enumerator|kMCG_IrcSlow, /*!< Slow internal reference clock selected */
DECL|kMCG_IrclkEnableInStop|enumerator|kMCG_IrclkEnableInStop = MCG_C1_IREFSTEN_MASK /*!< MCGIRCLK enable in stop mode. */
DECL|kMCG_IrclkEnable|enumerator|kMCG_IrclkEnable = MCG_C1_IRCLKEN_MASK, /*!< MCGIRCLK enable. */
DECL|kMCG_ModeBLPE|enumerator|kMCG_ModeBLPE, /*!< BLPE - Bypassed Low Power External */
DECL|kMCG_ModeBLPI|enumerator|kMCG_ModeBLPI, /*!< BLPI - Bypassed Low Power Internal */
DECL|kMCG_ModeError|enumerator|kMCG_ModeError /*!< Unknown mode */
DECL|kMCG_ModeFBE|enumerator|kMCG_ModeFBE, /*!< FBE - FLL Bypassed External */
DECL|kMCG_ModeFBI|enumerator|kMCG_ModeFBI, /*!< FBI - FLL Bypassed Internal */
DECL|kMCG_ModeFEE|enumerator|kMCG_ModeFEE, /*!< FEE - FLL Engaged External */
DECL|kMCG_ModeFEI|enumerator|kMCG_ModeFEI = 0U, /*!< FEI - FLL Engaged Internal */
DECL|kMCG_ModePBE|enumerator|kMCG_ModePBE, /*!< PBE - PLL Bypassed External */
DECL|kMCG_ModePEE|enumerator|kMCG_ModePEE, /*!< PEE - PLL Engaged External */
DECL|kMCG_MonitorInt|enumerator|kMCG_MonitorInt, /*!< Trigger interrupt when clock lost. */
DECL|kMCG_MonitorNone|enumerator|kMCG_MonitorNone, /*!< Clock monitor is disabled. */
DECL|kMCG_MonitorReset|enumerator|kMCG_MonitorReset /*!< System reset when clock lost. */
DECL|kMCG_Osc0InitFlag|enumerator|kMCG_Osc0InitFlag = (1U << 1U), /*!< OSC0 crystal initialized. */
DECL|kMCG_Osc0LostFlag|enumerator|kMCG_Osc0LostFlag = (1U << 0U), /*!< OSC0 lost. */
DECL|kMCG_OscselOsc|enumerator|kMCG_OscselOsc, /*!< Selects System Oscillator (OSCCLK) */
DECL|kMCG_OscselRtc|enumerator|kMCG_OscselRtc, /*!< Selects 32 kHz RTC Oscillator */
DECL|kMCG_Pll0LockFlag|enumerator|kMCG_Pll0LockFlag = (1U << 6U), /*!< PLL0 locked. */
DECL|kMCG_Pll0LostFlag|enumerator|kMCG_Pll0LostFlag = (1U << 5U), /*!< PLL0 lost. */
DECL|kMCG_PllClkSelPll0|enumerator|kMCG_PllClkSelPll0, /*!< PLL0 output clock is selected */
DECL|kMCG_PllClkSelPll1|enumerator|kMCG_PllClkSelPll1 /* PLL1 output clock is selected */
DECL|kMCG_PllEnableInStop|enumerator|kMCG_PllEnableInStop = MCG_C5_PLLSTEN0_MASK /*!< MCGPLLCLK enable in STOP mode. */
DECL|kMCG_PllEnableIndependent|enumerator|kMCG_PllEnableIndependent = MCG_C5_PLLCLKEN0_MASK, /*!< MCGPLLCLK enable independent of the
DECL|kMCG_PllRefOsc0|enumerator|kMCG_PllRefOsc0, /*!< Selects OSC0 as PLL reference clock */
DECL|kMCG_PllRefOsc1|enumerator|kMCG_PllRefOsc1 /*!< Selects OSC1 as PLL reference clock */
DECL|kOSC_Cap16P|enumerator|kOSC_Cap16P = OSC_CR_SC16P_MASK /*!< 16 pF capacitor load */
DECL|kOSC_Cap2P|enumerator|kOSC_Cap2P = OSC_CR_SC2P_MASK, /*!< 2 pF capacitor load */
DECL|kOSC_Cap4P|enumerator|kOSC_Cap4P = OSC_CR_SC4P_MASK, /*!< 4 pF capacitor load */
DECL|kOSC_Cap8P|enumerator|kOSC_Cap8P = OSC_CR_SC8P_MASK, /*!< 8 pF capacitor load */
DECL|kOSC_ErClkEnableInStop|enumerator|kOSC_ErClkEnableInStop = OSC_CR_EREFSTEN_MASK /*!< Enable in stop mode. */
DECL|kOSC_ErClkEnable|enumerator|kOSC_ErClkEnable = OSC_CR_ERCLKEN_MASK, /*!< Enable. */
DECL|kOSC_ModeExt|enumerator|kOSC_ModeExt = 0U, /*!< Use an external clock. */
DECL|kOSC_ModeOscHighGain|enumerator|kOSC_ModeOscHighGain = 0U
DECL|kOSC_ModeOscLowPower|enumerator|kOSC_ModeOscLowPower = MCG_C2_EREFS_MASK, /*!< Oscillator low power. */
DECL|kStatus_MCG_AtmBusClockInvalid|enumerator|kStatus_MCG_AtmBusClockInvalid = MAKE_STATUS(kStatusGroup_MCG, 2), /*!< Invalid bus clock for ATM. */
DECL|kStatus_MCG_AtmDesiredFreqInvalid|enumerator|kStatus_MCG_AtmDesiredFreqInvalid = MAKE_STATUS(kStatusGroup_MCG, 3), /*!< Invalid desired frequency for ATM. */
DECL|kStatus_MCG_AtmHardwareFail|enumerator|kStatus_MCG_AtmHardwareFail = MAKE_STATUS(kStatusGroup_MCG, 5), /*!< Hardware fail occurs during ATM. */
DECL|kStatus_MCG_AtmIrcUsed|enumerator|kStatus_MCG_AtmIrcUsed = MAKE_STATUS(kStatusGroup_MCG, 4), /*!< IRC is used when using ATM. */
DECL|kStatus_MCG_ModeInvalid|enumerator|kStatus_MCG_ModeInvalid = MAKE_STATUS(kStatusGroup_MCG, 1), /*!< Current mode invalid for the specific
DECL|kStatus_MCG_ModeUnreachable|enumerator|kStatus_MCG_ModeUnreachable = MAKE_STATUS(kStatusGroup_MCG, 0), /*!< Can't switch to target mode. */
DECL|kStatus_MCG_SourceUsed|enumerator|kStatus_MCG_SourceUsed = MAKE_STATUS(kStatusGroup_MCG, 6) /*!< Can't change the clock source because
DECL|mcgMode|member|mcg_mode_t mcgMode; /*!< MCG mode. */
DECL|mcg_atm_select_t|typedef|} mcg_atm_select_t;
DECL|mcg_clkout_src_t|typedef|} mcg_clkout_src_t;
DECL|mcg_config_t|typedef|} mcg_config_t;
DECL|mcg_dmx32_t|typedef|} mcg_dmx32_t;
DECL|mcg_drs_t|typedef|} mcg_drs_t;
DECL|mcg_fll_src_t|typedef|} mcg_fll_src_t;
DECL|mcg_irc_mode_t|typedef|} mcg_irc_mode_t;
DECL|mcg_mode_t|typedef|} mcg_mode_t;
DECL|mcg_monitor_mode_t|typedef|} mcg_monitor_mode_t;
DECL|mcg_oscsel_t|typedef|} mcg_oscsel_t;
DECL|mcg_pll_clk_select_t|typedef|} mcg_pll_clk_select_t;
DECL|mcg_pll_config_t|typedef|} mcg_pll_config_t;
DECL|mcg_pll_ref_src_t|typedef|} mcg_pll_ref_src_t;
DECL|osc_config_t|typedef|} osc_config_t;
DECL|osc_mode_t|typedef|} osc_mode_t;
DECL|oscerConfig|member|oscer_config_t oscerConfig; /*!< Configuration for OSCERCLK. */
DECL|oscer_config_t|typedef|} oscer_config_t;
DECL|pll0Config|member|mcg_pll_config_t pll0Config; /*!< MCGPLL0CLK configuration. */
DECL|pllFllSel|member|uint8_t pllFllSel;
DECL|prdiv|member|uint8_t prdiv; /*!< Reference divider PRDIV. */
DECL|sim_clock_config_t|typedef|} sim_clock_config_t;
DECL|vdiv|member|uint8_t vdiv; /*!< VCO divider VDIV. */
DECL|workMode|member|osc_mode_t workMode; /*!< OSC work mode setting. */
