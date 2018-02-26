DECL|UTICK0_DriverIRQHandler|function|void UTICK0_DriverIRQHandler(void)
DECL|UTICK1_DriverIRQHandler|function|void UTICK1_DriverIRQHandler(void)
DECL|UTICK2_DriverIRQHandler|function|void UTICK2_DriverIRQHandler(void)
DECL|UTICK_ClearStatusFlags|function|void UTICK_ClearStatusFlags(UTICK_Type *base)
DECL|UTICK_Deinit|function|void UTICK_Deinit(UTICK_Type *base)
DECL|UTICK_GetInstance|function|static uint32_t UTICK_GetInstance(UTICK_Type *base)
DECL|UTICK_GetStatusFlags|function|uint32_t UTICK_GetStatusFlags(UTICK_Type *base)
DECL|UTICK_HandleIRQ|function|void UTICK_HandleIRQ(UTICK_Type *base, utick_callback_t cb)
DECL|UTICK_Init|function|void UTICK_Init(UTICK_Type *base)
DECL|UTICK_SetTick|function|void UTICK_SetTick(UTICK_Type *base, utick_mode_t mode, uint32_t count, utick_callback_t cb)
DECL|s_utickBases|variable|s_utickBases
DECL|s_utickClock|variable|s_utickClock
DECL|s_utickHandle|variable|s_utickHandle
DECL|s_utickIRQ|variable|s_utickIRQ
DECL|s_utickIsr|variable|s_utickIsr
DECL|utick_isr_t|typedef|typedef void (*utick_isr_t)(UTICK_Type *base, utick_callback_t cb);
