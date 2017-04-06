DECL|CORE_ATOMIC_BASE_PRIORITY_LEVEL|macro|CORE_ATOMIC_BASE_PRIORITY_LEVEL
DECL|CORE_ATOMIC_METHOD|macro|CORE_ATOMIC_METHOD
DECL|CORE_AtomicDisableIrq|function|SL_WEAK void CORE_AtomicDisableIrq(void)
DECL|CORE_AtomicEnableIrq|function|SL_WEAK void CORE_AtomicEnableIrq(void)
DECL|CORE_CriticalDisableIrq|function|SL_WEAK void CORE_CriticalDisableIrq(void)
DECL|CORE_CriticalEnableIrq|function|SL_WEAK void CORE_CriticalEnableIrq(void)
DECL|CORE_EnterAtomic|function|SL_WEAK CORE_irqState_t CORE_EnterAtomic(void)
DECL|CORE_EnterCritical|function|SL_WEAK CORE_irqState_t CORE_EnterCritical(void)
DECL|CORE_EnterNvicMask|function|void CORE_EnterNvicMask(CORE_nvicMask_t *nvicState, const CORE_nvicMask_t *disable)
DECL|CORE_ExitAtomic|function|SL_WEAK void CORE_ExitAtomic(CORE_irqState_t irqState)
DECL|CORE_ExitCritical|function|SL_WEAK void CORE_ExitCritical(CORE_irqState_t irqState)
DECL|CORE_GetNvicEnabledMask|function|void CORE_GetNvicEnabledMask(CORE_nvicMask_t *mask)
DECL|CORE_GetNvicMaskDisableState|function|bool CORE_GetNvicMaskDisableState(const CORE_nvicMask_t *mask)
DECL|CORE_GetNvicRamTableHandler|function|void *CORE_GetNvicRamTableHandler(IRQn_Type irqN)
DECL|CORE_INTERRUPT_ENTRY|macro|CORE_INTERRUPT_ENTRY
DECL|CORE_INTERRUPT_EXIT|macro|CORE_INTERRUPT_EXIT
DECL|CORE_InIrqContext|function|SL_WEAK bool CORE_InIrqContext(void)
DECL|CORE_InitNvicVectorTable|function|void CORE_InitNvicVectorTable(uint32_t *sourceTable, uint32_t sourceSize, uint32_t *targetTable, uint32_t targetSize, void *defaultHandler,
DECL|CORE_IrqIsBlocked|function|SL_WEAK bool CORE_IrqIsBlocked(IRQn_Type irqN)
DECL|CORE_IrqIsDisabled|function|SL_WEAK bool CORE_IrqIsDisabled(void)
DECL|CORE_NvicDisableMask|function|void CORE_NvicDisableMask(const CORE_nvicMask_t *disable)
DECL|CORE_NvicEnableMask|function|void CORE_NvicEnableMask(const CORE_nvicMask_t *enable)
DECL|CORE_NvicIRQDisabled|function|bool CORE_NvicIRQDisabled(IRQn_Type irqN)
DECL|CORE_NvicMaskClearIRQ|function|void CORE_NvicMaskClearIRQ(IRQn_Type irqN, CORE_nvicMask_t *mask)
DECL|CORE_NvicMaskSetIRQ|function|void CORE_NvicMaskSetIRQ(IRQn_Type irqN, CORE_nvicMask_t *mask)
DECL|CORE_SetNvicRamTableHandler|function|void CORE_SetNvicRamTableHandler(IRQn_Type irqN, void *handler)
DECL|CORE_YieldAtomic|function|SL_WEAK void CORE_YieldAtomic(void)
DECL|CORE_YieldCritical|function|SL_WEAK void CORE_YieldCritical(void)
DECL|CORE_YieldNvicMask|function|void CORE_YieldNvicMask(const CORE_nvicMask_t *enable)
