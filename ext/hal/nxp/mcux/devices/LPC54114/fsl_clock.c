DECL|CLOCK_AttachClk|function|void CLOCK_AttachClk(clock_attach_id_t connection)
DECL|CLOCK_EnableUsbfs0Clock|function|bool CLOCK_EnableUsbfs0Clock(clock_usb_src_t src, uint32_t freq)
DECL|CLOCK_GetAsyncApbClkFreq|function|uint32_t CLOCK_GetAsyncApbClkFreq(void)
DECL|CLOCK_GetCoreSysClkFreq|function|uint32_t CLOCK_GetCoreSysClkFreq(void)
DECL|CLOCK_GetExtClkFreq|function|uint32_t CLOCK_GetExtClkFreq(void)
DECL|CLOCK_GetFRGInputClock|function|uint32_t CLOCK_GetFRGInputClock(void)
DECL|CLOCK_GetFlexCommClkFreq|function|uint32_t CLOCK_GetFlexCommClkFreq(uint32_t id)
DECL|CLOCK_GetFreq|function|uint32_t CLOCK_GetFreq(clock_name_t clockName)
DECL|CLOCK_GetFro12MFreq|function|uint32_t CLOCK_GetFro12MFreq(void)
DECL|CLOCK_GetFroHfFreq|function|uint32_t CLOCK_GetFroHfFreq(void)
DECL|CLOCK_GetI2SMClkFreq|function|uint32_t CLOCK_GetI2SMClkFreq(void)
DECL|CLOCK_GetOsc32KFreq|function|uint32_t CLOCK_GetOsc32KFreq(void)
DECL|CLOCK_GetPllConfig|function|static pll_error_t CLOCK_GetPllConfig( uint32_t finHz, uint32_t foutHz, pll_setup_t *pSetup, bool useFeedbackDiv2, bool useSS)
DECL|CLOCK_GetPllOutFreq|function|uint32_t CLOCK_GetPllOutFreq(void)
DECL|CLOCK_GetSystemPLLInClockRate|function|uint32_t CLOCK_GetSystemPLLInClockRate(void)
DECL|CLOCK_GetSystemPLLOutClockRate|function|uint32_t CLOCK_GetSystemPLLOutClockRate(bool recompute)
DECL|CLOCK_GetSystemPLLOutFromSetupUpdate|function|static void CLOCK_GetSystemPLLOutFromSetupUpdate(pll_setup_t *pSetup)
DECL|CLOCK_GetSystemPLLOutFromSetup|function|uint32_t CLOCK_GetSystemPLLOutFromSetup(pll_setup_t *pSetup)
DECL|CLOCK_GetWdtOscFreq|function|uint32_t CLOCK_GetWdtOscFreq(void)
DECL|CLOCK_SetClkDiv|function|void CLOCK_SetClkDiv(clock_div_name_t div_name, uint32_t divided_by_value, bool reset)
DECL|CLOCK_SetFLASHAccessCyclesForFreq|function|void CLOCK_SetFLASHAccessCyclesForFreq(uint32_t iFreq)
DECL|CLOCK_SetFRGClock|function|uint32_t CLOCK_SetFRGClock(uint32_t freq)
DECL|CLOCK_SetPLLFreq|function|pll_error_t CLOCK_SetPLLFreq(const pll_setup_t *pSetup)
DECL|CLOCK_SetStoredPLLClockRate|function|void CLOCK_SetStoredPLLClockRate(uint32_t rate)
DECL|CLOCK_SetupFROClocking|function|status_t CLOCK_SetupFROClocking(uint32_t iFreq)
DECL|CLOCK_SetupPLLData|function|pll_error_t CLOCK_SetupPLLData(pll_config_t *pControl, pll_setup_t *pSetup)
DECL|CLOCK_SetupSystemPLLMult|function|void CLOCK_SetupSystemPLLMult(uint32_t multiply_by, uint32_t input_freq)
DECL|CLOCK_SetupSystemPLLPrec|function|pll_error_t CLOCK_SetupSystemPLLPrec(pll_setup_t *pSetup, uint32_t flagcfg)
DECL|FindGreatestCommonDivisor|function|static uint32_t FindGreatestCommonDivisor(uint32_t m, uint32_t n)
DECL|INDEX_SECTOR_TRIM48|macro|INDEX_SECTOR_TRIM48
DECL|INDEX_SECTOR_TRIM96|macro|INDEX_SECTOR_TRIM96
DECL|MVALMAX|macro|MVALMAX
DECL|NVALMAX|macro|NVALMAX
DECL|PLL_LOWER_IN_LIMIT|macro|PLL_LOWER_IN_LIMIT
DECL|PLL_MAX_CCO_FREQ_MHZ|macro|PLL_MAX_CCO_FREQ_MHZ
DECL|PLL_MAX_IN_SSMODE|macro|PLL_MAX_IN_SSMODE
DECL|PLL_MAX_N_DIV|macro|PLL_MAX_N_DIV
DECL|PLL_MIN_CCO_FREQ_MHZ|macro|PLL_MIN_CCO_FREQ_MHZ
DECL|PLL_MIN_IN_SSMODE|macro|PLL_MIN_IN_SSMODE
DECL|PLL_NDEC_VAL_M|macro|PLL_NDEC_VAL_M
DECL|PLL_NDEC_VAL_P|macro|PLL_NDEC_VAL_P
DECL|PLL_NDEC_VAL_SET|macro|PLL_NDEC_VAL_SET
DECL|PLL_PDEC_VAL_M|macro|PLL_PDEC_VAL_M
DECL|PLL_PDEC_VAL_P|macro|PLL_PDEC_VAL_P
DECL|PLL_PDEC_VAL_SET|macro|PLL_PDEC_VAL_SET
DECL|PLL_SSCG0_MDEC_VAL_M|macro|PLL_SSCG0_MDEC_VAL_M
DECL|PLL_SSCG0_MDEC_VAL_P|macro|PLL_SSCG0_MDEC_VAL_P
DECL|PLL_SSCG0_MDEC_VAL_SET|macro|PLL_SSCG0_MDEC_VAL_SET
DECL|PLL_SSCG1_MD_FRACT_M|macro|PLL_SSCG1_MD_FRACT_M
DECL|PLL_SSCG1_MD_FRACT_P|macro|PLL_SSCG1_MD_FRACT_P
DECL|PLL_SSCG1_MD_FRACT_SET|macro|PLL_SSCG1_MD_FRACT_SET
DECL|PLL_SSCG1_MD_INT_M|macro|PLL_SSCG1_MD_INT_M
DECL|PLL_SSCG1_MD_INT_P|macro|PLL_SSCG1_MD_INT_P
DECL|PLL_SSCG1_MD_INT_SET|macro|PLL_SSCG1_MD_INT_SET
DECL|PLL_SSCG_DITHER_VALUE|macro|PLL_SSCG_DITHER_VALUE
DECL|PLL_SSCG_MC_COMP_VALUE|macro|PLL_SSCG_MC_COMP_VALUE
DECL|PLL_SSCG_MF_FREQ_VALUE|macro|PLL_SSCG_MF_FREQ_VALUE
DECL|PLL_SSCG_MR_DEPTH_VALUE|macro|PLL_SSCG_MR_DEPTH_VALUE
DECL|PVALMAX|macro|PVALMAX
DECL|findPllMMult|function|static uint32_t findPllMMult(uint32_t ctrlReg, uint32_t mDecReg)
DECL|findPllPostDiv|function|static uint32_t findPllPostDiv(uint32_t ctrlReg, uint32_t pDecReg)
DECL|findPllPreDiv|function|static uint32_t findPllPreDiv(uint32_t ctrlReg, uint32_t nDecReg)
DECL|g_Ext_Clk_Freq|variable|g_Ext_Clk_Freq
DECL|g_I2S_Mclk_Freq|variable|g_I2S_Mclk_Freq
DECL|pllDecodeM|function|static uint32_t pllDecodeM(uint32_t MDEC)
DECL|pllDecodeN|function|static uint32_t pllDecodeN(uint32_t NDEC)
DECL|pllDecodeP|function|static uint32_t pllDecodeP(uint32_t PDEC)
DECL|pllEncodeM|function|static uint32_t pllEncodeM(uint32_t M)
DECL|pllEncodeN|function|static uint32_t pllEncodeN(uint32_t N)
DECL|pllEncodeP|function|static uint32_t pllEncodeP(uint32_t P)
DECL|pllFindSel|function|static void pllFindSel(uint32_t M, bool bypassFBDIV2, uint32_t *pSelP, uint32_t *pSelI, uint32_t *pSelR)
DECL|s_Pll_Freq|variable|s_Pll_Freq
DECL|wdtFreqLookup|variable|wdtFreqLookup
