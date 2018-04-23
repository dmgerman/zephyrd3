DECL|FLEXCOMM0_DriverIRQHandler|function|void FLEXCOMM0_DriverIRQHandler(void)
DECL|FLEXCOMM1_DriverIRQHandler|function|void FLEXCOMM1_DriverIRQHandler(void)
DECL|FLEXCOMM2_DriverIRQHandler|function|void FLEXCOMM2_DriverIRQHandler(void)
DECL|FLEXCOMM3_DriverIRQHandler|function|void FLEXCOMM3_DriverIRQHandler(void)
DECL|FLEXCOMM4_DriverIRQHandler|function|void FLEXCOMM4_DriverIRQHandler(void)
DECL|FLEXCOMM5_DriverIRQHandler|function|void FLEXCOMM5_DriverIRQHandler(void)
DECL|FLEXCOMM6_DriverIRQHandler|function|void FLEXCOMM6_DriverIRQHandler(void)
DECL|FLEXCOMM7_DriverIRQHandler|function|void FLEXCOMM7_DriverIRQHandler(void)
DECL|FLEXCOMM8_DriverIRQHandler|function|void FLEXCOMM8_DriverIRQHandler(void)
DECL|FLEXCOMM9_DriverIRQHandler|function|void FLEXCOMM9_DriverIRQHandler(void)
DECL|FLEXCOMM_GetInstance|function|uint32_t FLEXCOMM_GetInstance(void *base)
DECL|FLEXCOMM_Init|function|status_t FLEXCOMM_Init(void *base, FLEXCOMM_PERIPH_T periph)
DECL|FLEXCOMM_PeripheralIsPresent|function|static bool FLEXCOMM_PeripheralIsPresent(FLEXCOMM_Type *base, FLEXCOMM_PERIPH_T periph)
DECL|FLEXCOMM_SetIRQHandler|function|void FLEXCOMM_SetIRQHandler(void *base, flexcomm_irq_handler_t handler, void *handle)
DECL|FLEXCOMM_SetPeriph|function|status_t FLEXCOMM_SetPeriph(FLEXCOMM_Type *base, FLEXCOMM_PERIPH_T periph, int lock)
DECL|kFlexcommIrqs|variable|kFlexcommIrqs
DECL|s_flexcommBaseAddrs|variable|s_flexcommBaseAddrs
DECL|s_flexcommClocks|variable|s_flexcommClocks
DECL|s_flexcommHandle|variable|s_flexcommHandle
DECL|s_flexcommIrqHandler|variable|s_flexcommIrqHandler