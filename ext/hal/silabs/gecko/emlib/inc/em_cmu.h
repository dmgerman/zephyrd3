DECL|CMU_AUXHFRCOBand_TypeDef|typedef|} CMU_AUXHFRCOBand_TypeDef;
DECL|CMU_AUXHFRCOFreqGet|function|__STATIC_INLINE CMU_AUXHFRCOFreq_TypeDef CMU_AUXHFRCOFreqGet(void)
DECL|CMU_AUXHFRCOFreqSet|function|__STATIC_INLINE void CMU_AUXHFRCOFreqSet(CMU_AUXHFRCOFreq_TypeDef setFreq)
DECL|CMU_AUXHFRCOFreq_TypeDef|typedef|} CMU_AUXHFRCOFreq_TypeDef;
DECL|CMU_AUXHFRCO_MAX|macro|CMU_AUXHFRCO_MAX
DECL|CMU_AUXHFRCO_MIN|macro|CMU_AUXHFRCO_MIN
DECL|CMU_AUX_CLK_BRANCH|macro|CMU_AUX_CLK_BRANCH
DECL|CMU_CLK_BRANCH_MASK|macro|CMU_CLK_BRANCH_MASK
DECL|CMU_CLK_BRANCH_POS|macro|CMU_CLK_BRANCH_POS
DECL|CMU_CSEN_LF_CLK_BRANCH|macro|CMU_CSEN_LF_CLK_BRANCH
DECL|CMU_CTRL_EN_REG|macro|CMU_CTRL_EN_REG
DECL|CMU_CalibrateCont|function|__STATIC_INLINE void CMU_CalibrateCont(bool enable)
DECL|CMU_CalibrateStart|function|__STATIC_INLINE void CMU_CalibrateStart(void)
DECL|CMU_CalibrateStop|function|__STATIC_INLINE void CMU_CalibrateStop(void)
DECL|CMU_ClkDiv_TypeDef|typedef|typedef uint32_t CMU_ClkDiv_TypeDef;
DECL|CMU_ClkPresc_TypeDef|typedef|typedef uint32_t CMU_ClkPresc_TypeDef;
DECL|CMU_Clock_TypeDef|typedef|} CMU_Clock_TypeDef;
DECL|CMU_DBGCLKSEL_REG|macro|CMU_DBGCLKSEL_REG
DECL|CMU_DBG_CLK_BRANCH|macro|CMU_DBG_CLK_BRANCH
DECL|CMU_DIV_REG_MASK|macro|CMU_DIV_REG_MASK
DECL|CMU_DIV_REG_POS|macro|CMU_DIV_REG_POS
DECL|CMU_DivToLog2|function|__STATIC_INLINE uint32_t CMU_DivToLog2(CMU_ClkDiv_TypeDef div)
DECL|CMU_EN_BIT_MASK|macro|CMU_EN_BIT_MASK
DECL|CMU_EN_BIT_POS|macro|CMU_EN_BIT_POS
DECL|CMU_EN_REG_MASK|macro|CMU_EN_REG_MASK
DECL|CMU_EN_REG_POS|macro|CMU_EN_REG_POS
DECL|CMU_HFBUSCLKEN0_EN_REG|macro|CMU_HFBUSCLKEN0_EN_REG
DECL|CMU_HFBUS_CLK_BRANCH|macro|CMU_HFBUS_CLK_BRANCH
DECL|CMU_HFCLKDIV_REG|macro|CMU_HFCLKDIV_REG
DECL|CMU_HFCLKLEPRESC_REG|macro|CMU_HFCLKLEPRESC_REG
DECL|CMU_HFCLKSEL_REG|macro|CMU_HFCLKSEL_REG
DECL|CMU_HFCORECLKDIV_REG|macro|CMU_HFCORECLKDIV_REG
DECL|CMU_HFCORECLKEN0_EN_REG|macro|CMU_HFCORECLKEN0_EN_REG
DECL|CMU_HFCOREPRESC_REG|macro|CMU_HFCOREPRESC_REG
DECL|CMU_HFCORE_CLK_BRANCH|macro|CMU_HFCORE_CLK_BRANCH
DECL|CMU_HFEXPPRESC_REG|macro|CMU_HFEXPPRESC_REG
DECL|CMU_HFEXP_CLK_BRANCH|macro|CMU_HFEXP_CLK_BRANCH
DECL|CMU_HFPERCLKDIV_EN_REG|macro|CMU_HFPERCLKDIV_EN_REG
DECL|CMU_HFPERCLKDIV_REG|macro|CMU_HFPERCLKDIV_REG
DECL|CMU_HFPERCLKEN0_EN_REG|macro|CMU_HFPERCLKEN0_EN_REG
DECL|CMU_HFPERPRESC_REG|macro|CMU_HFPERPRESC_REG
DECL|CMU_HFPER_CLK_BRANCH|macro|CMU_HFPER_CLK_BRANCH
DECL|CMU_HFPRESC_REG|macro|CMU_HFPRESC_REG
DECL|CMU_HFRCOBand_TypeDef|typedef|} CMU_HFRCOBand_TypeDef;
DECL|CMU_HFRCOFreqGet|function|__STATIC_INLINE CMU_HFRCOFreq_TypeDef CMU_HFRCOFreqGet(void)
DECL|CMU_HFRCOFreqSet|function|__STATIC_INLINE void CMU_HFRCOFreqSet(CMU_HFRCOFreq_TypeDef setFreq)
DECL|CMU_HFRCOFreq_TypeDef|typedef|} CMU_HFRCOFreq_TypeDef;
DECL|CMU_HFRCO_MAX|macro|CMU_HFRCO_MAX
DECL|CMU_HFRCO_MIN|macro|CMU_HFRCO_MIN
DECL|CMU_HFXOINIT_DEFAULT|macro|CMU_HFXOINIT_DEFAULT
DECL|CMU_HFXOINIT_DEFAULT|macro|CMU_HFXOINIT_DEFAULT
DECL|CMU_HFXOINIT_DEFAULT|macro|CMU_HFXOINIT_DEFAULT
DECL|CMU_HFXOINIT_EXTERNAL_CLOCK|macro|CMU_HFXOINIT_EXTERNAL_CLOCK
DECL|CMU_HFXOINIT_EXTERNAL_CLOCK|macro|CMU_HFXOINIT_EXTERNAL_CLOCK
DECL|CMU_HFXOInit_TypeDef|typedef|} CMU_HFXOInit_TypeDef;
DECL|CMU_HFXOTuningMode_TypeDef|typedef|} CMU_HFXOTuningMode_TypeDef;
DECL|CMU_HF_CLK_BRANCH|macro|CMU_HF_CLK_BRANCH
DECL|CMU_IntClear|function|__STATIC_INLINE void CMU_IntClear(uint32_t flags)
DECL|CMU_IntDisable|function|__STATIC_INLINE void CMU_IntDisable(uint32_t flags)
DECL|CMU_IntEnable|function|__STATIC_INLINE void CMU_IntEnable(uint32_t flags)
DECL|CMU_IntGetEnabled|function|__STATIC_INLINE uint32_t CMU_IntGetEnabled(void)
DECL|CMU_IntGet|function|__STATIC_INLINE uint32_t CMU_IntGet(void)
DECL|CMU_IntSet|function|__STATIC_INLINE void CMU_IntSet(uint32_t flags)
DECL|CMU_LCDPRE_CLK_BRANCH|macro|CMU_LCDPRE_CLK_BRANCH
DECL|CMU_LCD_CLK_BRANCH|macro|CMU_LCD_CLK_BRANCH
DECL|CMU_LESENSE_CLK_BRANCH|macro|CMU_LESENSE_CLK_BRANCH
DECL|CMU_LETIMER0_CLK_BRANCH|macro|CMU_LETIMER0_CLK_BRANCH
DECL|CMU_LEUART0_CLK_BRANCH|macro|CMU_LEUART0_CLK_BRANCH
DECL|CMU_LEUART1_CLK_BRANCH|macro|CMU_LEUART1_CLK_BRANCH
DECL|CMU_LFACLKEN0_EN_REG|macro|CMU_LFACLKEN0_EN_REG
DECL|CMU_LFACLKSEL_REG|macro|CMU_LFACLKSEL_REG
DECL|CMU_LFAPRESC0_REG|macro|CMU_LFAPRESC0_REG
DECL|CMU_LFA_CLK_BRANCH|macro|CMU_LFA_CLK_BRANCH
DECL|CMU_LFBCLKEN0_EN_REG|macro|CMU_LFBCLKEN0_EN_REG
DECL|CMU_LFBCLKSEL_REG|macro|CMU_LFBCLKSEL_REG
DECL|CMU_LFBPRESC0_REG|macro|CMU_LFBPRESC0_REG
DECL|CMU_LFB_CLK_BRANCH|macro|CMU_LFB_CLK_BRANCH
DECL|CMU_LFCCLKEN0_EN_REG|macro|CMU_LFCCLKEN0_EN_REG
DECL|CMU_LFCCLKSEL_REG|macro|CMU_LFCCLKSEL_REG
DECL|CMU_LFC_CLK_BRANCH|macro|CMU_LFC_CLK_BRANCH
DECL|CMU_LFECLKEN0_EN_REG|macro|CMU_LFECLKEN0_EN_REG
DECL|CMU_LFECLKSEL_REG|macro|CMU_LFECLKSEL_REG
DECL|CMU_LFEPRESC0_REG|macro|CMU_LFEPRESC0_REG
DECL|CMU_LFE_CLK_BRANCH|macro|CMU_LFE_CLK_BRANCH
DECL|CMU_LFXOBoost_TypeDef|typedef|} CMU_LFXOBoost_TypeDef;
DECL|CMU_LFXOINIT_DEFAULT|macro|CMU_LFXOINIT_DEFAULT
DECL|CMU_LFXOINIT_DEFAULT|macro|CMU_LFXOINIT_DEFAULT
DECL|CMU_LFXOINIT_EXTERNAL_CLOCK|macro|CMU_LFXOINIT_EXTERNAL_CLOCK
DECL|CMU_LFXOINIT_EXTERNAL_CLOCK|macro|CMU_LFXOINIT_EXTERNAL_CLOCK
DECL|CMU_LFXOInit_TypeDef|typedef|} CMU_LFXOInit_TypeDef;
DECL|CMU_Lock|function|__STATIC_INLINE void CMU_Lock(void)
DECL|CMU_Log2ToDiv|function|__STATIC_INLINE uint32_t CMU_Log2ToDiv(uint32_t log2)
DECL|CMU_NODIV_REG|macro|CMU_NODIV_REG
DECL|CMU_NOPRESC_REG|macro|CMU_NOPRESC_REG
DECL|CMU_NOSEL_REG|macro|CMU_NOSEL_REG
DECL|CMU_NO_EN_REG|macro|CMU_NO_EN_REG
DECL|CMU_OscMode_TypeDef|typedef|} CMU_OscMode_TypeDef;
DECL|CMU_Osc_TypeDef|typedef|} CMU_Osc_TypeDef;
DECL|CMU_PCNT_EN_REG|macro|CMU_PCNT_EN_REG
DECL|CMU_PRESC_REG_MASK|macro|CMU_PRESC_REG_MASK
DECL|CMU_PRESC_REG_POS|macro|CMU_PRESC_REG_POS
DECL|CMU_PrescToLog2|function|__STATIC_INLINE uint32_t CMU_PrescToLog2(CMU_ClkPresc_TypeDef presc)
DECL|CMU_RTCC_CLK_BRANCH|macro|CMU_RTCC_CLK_BRANCH
DECL|CMU_RTC_CLK_BRANCH|macro|CMU_RTC_CLK_BRANCH
DECL|CMU_SEL_REG_MASK|macro|CMU_SEL_REG_MASK
DECL|CMU_SEL_REG_POS|macro|CMU_SEL_REG_POS
DECL|CMU_Select_TypeDef|typedef|} CMU_Select_TypeDef;
DECL|CMU_USBCCLKSEL_REG|macro|CMU_USBCCLKSEL_REG
DECL|CMU_USBC_CLK_BRANCH|macro|CMU_USBC_CLK_BRANCH
DECL|CMU_USBLE_CLK_BRANCH|macro|CMU_USBLE_CLK_BRANCH
DECL|CMU_USHFRCOBand_TypeDef|typedef|} CMU_USHFRCOBand_TypeDef;
DECL|CMU_Unlock|function|__STATIC_INLINE void CMU_Unlock(void)
DECL|CMU_VSCALEEM01_LOWPOWER_VOLTAGE_CLOCK_MAX|macro|CMU_VSCALEEM01_LOWPOWER_VOLTAGE_CLOCK_MAX
DECL|EM_CMU_H|macro|EM_CMU_H
DECL|autoSelEm01|member|bool autoSelEm01; /**< @deprecated Use @ref CMU_HFXOAutostartEnable instead. */
DECL|autoStartEm01|member|bool autoStartEm01; /**< @deprecated Use @ref CMU_HFXOAutostartEnable instead. */
DECL|autoStartSelOnRacWakeup|member|bool autoStartSelOnRacWakeup; /**< @deprecated Use @ref CMU_HFXOAutostartEnable instead. */
DECL|cmuAUXHFRCOBand_11MHz|enumerator|cmuAUXHFRCOBand_11MHz = _CMU_AUXHFRCOCTRL_BAND_11MHZ, /**< 11MHz RC band */
DECL|cmuAUXHFRCOBand_14MHz|enumerator|cmuAUXHFRCOBand_14MHz = _CMU_AUXHFRCOCTRL_BAND_14MHZ, /**< 14MHz RC band */
DECL|cmuAUXHFRCOBand_1MHz|enumerator|cmuAUXHFRCOBand_1MHz = _CMU_AUXHFRCOCTRL_BAND_1MHZ, /**< 1MHz RC band */
DECL|cmuAUXHFRCOBand_21MHz|enumerator|cmuAUXHFRCOBand_21MHz = _CMU_AUXHFRCOCTRL_BAND_21MHZ, /**< 21MHz RC band */
DECL|cmuAUXHFRCOBand_28MHz|enumerator|cmuAUXHFRCOBand_28MHz = _CMU_AUXHFRCOCTRL_BAND_28MHZ, /**< 28MHz RC band */
DECL|cmuAUXHFRCOBand_7MHz|enumerator|cmuAUXHFRCOBand_7MHz = _CMU_AUXHFRCOCTRL_BAND_7MHZ, /**< 7MHz RC band */
DECL|cmuAUXHFRCOFreq_13M0Hz|enumerator|cmuAUXHFRCOFreq_13M0Hz = 13000000U, /**< 13MHz RC band */
DECL|cmuAUXHFRCOFreq_16M0Hz|enumerator|cmuAUXHFRCOFreq_16M0Hz = 16000000U, /**< 16MHz RC band */
DECL|cmuAUXHFRCOFreq_19M0Hz|enumerator|cmuAUXHFRCOFreq_19M0Hz = 19000000U, /**< 19MHz RC band */
DECL|cmuAUXHFRCOFreq_1M0Hz|enumerator|cmuAUXHFRCOFreq_1M0Hz = 1000000U, /**< 1MHz RC band */
DECL|cmuAUXHFRCOFreq_26M0Hz|enumerator|cmuAUXHFRCOFreq_26M0Hz = 26000000U, /**< 26MHz RC band */
DECL|cmuAUXHFRCOFreq_2M0Hz|enumerator|cmuAUXHFRCOFreq_2M0Hz = 2000000U, /**< 2MHz RC band */
DECL|cmuAUXHFRCOFreq_32M0Hz|enumerator|cmuAUXHFRCOFreq_32M0Hz = 32000000U, /**< 32MHz RC band */
DECL|cmuAUXHFRCOFreq_38M0Hz|enumerator|cmuAUXHFRCOFreq_38M0Hz = 38000000U, /**< 38MHz RC band */
DECL|cmuAUXHFRCOFreq_4M0Hz|enumerator|cmuAUXHFRCOFreq_4M0Hz = 4000000U, /**< 4MHz RC band */
DECL|cmuAUXHFRCOFreq_7M0Hz|enumerator|cmuAUXHFRCOFreq_7M0Hz = 7000000U, /**< 7MHz RC band */
DECL|cmuAUXHFRCOFreq_UserDefined|enumerator|cmuAUXHFRCOFreq_UserDefined = 0,
DECL|cmuClkDiv_1024|macro|cmuClkDiv_1024
DECL|cmuClkDiv_128|macro|cmuClkDiv_128
DECL|cmuClkDiv_16384|macro|cmuClkDiv_16384
DECL|cmuClkDiv_16|macro|cmuClkDiv_16
DECL|cmuClkDiv_1|macro|cmuClkDiv_1
DECL|cmuClkDiv_2048|macro|cmuClkDiv_2048
DECL|cmuClkDiv_256|macro|cmuClkDiv_256
DECL|cmuClkDiv_2|macro|cmuClkDiv_2
DECL|cmuClkDiv_32768|macro|cmuClkDiv_32768
DECL|cmuClkDiv_32|macro|cmuClkDiv_32
DECL|cmuClkDiv_4096|macro|cmuClkDiv_4096
DECL|cmuClkDiv_4|macro|cmuClkDiv_4
DECL|cmuClkDiv_512|macro|cmuClkDiv_512
DECL|cmuClkDiv_64|macro|cmuClkDiv_64
DECL|cmuClkDiv_8192|macro|cmuClkDiv_8192
DECL|cmuClkDiv_8|macro|cmuClkDiv_8
DECL|cmuClock_ACMP0|enumerator|cmuClock_ACMP0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_ACMP1|enumerator|cmuClock_ACMP1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_ADC0|enumerator|cmuClock_ADC0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_AES|enumerator|cmuClock_AES = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_AUX|enumerator|cmuClock_AUX = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_BUS|enumerator|cmuClock_BUS = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_CORELE|macro|cmuClock_CORELE
DECL|cmuClock_CORE|enumerator|cmuClock_CORE = (CMU_HFCORECLKDIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_CRYOTIMER|enumerator|cmuClock_CRYOTIMER = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_CRYPTO0|enumerator|cmuClock_CRYPTO0 = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_CRYPTO1|enumerator|cmuClock_CRYPTO1 = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_CRYPTO|enumerator|cmuClock_CRYPTO = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_CSEN_HF|enumerator|cmuClock_CSEN_HF = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_CSEN_LF|enumerator|cmuClock_CSEN_LF = (CMU_LFBPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_DAC0|enumerator|cmuClock_DAC0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_DBG|enumerator|cmuClock_DBG = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_DMA|enumerator|cmuClock_DMA = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_EBI|enumerator|cmuClock_EBI = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_EXPORT|enumerator|cmuClock_EXPORT = (CMU_HFEXPPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_GPCRC|enumerator|cmuClock_GPCRC = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_GPIO|enumerator|cmuClock_GPIO = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_GPIO|enumerator|cmuClock_GPIO = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_HFLE|enumerator|cmuClock_HFLE = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_HFLE|enumerator|cmuClock_HFLE = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_HFPER|enumerator|cmuClock_HFPER = (CMU_HFPERPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_HF|enumerator|cmuClock_HF = (CMU_HFCLKDIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_I2C0|enumerator|cmuClock_I2C0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_I2C1|enumerator|cmuClock_I2C1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_I2C2|enumerator|cmuClock_I2C2 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_IDAC0|enumerator|cmuClock_IDAC0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LCDpre|enumerator|cmuClock_LCDpre = (CMU_LFAPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LCD|enumerator|cmuClock_LCD = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LDMA|enumerator|cmuClock_LDMA = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_LESENSE|enumerator|cmuClock_LESENSE = (CMU_LFAPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LETIMER0|enumerator|cmuClock_LETIMER0 = (CMU_LFAPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LEUART0|enumerator|cmuClock_LEUART0 = (CMU_LFBPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LEUART1|enumerator|cmuClock_LEUART1 = (CMU_LFBPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LFA|enumerator|cmuClock_LFA = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LFB|enumerator|cmuClock_LFB = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LFC|enumerator|cmuClock_LFC = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_LFE|enumerator|cmuClock_LFE = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_PCNT0|enumerator|cmuClock_PCNT0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_PCNT1|enumerator|cmuClock_PCNT1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_PCNT2|enumerator|cmuClock_PCNT2 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_PRS|enumerator|cmuClock_PRS = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_PRS|enumerator|cmuClock_PRS = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_RTCC|enumerator|cmuClock_RTCC = (CMU_LFEPRESC0_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_RTC|enumerator|cmuClock_RTC = (CMU_LFAPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_SYSTICK|enumerator|cmuClock_SYSTICK = (CMU_LFBPRESC0_REG << CMU_DIV_REG_POS)
DECL|cmuClock_TIMER0|enumerator|cmuClock_TIMER0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_TIMER1|enumerator|cmuClock_TIMER1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_TIMER2|enumerator|cmuClock_TIMER2 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_TIMER3|enumerator|cmuClock_TIMER3 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_TRNG0|enumerator|cmuClock_TRNG0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_UART0|enumerator|cmuClock_UART0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_UART1|enumerator|cmuClock_UART1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USART0|enumerator|cmuClock_USART0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USART1|enumerator|cmuClock_USART1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USART2|enumerator|cmuClock_USART2 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USART3|enumerator|cmuClock_USART3 = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_USART4|enumerator|cmuClock_USART4 = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_USART5|enumerator|cmuClock_USART5 = (CMU_NOPRESC_REG << CMU_PRESC_REG_POS)
DECL|cmuClock_USARTRF0|enumerator|cmuClock_USARTRF0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USARTRF1|enumerator|cmuClock_USARTRF1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USBC|enumerator|cmuClock_USBC = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USBLE|enumerator|cmuClock_USBLE = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_USB|enumerator|cmuClock_USB = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_VCMP|enumerator|cmuClock_VCMP = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_VDAC0|enumerator|cmuClock_VDAC0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_WTIMER0|enumerator|cmuClock_WTIMER0 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuClock_WTIMER1|enumerator|cmuClock_WTIMER1 = (CMU_NODIV_REG << CMU_DIV_REG_POS)
DECL|cmuHFRCOBand_11MHz|enumerator|cmuHFRCOBand_11MHz = _CMU_HFRCOCTRL_BAND_11MHZ, /**< 11MHz HFRCO band */
DECL|cmuHFRCOBand_14MHz|enumerator|cmuHFRCOBand_14MHz = _CMU_HFRCOCTRL_BAND_14MHZ, /**< 14MHz HFRCO band */
DECL|cmuHFRCOBand_1MHz|enumerator|cmuHFRCOBand_1MHz = _CMU_HFRCOCTRL_BAND_1MHZ, /**< 1MHz HFRCO band */
DECL|cmuHFRCOBand_21MHz|enumerator|cmuHFRCOBand_21MHz = _CMU_HFRCOCTRL_BAND_21MHZ, /**< 21MHz HFRCO band */
DECL|cmuHFRCOBand_28MHz|enumerator|cmuHFRCOBand_28MHz = _CMU_HFRCOCTRL_BAND_28MHZ, /**< 28MHz HFRCO band */
DECL|cmuHFRCOBand_7MHz|enumerator|cmuHFRCOBand_7MHz = _CMU_HFRCOCTRL_BAND_7MHZ, /**< 7MHz HFRCO band */
DECL|cmuHFRCOFreq_13M0Hz|enumerator|cmuHFRCOFreq_13M0Hz = 13000000U, /**< 13MHz RC band */
DECL|cmuHFRCOFreq_16M0Hz|enumerator|cmuHFRCOFreq_16M0Hz = 16000000U, /**< 16MHz RC band */
DECL|cmuHFRCOFreq_19M0Hz|enumerator|cmuHFRCOFreq_19M0Hz = 19000000U, /**< 19MHz RC band */
DECL|cmuHFRCOFreq_1M0Hz|enumerator|cmuHFRCOFreq_1M0Hz = 1000000U, /**< 1MHz RC band */
DECL|cmuHFRCOFreq_26M0Hz|enumerator|cmuHFRCOFreq_26M0Hz = 26000000U, /**< 26MHz RC band */
DECL|cmuHFRCOFreq_2M0Hz|enumerator|cmuHFRCOFreq_2M0Hz = 2000000U, /**< 2MHz RC band */
DECL|cmuHFRCOFreq_32M0Hz|enumerator|cmuHFRCOFreq_32M0Hz = 32000000U, /**< 32MHz RC band */
DECL|cmuHFRCOFreq_38M0Hz|enumerator|cmuHFRCOFreq_38M0Hz = 38000000U, /**< 38MHz RC band */
DECL|cmuHFRCOFreq_4M0Hz|enumerator|cmuHFRCOFreq_4M0Hz = 4000000U, /**< 4MHz RC band */
DECL|cmuHFRCOFreq_7M0Hz|enumerator|cmuHFRCOFreq_7M0Hz = 7000000U, /**< 7MHz RC band */
DECL|cmuHFRCOFreq_UserDefined|enumerator|cmuHFRCOFreq_UserDefined = 0,
DECL|cmuHFXOTuningMode_Auto|enumerator|cmuHFXOTuningMode_Auto = 0,
DECL|cmuHFXOTuningMode_PeakShuntCommand|enumerator|cmuHFXOTuningMode_PeakShuntCommand = CMU_CMD_HFXOPEAKDETSTART /**< Run peak and shunt current optimization */
DECL|cmuHFXOTuningMode_ShuntCommand|enumerator|cmuHFXOTuningMode_ShuntCommand = CMU_CMD_HFXOSHUNTOPTSTART, /**< Run shunt current optimization only */
DECL|cmuLfxoBoost100Reduced|enumerator|cmuLfxoBoost100Reduced = 0x3,
DECL|cmuLfxoBoost100|enumerator|cmuLfxoBoost100 = 0x2,
DECL|cmuLfxoBoost70Reduced|enumerator|cmuLfxoBoost70Reduced = 0x1,
DECL|cmuLfxoBoost70|enumerator|cmuLfxoBoost70 = 0x0,
DECL|cmuOscMode_AcCoupled|enumerator|cmuOscMode_AcCoupled, /**< AC coupled buffer. */
DECL|cmuOscMode_Crystal|enumerator|cmuOscMode_Crystal, /**< Crystal oscillator. */
DECL|cmuOscMode_External|enumerator|cmuOscMode_External, /**< External digital clock. */
DECL|cmuOsc_AUXHFRCO|enumerator|cmuOsc_AUXHFRCO, /**< Auxiliary high frequency RC oscillator. */
DECL|cmuOsc_HFRCO|enumerator|cmuOsc_HFRCO, /**< High frequency RC oscillator. */
DECL|cmuOsc_HFXO|enumerator|cmuOsc_HFXO, /**< High frequency crystal oscillator. */
DECL|cmuOsc_LFRCO|enumerator|cmuOsc_LFRCO, /**< Low frequency RC oscillator. */
DECL|cmuOsc_LFXO|enumerator|cmuOsc_LFXO, /**< Low frequency crystal oscillator. */
DECL|cmuOsc_PLFRCO|enumerator|cmuOsc_PLFRCO, /**< Precision Low Frequency Oscillator. */
DECL|cmuOsc_ULFRCO|enumerator|cmuOsc_ULFRCO, /**< Ultra low frequency RC oscillator. */
DECL|cmuOsc_USHFRCO|enumerator|cmuOsc_USHFRCO, /**< USB high frequency RC oscillator */
DECL|cmuSelect_AUXHFRCO|enumerator|cmuSelect_AUXHFRCO, /**< Auxilliary clock source can be used for debug clock */
DECL|cmuSelect_CORELEDIV2|macro|cmuSelect_CORELEDIV2
DECL|cmuSelect_Disabled|enumerator|cmuSelect_Disabled, /**< Clock selector disabled. */
DECL|cmuSelect_Error|enumerator|cmuSelect_Error, /**< Usage error. */
DECL|cmuSelect_HFCLKLE|enumerator|cmuSelect_HFCLKLE, /**< High frequency LE clock divided by 2 or 4. */
DECL|cmuSelect_HFCLK|enumerator|cmuSelect_HFCLK, /**< Divided HFCLK on Giant for debug clock, undivided on
DECL|cmuSelect_HFRCO|enumerator|cmuSelect_HFRCO, /**< High frequency RC oscillator. */
DECL|cmuSelect_HFXO|enumerator|cmuSelect_HFXO, /**< High frequency crystal oscillator. */
DECL|cmuSelect_LFRCO|enumerator|cmuSelect_LFRCO, /**< Low frequency RC oscillator. */
DECL|cmuSelect_LFXO|enumerator|cmuSelect_LFXO, /**< Low frequency crystal oscillator. */
DECL|cmuSelect_PLFRCO|enumerator|cmuSelect_PLFRCO, /**< Precision Low Frequency Oscillator. */
DECL|cmuSelect_ULFRCO|enumerator|cmuSelect_ULFRCO, /**< Ultra low frequency RC oscillator. */
DECL|cmuSelect_USHFRCODIV2|enumerator|cmuSelect_USHFRCODIV2, /**< USB high frequency RC oscillator */
DECL|cmuSelect_USHFRCO|enumerator|cmuSelect_USHFRCO, /**< USB high frequency RC oscillator */
DECL|cmuUSHFRCOBand_24MHz|enumerator|cmuUSHFRCOBand_24MHz = _CMU_USHFRCOCONF_BAND_24MHZ,
DECL|cmuUSHFRCOBand_48MHz|enumerator|cmuUSHFRCOBand_48MHz = _CMU_USHFRCOCONF_BAND_48MHZ,
DECL|ctuneStartup|member|uint16_t ctuneStartup; /**< Startup phase CTUNE (load capacitance) value */
DECL|ctuneSteadyState|member|uint16_t ctuneSteadyState; /**< Steady-state phase CTUNE (load capacitance) value */
DECL|ctune|member|uint8_t ctune; /**< CTUNE (load capacitance) value */
DECL|gain|member|uint8_t gain; /**< Gain / max startup margin */
DECL|lowPowerMode|member|bool lowPowerMode; /**< Enable low-power mode */
DECL|mode|member|CMU_OscMode_TypeDef mode; /**< Oscillator mode */
DECL|mode|member|CMU_OscMode_TypeDef mode; /**< Oscillator mode */
DECL|regIshSteadyState|member|uint8_t regIshSteadyState; /**< Shunt steady-state current */
DECL|thresholdPeakDetect|member|uint8_t thresholdPeakDetect; /**< Peak detection threshold */
DECL|timeoutPeakDetect|member|uint8_t timeoutPeakDetect; /**< Timeout - peak detection */
DECL|timeoutShuntOptimization|member|uint8_t timeoutShuntOptimization; /**< Timeout - shunt optimization */
DECL|timeoutStartup|member|uint8_t timeoutStartup; /**< Timeout - startup */
DECL|timeoutSteady|member|uint8_t timeoutSteady; /**< Timeout - steady-state */
DECL|timeout|member|uint8_t timeout; /**< Startup delay */
DECL|xoCoreBiasTrimStartup|member|uint8_t xoCoreBiasTrimStartup; /**< Startup XO core bias current trim */
DECL|xoCoreBiasTrimSteadyState|member|uint8_t xoCoreBiasTrimSteadyState; /**< Steady-state XO core bias current trim */
