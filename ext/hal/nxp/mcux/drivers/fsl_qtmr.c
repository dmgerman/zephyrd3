DECL|QTMR_ClearStatusFlags|function|void QTMR_ClearStatusFlags(TMR_Type *base, qtmr_channel_selection_t channel, uint32_t mask)
DECL|QTMR_Deinit|function|void QTMR_Deinit(TMR_Type *base, qtmr_channel_selection_t channel)
DECL|QTMR_DisableDma|function|void QTMR_DisableDma(TMR_Type *base, qtmr_channel_selection_t channel, uint32_t mask)
DECL|QTMR_DisableInterrupts|function|void QTMR_DisableInterrupts(TMR_Type *base, qtmr_channel_selection_t channel, uint32_t mask)
DECL|QTMR_EnableDma|function|void QTMR_EnableDma(TMR_Type *base, qtmr_channel_selection_t channel, uint32_t mask)
DECL|QTMR_EnableInterrupts|function|void QTMR_EnableInterrupts(TMR_Type *base, qtmr_channel_selection_t channel, uint32_t mask)
DECL|QTMR_GetDefaultConfig|function|void QTMR_GetDefaultConfig(qtmr_config_t *config)
DECL|QTMR_GetEnabledInterrupts|function|uint32_t QTMR_GetEnabledInterrupts(TMR_Type *base, qtmr_channel_selection_t channel)
DECL|QTMR_GetInstance|function|static uint32_t QTMR_GetInstance(TMR_Type *base)
DECL|QTMR_GetStatus|function|uint32_t QTMR_GetStatus(TMR_Type *base, qtmr_channel_selection_t channel)
DECL|QTMR_Init|function|void QTMR_Init(TMR_Type *base, qtmr_channel_selection_t channel, const qtmr_config_t *config)
DECL|QTMR_SetTimerPeriod|function|void QTMR_SetTimerPeriod(TMR_Type *base, qtmr_channel_selection_t channel, uint16_t ticks)
DECL|QTMR_SetupInputCapture|function|void QTMR_SetupInputCapture(TMR_Type *base, qtmr_channel_selection_t channel, qtmr_input_source_t capturePin, bool inputPolarity, bool reloadOnCapture,
DECL|QTMR_SetupPwm|function|status_t QTMR_SetupPwm( TMR_Type *base, qtmr_channel_selection_t channel, uint32_t pwmFreqHz, uint8_t dutyCyclePercent, bool outputPolarity, uint32_t srcClock_Hz)
DECL|s_qtmrBases|variable|s_qtmrBases
DECL|s_qtmrClocks|variable|s_qtmrClocks
