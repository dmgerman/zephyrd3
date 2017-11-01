DECL|FSL_SRC_DRIVER_VERSION|macro|FSL_SRC_DRIVER_VERSION
DECL|SRC_AssertEIMReset|function|static inline void SRC_AssertEIMReset(SRC_Type *base, bool enable)
DECL|SRC_DoAssertCore0DebugReset|function|static inline void SRC_DoAssertCore0DebugReset(SRC_Type *base)
DECL|SRC_DoSoftwareResetARMCore0|function|static inline void SRC_DoSoftwareResetARMCore0(SRC_Type *base)
DECL|SRC_DoSoftwareResetARMCoreDebug|function|static inline void SRC_DoSoftwareResetARMCoreDebug(SRC_Type *base)
DECL|SRC_DoSoftwareResetARMCore|function|static inline void SRC_DoSoftwareResetARMCore(SRC_Type *base)
DECL|SRC_EnableCoreDebugResetAfterPowerGate|function|static inline void SRC_EnableCoreDebugResetAfterPowerGate(SRC_Type *base, bool enable)
DECL|SRC_EnableCoreLockupReset|function|static inline void SRC_EnableCoreLockupReset(SRC_Type *base, bool enable)
DECL|SRC_EnableLockupReset|function|static inline void SRC_EnableLockupReset(SRC_Type *base, bool enable)
DECL|SRC_EnableTemperatureSensorReset|function|static inline void SRC_EnableTemperatureSensorReset(SRC_Type *base, bool enable)
DECL|SRC_EnableWDOG3Reset|function|static inline void SRC_EnableWDOG3Reset(SRC_Type *base, bool enable)
DECL|SRC_EnableWDOGReset|function|static inline void SRC_EnableWDOGReset(SRC_Type *base, bool enable)
DECL|SRC_EnableWarmReset|function|static inline void SRC_EnableWarmReset(SRC_Type *base, bool enable)
DECL|SRC_GetAssertCore0DebugResetDone|function|static inline bool SRC_GetAssertCore0DebugResetDone(SRC_Type *base)
DECL|SRC_GetBootModeWord1|function|static inline uint32_t SRC_GetBootModeWord1(SRC_Type *base)
DECL|SRC_GetBootModeWord2|function|static inline uint32_t SRC_GetBootModeWord2(SRC_Type *base)
DECL|SRC_GetGeneralPurposeRegister|function|static inline uint32_t SRC_GetGeneralPurposeRegister(SRC_Type *base, uint32_t index)
DECL|SRC_GetResetStatusFlags|function|static inline uint32_t SRC_GetResetStatusFlags(SRC_Type *base)
DECL|SRC_GetSoftwareResetARMCore0Done|function|static inline bool SRC_GetSoftwareResetARMCore0Done(SRC_Type *base)
DECL|SRC_GetSoftwareResetARMCoreDebugDone|function|static inline bool SRC_GetSoftwareResetARMCoreDebugDone(SRC_Type *base)
DECL|SRC_GetSoftwareResetARMCoreDone|function|static inline bool SRC_GetSoftwareResetARMCoreDone(SRC_Type *base)
DECL|SRC_GetStatusFlags|function|static inline uint32_t SRC_GetStatusFlags(SRC_Type *base)
DECL|SRC_SetGeneralPurposeRegister|function|static inline void SRC_SetGeneralPurposeRegister(SRC_Type *base, uint32_t index, uint32_t value)
DECL|SRC_SetMixResetStretchCycles|function|static inline void SRC_SetMixResetStretchCycles(SRC_Type *base, src_mix_reset_stretch_cycles_t option)
DECL|SRC_SetWarmBootIndication|function|static inline void SRC_SetWarmBootIndication(SRC_Type *base, bool enable)
DECL|SRC_SetWarmResetBypassCount|function|static inline void SRC_SetWarmResetBypassCount(SRC_Type *base, src_warm_reset_bypass_count_t option)
DECL|SRC_SetWdog3ResetOption|function|static inline void SRC_SetWdog3ResetOption(SRC_Type *base, src_wdog3_reset_option_t option)
DECL|_FSL_SRC_H_|macro|_FSL_SRC_H_
DECL|_src_mix_reset_stretch_cycles|enum|typedef enum _src_mix_reset_stretch_cycles
DECL|_src_reset_status_flags|enum|enum _src_reset_status_flags
DECL|_src_status_flags|enum|enum _src_status_flags
DECL|_src_warm_reset_bypass_count|enum|typedef enum _src_warm_reset_bypass_count
DECL|_src_wdog3_reset_option|enum|typedef enum _src_wdog3_reset_option
DECL|kSRC_Core0WdogResetReqFlag|enumerator|kSRC_Core0WdogResetReqFlag =
DECL|kSRC_CoreLockupResetFlag|enumerator|kSRC_CoreLockupResetFlag = SRC_SRSR_LOCKUP_MASK, /*!< Indicates a reset has been caused by the
DECL|kSRC_CsuResetFlag|enumerator|kSRC_CsuResetFlag = SRC_SRSR_CSU_RESET_B_MASK, /*!< Indicates whether the reset was the result
DECL|kSRC_IppResetPinFlag|enumerator|kSRC_IppResetPinFlag = SRC_SRSR_IPP_RESET_B_MASK, /*!< Indicates whether reset was the result of
DECL|kSRC_IppUserResetFlag|enumerator|kSRC_IppUserResetFlag = SRC_SRSR_IPP_USER_RESET_B_MASK, /*!< Indicates whether the reset was the
DECL|kSRC_JTAGGeneratedResetFlag|enumerator|kSRC_JTAGGeneratedResetFlag = SRC_SRSR_JTAG_MASK, /*!< Indicates a reset has been caused by JTAG
DECL|kSRC_JTAGSoftwareResetFlag|enumerator|kSRC_JTAGSoftwareResetFlag = SRC_SRSR_SJC_MASK, /*!< Indicates whether the reset was the result of
DECL|kSRC_LockupSysResetFlag|enumerator|kSRC_LockupSysResetFlag = SRC_SRSR_LOCKUP_SYSRESETREQ_MASK, /*!< Indicates a reset has been caused by CPU lockup or software
DECL|kSRC_MixResetStretchCycleAlt0|enumerator|kSRC_MixResetStretchCycleAlt0 = 0U, /*!< mix reset width is 1 x 88 ipg_cycle cycles. */
DECL|kSRC_MixResetStretchCycleAlt1|enumerator|kSRC_MixResetStretchCycleAlt1 = 1U, /*!< mix reset width is 2 x 88 ipg_cycle cycles. */
DECL|kSRC_MixResetStretchCycleAlt2|enumerator|kSRC_MixResetStretchCycleAlt2 = 2U, /*!< mix reset width is 3 x 88 ipg_cycle cycles. */
DECL|kSRC_MixResetStretchCycleAlt3|enumerator|kSRC_MixResetStretchCycleAlt3 = 3U, /*!< mix reset width is 4 x 88 ipg_cycle cycles. */
DECL|kSRC_PowerOnResetFlag|enumerator|kSRC_PowerOnResetFlag = SRC_SRSR_POR_MASK, /*!< Indicates a reset has been caused by the
DECL|kSRC_ResetOutputEnableFlag|enumerator|kSRC_ResetOutputEnableFlag = SRC_SRSR_RESET_OUT_MASK, /*!< This bit indicates if RESET status is
DECL|kSRC_SNVSFailResetFlag|enumerator|kSRC_SNVSFailResetFlag = SRC_SRSR_SNVS_MASK, /*!< SNVS hardware failure will always cause a cold
DECL|kSRC_SoftwareResetFlag|enumerator|kSRC_SoftwareResetFlag = SRC_SRSR_SW_MASK, /*!< Indicates a reset has been caused by software
DECL|kSRC_TemperatureSensorResetFlag|enumerator|kSRC_TemperatureSensorResetFlag = SRC_SRSR_TSR_MASK, /*!< Indicates whether the reset was the
DECL|kSRC_WarmBootIndicationFlag|enumerator|kSRC_WarmBootIndicationFlag = SRC_SRSR_WBI_MASK, /*!< WARM boot indication shows that WARM boot
DECL|kSRC_WarmResetWaitAlways|enumerator|kSRC_WarmResetWaitAlways = 0U, /*!< System will wait until MMDC acknowledge is asserted. */
DECL|kSRC_WarmResetWaitClk16|enumerator|kSRC_WarmResetWaitClk16 = 1U, /*!< Wait 16 32KHz clock cycles before switching the reset. */
DECL|kSRC_WarmResetWaitClk32|enumerator|kSRC_WarmResetWaitClk32 = 2U, /*!< Wait 32 32KHz clock cycles before switching the reset. */
DECL|kSRC_WarmResetWaitClk64|enumerator|kSRC_WarmResetWaitClk64 = 3U, /*!< Wait 64 32KHz clock cycles before switching the reset. */
DECL|kSRC_WatchdogResetFlag|enumerator|kSRC_WatchdogResetFlag = SRC_SRSR_WDOG_MASK, /*!< Indicates a reset has been caused by the
DECL|kSRC_Wdog3ResetFlag|enumerator|kSRC_Wdog3ResetFlag = SRC_SRSR_WDOG3_RST_B_MASK, /*!< IC Watchdog3 Time-out reset. Indicates
DECL|kSRC_Wdog3ResetOptionAlt0|enumerator|kSRC_Wdog3ResetOptionAlt0 = 0U, /*!< Wdog3_rst_b asserts M4 reset (default). */
DECL|kSRC_Wdog3ResetOptionAlt1|enumerator|kSRC_Wdog3ResetOptionAlt1 = 1U, /*!< Wdog3_rst_b asserts global reset. */
DECL|src_mix_reset_stretch_cycles_t|typedef|} src_mix_reset_stretch_cycles_t;
DECL|src_warm_reset_bypass_count_t|typedef|} src_warm_reset_bypass_count_t;
DECL|src_wdog3_reset_option_t|typedef|} src_wdog3_reset_option_t;
