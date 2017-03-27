DECL|SMC_GetParam|function|void SMC_GetParam(SMC_Type *base, smc_param_t *param)
DECL|SMC_PostExitStopModes|function|void SMC_PostExitStopModes(void)
DECL|SMC_PreEnterStopModes|function|void SMC_PreEnterStopModes(void)
DECL|SMC_SetPowerModeHsrun|function|status_t SMC_SetPowerModeHsrun(SMC_Type *base)
DECL|SMC_SetPowerModeLls|function|status_t SMC_SetPowerModeLls(SMC_Type *base#if ((defined(FSL_FEATURE_SMC_HAS_LLS_SUBMODE) && FSL_FEATURE_SMC_HAS_LLS_SUBMODE) || \ (defined(FSL_FEATURE_SMC_HAS_LPOPO) && FSL_FEATURE_SMC_HAS_LPOPO)) , const smc_power_mode_lls_config_t *config
DECL|SMC_SetPowerModeRun|function|status_t SMC_SetPowerModeRun(SMC_Type *base)
DECL|SMC_SetPowerModeStop|function|status_t SMC_SetPowerModeStop(SMC_Type *base, smc_partial_stop_option_t option)
DECL|SMC_SetPowerModeVlls|function|status_t SMC_SetPowerModeVlls(SMC_Type *base, const smc_power_mode_vlls_config_t *config)
DECL|SMC_SetPowerModeVlpr|function|status_t SMC_SetPowerModeVlpr(SMC_Type *base#if (defined(FSL_FEATURE_SMC_HAS_LPWUI) && FSL_FEATURE_SMC_HAS_LPWUI) , bool wakeupMode #endif
DECL|SMC_SetPowerModeVlps|function|status_t SMC_SetPowerModeVlps(SMC_Type *base)
DECL|SMC_SetPowerModeVlpw|function|status_t SMC_SetPowerModeVlpw(SMC_Type *base)
DECL|SMC_SetPowerModeWait|function|status_t SMC_SetPowerModeWait(SMC_Type *base)
