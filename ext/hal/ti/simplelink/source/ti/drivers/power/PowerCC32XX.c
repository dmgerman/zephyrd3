DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|FALSE|macro|FALSE
DECL|LPDSFunc|typedef|typedef void (*LPDSFunc)(void);
DECL|PowerCC32XX_SSPICSDelay|macro|PowerCC32XX_SSPICSDelay
DECL|PowerCC32XX_SSPIPowerDownInstruction|macro|PowerCC32XX_SSPIPowerDownInstruction
DECL|PowerCC32XX_SSPIReadStatusInstruction|macro|PowerCC32XX_SSPIReadStatusInstruction
DECL|PowerCC32XX_SSPISemaphoreTakeTries|macro|PowerCC32XX_SSPISemaphoreTakeTries
DECL|PowerCC32XX_configureWakeup|function|void PowerCC32XX_configureWakeup(PowerCC32XX_Wakeup *wakeup)
DECL|PowerCC32XX_contextSave|variable|PowerCC32XX_contextSave
DECL|PowerCC32XX_disableIORetention|function|void PowerCC32XX_disableIORetention(unsigned long groupFlags)
DECL|PowerCC32XX_getParkState|function|PowerCC32XX_ParkState PowerCC32XX_getParkState(PowerCC32XX_Pin pin)
DECL|PowerCC32XX_getWakeup|function|void PowerCC32XX_getWakeup(PowerCC32XX_Wakeup *wakeup)
DECL|PowerCC32XX_module|variable|PowerCC32XX_module
DECL|PowerCC32XX_parkPin|function|void PowerCC32XX_parkPin(PowerCC32XX_Pin pin, PowerCC32XX_ParkState parkState, uint32_t * previousType, uint16_t * previousDirection)
DECL|PowerCC32XX_restoreParkState|function|void PowerCC32XX_restoreParkState(PowerCC32XX_Pin pin, PowerCC32XX_ParkState state)
DECL|PowerCC32XX_restoreParkedPin|function|void PowerCC32XX_restoreParkedPin(PowerCC32XX_Pin pin, uint32_t type, uint16_t direction)
DECL|PowerCC32XX_setParkState|function|void PowerCC32XX_setParkState(PowerCC32XX_Pin pin, uint32_t level)
DECL|PowerCC32XX_shutdownSSPI|function|void PowerCC32XX_shutdownSSPI(void)
DECL|Power_disablePolicy|function|bool Power_disablePolicy(void)
DECL|Power_enablePolicy|function|void Power_enablePolicy(void)
DECL|Power_getConstraintMask|function|uint_fast32_t Power_getConstraintMask(void)
DECL|Power_getDependencyCount|function|int_fast16_t Power_getDependencyCount(uint_fast16_t resourceId)
DECL|Power_getTransitionLatency|function|uint_fast32_t Power_getTransitionLatency(uint_fast16_t sleepState, uint_fast16_t type)
DECL|Power_getTransitionState|function|uint_fast16_t Power_getTransitionState(void)
DECL|Power_idleFunc|function|void Power_idleFunc()
DECL|Power_init|function|int_fast16_t Power_init()
DECL|Power_registerNotify|function|int_fast16_t Power_registerNotify(Power_NotifyObj * pNotifyObj, uint_fast16_t eventTypes, Power_NotifyFxn notifyFxn, uintptr_t clientArg)
DECL|Power_releaseConstraint|function|int_fast16_t Power_releaseConstraint(uint_fast16_t constraintId)
DECL|Power_releaseDependency|function|int_fast16_t Power_releaseDependency(uint_fast16_t resourceId)
DECL|Power_setConstraint|function|int_fast16_t Power_setConstraint(uint_fast16_t constraintId)
DECL|Power_setDependency|function|int_fast16_t Power_setDependency(uint_fast16_t resourceId)
DECL|Power_setPolicy|function|void Power_setPolicy(Power_PolicyFxn policy)
DECL|Power_shutdown|function|int_fast16_t Power_shutdown(uint_fast16_t shutdownState, uint_fast32_t shutdownTime)
DECL|Power_sleep|function|int_fast16_t Power_sleep(uint_fast16_t sleepState)
DECL|Power_unregisterNotify|function|void Power_unregisterNotify(Power_NotifyObj * pNotifyObj)
DECL|STATUS_BUSY|macro|STATUS_BUSY
DECL|SYNCBARRIER|macro|SYNCBARRIER
DECL|TRUE|macro|TRUE
DECL|notify|function|static int_fast16_t notify(uint_fast16_t eventType)
DECL|parkPins|function|static void parkPins(void)
DECL|restoreNVICRegs|function|static void restoreNVICRegs(void)
DECL|restoreParkedPins|function|static void restoreParkedPins(void)
DECL|restorePeriphClocks|function|static void restorePeriphClocks(void)
DECL|saveNVICRegs|function|static void saveNVICRegs(void)
DECL|uSEC_DELAY|macro|uSEC_DELAY
