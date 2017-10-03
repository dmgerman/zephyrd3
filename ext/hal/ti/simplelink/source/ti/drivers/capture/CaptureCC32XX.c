DECL|CaptureCC32XX_close|function|void CaptureCC32XX_close(Capture_Handle handle)
DECL|CaptureCC32XX_control|function|int_fast16_t CaptureCC32XX_control(Capture_Handle handle, uint_fast16_t cmd, void *arg)
DECL|CaptureCC32XX_fxnTable|variable|CaptureCC32XX_fxnTable
DECL|CaptureCC32XX_hwiIntFunction|function|void CaptureCC32XX_hwiIntFunction(uintptr_t arg)
DECL|CaptureCC32XX_init|function|void CaptureCC32XX_init(Capture_Handle handle)
DECL|CaptureCC32XX_open|function|Capture_Handle CaptureCC32XX_open(Capture_Handle handle, Capture_Params *params)
DECL|CaptureCC32XX_start|function|int32_t CaptureCC32XX_start(Capture_Handle handle)
DECL|CaptureCC32XX_stop|function|void CaptureCC32XX_stop(Capture_Handle handle)
DECL|PAD_RESET_STATE|macro|PAD_RESET_STATE
DECL|clockFreq|variable|clockFreq
DECL|getGPIOBaseAddress|macro|getGPIOBaseAddress
DECL|getPadOffset|macro|getPadOffset
DECL|getPinMode|macro|getPinMode
DECL|getPowerMgrId|function|static uint32_t getPowerMgrId(uint32_t baseAddress)
DECL|getSubTimer|macro|getSubTimer
DECL|getTimerBaseAddress|macro|getTimerBaseAddress
DECL|getTimerIntNum|macro|getTimerIntNum
DECL|initHw|function|static void initHw(Capture_Handle handle)
DECL|postNotifyFxn|function|static int postNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
