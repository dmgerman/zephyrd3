DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|PWMTimerCC32XX_close|function|void PWMTimerCC32XX_close(PWM_Handle handle)
DECL|PWMTimerCC32XX_control|function|int_fast16_t PWMTimerCC32XX_control(PWM_Handle handle, uint_fast16_t cmd, void *arg)
DECL|PWMTimerCC32XX_fxnTable|variable|PWMTimerCC32XX_fxnTable
DECL|PWMTimerCC32XX_init|function|void PWMTimerCC32XX_init(PWM_Handle handle)
DECL|PWMTimerCC32XX_open|function|PWM_Handle PWMTimerCC32XX_open(PWM_Handle handle, PWM_Params *params)
DECL|PWMTimerCC32XX_setDuty|function|int_fast16_t PWMTimerCC32XX_setDuty(PWM_Handle handle, uint32_t dutyValue)
DECL|PWMTimerCC32XX_setPeriod|function|int_fast16_t PWMTimerCC32XX_setPeriod(PWM_Handle handle, uint32_t periodValue)
DECL|PWMTimerCC32XX_start|function|void PWMTimerCC32XX_start(PWM_Handle handle)
DECL|PWMTimerCC32XX_stop|function|void PWMTimerCC32XX_stop(PWM_Handle handle)
DECL|PWM_INVALID_VALUE|variable|PWM_INVALID_VALUE
DECL|PWM_MAX_MATCH_REG_VALUE|variable|PWM_MAX_MATCH_REG_VALUE
DECL|PWM_MAX_PERIOD_COUNT|variable|PWM_MAX_PERIOD_COUNT
DECL|PinConfigGPIOPinIndex|macro|PinConfigGPIOPinIndex
DECL|PinConfigGPIOPort|macro|PinConfigGPIOPort
DECL|PinConfigPinMode|macro|PinConfigPinMode
DECL|PinConfigPin|macro|PinConfigPin
DECL|PinConfigTimerHalf|macro|PinConfigTimerHalf
DECL|PinConfigTimerPort|macro|PinConfigTimerPort
DECL|getDutyCounts|function|static uint32_t getDutyCounts(PWM_Duty_Units dutyUnits, uint32_t dutyValue, uint32_t periodCounts)
DECL|getPeriodCounts|function|static uint32_t getPeriodCounts(PWM_Period_Units periodUnits, uint32_t periodValue)
DECL|getPowerMgrId|function|static uint_fast16_t getPowerMgrId(uint32_t baseAddr)
DECL|gpioBaseAddresses|variable|gpioBaseAddresses
DECL|gpioPinIndexes|variable|gpioPinIndexes
DECL|initHw|function|static int initHw(PWM_Handle handle, uint32_t period, uint32_t duty)
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|timerBaseAddresses|variable|timerBaseAddresses
DECL|timerHalves|variable|timerHalves
