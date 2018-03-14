DECL|SEMA4_GATE_STATUS_FLAG|macro|SEMA4_GATE_STATUS_FLAG
DECL|SEMA4_GetGateResetBus|function|static inline uint8_t SEMA4_GetGateResetBus(SEMA4_Type *base)
DECL|SEMA4_GetGateResetState|function|static inline uint8_t SEMA4_GetGateResetState(SEMA4_Type *base)
DECL|SEMA4_GetIntEnabled|function|static inline uint16_t SEMA4_GetIntEnabled(SEMA4_Type * base, uint16_t flags)
DECL|SEMA4_GetNotificationResetBus|function|static inline uint8_t SEMA4_GetNotificationResetBus(SEMA4_Type *base)
DECL|SEMA4_GetNotificationResetState|function|static inline uint8_t SEMA4_GetNotificationResetState(SEMA4_Type *base)
DECL|SEMA4_GetStatusFlag|function|static inline uint16_t SEMA4_GetStatusFlag(SEMA4_Type * base, uint16_t flags)
DECL|SEMA4_PROCESSOR_NONE|macro|SEMA4_PROCESSOR_NONE
DECL|__SEMA4_H__|macro|__SEMA4_H__
DECL|_sema4_reset_state|enum|enum _sema4_reset_state
DECL|_sema4_status_flag|enum|enum _sema4_status_flag
DECL|_sema4_status|enum|typedef enum _sema4_status
DECL|sema4ResetFinished|enumerator|sema4ResetFinished = 2U, /*!< Reset completed. Software can't get this state. */
DECL|sema4ResetIdle|enumerator|sema4ResetIdle = 0U, /*!< Idle, waiting for the first data pattern write. */
DECL|sema4ResetMid|enumerator|sema4ResetMid = 1U, /*!< Waiting for the second data pattern write. */
DECL|sema4StatusFlagGate0|enumerator|sema4StatusFlagGate0 = 1U << 7, /*!< Sema4 Gate 0 flag. */
DECL|sema4StatusFlagGate10|enumerator|sema4StatusFlagGate10 = 1U << 13, /*!< Sema4 Gate 10 flag. */
DECL|sema4StatusFlagGate11|enumerator|sema4StatusFlagGate11 = 1U << 12, /*!< Sema4 Gate 11 flag. */
DECL|sema4StatusFlagGate12|enumerator|sema4StatusFlagGate12 = 1U << 11, /*!< Sema4 Gate 12 flag. */
DECL|sema4StatusFlagGate13|enumerator|sema4StatusFlagGate13 = 1U << 10, /*!< Sema4 Gate 13 flag. */
DECL|sema4StatusFlagGate14|enumerator|sema4StatusFlagGate14 = 1U << 9, /*!< Sema4 Gate 14 flag. */
DECL|sema4StatusFlagGate15|enumerator|sema4StatusFlagGate15 = 1U << 8, /*!< Sema4 Gate 15 flag. */
DECL|sema4StatusFlagGate1|enumerator|sema4StatusFlagGate1 = 1U << 6, /*!< Sema4 Gate 1 flag. */
DECL|sema4StatusFlagGate2|enumerator|sema4StatusFlagGate2 = 1U << 5, /*!< Sema4 Gate 2 flag. */
DECL|sema4StatusFlagGate3|enumerator|sema4StatusFlagGate3 = 1U << 4, /*!< Sema4 Gate 3 flag. */
DECL|sema4StatusFlagGate4|enumerator|sema4StatusFlagGate4 = 1U << 3, /*!< Sema4 Gate 4 flag. */
DECL|sema4StatusFlagGate5|enumerator|sema4StatusFlagGate5 = 1U << 2, /*!< Sema4 Gate 5 flag. */
DECL|sema4StatusFlagGate6|enumerator|sema4StatusFlagGate6 = 1U << 1, /*!< Sema4 Gate 6 flag. */
DECL|sema4StatusFlagGate7|enumerator|sema4StatusFlagGate7 = 1U << 0, /*!< Sema4 Gate 7 flag. */
DECL|sema4StatusFlagGate8|enumerator|sema4StatusFlagGate8 = 1U << 15, /*!< Sema4 Gate 8 flag. */
DECL|sema4StatusFlagGate9|enumerator|sema4StatusFlagGate9 = 1U << 14, /*!< Sema4 Gate 9 flag. */
DECL|sema4_status_t|typedef|} sema4_status_t;
DECL|statusSema4Busy|enumerator|statusSema4Busy = 1U, /*!< SEMA4 gate has been locked by other processor. */
DECL|statusSema4Success|enumerator|statusSema4Success = 0U, /*!< Success. */
