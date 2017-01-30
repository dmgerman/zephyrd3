DECL|TPM_COMBINE_SHIFT|macro|TPM_COMBINE_SHIFT
DECL|TPM_Deinit|function|void TPM_Deinit(TPM_Type *base)
DECL|TPM_DisableInterrupts|function|void TPM_DisableInterrupts(TPM_Type *base, uint32_t mask)
DECL|TPM_EnableInterrupts|function|void TPM_EnableInterrupts(TPM_Type *base, uint32_t mask)
DECL|TPM_GetDefaultConfig|function|void TPM_GetDefaultConfig(tpm_config_t *config)
DECL|TPM_GetEnabledInterrupts|function|uint32_t TPM_GetEnabledInterrupts(TPM_Type *base)
DECL|TPM_GetInstance|function|static uint32_t TPM_GetInstance(TPM_Type *base)
DECL|TPM_Init|function|void TPM_Init(TPM_Type *base, const tpm_config_t *config)
DECL|TPM_SetupDualEdgeCapture|function|void TPM_SetupDualEdgeCapture(TPM_Type *base, tpm_chnl_t chnlPairNumber, const tpm_dual_edge_capture_param_t *edgeParam, uint32_t filterValue)
DECL|TPM_SetupInputCapture|function|void TPM_SetupInputCapture(TPM_Type *base, tpm_chnl_t chnlNumber, tpm_input_capture_edge_t captureMode)
DECL|TPM_SetupOutputCompare|function|void TPM_SetupOutputCompare(TPM_Type *base, tpm_chnl_t chnlNumber, tpm_output_compare_mode_t compareMode, uint32_t compareValue)
DECL|TPM_SetupPwm|function|status_t TPM_SetupPwm(TPM_Type *base, const tpm_chnl_pwm_signal_param_t *chnlParams, uint8_t numOfChnls, tpm_pwm_mode_t mode, uint32_t pwmFreq_Hz,
DECL|TPM_SetupQuadDecode|function|void TPM_SetupQuadDecode(TPM_Type *base, const tpm_phase_params_t *phaseAParams, const tpm_phase_params_t *phaseBParams, tpm_quad_decode_mode_t quadMode)
DECL|TPM_UpdateChnlEdgeLevelSelect|function|void TPM_UpdateChnlEdgeLevelSelect(TPM_Type *base, tpm_chnl_t chnlNumber, uint8_t level)
DECL|TPM_UpdatePwmDutycycle|function|void TPM_UpdatePwmDutycycle(TPM_Type *base, tpm_chnl_t chnlNumber, tpm_pwm_mode_t currentPwmMode, uint8_t dutyCyclePercent)
DECL|s_tpmBases|variable|s_tpmBases
DECL|s_tpmClocks|variable|s_tpmClocks
