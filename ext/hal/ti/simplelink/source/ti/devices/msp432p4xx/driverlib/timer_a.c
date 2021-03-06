DECL|Timer_A_clearCaptureCompareInterrupt|function|void Timer_A_clearCaptureCompareInterrupt(uint32_t timer, uint_fast16_t captureCompareRegister)
DECL|Timer_A_clearInterruptFlag|function|void Timer_A_clearInterruptFlag(uint32_t timer)
DECL|Timer_A_clearTimer|function|void Timer_A_clearTimer(uint32_t timer)
DECL|Timer_A_configureContinuousMode|function|void Timer_A_configureContinuousMode(uint32_t timer, const Timer_A_ContinuousModeConfig *config)
DECL|Timer_A_configureUpDownMode|function|void Timer_A_configureUpDownMode(uint32_t timer, const Timer_A_UpDownModeConfig *config)
DECL|Timer_A_configureUpMode|function|void Timer_A_configureUpMode(uint32_t timer, const Timer_A_UpModeConfig *config)
DECL|Timer_A_disableCaptureCompareInterrupt|function|void Timer_A_disableCaptureCompareInterrupt(uint32_t timer, uint_fast16_t captureCompareRegister)
DECL|Timer_A_disableInterrupt|function|void Timer_A_disableInterrupt(uint32_t timer)
DECL|Timer_A_enableCaptureCompareInterrupt|function|void Timer_A_enableCaptureCompareInterrupt(uint32_t timer, uint_fast16_t captureCompareRegister)
DECL|Timer_A_enableInterrupt|function|void Timer_A_enableInterrupt(uint32_t timer)
DECL|Timer_A_generatePWM|function|void Timer_A_generatePWM(uint32_t timer, const Timer_A_PWMConfig *config)
DECL|Timer_A_getCaptureCompareCount|function|uint_fast16_t Timer_A_getCaptureCompareCount(uint32_t timer, uint_fast16_t captureCompareRegister)
DECL|Timer_A_getCaptureCompareEnabledInterruptStatus|function|uint32_t Timer_A_getCaptureCompareEnabledInterruptStatus(uint32_t timer, uint_fast16_t captureCompareRegister)
DECL|Timer_A_getCaptureCompareInterruptStatus|function|uint32_t Timer_A_getCaptureCompareInterruptStatus(uint32_t timer, uint_fast16_t captureCompareRegister, uint_fast16_t mask)
DECL|Timer_A_getCounterValue|function|uint16_t Timer_A_getCounterValue(uint32_t timer)
DECL|Timer_A_getEnabledInterruptStatus|function|uint32_t Timer_A_getEnabledInterruptStatus(uint32_t timer)
DECL|Timer_A_getInterruptStatus|function|uint32_t Timer_A_getInterruptStatus(uint32_t timer)
DECL|Timer_A_getOutputForOutputModeOutBitValue|function|uint_fast8_t Timer_A_getOutputForOutputModeOutBitValue(uint32_t timer, uint_fast16_t captureCompareRegister)
DECL|Timer_A_getSynchronizedCaptureCompareInput|function|uint_fast8_t Timer_A_getSynchronizedCaptureCompareInput(uint32_t timer, uint_fast16_t captureCompareRegister, uint_fast16_t synchronizedSetting)
DECL|Timer_A_initCapture|function|void Timer_A_initCapture(uint32_t timer, const Timer_A_CaptureModeConfig *config)
DECL|Timer_A_initCompare|function|void Timer_A_initCompare(uint32_t timer, const Timer_A_CompareModeConfig *config)
DECL|Timer_A_registerInterrupt|function|void Timer_A_registerInterrupt(uint32_t timer, uint_fast8_t interruptSelect, void (*intHandler)(void))
DECL|Timer_A_setCompareValue|function|void Timer_A_setCompareValue(uint32_t timer, uint_fast16_t compareRegister, uint_fast16_t compareValue)
DECL|Timer_A_setOutputForOutputModeOutBitValue|function|void Timer_A_setOutputForOutputModeOutBitValue(uint32_t timer, uint_fast16_t captureCompareRegister, uint_fast8_t outputModeOutBitValue)
DECL|Timer_A_startCounter|function|void Timer_A_startCounter(uint32_t timer, uint_fast16_t timerMode)
DECL|Timer_A_stopTimer|function|void Timer_A_stopTimer(uint32_t timer)
DECL|Timer_A_unregisterInterrupt|function|void Timer_A_unregisterInterrupt(uint32_t timer, uint_fast8_t interruptSelect)
DECL|privateTimer_AProcessClockSourceDivider|function|static void privateTimer_AProcessClockSourceDivider(uint32_t timer, uint16_t clockSourceDivider)
