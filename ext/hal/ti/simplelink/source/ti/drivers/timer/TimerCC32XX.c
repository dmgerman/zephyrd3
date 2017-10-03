DECL|TimerCC32XX_allocateTimerResource|function|bool TimerCC32XX_allocateTimerResource(uint32_t baseAddress, TimerCC32XX_SubTimer subTimer)
DECL|TimerCC32XX_close|function|void TimerCC32XX_close(Timer_Handle handle)
DECL|TimerCC32XX_control|function|int_fast16_t TimerCC32XX_control(Timer_Handle handle, uint_fast16_t cmd, void *arg)
DECL|TimerCC32XX_freeTimerResource|function|void TimerCC32XX_freeTimerResource(uint32_t baseAddress, TimerCC32XX_SubTimer subTimer)
DECL|TimerCC32XX_fxnTable|variable|TimerCC32XX_fxnTable
DECL|TimerCC32XX_getCount|function|uint32_t TimerCC32XX_getCount(Timer_Handle handle)
DECL|TimerCC32XX_hwiIntFunction|function|void TimerCC32XX_hwiIntFunction(uintptr_t arg)
DECL|TimerCC32XX_init|function|void TimerCC32XX_init(Timer_Handle handle)
DECL|TimerCC32XX_open|function|Timer_Handle TimerCC32XX_open(Timer_Handle handle, Timer_Params *params)
DECL|TimerCC32XX_start|function|int32_t TimerCC32XX_start(Timer_Handle handle)
DECL|TimerCC32XX_stop|function|void TimerCC32XX_stop(Timer_Handle handle)
DECL|bitMask|member|uint32_t bitMask;
DECL|getPowerMgrId|function|static uint32_t getPowerMgrId(uint32_t baseAddress)
DECL|getPrescaler|function|static void getPrescaler(Timer_Handle handle)
DECL|initHw|function|static void initHw(Timer_Handle handle)
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|timerMaskShift|macro|timerMaskShift
DECL|timerState|variable|timerState
