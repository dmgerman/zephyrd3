DECL|CY_MCWDT_ALL_WDT_ENABLE_Msk|macro|CY_MCWDT_ALL_WDT_ENABLE_Msk
DECL|CY_MCWDT_BAD_PARAM|enumerator|CY_MCWDT_BAD_PARAM = CY_MCWDT_ID | CY_PDL_STATUS_ERROR | 0x01u, /**< One or more invalid parameters */
DECL|CY_MCWDT_BYTE_SHIFT|macro|CY_MCWDT_BYTE_SHIFT
DECL|CY_MCWDT_C0C1_MODE_MASK|macro|CY_MCWDT_C0C1_MODE_MASK
DECL|CY_MCWDT_C2_MODE_MASK|macro|CY_MCWDT_C2_MODE_MASK
DECL|CY_MCWDT_CASCADE_BOTH|enumerator|CY_MCWDT_CASCADE_BOTH /**< The sub-counter#1 is clocked by LFCLK or from sub-counter#0 cascade
DECL|CY_MCWDT_CASCADE_C0C1|enumerator|CY_MCWDT_CASCADE_C0C1, /**< The sub-counter#1 is clocked by LFCLK or from sub-counter#0 cascade.
DECL|CY_MCWDT_CASCADE_C1C2|enumerator|CY_MCWDT_CASCADE_C1C2, /**< The sub-counter#2 is clocked by LFCLK or from sub-counter#1 cascade.
DECL|CY_MCWDT_CASCADE_NONE|enumerator|CY_MCWDT_CASCADE_NONE, /**< The cascading is disabled. It is used for Set/GetCascade functions. */
DECL|CY_MCWDT_COUNTER0|enumerator|CY_MCWDT_COUNTER0, /**< Sub-counter#0 identifier. */
DECL|CY_MCWDT_COUNTER1|enumerator|CY_MCWDT_COUNTER1, /**< Sub-counter#1 identifier. */
DECL|CY_MCWDT_COUNTER2|enumerator|CY_MCWDT_COUNTER2 /**< Sub-counter#2 identifier. */
DECL|CY_MCWDT_CTR0_Pos|macro|CY_MCWDT_CTR0_Pos
DECL|CY_MCWDT_CTR0|macro|CY_MCWDT_CTR0
DECL|CY_MCWDT_CTR1_Pos|macro|CY_MCWDT_CTR1_Pos
DECL|CY_MCWDT_CTR1|macro|CY_MCWDT_CTR1
DECL|CY_MCWDT_CTR2_Pos|macro|CY_MCWDT_CTR2_Pos
DECL|CY_MCWDT_CTR2|macro|CY_MCWDT_CTR2
DECL|CY_MCWDT_CTR_Msk|macro|CY_MCWDT_CTR_Msk
DECL|CY_MCWDT_CTR_Pos|macro|CY_MCWDT_CTR_Pos
DECL|CY_MCWDT_DRV_VERSION_MAJOR|macro|CY_MCWDT_DRV_VERSION_MAJOR
DECL|CY_MCWDT_DRV_VERSION_MINOR|macro|CY_MCWDT_DRV_VERSION_MINOR
DECL|CY_MCWDT_H|macro|CY_MCWDT_H
DECL|CY_MCWDT_ID|macro|CY_MCWDT_ID
DECL|CY_MCWDT_IS_BIT_VALID|macro|CY_MCWDT_IS_BIT_VALID
DECL|CY_MCWDT_IS_CASCADE_VALID|macro|CY_MCWDT_IS_CASCADE_VALID
DECL|CY_MCWDT_IS_CNTS_MASK_VALID|macro|CY_MCWDT_IS_CNTS_MASK_VALID
DECL|CY_MCWDT_IS_CNT_NUM_VALID|macro|CY_MCWDT_IS_CNT_NUM_VALID
DECL|CY_MCWDT_IS_ENABLE_VALID|macro|CY_MCWDT_IS_ENABLE_VALID
DECL|CY_MCWDT_IS_MATCH_VALID|macro|CY_MCWDT_IS_MATCH_VALID
DECL|CY_MCWDT_IS_MODE_VALID|macro|CY_MCWDT_IS_MODE_VALID
DECL|CY_MCWDT_LOCK_CLR0|macro|CY_MCWDT_LOCK_CLR0
DECL|CY_MCWDT_LOCK_CLR1|macro|CY_MCWDT_LOCK_CLR1
DECL|CY_MCWDT_LOCK_SET01|macro|CY_MCWDT_LOCK_SET01
DECL|CY_MCWDT_MODE_INT_RESET|enumerator|CY_MCWDT_MODE_INT_RESET /**< The Three interrupts then watchdog reset mode. It is used for
DECL|CY_MCWDT_MODE_INT|enumerator|CY_MCWDT_MODE_INT, /**< The Interrupt mode. It is used for Set/GetMode functions. */
DECL|CY_MCWDT_MODE_NONE|enumerator|CY_MCWDT_MODE_NONE, /**< The No action mode. It is used for Set/GetMode functions. */
DECL|CY_MCWDT_MODE_RESET|enumerator|CY_MCWDT_MODE_RESET, /**< The Reset mode. It is used for Set/GetMode functions. */
DECL|CY_MCWDT_SUCCESS|enumerator|CY_MCWDT_SUCCESS = 0x00u, /**< Successful */
DECL|Cy_MCWDT_ClearInterrupt|function|__STATIC_INLINE void Cy_MCWDT_ClearInterrupt(MCWDT_STRUCT_Type *base, uint32_t counters)
DECL|Cy_MCWDT_Disable|function|__STATIC_INLINE void Cy_MCWDT_Disable(MCWDT_STRUCT_Type *base, uint32_t counters, uint16_t waitUs)
DECL|Cy_MCWDT_Enable|function|__STATIC_INLINE void Cy_MCWDT_Enable(MCWDT_STRUCT_Type *base, uint32_t counters, uint16_t waitUs)
DECL|Cy_MCWDT_GetCascade|function|__STATIC_INLINE cy_en_mcwdtcascade_t Cy_MCWDT_GetCascade(MCWDT_STRUCT_Type const *base)
DECL|Cy_MCWDT_GetClearOnMatch|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetClearOnMatch(MCWDT_STRUCT_Type const *base, cy_en_mcwdtctr_t counter)
DECL|Cy_MCWDT_GetCount|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetCount(MCWDT_STRUCT_Type const *base, cy_en_mcwdtctr_t counter)
DECL|Cy_MCWDT_GetEnabledStatus|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetEnabledStatus(MCWDT_STRUCT_Type const *base, cy_en_mcwdtctr_t counter)
DECL|Cy_MCWDT_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetInterruptMask(MCWDT_STRUCT_Type const *base)
DECL|Cy_MCWDT_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetInterruptStatusMasked(MCWDT_STRUCT_Type const *base)
DECL|Cy_MCWDT_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetInterruptStatus(MCWDT_STRUCT_Type const *base)
DECL|Cy_MCWDT_GetLockedStatus|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetLockedStatus(MCWDT_STRUCT_Type const *base)
DECL|Cy_MCWDT_GetMatch|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetMatch(MCWDT_STRUCT_Type const *base, cy_en_mcwdtctr_t counter)
DECL|Cy_MCWDT_GetMode|function|__STATIC_INLINE cy_en_mcwdtmode_t Cy_MCWDT_GetMode(MCWDT_STRUCT_Type const *base, cy_en_mcwdtctr_t counter)
DECL|Cy_MCWDT_GetToggleBit|function|__STATIC_INLINE uint32_t Cy_MCWDT_GetToggleBit(MCWDT_STRUCT_Type const *base)
DECL|Cy_MCWDT_Lock|function|__STATIC_INLINE void Cy_MCWDT_Lock(MCWDT_STRUCT_Type *base)
DECL|Cy_MCWDT_ResetCounters|function|__STATIC_INLINE void Cy_MCWDT_ResetCounters(MCWDT_STRUCT_Type *base, uint32_t counters, uint16_t waitUs)
DECL|Cy_MCWDT_SetCascade|function|__STATIC_INLINE void Cy_MCWDT_SetCascade(MCWDT_STRUCT_Type *base, cy_en_mcwdtcascade_t cascade)
DECL|Cy_MCWDT_SetClearOnMatch|function|__STATIC_INLINE void Cy_MCWDT_SetClearOnMatch(MCWDT_STRUCT_Type *base, cy_en_mcwdtctr_t counter, uint32_t enable)
DECL|Cy_MCWDT_SetInterruptMask|function|__STATIC_INLINE void Cy_MCWDT_SetInterruptMask(MCWDT_STRUCT_Type *base, uint32_t counters)
DECL|Cy_MCWDT_SetInterrupt|function|__STATIC_INLINE void Cy_MCWDT_SetInterrupt(MCWDT_STRUCT_Type *base, uint32_t counters)
DECL|Cy_MCWDT_SetMatch|function|__STATIC_INLINE void Cy_MCWDT_SetMatch(MCWDT_STRUCT_Type *base, cy_en_mcwdtctr_t counter, uint32_t match, uint16_t waitUs)
DECL|Cy_MCWDT_SetMode|function|__STATIC_INLINE void Cy_MCWDT_SetMode(MCWDT_STRUCT_Type *base, cy_en_mcwdtctr_t counter, cy_en_mcwdtmode_t mode)
DECL|Cy_MCWDT_SetToggleBit|function|__STATIC_INLINE void Cy_MCWDT_SetToggleBit(MCWDT_STRUCT_Type *base, uint32_t bit)
DECL|Cy_MCWDT_Unlock|function|__STATIC_INLINE void Cy_MCWDT_Unlock(MCWDT_STRUCT_Type *base)
DECL|c0ClearOnMatch|member|bool c0ClearOnMatch; /**< The sub-counter#0 Clear On Match parameter enabled/disabled. */
DECL|c0Match|member|uint16_t c0Match; /**< The sub-counter#0 match comparison value, for interrupt or watchdog timeout.
DECL|c0Mode|member|uint8_t c0Mode; /**< The sub-counter#0 mode. It can have the following values: \ref CY_MCWDT_MODE_NONE,
DECL|c0c1Cascade|member|bool c0c1Cascade; /**< The sub-counter#1 is clocked by LFCLK or from sub-counter#0 cascade. */
DECL|c1ClearOnMatch|member|bool c1ClearOnMatch; /**< The sub-counter#1 Clear On Match parameter enabled/disabled. */
DECL|c1Match|member|uint16_t c1Match; /**< The sub-counter#1 match comparison value, for interrupt or watchdog timeout.
DECL|c1Mode|member|uint8_t c1Mode; /**< The sub-counter#1 mode. It can have the following values: \ref CY_MCWDT_MODE_NONE,
DECL|c1c2Cascade|member|bool c1c2Cascade; /**< The sub-counter#2 is clocked by LFCLK or from sub-counter#1 cascade. */
DECL|c2Mode|member|uint8_t c2Mode; /**< The sub-counter#2 mode. It can have the following values: \ref CY_MCWDT_MODE_NONE
DECL|c2ToggleBit|member|uint8_t c2ToggleBit; /**< The sub-counter#2 Period / Toggle Bit value.
DECL|cy_en_mcwdt_status_t|typedef|} cy_en_mcwdt_status_t;
DECL|cy_en_mcwdtcascade_t|typedef|} cy_en_mcwdtcascade_t;
DECL|cy_en_mcwdtctr_t|typedef|} cy_en_mcwdtctr_t;
DECL|cy_en_mcwdtmode_t|typedef|} cy_en_mcwdtmode_t;
DECL|cy_stc_mcwdt_config_t|typedef|} cy_stc_mcwdt_config_t;
