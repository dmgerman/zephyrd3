DECL|CY_SYSCLK_ILO_TARGET_FREQ|macro|CY_SYSCLK_ILO_TARGET_FREQ
DECL|CY_SYSCLK_MAX_FLL_OUTPUT_FREQ|macro|CY_SYSCLK_MAX_FLL_OUTPUT_FREQ
DECL|CY_SYSCLK_MIN_FLL_CCO_OUTPUT_FREQ|macro|CY_SYSCLK_MIN_FLL_CCO_OUTPUT_FREQ
DECL|CY_SYSCLK_MIN_FLL_OUTPUT_FREQ|macro|CY_SYSCLK_MIN_FLL_OUTPUT_FREQ
DECL|CY_SYSCLK_N_ELMTS|macro|CY_SYSCLK_N_ELMTS
DECL|CY_SYSCLK_PILO_TARGET_FREQ|macro|CY_SYSCLK_PILO_TARGET_FREQ
DECL|CY_SYSCLK_PILO_TRIM_STEP|macro|CY_SYSCLK_PILO_TRIM_STEP
DECL|Cy_SysClk_ClkHfConfigureCsv|function|cy_en_sysclk_status_t Cy_SysClk_ClkHfConfigureCsv(uint32_t clkHf, const cy_stc_clkhf_csv_config_t *config)
DECL|Cy_SysClk_ClkMeasurementCountersGetFreq|function|uint32_t Cy_SysClk_ClkMeasurementCountersGetFreq(bool measuredClock, uint32_t refClkFreq)
DECL|Cy_SysClk_ClkPathGetSource|function|cy_en_clkpath_in_sources_t Cy_SysClk_ClkPathGetSource(uint32_t clkPath)
DECL|Cy_SysClk_ClkPathSetSource|function|cy_en_sysclk_status_t Cy_SysClk_ClkPathSetSource(uint32_t clkPath, cy_en_clkpath_in_sources_t source)
DECL|Cy_SysClk_DeepSleepCallback|function|cy_en_syspm_status_t Cy_SysClk_DeepSleepCallback(cy_stc_syspm_callback_params_t *callbackParams)
DECL|Cy_SysClk_EcoConfigure|function|cy_en_sysclk_status_t Cy_SysClk_EcoConfigure(uint32_t freq, uint32_t cLoad, uint32_t esr, uint32_t driveLevel)
DECL|Cy_SysClk_EcoEnable|function|cy_en_sysclk_status_t Cy_SysClk_EcoEnable(uint32_t timeoutus)
DECL|Cy_SysClk_FllConfigure|function|cy_en_sysclk_status_t Cy_SysClk_FllConfigure(uint32_t inputFreq, uint32_t outputFreq, cy_en_fll_pll_output_mode_t outputMode)
DECL|Cy_SysClk_FllEnable|function|cy_en_sysclk_status_t Cy_SysClk_FllEnable(uint32_t timeoutus)
DECL|Cy_SysClk_FllGetConfiguration|function|void Cy_SysClk_FllGetConfiguration(cy_stc_fll_manual_config_t *config)
DECL|Cy_SysClk_FllManualConfigure|function|cy_en_sysclk_status_t Cy_SysClk_FllManualConfigure(const cy_stc_fll_manual_config_t *config)
DECL|Cy_SysClk_IloTrim|function|int32_t Cy_SysClk_IloTrim(uint32_t iloFreq)
DECL|Cy_SysClk_PeriphGetFrequency|function|uint32_t Cy_SysClk_PeriphGetFrequency(cy_en_divider_types_t dividerType, uint32_t dividerNum)
DECL|Cy_SysClk_PiloTrim|function|int32_t Cy_SysClk_PiloTrim(uint32_t piloFreq)
DECL|Cy_SysClk_PllConfigure|function|cy_en_sysclk_status_t Cy_SysClk_PllConfigure(uint32_t clkPath, const cy_stc_pll_config_t *config)
DECL|Cy_SysClk_PllEnable|function|cy_en_sysclk_status_t Cy_SysClk_PllEnable(uint32_t clkPath, uint32_t timeoutus)
DECL|Cy_SysClk_PllGetConfiguration|function|cy_en_sysclk_status_t Cy_SysClk_PllGetConfiguration(uint32_t clkPath, cy_stc_pll_manual_config_t *config)
DECL|Cy_SysClk_PllManualConfigure|function|cy_en_sysclk_status_t Cy_SysClk_PllManualConfigure(uint32_t clkPath, const cy_stc_pll_manual_config_t *config)
DECL|Cy_SysClk_StartClkMeasurementCounters|function|cy_en_sysclk_status_t Cy_SysClk_StartClkMeasurementCounters(cy_en_meas_clks_t clock1, uint32_t count1, cy_en_meas_clks_t clock2)
DECL|Cy_SysClk_WcoConfigureCsv|function|void Cy_SysClk_WcoConfigureCsv(const cy_stc_wco_csv_config_t *config)
DECL|MAX_FB_DIV_LF|macro|MAX_FB_DIV_LF
DECL|MAX_FB_DIV_NORM|macro|MAX_FB_DIV_NORM
DECL|MAX_FB_DIV|macro|MAX_FB_DIV
DECL|MAX_FVCO_LF|macro|MAX_FVCO_LF
DECL|MAX_FVCO_NORM|macro|MAX_FVCO_NORM
DECL|MAX_FVCO|macro|MAX_FVCO
DECL|MAX_IN_FREQ|macro|MAX_IN_FREQ
DECL|MAX_OUTPUT_DIV|macro|MAX_OUTPUT_DIV
DECL|MAX_OUT_FREQ|macro|MAX_OUT_FREQ
DECL|MAX_REF_DIV|macro|MAX_REF_DIV
DECL|MIN_FB_DIV_LF|macro|MIN_FB_DIV_LF
DECL|MIN_FB_DIV_NORM|macro|MIN_FB_DIV_NORM
DECL|MIN_FB_DIV|macro|MIN_FB_DIV
DECL|MIN_FVCO_LF|macro|MIN_FVCO_LF
DECL|MIN_FVCO_NORM|macro|MIN_FVCO_NORM
DECL|MIN_FVCO|macro|MIN_FVCO
DECL|MIN_IN_FREQ|macro|MIN_IN_FREQ
DECL|MIN_OUTPUT_DIV|macro|MIN_OUTPUT_DIV
DECL|MIN_OUT_FREQ|macro|MIN_OUT_FREQ
DECL|MIN_REF_DIV|macro|MIN_REF_DIV
DECL|TIMEOUTK|macro|TIMEOUTK
DECL|clk1Count1|variable|clk1Count1
DECL|clkCounting|variable|clkCounting
DECL|preventCounting|variable|preventCounting
