DECL|CLOCK_BootToBlpeMode|function|status_t CLOCK_BootToBlpeMode(mcg_oscsel_t oscsel)
DECL|CLOCK_BootToBlpiMode|function|status_t CLOCK_BootToBlpiMode(uint8_t fcrdiv, mcg_irc_mode_t ircs, uint8_t ircEnableMode)
DECL|CLOCK_BootToFeeMode|function|status_t CLOCK_BootToFeeMode( mcg_oscsel_t oscsel, uint8_t frdiv, mcg_dmx32_t dmx32, mcg_drs_t drs, void (*fllStableDelay)(void))
DECL|CLOCK_BootToFeiMode|function|status_t CLOCK_BootToFeiMode(mcg_dmx32_t dmx32, mcg_drs_t drs, void (*fllStableDelay)(void))
DECL|CLOCK_BootToPeeMode|function|status_t CLOCK_BootToPeeMode(mcg_oscsel_t oscsel, mcg_pll_clk_select_t pllcs, mcg_pll_config_t const *config)
DECL|CLOCK_CalcPllDiv|function|uint32_t CLOCK_CalcPllDiv(uint32_t refFreq, uint32_t desireFreq, uint8_t *prdiv, uint8_t *vdiv)
DECL|CLOCK_ClearStatusFlags|function|void CLOCK_ClearStatusFlags(uint32_t mask)
DECL|CLOCK_DeinitOsc0|function|void CLOCK_DeinitOsc0(void)
DECL|CLOCK_EnablePll0|function|void CLOCK_EnablePll0(mcg_pll_config_t const *config)
DECL|CLOCK_EnableUsbfs0Clock|function|bool CLOCK_EnableUsbfs0Clock(clock_usb_src_t src, uint32_t freq)
DECL|CLOCK_ExternalModeToFbeModeQuick|function|status_t CLOCK_ExternalModeToFbeModeQuick(void)
DECL|CLOCK_FllStableDelay|function|void CLOCK_FllStableDelay(void)
DECL|CLOCK_GetBusClkFreq|function|uint32_t CLOCK_GetBusClkFreq(void)
DECL|CLOCK_GetCoreSysClkFreq|function|uint32_t CLOCK_GetCoreSysClkFreq(void)
DECL|CLOCK_GetEr32kClkFreq|function|uint32_t CLOCK_GetEr32kClkFreq(void)
DECL|CLOCK_GetFixedFreqClkFreq|function|uint32_t CLOCK_GetFixedFreqClkFreq(void)
DECL|CLOCK_GetFlashClkFreq|function|uint32_t CLOCK_GetFlashClkFreq(void)
DECL|CLOCK_GetFllExtRefClkFreq|function|static uint32_t CLOCK_GetFllExtRefClkFreq(void)
DECL|CLOCK_GetFllFreq|function|uint32_t CLOCK_GetFllFreq(void)
DECL|CLOCK_GetFllRefClkFreq|function|static uint32_t CLOCK_GetFllRefClkFreq(void)
DECL|CLOCK_GetFreq|function|uint32_t CLOCK_GetFreq(clock_name_t clockName)
DECL|CLOCK_GetInternalRefClkFreq|function|uint32_t CLOCK_GetInternalRefClkFreq(void)
DECL|CLOCK_GetInternalRefClkSelectFreq|function|static uint32_t CLOCK_GetInternalRefClkSelectFreq(void)
DECL|CLOCK_GetMcgExtClkFreq|function|static uint32_t CLOCK_GetMcgExtClkFreq(void)
DECL|CLOCK_GetMode|function|mcg_mode_t CLOCK_GetMode(void)
DECL|CLOCK_GetOsc0ErClkFreq|function|uint32_t CLOCK_GetOsc0ErClkFreq(void)
DECL|CLOCK_GetOscRangeFromFreq|function|static uint8_t CLOCK_GetOscRangeFromFreq(uint32_t freq)
DECL|CLOCK_GetOutClkFreq|function|uint32_t CLOCK_GetOutClkFreq(void)
DECL|CLOCK_GetPlatClkFreq|function|uint32_t CLOCK_GetPlatClkFreq(void)
DECL|CLOCK_GetPll0Freq|function|uint32_t CLOCK_GetPll0Freq(void)
DECL|CLOCK_GetPll0RefFreq|function|static uint32_t CLOCK_GetPll0RefFreq(void)
DECL|CLOCK_GetPllFllSelClkFreq|function|uint32_t CLOCK_GetPllFllSelClkFreq(void)
DECL|CLOCK_GetStatusFlags|function|uint32_t CLOCK_GetStatusFlags(void)
DECL|CLOCK_InitOsc0|function|void CLOCK_InitOsc0(osc_config_t const *config)
DECL|CLOCK_InternalModeToFbiModeQuick|function|status_t CLOCK_InternalModeToFbiModeQuick(void)
DECL|CLOCK_SetBlpeMode|function|status_t CLOCK_SetBlpeMode(void)
DECL|CLOCK_SetBlpiMode|function|status_t CLOCK_SetBlpiMode(void)
DECL|CLOCK_SetExternalRefClkConfig|function|status_t CLOCK_SetExternalRefClkConfig(mcg_oscsel_t oscsel)
DECL|CLOCK_SetFbeMode|function|status_t CLOCK_SetFbeMode(uint8_t frdiv, mcg_dmx32_t dmx32, mcg_drs_t drs, void (*fllStableDelay)(void))
DECL|CLOCK_SetFbiMode|function|status_t CLOCK_SetFbiMode(mcg_dmx32_t dmx32, mcg_drs_t drs, void (*fllStableDelay)(void))
DECL|CLOCK_SetFeeMode|function|status_t CLOCK_SetFeeMode(uint8_t frdiv, mcg_dmx32_t dmx32, mcg_drs_t drs, void (*fllStableDelay)(void))
DECL|CLOCK_SetFeiMode|function|status_t CLOCK_SetFeiMode(mcg_dmx32_t dmx32, mcg_drs_t drs, void (*fllStableDelay)(void))
DECL|CLOCK_SetInternalRefClkConfig|function|status_t CLOCK_SetInternalRefClkConfig(uint8_t enableMode, mcg_irc_mode_t ircs, uint8_t fcrdiv)
DECL|CLOCK_SetMcgConfig|function|status_t CLOCK_SetMcgConfig(const mcg_config_t *config)
DECL|CLOCK_SetOsc0MonitorMode|function|void CLOCK_SetOsc0MonitorMode(mcg_monitor_mode_t mode)
DECL|CLOCK_SetPbeMode|function|status_t CLOCK_SetPbeMode(mcg_pll_clk_select_t pllcs, mcg_pll_config_t const *config)
DECL|CLOCK_SetPeeMode|function|status_t CLOCK_SetPeeMode(void)
DECL|CLOCK_SetPll0MonitorMode|function|void CLOCK_SetPll0MonitorMode(mcg_monitor_mode_t mode)
DECL|CLOCK_SetRtcOscMonitorMode|function|void CLOCK_SetRtcOscMonitorMode(mcg_monitor_mode_t mode)
DECL|CLOCK_SetSimConfig|function|void CLOCK_SetSimConfig(sim_clock_config_t const *config)
DECL|CLOCK_TrimInternalRefClk|function|status_t CLOCK_TrimInternalRefClk(uint32_t extFreq, uint32_t desireFreq, uint32_t *actualFreq, mcg_atm_select_t atms)
DECL|MCG_C11_PLLREFSEL1_VAL|macro|MCG_C11_PLLREFSEL1_VAL
DECL|MCG_C11_PRDIV1_VAL|macro|MCG_C11_PRDIV1_VAL
DECL|MCG_C12_VDIV1_VAL|macro|MCG_C12_VDIV1_VAL
DECL|MCG_C1_FRDIV_VAL|macro|MCG_C1_FRDIV_VAL
DECL|MCG_C2_EREFS0_MASK|macro|MCG_C2_EREFS0_MASK
DECL|MCG_C2_HGO0_MASK|macro|MCG_C2_HGO0_MASK
DECL|MCG_C2_LP_VAL|macro|MCG_C2_LP_VAL
DECL|MCG_C2_RANGE0_MASK|macro|MCG_C2_RANGE0_MASK
DECL|MCG_C2_RANGE_VAL|macro|MCG_C2_RANGE_VAL
DECL|MCG_C4_DMX32_VAL|macro|MCG_C4_DMX32_VAL
DECL|MCG_C4_DRST_DRS_VAL|macro|MCG_C4_DRST_DRS_VAL
DECL|MCG_C5_PLLREFSEL0_VAL|macro|MCG_C5_PLLREFSEL0_VAL
DECL|MCG_C5_PRDIV0_VAL|macro|MCG_C5_PRDIV0_VAL
DECL|MCG_C6_CME0_MASK|macro|MCG_C6_CME0_MASK
DECL|MCG_C6_VDIV0_VAL|macro|MCG_C6_VDIV0_VAL
DECL|MCG_C7_OSCSEL_VAL|macro|MCG_C7_OSCSEL_VAL
DECL|MCG_C7_PLL32KREFSEL_VAL|macro|MCG_C7_PLL32KREFSEL_VAL
DECL|MCG_S2_PLLCST_VAL|macro|MCG_S2_PLLCST_VAL
DECL|MCG_SC_FCRDIV_VAL|macro|MCG_SC_FCRDIV_VAL
DECL|MCG_S_CLKST_VAL|macro|MCG_S_CLKST_VAL
DECL|MCG_S_IRCST_VAL|macro|MCG_S_IRCST_VAL
DECL|MCG_S_IREFST_VAL|macro|MCG_S_IREFST_VAL
DECL|MCG_S_PLLST_VAL|macro|MCG_S_PLLST_VAL
DECL|OSC_MODE_MASK|macro|OSC_MODE_MASK
DECL|PLL_FIXED_MULT|macro|PLL_FIXED_MULT
DECL|SIM_CLKDIV1_OUTDIV1_VAL|macro|SIM_CLKDIV1_OUTDIV1_VAL
DECL|SIM_CLKDIV1_OUTDIV2_VAL|macro|SIM_CLKDIV1_OUTDIV2_VAL
DECL|SIM_CLKDIV1_OUTDIV4_VAL|macro|SIM_CLKDIV1_OUTDIV4_VAL
DECL|SIM_SOPT1_OSC32KSEL_VAL|macro|SIM_SOPT1_OSC32KSEL_VAL
DECL|SIM_SOPT2_PLLFLLSEL_VAL|macro|SIM_SOPT2_PLLFLLSEL_VAL
DECL|TRIM_FIRC_MAX|macro|TRIM_FIRC_MAX
DECL|TRIM_FIRC_MIN|macro|TRIM_FIRC_MIN
DECL|TRIM_REF_CLK_MAX|macro|TRIM_REF_CLK_MAX
DECL|TRIM_REF_CLK_MIN|macro|TRIM_REF_CLK_MIN
DECL|TRIM_SIRC_MAX|macro|TRIM_SIRC_MAX
DECL|TRIM_SIRC_MIN|macro|TRIM_SIRC_MIN
DECL|_mcg_clkout_stat|enum|enum _mcg_clkout_stat
DECL|_mcg_pllst|enum|enum _mcg_pllst
DECL|g_xtal0Freq|variable|g_xtal0Freq
DECL|g_xtal32Freq|variable|g_xtal32Freq
DECL|kMCG_ClkOutStatExt|enumerator|kMCG_ClkOutStatExt, /* External clock. */
DECL|kMCG_ClkOutStatFll|enumerator|kMCG_ClkOutStatFll, /* FLL. */
DECL|kMCG_ClkOutStatInt|enumerator|kMCG_ClkOutStatInt, /* Internal clock. */
DECL|kMCG_ClkOutStatPll|enumerator|kMCG_ClkOutStatPll /* PLL. */
DECL|kMCG_PllstFll|enumerator|kMCG_PllstFll, /* FLL is used. */
DECL|kMCG_PllstPll|enumerator|kMCG_PllstPll /* PLL is used. */
DECL|mcgModeMatrix|variable|mcgModeMatrix
DECL|s_fastIrcFreq|variable|s_fastIrcFreq
DECL|s_slowIrcFreq|variable|s_slowIrcFreq
