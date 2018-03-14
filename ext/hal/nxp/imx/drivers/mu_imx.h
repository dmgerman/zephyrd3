DECL|MU_CR_GIE0_MASK|macro|MU_CR_GIE0_MASK
DECL|MU_CR_GIR0_MASK|macro|MU_CR_GIR0_MASK
DECL|MU_CR_RIE0_MASK|macro|MU_CR_RIE0_MASK
DECL|MU_CR_TIE0_MASK|macro|MU_CR_TIE0_MASK
DECL|MU_ClearGeneralIntPending|function|static inline void MU_ClearGeneralIntPending(MU_Type * base, uint32_t index)
DECL|MU_DisableGeneralInt|function|static inline void MU_DisableGeneralInt(MU_Type * base, uint32_t index)
DECL|MU_DisableRxFullInt|function|static inline void MU_DisableRxFullInt(MU_Type * base, uint32_t index)
DECL|MU_DisableTxEmptyInt|function|static inline void MU_DisableTxEmptyInt(MU_Type * base, uint32_t index)
DECL|MU_EnableGeneralInt|function|static inline void MU_EnableGeneralInt(MU_Type * base, uint32_t index)
DECL|MU_EnableRxFullInt|function|static inline void MU_EnableRxFullInt(MU_Type * base, uint32_t index)
DECL|MU_EnableTxEmptyInt|function|static inline void MU_EnableTxEmptyInt(MU_Type * base, uint32_t index)
DECL|MU_GPn_COUNT|macro|MU_GPn_COUNT
DECL|MU_GetFlags|function|static inline uint32_t MU_GetFlags(MU_Type * base)
DECL|MU_GetMsgStatus|function|static inline uint32_t MU_GetMsgStatus(MU_Type * base, uint32_t statusToCheck)
DECL|MU_GetOtherCorePowerMode|function|static inline mu_power_mode_t MU_GetOtherCorePowerMode(MU_Type * base)
DECL|MU_Init|function|static inline void MU_Init(MU_Type * base)
DECL|MU_IsEventPending|function|static inline bool MU_IsEventPending(MU_Type * base)
DECL|MU_IsFlagPending|function|static inline bool MU_IsFlagPending(MU_Type * base)
DECL|MU_IsGeneralIntAccepted|function|static inline bool MU_IsGeneralIntAccepted(MU_Type * base, uint32_t index)
DECL|MU_IsGeneralIntPending|function|static inline bool MU_IsGeneralIntPending(MU_Type * base, uint32_t index)
DECL|MU_IsRxFull|function|static inline bool MU_IsRxFull(MU_Type * base, uint32_t index)
DECL|MU_IsTxEmpty|function|static inline bool MU_IsTxEmpty(MU_Type * base, uint32_t index)
DECL|MU_SR_GIP0_MASK|macro|MU_SR_GIP0_MASK
DECL|MU_SR_RF0_MASK|macro|MU_SR_RF0_MASK
DECL|MU_SR_TE0_MASK|macro|MU_SR_TE0_MASK
DECL|__MU_IMX_H__|macro|__MU_IMX_H__
DECL|_mu_msg_status|enum|typedef enum _mu_msg_status
DECL|_mu_power_mode|enum|typedef enum _mu_power_mode
DECL|_mu_status|enum|typedef enum _mu_status
DECL|kMuGenInt0|enumerator|kMuGenInt0 = MU_SR_GIP0_MASK, /*!< General purpose interrupt 0 pending status. */
DECL|kMuGenInt1|enumerator|kMuGenInt1 = MU_SR_GIP0_MASK >> 1U, /*!< General purpose interrupt 2 pending status. */
DECL|kMuGenInt2|enumerator|kMuGenInt2 = MU_SR_GIP0_MASK >> 2U, /*!< General purpose interrupt 2 pending status. */
DECL|kMuGenInt3|enumerator|kMuGenInt3 = MU_SR_GIP0_MASK >> 3U, /*!< General purpose interrupt 3 pending status. */
DECL|kMuGenInt|enumerator|kMuGenInt = kMuGenInt0 |
DECL|kMuPowerModeDsm|enumerator|kMuPowerModeDsm = 0x03U, /*!< DSM mode. */
DECL|kMuPowerModeRun|enumerator|kMuPowerModeRun = 0x00U, /*!< Run mode. */
DECL|kMuPowerModeStop|enumerator|kMuPowerModeStop = 0x02U, /*!< STOP mode. */
DECL|kMuPowerModeWait|enumerator|kMuPowerModeWait = 0x01U, /*!< WAIT mode. */
DECL|kMuRxFull0|enumerator|kMuRxFull0 = MU_SR_RF0_MASK, /*!< RX0 full status. */
DECL|kMuRxFull1|enumerator|kMuRxFull1 = MU_SR_RF0_MASK >> 1U, /*!< RX1 full status. */
DECL|kMuRxFull2|enumerator|kMuRxFull2 = MU_SR_RF0_MASK >> 2U, /*!< RX2 full status. */
DECL|kMuRxFull3|enumerator|kMuRxFull3 = MU_SR_RF0_MASK >> 3U, /*!< RX3 full status. */
DECL|kMuRxFull|enumerator|kMuRxFull = kMuRxFull0 |
DECL|kMuStatusAll|enumerator|kMuStatusAll = kMuTxEmpty |
DECL|kMuTxEmpty0|enumerator|kMuTxEmpty0 = MU_SR_TE0_MASK, /*!< TX0 empty status. */
DECL|kMuTxEmpty1|enumerator|kMuTxEmpty1 = MU_SR_TE0_MASK >> 1U, /*!< TX1 empty status. */
DECL|kMuTxEmpty2|enumerator|kMuTxEmpty2 = MU_SR_TE0_MASK >> 2U, /*!< TX2 empty status. */
DECL|kMuTxEmpty3|enumerator|kMuTxEmpty3 = MU_SR_TE0_MASK >> 3U, /*!< TX3 empty status. */
DECL|kMuTxEmpty|enumerator|kMuTxEmpty = kMuTxEmpty0 |
DECL|kStatus_MU_EventPending|enumerator|kStatus_MU_EventPending = 4U, /*!< MU event is pending. */
DECL|kStatus_MU_Failed|enumerator|kStatus_MU_Failed = 7U /*!< Execution failed. */
DECL|kStatus_MU_FlagPending|enumerator|kStatus_MU_FlagPending = 3U, /*!< Previous flags update pending. */
DECL|kStatus_MU_Initialized|enumerator|kStatus_MU_Initialized = 5U, /*!< MU driver has initialized previously. */
DECL|kStatus_MU_IntPending|enumerator|kStatus_MU_IntPending = 6U, /*!< Previous general interrupt still pending. */
DECL|kStatus_MU_RxNotFull|enumerator|kStatus_MU_RxNotFull = 2U, /*!< RX register is not full. */
DECL|kStatus_MU_Success|enumerator|kStatus_MU_Success = 0U, /*!< Success. */
DECL|kStatus_MU_TxNotEmpty|enumerator|kStatus_MU_TxNotEmpty = 1U, /*!< TX register is not empty. */
DECL|mu_msg_status_t|typedef|} mu_msg_status_t;
DECL|mu_power_mode_t|typedef|} mu_power_mode_t;
DECL|mu_status_t|typedef|} mu_status_t;
