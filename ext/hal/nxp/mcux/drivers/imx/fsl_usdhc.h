DECL|BlockGap|member|void (*BlockGap)(USDHC_Type *base, void *userData); /*!< stopped at block gap event */
DECL|CardInserted|member|void (*CardInserted)(USDHC_Type *base,
DECL|CardRemoved|member|void (*CardRemoved)(USDHC_Type *base, void *userData); /*!< Card removed occurs */
DECL|FSL_USDHC_DRIVER_VERSION|macro|FSL_USDHC_DRIVER_VERSION
DECL|ReTuning|member|void (*ReTuning)(USDHC_Type *base, void *userData); /*!< handle the re-tuning */
DECL|SdioInterrupt|member|void (*SdioInterrupt)(USDHC_Type *base, void *userData); /*!< SDIO card interrupt occurs */
DECL|TransferComplete|member|void (*TransferComplete)(USDHC_Type *base,
DECL|UDSHC_SelectVoltage|function|static inline void UDSHC_SelectVoltage(USDHC_Type *base, bool en18v)
DECL|USDHC_ADMA1_ADDRESS_ALIGN|macro|USDHC_ADMA1_ADDRESS_ALIGN
DECL|USDHC_ADMA1_DESCRIPTOR_ADDRESS_MASK|macro|USDHC_ADMA1_DESCRIPTOR_ADDRESS_MASK
DECL|USDHC_ADMA1_DESCRIPTOR_ADDRESS_SHIFT|macro|USDHC_ADMA1_DESCRIPTOR_ADDRESS_SHIFT
DECL|USDHC_ADMA1_DESCRIPTOR_LENGTH_MASK|macro|USDHC_ADMA1_DESCRIPTOR_LENGTH_MASK
DECL|USDHC_ADMA1_DESCRIPTOR_LENGTH_SHIFT|macro|USDHC_ADMA1_DESCRIPTOR_LENGTH_SHIFT
DECL|USDHC_ADMA1_DESCRIPTOR_MAX_LENGTH_PER_ENTRY|macro|USDHC_ADMA1_DESCRIPTOR_MAX_LENGTH_PER_ENTRY
DECL|USDHC_ADMA1_LENGTH_ALIGN|macro|USDHC_ADMA1_LENGTH_ALIGN
DECL|USDHC_ADMA2_ADDRESS_ALIGN|macro|USDHC_ADMA2_ADDRESS_ALIGN
DECL|USDHC_ADMA2_DESCRIPTOR_LENGTH_MASK|macro|USDHC_ADMA2_DESCRIPTOR_LENGTH_MASK
DECL|USDHC_ADMA2_DESCRIPTOR_LENGTH_SHIFT|macro|USDHC_ADMA2_DESCRIPTOR_LENGTH_SHIFT
DECL|USDHC_ADMA2_DESCRIPTOR_MAX_LENGTH_PER_ENTRY|macro|USDHC_ADMA2_DESCRIPTOR_MAX_LENGTH_PER_ENTRY
DECL|USDHC_ADMA2_LENGTH_ALIGN|macro|USDHC_ADMA2_LENGTH_ALIGN
DECL|USDHC_AssertHardwareReset|function|static inline void USDHC_AssertHardwareReset(USDHC_Type *base, bool high)
DECL|USDHC_CardDetectByData3|function|static inline void USDHC_CardDetectByData3(USDHC_Type *base, bool enable)
DECL|USDHC_CheckStdTuningResult|function|static inline uint32_t USDHC_CheckStdTuningResult(USDHC_Type *base)
DECL|USDHC_CheckTuningError|function|static inline uint32_t USDHC_CheckTuningError(USDHC_Type *base)
DECL|USDHC_ClearInterruptStatusFlags|function|static inline void USDHC_ClearInterruptStatusFlags(USDHC_Type *base, uint32_t mask)
DECL|USDHC_ConfigStrobeDLL|function|static inline void USDHC_ConfigStrobeDLL(USDHC_Type *base, uint32_t delayTarget, uint32_t updateInterval)
DECL|USDHC_DetectCardInsert|function|static inline bool USDHC_DetectCardInsert(USDHC_Type *base)
DECL|USDHC_DisableInterruptSignal|function|static inline void USDHC_DisableInterruptSignal(USDHC_Type *base, uint32_t mask)
DECL|USDHC_DisableInterruptStatus|function|static inline void USDHC_DisableInterruptStatus(USDHC_Type *base, uint32_t mask)
DECL|USDHC_EnableAutoTuning|function|static inline void USDHC_EnableAutoTuning(USDHC_Type *base, bool enable)
DECL|USDHC_EnableHS400Mode|function|static inline void USDHC_EnableHS400Mode(USDHC_Type *base, bool enable)
DECL|USDHC_EnableInternalDMA|function|static inline void USDHC_EnableInternalDMA(USDHC_Type *base, bool enable)
DECL|USDHC_EnableInterruptSignal|function|static inline void USDHC_EnableInterruptSignal(USDHC_Type *base, uint32_t mask)
DECL|USDHC_EnableInterruptStatus|function|static inline void USDHC_EnableInterruptStatus(USDHC_Type *base, uint32_t mask)
DECL|USDHC_EnableMmcBoot|function|static inline void USDHC_EnableMmcBoot(USDHC_Type *base, bool enable)
DECL|USDHC_EnableSdioControl|function|static inline void USDHC_EnableSdioControl(USDHC_Type *base, uint32_t mask, bool enable)
DECL|USDHC_EnableStrobeDLL|function|static inline void USDHC_EnableStrobeDLL(USDHC_Type *base, bool enable)
DECL|USDHC_EnableWakeupEvent|function|static inline void USDHC_EnableWakeupEvent(USDHC_Type *base, uint32_t mask, bool enable)
DECL|USDHC_ForceClockOn|function|static inline void USDHC_ForceClockOn(USDHC_Type *base, bool enable)
DECL|USDHC_GetAdmaErrorStatusFlags|function|static inline uint32_t USDHC_GetAdmaErrorStatusFlags(USDHC_Type *base)
DECL|USDHC_GetAutoCommand12ErrorStatusFlags|function|static inline uint32_t USDHC_GetAutoCommand12ErrorStatusFlags(USDHC_Type *base)
DECL|USDHC_GetExecuteStdTuningStatus|function|static inline uint32_t USDHC_GetExecuteStdTuningStatus(USDHC_Type *base)
DECL|USDHC_GetInterruptStatusFlags|function|static inline uint32_t USDHC_GetInterruptStatusFlags(USDHC_Type *base)
DECL|USDHC_GetPresentStatusFlags|function|static inline uint32_t USDHC_GetPresentStatusFlags(USDHC_Type *base)
DECL|USDHC_GetStrobeDLLStatus|function|static inline uint32_t USDHC_GetStrobeDLLStatus(USDHC_Type *base)
DECL|USDHC_MAX_BLOCK_COUNT|macro|USDHC_MAX_BLOCK_COUNT
DECL|USDHC_ReadData|function|static inline uint32_t USDHC_ReadData(USDHC_Type *base)
DECL|USDHC_RequestReTuning|function|static inline bool USDHC_RequestReTuning(USDHC_Type *base)
DECL|USDHC_RequestStopAtBlockGap|function|static inline void USDHC_RequestStopAtBlockGap(USDHC_Type *base, bool enable)
DECL|USDHC_RequestTuningForSDR50|function|static inline bool USDHC_RequestTuningForSDR50(USDHC_Type *base)
DECL|USDHC_ResetStrobeDLL|function|static inline void USDHC_ResetStrobeDLL(USDHC_Type *base)
DECL|USDHC_SetContinueRequest|function|static inline void USDHC_SetContinueRequest(USDHC_Type *base)
DECL|USDHC_SetDataBusWidth|function|static inline void USDHC_SetDataBusWidth(USDHC_Type *base, usdhc_data_bus_width_t width)
DECL|USDHC_SetForceEvent|function|static inline void USDHC_SetForceEvent(USDHC_Type *base, uint32_t mask)
DECL|USDHC_SetRetuningTimer|function|static inline void USDHC_SetRetuningTimer(USDHC_Type *base, uint32_t counter)
DECL|USDHC_WriteData|function|static inline void USDHC_WriteData(USDHC_Type *base, uint32_t data)
DECL|_FSL_USDHC_H_|macro|_FSL_USDHC_H_
DECL|_usdhc_adma1_descriptor_flag|enum|enum _usdhc_adma1_descriptor_flag
DECL|_usdhc_adma2_descriptor_flag|enum|enum _usdhc_adma2_descriptor_flag
DECL|_usdhc_adma2_descriptor|struct|typedef struct _usdhc_adma2_descriptor
DECL|_usdhc_adma_config|struct|typedef struct _usdhc_adma_config
DECL|_usdhc_adma_error_state|enum|enum _usdhc_adma_error_state
DECL|_usdhc_adma_error_status_flag|enum|enum _usdhc_adma_error_status_flag
DECL|_usdhc_adma_flag|enum|enum _usdhc_adma_flag
DECL|_usdhc_auto_command12_error_status_flag|enum|enum _usdhc_auto_command12_error_status_flag
DECL|_usdhc_boot_config|struct|typedef struct _usdhc_boot_config
DECL|_usdhc_boot_mode|enum|typedef enum _usdhc_boot_mode
DECL|_usdhc_burst_len|enum|typedef enum _usdhc_burst_len
DECL|_usdhc_capability_flag|enum|enum _usdhc_capability_flag
DECL|_usdhc_capability|struct|typedef struct _usdhc_capability
DECL|_usdhc_card_command_type|enum|typedef enum _usdhc_card_command_type
DECL|_usdhc_card_response_type|enum|typedef enum _usdhc_card_response_type
DECL|_usdhc_command|struct|typedef struct _usdhc_command
DECL|_usdhc_config|struct|typedef struct _usdhc_config
DECL|_usdhc_data_bus_width|enum|typedef enum _usdhc_data_bus_width
DECL|_usdhc_data|struct|typedef struct _usdhc_data
DECL|_usdhc_dma_mode|enum|typedef enum _usdhc_dma_mode
DECL|_usdhc_endian_mode|enum|typedef enum _usdhc_endian_mode
DECL|_usdhc_force_event|enum|enum _usdhc_force_event
DECL|_usdhc_handle|struct|struct _usdhc_handle
DECL|_usdhc_host|struct|typedef struct _usdhc_host
DECL|_usdhc_interrupt_status_flag|enum|enum _usdhc_interrupt_status_flag
DECL|_usdhc_present_status_flag|enum|enum _usdhc_present_status_flag
DECL|_usdhc_reset|enum|enum _usdhc_reset
DECL|_usdhc_sdio_control_flag|enum|enum _usdhc_sdio_control_flag
DECL|_usdhc_standard_tuning|enum|enum _usdhc_standard_tuning
DECL|_usdhc_status|enum|enum _usdhc_status
DECL|_usdhc_transfer_callback|struct|typedef struct _usdhc_transfer_callback
DECL|_usdhc_transfer_data_type|enum|enum _usdhc_transfer_data_type
DECL|_usdhc_transfer_flag|enum|enum _usdhc_transfer_flag
DECL|_usdhc_transfer|struct|typedef struct _usdhc_transfer
DECL|_usdhc_wakeup_event|enum|enum _usdhc_wakeup_event
DECL|ackTimeoutCount|member|uint32_t ackTimeoutCount; /*!< Timeout value for the boot ACK. The available range is 0 ~ 15. */
DECL|address|member|const uint32_t *address; /*!< The address field */
DECL|admaTableWords|member|uint32_t admaTableWords; /*!< ADMA table length united as words, can't be 0 if transfer way is ADMA1/ADMA2 */
DECL|admaTable|member|uint32_t *admaTable; /*!< ADMA table address, can't be null if transfer way is ADMA1/ADMA2 */
DECL|argument|member|uint32_t argument; /*!< Command argument */
DECL|attribute|member|uint32_t attribute; /*!< The control and status field */
DECL|base|member|USDHC_Type *base; /*!< USDHC peripheral base address */
DECL|blockCount|member|uint32_t blockCount; /*!< Block count */
DECL|blockCount|member|uint32_t blockCount; /*!< Stop at block gap value of automatic mode. Available range is 0 ~ 65535. */
DECL|blockSize|member|size_t blockSize; /*!< Block size */
DECL|blockSize|member|size_t blockSize; /*!< Block size */
DECL|bootMode|member|usdhc_boot_mode_t bootMode; /*!< Boot mode selection. */
DECL|burstLen|member|usdhc_burst_len_t burstLen; /*!< burst len config */
DECL|callback|member|usdhc_transfer_callback_t callback; /*!< Callback function */
DECL|capability|member|usdhc_capability_t capability; /*!< USDHC capability information */
DECL|command|member|usdhc_command_t *command; /*!< Command to send */
DECL|command|member|usdhc_command_t *volatile command; /*!< Command to send */
DECL|config|member|usdhc_config_t config; /*!< USDHC configuration */
DECL|dataTimeout|member|uint32_t dataTimeout; /*!< Data timeout value */
DECL|dataType|member|uint8_t dataType; /*!< this is used to distinguish the normal/tuning/boot data */
DECL|data|member|usdhc_data_t *data; /*!< Data to transfer */
DECL|data|member|usdhc_data_t *volatile data; /*!< Data to transfer */
DECL|dmaMode|member|usdhc_dma_mode_t dmaMode; /*!< DMA mode */
DECL|enableAutoCommand12|member|bool enableAutoCommand12; /*!< Enable auto CMD12 */
DECL|enableAutoCommand23|member|bool enableAutoCommand23; /*!< Enable auto CMD23 */
DECL|enableAutoStopAtBlockGap|member|bool enableAutoStopAtBlockGap; /*!< Enable or disable auto stop at block gap function in boot period */
DECL|enableBootAck|member|bool enableBootAck; /*!< Enable or disable boot ACK */
DECL|enableIgnoreError|member|bool enableIgnoreError; /*!< Enable to ignore error event to read/write all the data */
DECL|endianMode|member|usdhc_endian_mode_t endianMode; /*!< Endian mode */
DECL|flags|member|uint32_t flags; /*!< Capability flags to indicate the support information(_usdhc_capability_flag) */
DECL|flags|member|uint32_t flags; /*!< Cmd flags */
DECL|index|member|uint32_t index; /*!< Command index */
DECL|interruptFlags|member|volatile uint32_t interruptFlags; /*!< Interrupt flags of last transaction */
DECL|kCARD_CommandTypeAbort|enumerator|kCARD_CommandTypeAbort = 3U, /*!< Abort command */
DECL|kCARD_CommandTypeEmpty|enumerator|kCARD_CommandTypeEmpty = 4U, /*!< Empty command */
DECL|kCARD_CommandTypeNormal|enumerator|kCARD_CommandTypeNormal = 0U, /*!< Normal command */
DECL|kCARD_CommandTypeResume|enumerator|kCARD_CommandTypeResume = 2U, /*!< Resume command */
DECL|kCARD_CommandTypeSuspend|enumerator|kCARD_CommandTypeSuspend = 1U, /*!< Suspend command */
DECL|kCARD_ResponseTypeNone|enumerator|kCARD_ResponseTypeNone = 0U, /*!< Response type: none */
DECL|kCARD_ResponseTypeR1b|enumerator|kCARD_ResponseTypeR1b = 2U, /*!< Response type: R1b */
DECL|kCARD_ResponseTypeR1|enumerator|kCARD_ResponseTypeR1 = 1U, /*!< Response type: R1 */
DECL|kCARD_ResponseTypeR2|enumerator|kCARD_ResponseTypeR2 = 3U, /*!< Response type: R2 */
DECL|kCARD_ResponseTypeR3|enumerator|kCARD_ResponseTypeR3 = 4U, /*!< Response type: R3 */
DECL|kCARD_ResponseTypeR4|enumerator|kCARD_ResponseTypeR4 = 5U, /*!< Response type: R4 */
DECL|kCARD_ResponseTypeR5b|enumerator|kCARD_ResponseTypeR5b = 7U, /*!< Response type: R5b */
DECL|kCARD_ResponseTypeR5|enumerator|kCARD_ResponseTypeR5 = 6U, /*!< Response type: R5 */
DECL|kCARD_ResponseTypeR6|enumerator|kCARD_ResponseTypeR6 = 8U, /*!< Response type: R6 */
DECL|kCARD_ResponseTypeR7|enumerator|kCARD_ResponseTypeR7 = 9U, /*!< Response type: R7 */
DECL|kStatus_USDHC_BusyTransferring|enumerator|kStatus_USDHC_BusyTransferring = MAKE_STATUS(kStatusGroup_USDHC, 0U), /*!< Transfer is on-going */
DECL|kStatus_USDHC_DMADataAddrNotAlign|enumerator|kStatus_USDHC_DMADataAddrNotAlign = MAKE_STATUS(kStatusGroup_USDHC, 4U), /*!< data address not align */
DECL|kStatus_USDHC_NotSupport|enumerator|kStatus_USDHC_NotSupport = MAKE_STATUS(kStatusGroup_USDHC, 7U), /*!< not support */
DECL|kStatus_USDHC_PrepareAdmaDescriptorFailed|enumerator|kStatus_USDHC_PrepareAdmaDescriptorFailed = MAKE_STATUS(kStatusGroup_USDHC, 1U), /*!< Set DMA descriptor failed */
DECL|kStatus_USDHC_ReTuningRequest|enumerator|kStatus_USDHC_ReTuningRequest = MAKE_STATUS(kStatusGroup_USDHC, 5U), /*!< re-tuning request */
DECL|kStatus_USDHC_SendCommandFailed|enumerator|kStatus_USDHC_SendCommandFailed = MAKE_STATUS(kStatusGroup_USDHC, 2U), /*!< Send command failed */
DECL|kStatus_USDHC_TransferDataFailed|enumerator|kStatus_USDHC_TransferDataFailed = MAKE_STATUS(kStatusGroup_USDHC, 3U), /*!< Transfer data failed */
DECL|kStatus_USDHC_TuningError|enumerator|kStatus_USDHC_TuningError = MAKE_STATUS(kStatusGroup_USDHC, 6U), /*!< tuning error */
DECL|kUSDHC_Adma1DescriptorActivity1Flag|enumerator|kUSDHC_Adma1DescriptorActivity1Flag = (1U << 4U), /*!< Activity 1 flag */
DECL|kUSDHC_Adma1DescriptorActivity2Flag|enumerator|kUSDHC_Adma1DescriptorActivity2Flag = (1U << 5U), /*!< Activity 2 flag */
DECL|kUSDHC_Adma1DescriptorEndFlag|enumerator|kUSDHC_Adma1DescriptorEndFlag = (1U << 1U), /*!< End flag */
DECL|kUSDHC_Adma1DescriptorInterrupFlag|enumerator|kUSDHC_Adma1DescriptorInterrupFlag = (1U << 2U), /*!< Interrupt flag */
DECL|kUSDHC_Adma1DescriptorTypeLink|enumerator|kUSDHC_Adma1DescriptorTypeLink = (kUSDHC_Adma1DescriptorActivity1Flag | kUSDHC_Adma1DescriptorActivity2Flag |
DECL|kUSDHC_Adma1DescriptorTypeNop|enumerator|kUSDHC_Adma1DescriptorTypeNop = (kUSDHC_Adma1DescriptorValidFlag), /*!< No operation */
DECL|kUSDHC_Adma1DescriptorTypeSetLength|enumerator|kUSDHC_Adma1DescriptorTypeSetLength =
DECL|kUSDHC_Adma1DescriptorTypeTransfer|enumerator|kUSDHC_Adma1DescriptorTypeTransfer =
DECL|kUSDHC_Adma1DescriptorValidFlag|enumerator|kUSDHC_Adma1DescriptorValidFlag = (1U << 0U), /*!< Valid flag */
DECL|kUSDHC_Adma2DescriptorActivity1Flag|enumerator|kUSDHC_Adma2DescriptorActivity1Flag = (1U << 4U), /*!< Activity 1 mask */
DECL|kUSDHC_Adma2DescriptorActivity2Flag|enumerator|kUSDHC_Adma2DescriptorActivity2Flag = (1U << 5U), /*!< Activity 2 mask */
DECL|kUSDHC_Adma2DescriptorEndFlag|enumerator|kUSDHC_Adma2DescriptorEndFlag = (1U << 1U), /*!< End flag */
DECL|kUSDHC_Adma2DescriptorInterruptFlag|enumerator|kUSDHC_Adma2DescriptorInterruptFlag = (1U << 2U), /*!< Interrupt flag */
DECL|kUSDHC_Adma2DescriptorTypeLink|enumerator|kUSDHC_Adma2DescriptorTypeLink = (kUSDHC_Adma2DescriptorActivity1Flag | kUSDHC_Adma2DescriptorActivity2Flag |
DECL|kUSDHC_Adma2DescriptorTypeNop|enumerator|kUSDHC_Adma2DescriptorTypeNop = (kUSDHC_Adma2DescriptorValidFlag), /*!< No operation */
DECL|kUSDHC_Adma2DescriptorTypeReserved|enumerator|kUSDHC_Adma2DescriptorTypeReserved =
DECL|kUSDHC_Adma2DescriptorTypeTransfer|enumerator|kUSDHC_Adma2DescriptorTypeTransfer =
DECL|kUSDHC_Adma2DescriptorValidFlag|enumerator|kUSDHC_Adma2DescriptorValidFlag = (1U << 0U), /*!< Valid flag */
DECL|kUSDHC_AdmaDescriptorErrorFlag|enumerator|kUSDHC_AdmaDescriptorErrorFlag = USDHC_ADMA_ERR_STATUS_ADMADCE_MASK, /*!< Descriptor error */
DECL|kUSDHC_AdmaDescriptorMultipleFlag|enumerator|kUSDHC_AdmaDescriptorMultipleFlag = 1U, /*!< create multiple ADMA descriptor within the ADMA table, this is used for
DECL|kUSDHC_AdmaDescriptorSingleFlag|enumerator|kUSDHC_AdmaDescriptorSingleFlag =
DECL|kUSDHC_AdmaErrorStateChangeAddress|enumerator|kUSDHC_AdmaErrorStateChangeAddress = 0x02U, /*!< Change address, no DMA error is occured */
DECL|kUSDHC_AdmaErrorStateFetchDescriptor|enumerator|kUSDHC_AdmaErrorStateFetchDescriptor =
DECL|kUSDHC_AdmaErrorStateInvalidDescriptor|enumerator|kUSDHC_AdmaErrorStateInvalidDescriptor = 0x08U, /*!< Invalid descriptor fetched by ADMA */
DECL|kUSDHC_AdmaErrorStateInvalidLength|enumerator|kUSDHC_AdmaErrorStateInvalidLength = 0x04U, /*!< Invalid length in ADMA descriptor */
DECL|kUSDHC_AdmaErrorStateStopDma|enumerator|kUSDHC_AdmaErrorStateStopDma =
DECL|kUSDHC_AdmaErrorStateTransferData|enumerator|kUSDHC_AdmaErrorStateTransferData =
DECL|kUSDHC_AdmaErrorState|enumerator|kUSDHC_AdmaErrorState = kUSDHC_AdmaErrorStateInvalidLength | kUSDHC_AdmaErrorStateInvalidDescriptor |
DECL|kUSDHC_AdmaLenghMismatchFlag|enumerator|kUSDHC_AdmaLenghMismatchFlag = USDHC_ADMA_ERR_STATUS_ADMALME_MASK, /*!< Length mismatch error */
DECL|kUSDHC_AllInterruptFlags|enumerator|kUSDHC_AllInterruptFlags = (kUSDHC_BlockGapEventFlag | kUSDHC_CardInterruptFlag | kUSDHC_CommandFlag |
DECL|kUSDHC_AutoCommand12CrcErrorFlag|enumerator|kUSDHC_AutoCommand12CrcErrorFlag = USDHC_AUTOCMD12_ERR_STATUS_AC12CE_MASK, /*!< CRC error */
DECL|kUSDHC_AutoCommand12EndBitErrorFlag|enumerator|kUSDHC_AutoCommand12EndBitErrorFlag = USDHC_AUTOCMD12_ERR_STATUS_AC12EBE_MASK, /*!< End bit error */
DECL|kUSDHC_AutoCommand12ErrorFlag|enumerator|kUSDHC_AutoCommand12ErrorFlag = USDHC_INT_STATUS_AC12E_MASK, /*!< Auto CMD12 error */
DECL|kUSDHC_AutoCommand12IndexErrorFlag|enumerator|kUSDHC_AutoCommand12IndexErrorFlag = USDHC_AUTOCMD12_ERR_STATUS_AC12IE_MASK, /*!< Index error */
DECL|kUSDHC_AutoCommand12NotExecutedFlag|enumerator|kUSDHC_AutoCommand12NotExecutedFlag = USDHC_AUTOCMD12_ERR_STATUS_AC12NE_MASK, /*!< Not executed error */
DECL|kUSDHC_AutoCommand12NotIssuedFlag|enumerator|kUSDHC_AutoCommand12NotIssuedFlag = USDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_MASK, /*!< Not issued error */
DECL|kUSDHC_AutoCommand12TimeoutFlag|enumerator|kUSDHC_AutoCommand12TimeoutFlag = USDHC_AUTOCMD12_ERR_STATUS_AC12TOE_MASK, /*!< Timeout error */
DECL|kUSDHC_BlockGapEventFlag|enumerator|kUSDHC_BlockGapEventFlag = USDHC_INT_STATUS_BGE_MASK, /*!< Block gap event */
DECL|kUSDHC_BootModeAlternative|enumerator|kUSDHC_BootModeAlternative = 1U, /*!< Alternative boot */
DECL|kUSDHC_BootModeNormal|enumerator|kUSDHC_BootModeNormal = 0U, /*!< Normal boot */
DECL|kUSDHC_BufferReadEnableFlag|enumerator|kUSDHC_BufferReadEnableFlag = USDHC_PRES_STATE_BREN_MASK, /*!< Buffer read enable */
DECL|kUSDHC_BufferReadReadyFlag|enumerator|kUSDHC_BufferReadReadyFlag = USDHC_INT_STATUS_BRR_MASK, /*!< Buffer read ready */
DECL|kUSDHC_BufferWriteEnableFlag|enumerator|kUSDHC_BufferWriteEnableFlag = USDHC_PRES_STATE_BWEN_MASK, /*!< Buffer write enable */
DECL|kUSDHC_BufferWriteReadyFlag|enumerator|kUSDHC_BufferWriteReadyFlag = USDHC_INT_STATUS_BWR_MASK, /*!< Buffer write ready */
DECL|kUSDHC_CardDetectFlag|enumerator|kUSDHC_CardDetectFlag = (kUSDHC_CardInsertionFlag | kUSDHC_CardRemovalFlag), /*!< Card detection interrupts */
DECL|kUSDHC_CardInsertedFlag|enumerator|kUSDHC_CardInsertedFlag = USDHC_PRES_STATE_CINST_MASK, /*!< Card inserted */
DECL|kUSDHC_CardInsertionFlag|enumerator|kUSDHC_CardInsertionFlag = USDHC_INT_STATUS_CINS_MASK, /*!< Card inserted */
DECL|kUSDHC_CardInterruptFlag|enumerator|kUSDHC_CardInterruptFlag = USDHC_INT_STATUS_CINT_MASK, /*!< Card interrupt */
DECL|kUSDHC_CardRemovalFlag|enumerator|kUSDHC_CardRemovalFlag = USDHC_INT_STATUS_CRM_MASK, /*!< Card removed */
DECL|kUSDHC_CommandCompleteFlag|enumerator|kUSDHC_CommandCompleteFlag = USDHC_INT_STATUS_CC_MASK, /*!< Command complete */
DECL|kUSDHC_CommandCrcErrorFlag|enumerator|kUSDHC_CommandCrcErrorFlag = USDHC_INT_STATUS_CCE_MASK, /*!< Command CRC error */
DECL|kUSDHC_CommandEndBitErrorFlag|enumerator|kUSDHC_CommandEndBitErrorFlag = USDHC_INT_STATUS_CEBE_MASK, /*!< Command end bit error */
DECL|kUSDHC_CommandErrorFlag|enumerator|kUSDHC_CommandErrorFlag = (kUSDHC_CommandTimeoutFlag | kUSDHC_CommandCrcErrorFlag | kUSDHC_CommandEndBitErrorFlag |
DECL|kUSDHC_CommandFlag|enumerator|kUSDHC_CommandFlag = (kUSDHC_CommandErrorFlag | kUSDHC_CommandCompleteFlag), /*!< Command interrupts */
DECL|kUSDHC_CommandIndexErrorFlag|enumerator|kUSDHC_CommandIndexErrorFlag = USDHC_INT_STATUS_CIE_MASK, /*!< Command index error */
DECL|kUSDHC_CommandInhibitFlag|enumerator|kUSDHC_CommandInhibitFlag = USDHC_PRES_STATE_CIHB_MASK, /*!< Command inhibit */
DECL|kUSDHC_CommandLineLevelFlag|enumerator|kUSDHC_CommandLineLevelFlag = USDHC_PRES_STATE_CLSL_MASK, /*!< Command line signal level */
DECL|kUSDHC_CommandTimeoutFlag|enumerator|kUSDHC_CommandTimeoutFlag = USDHC_INT_STATUS_CTOE_MASK, /*!< Command timeout error */
DECL|kUSDHC_CommandTypeAbortFlag|enumerator|kUSDHC_CommandTypeAbortFlag = (USDHC_CMD_XFR_TYP_CMDTYP(3U)), /*!< Abort command */
DECL|kUSDHC_CommandTypeResumeFlag|enumerator|kUSDHC_CommandTypeResumeFlag = (USDHC_CMD_XFR_TYP_CMDTYP(2U)), /*!< Resume command */
DECL|kUSDHC_CommandTypeSuspendFlag|enumerator|kUSDHC_CommandTypeSuspendFlag = (USDHC_CMD_XFR_TYP_CMDTYP(1U)), /*!< Suspend command */
DECL|kUSDHC_Data0LineLevelFlag|enumerator|kUSDHC_Data0LineLevelFlag = (1U << USDHC_PRES_STATE_DLSL_SHIFT), /*!< Data0 line signal level */
DECL|kUSDHC_Data1LineLevelFlag|enumerator|kUSDHC_Data1LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 1U)), /*!< Data1 line signal level */
DECL|kUSDHC_Data2LineLevelFlag|enumerator|kUSDHC_Data2LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 2U)), /*!< Data2 line signal level */
DECL|kUSDHC_Data3LineLevelFlag|enumerator|kUSDHC_Data3LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 3U)), /*!< Data3 line signal level */
DECL|kUSDHC_Data4LineLevelFlag|enumerator|kUSDHC_Data4LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 4U)), /*!< Data4 line signal level */
DECL|kUSDHC_Data5LineLevelFlag|enumerator|kUSDHC_Data5LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 5U)), /*!< Data5 line signal level */
DECL|kUSDHC_Data6LineLevelFlag|enumerator|kUSDHC_Data6LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 6U)), /*!< Data6 line signal level */
DECL|kUSDHC_Data7LineLevelFlag|enumerator|kUSDHC_Data7LineLevelFlag = (1U << (USDHC_PRES_STATE_DLSL_SHIFT + 7U)), /*!< Data7 line signal level */
DECL|kUSDHC_DataBusWidth1Bit|enumerator|kUSDHC_DataBusWidth1Bit = 0U, /*!< 1-bit mode */
DECL|kUSDHC_DataBusWidth4Bit|enumerator|kUSDHC_DataBusWidth4Bit = 1U, /*!< 4-bit mode */
DECL|kUSDHC_DataBusWidth8Bit|enumerator|kUSDHC_DataBusWidth8Bit = 2U, /*!< 8-bit mode */
DECL|kUSDHC_DataCompleteFlag|enumerator|kUSDHC_DataCompleteFlag = USDHC_INT_STATUS_TC_MASK, /*!< Data complete */
DECL|kUSDHC_DataCrcErrorFlag|enumerator|kUSDHC_DataCrcErrorFlag = USDHC_INT_STATUS_DCE_MASK, /*!< Data CRC error */
DECL|kUSDHC_DataEndBitErrorFlag|enumerator|kUSDHC_DataEndBitErrorFlag = USDHC_INT_STATUS_DEBE_MASK, /*!< Data end bit error */
DECL|kUSDHC_DataErrorFlag|enumerator|kUSDHC_DataErrorFlag = (kUSDHC_DataTimeoutFlag | kUSDHC_DataCrcErrorFlag | kUSDHC_DataEndBitErrorFlag |
DECL|kUSDHC_DataFlag|enumerator|kUSDHC_DataFlag = (kUSDHC_DataCompleteFlag | kUSDHC_DmaCompleteFlag | kUSDHC_BufferWriteReadyFlag |
DECL|kUSDHC_DataInhibitFlag|enumerator|kUSDHC_DataInhibitFlag = USDHC_PRES_STATE_CDIHB_MASK, /*!< Data inhibit */
DECL|kUSDHC_DataLineActiveFlag|enumerator|kUSDHC_DataLineActiveFlag = USDHC_PRES_STATE_DLA_MASK, /*!< Data line active */
DECL|kUSDHC_DataPresentFlag|enumerator|kUSDHC_DataPresentFlag = USDHC_CMD_XFR_TYP_DPSEL_MASK, /*!< Data present flag */
DECL|kUSDHC_DataReadFlag|enumerator|kUSDHC_DataReadFlag = USDHC_MIX_CTRL_DTDSEL_MASK, /*!< Enable data read */
DECL|kUSDHC_DataTimeoutFlag|enumerator|kUSDHC_DataTimeoutFlag = USDHC_INT_STATUS_DTOE_MASK, /*!< Data timeout error */
DECL|kUSDHC_DelaySettingFinishedFlag|enumerator|kUSDHC_DelaySettingFinishedFlag = 0U, /*!< not support */
DECL|kUSDHC_DmaCompleteFlag|enumerator|kUSDHC_DmaCompleteFlag = USDHC_INT_STATUS_DINT_MASK, /*!< DMA interrupt */
DECL|kUSDHC_DmaErrorFlag|enumerator|kUSDHC_DmaErrorFlag = USDHC_INT_STATUS_DMAE_MASK, /*!< DMA error */
DECL|kUSDHC_DmaModeAdma1|enumerator|kUSDHC_DmaModeAdma1 = 1U, /*!< ADMA1 is selected */
DECL|kUSDHC_DmaModeAdma2|enumerator|kUSDHC_DmaModeAdma2 = 2U, /*!< ADMA2 is selected */
DECL|kUSDHC_DmaModeSimple|enumerator|kUSDHC_DmaModeSimple = 0U, /*!< external DMA */
DECL|kUSDHC_EnBurstLenForINCR4816WRAP|enumerator|kUSDHC_EnBurstLenForINCR4816WRAP = 0x04U, /*!< enable burst len for INCR4/8/16 WRAP */
DECL|kUSDHC_EnBurstLenForINCR4816|enumerator|kUSDHC_EnBurstLenForINCR4816 = 0x02U, /*!< enable burst len for INCR4/INCR8/INCR16 */
DECL|kUSDHC_EnBurstLenForINCR|enumerator|kUSDHC_EnBurstLenForINCR = 0x01U, /*!< enable burst len for INCR */
DECL|kUSDHC_EnableAutoCommand12Flag|enumerator|kUSDHC_EnableAutoCommand12Flag = USDHC_MIX_CTRL_AC12EN_MASK, /*!< Enable auto CMD12 */
DECL|kUSDHC_EnableAutoCommand23Flag|enumerator|kUSDHC_EnableAutoCommand23Flag = USDHC_MIX_CTRL_AC23EN_MASK, /*!< Enable auto CMD23 */
DECL|kUSDHC_EnableBlockCountFlag|enumerator|kUSDHC_EnableBlockCountFlag = USDHC_MIX_CTRL_BCEN_MASK, /*!< Enable block count */
DECL|kUSDHC_EnableCrcCheckFlag|enumerator|kUSDHC_EnableCrcCheckFlag = USDHC_CMD_XFR_TYP_CCCEN_MASK, /*!< Enable CRC check */
DECL|kUSDHC_EnableDmaFlag|enumerator|kUSDHC_EnableDmaFlag = USDHC_MIX_CTRL_DMAEN_MASK, /*!< Enable DMA */
DECL|kUSDHC_EnableIndexCheckFlag|enumerator|kUSDHC_EnableIndexCheckFlag = USDHC_CMD_XFR_TYP_CICEN_MASK, /*!< Enable index check */
DECL|kUSDHC_EndianModeBig|enumerator|kUSDHC_EndianModeBig = 0U, /*!< Big endian mode */
DECL|kUSDHC_EndianModeHalfWordBig|enumerator|kUSDHC_EndianModeHalfWordBig = 1U, /*!< Half word big endian mode */
DECL|kUSDHC_EndianModeLittle|enumerator|kUSDHC_EndianModeLittle = 2U, /*!< Little endian mode */
DECL|kUSDHC_ErrorFlag|enumerator|kUSDHC_ErrorFlag = (kUSDHC_CommandErrorFlag | kUSDHC_DataErrorFlag | kUSDHC_DmaErrorFlag), /*!< All error */
DECL|kUSDHC_ExactBlockNumberReadFlag|enumerator|kUSDHC_ExactBlockNumberReadFlag = USDHC_PROT_CTRL_NON_EXACT_BLK_RD_MASK, /*!< Exact block number read */
DECL|kUSDHC_ExecuteTuning|enumerator|kUSDHC_ExecuteTuning = 0U, /*!< not support */
DECL|kUSDHC_ExternalDMA|enumerator|kUSDHC_ExternalDMA = 3U, /*!< external dma mode select */
DECL|kUSDHC_ForceEventAutoCommand12CrcError|enumerator|kUSDHC_ForceEventAutoCommand12CrcError = USDHC_FORCE_EVENT_FEVTAC12CE_MASK, /*!< Auto CMD12 CRC error */
DECL|kUSDHC_ForceEventAutoCommand12Error|enumerator|kUSDHC_ForceEventAutoCommand12Error = USDHC_FORCE_EVENT_FEVTAC12E_MASK, /*!< Auto CMD12 error */
DECL|kUSDHC_ForceEventAutoCommand12IndexError|enumerator|kUSDHC_ForceEventAutoCommand12IndexError = USDHC_FORCE_EVENT_FEVTAC12IE_MASK, /*!< Auto CMD12 index error */
DECL|kUSDHC_ForceEventAutoCommand12NotExecuted|enumerator|kUSDHC_ForceEventAutoCommand12NotExecuted = USDHC_FORCE_EVENT_FEVTAC12NE_MASK, /*!< Auto CMD12 not executed error */
DECL|kUSDHC_ForceEventAutoCommand12NotIssued|enumerator|kUSDHC_ForceEventAutoCommand12NotIssued = USDHC_FORCE_EVENT_FEVTCNIBAC12E_MASK, /*!< Auto CMD12 not issued error */
DECL|kUSDHC_ForceEventAutoCommand12Timeout|enumerator|kUSDHC_ForceEventAutoCommand12Timeout = USDHC_FORCE_EVENT_FEVTAC12TOE_MASK, /*!< Auto CMD12 timeout error */
DECL|kUSDHC_ForceEventCardInt|enumerator|kUSDHC_ForceEventCardInt = USDHC_FORCE_EVENT_FEVTCINT_MASK, /*!< Card interrupt */
DECL|kUSDHC_ForceEventCommandCrcError|enumerator|kUSDHC_ForceEventCommandCrcError = USDHC_FORCE_EVENT_FEVTCCE_MASK, /*!< Command CRC error */
DECL|kUSDHC_ForceEventCommandEndBitError|enumerator|kUSDHC_ForceEventCommandEndBitError = USDHC_FORCE_EVENT_FEVTCEBE_MASK, /*!< Command end bit error */
DECL|kUSDHC_ForceEventCommandIndexError|enumerator|kUSDHC_ForceEventCommandIndexError = USDHC_FORCE_EVENT_FEVTCIE_MASK, /*!< Command index error */
DECL|kUSDHC_ForceEventCommandTimeout|enumerator|kUSDHC_ForceEventCommandTimeout = USDHC_FORCE_EVENT_FEVTCTOE_MASK, /*!< Command timeout error */
DECL|kUSDHC_ForceEventDataCrcError|enumerator|kUSDHC_ForceEventDataCrcError = USDHC_FORCE_EVENT_FEVTDCE_MASK, /*!< Data CRC error */
DECL|kUSDHC_ForceEventDataEndBitError|enumerator|kUSDHC_ForceEventDataEndBitError = USDHC_FORCE_EVENT_FEVTDEBE_MASK, /*!< Data end bit error */
DECL|kUSDHC_ForceEventDataTimeout|enumerator|kUSDHC_ForceEventDataTimeout = USDHC_FORCE_EVENT_FEVTDTOE_MASK, /*!< Data timeout error */
DECL|kUSDHC_ForceEventDmaError|enumerator|kUSDHC_ForceEventDmaError = USDHC_FORCE_EVENT_FEVTDMAE_MASK, /*!< Dma error */
DECL|kUSDHC_ForceEventEndBitError|enumerator|kUSDHC_ForceEventEndBitError = USDHC_FORCE_EVENT_FEVTAC12EBE_MASK, /*!< Auto CMD12 end bit error */
DECL|kUSDHC_ForceEventTuningError|enumerator|kUSDHC_ForceEventTuningError = 0U, /*!< not support */
DECL|kUSDHC_ForceEventsAll|enumerator|kUSDHC_ForceEventsAll =
DECL|kUSDHC_InterruptAtBlockGapFlag|enumerator|kUSDHC_InterruptAtBlockGapFlag = USDHC_PROT_CTRL_IABG_MASK, /*!< Interrupt at block gap */
DECL|kUSDHC_MultipleBlockFlag|enumerator|kUSDHC_MultipleBlockFlag = USDHC_MIX_CTRL_MSBSEL_MASK, /*!< Multiple block data read/write */
DECL|kUSDHC_ReTuningEventFlag|enumerator|kUSDHC_ReTuningEventFlag = 0U, /*!< Re-Tuning event,only for SD3.0 SDR104 mode */
DECL|kUSDHC_ReTuningRequestFlag|enumerator|kUSDHC_ReTuningRequestFlag = 0U, /*!< not support */
DECL|kUSDHC_ReadDoneNo8CLK|enumerator|kUSDHC_ReadDoneNo8CLK = USDHC_PROT_CTRL_RD_DONE_NO_8CLK_MASK, /*!< read done without 8 clk for block gap */
DECL|kUSDHC_ReadTransferActiveFlag|enumerator|kUSDHC_ReadTransferActiveFlag = USDHC_PRES_STATE_RTA_MASK, /*!< Read transfer active */
DECL|kUSDHC_ReadWaitControlFlag|enumerator|kUSDHC_ReadWaitControlFlag = USDHC_PROT_CTRL_RWCTL_MASK, /*!< Read wait control */
DECL|kUSDHC_ResetAll|enumerator|kUSDHC_ResetAll = USDHC_SYS_CTRL_RSTA_MASK, /*!< Reset all except card detection */
DECL|kUSDHC_ResetCommand|enumerator|kUSDHC_ResetCommand = USDHC_SYS_CTRL_RSTC_MASK, /*!< Reset command line */
DECL|kUSDHC_ResetData|enumerator|kUSDHC_ResetData = USDHC_SYS_CTRL_RSTD_MASK, /*!< Reset data line */
DECL|kUSDHC_ResetTuning|enumerator|kUSDHC_ResetTuning = 0U, /*!< no reset tuning circuit bit */
DECL|kUSDHC_ResetsAll|enumerator|kUSDHC_ResetsAll =
DECL|kUSDHC_ResponseLength136Flag|enumerator|kUSDHC_ResponseLength136Flag = USDHC_CMD_XFR_TYP_RSPTYP(1U), /*!< 136 bit response length */
DECL|kUSDHC_ResponseLength48BusyFlag|enumerator|kUSDHC_ResponseLength48BusyFlag = USDHC_CMD_XFR_TYP_RSPTYP(3U), /*!< 48 bit response length with busy status */
DECL|kUSDHC_ResponseLength48Flag|enumerator|kUSDHC_ResponseLength48Flag = USDHC_CMD_XFR_TYP_RSPTYP(2U), /*!< 48 bit response length */
DECL|kUSDHC_SDR104TuningFlag|enumerator|kUSDHC_SDR104TuningFlag = (kUSDHC_TuningErrorFlag | kUSDHC_TuningPassFlag | kUSDHC_ReTuningEventFlag),
DECL|kUSDHC_SdClockStableFlag|enumerator|kUSDHC_SdClockStableFlag = USDHC_PRES_STATE_SDSTB_MASK, /*!< SD bus clock stable */
DECL|kUSDHC_StopAtBlockGapFlag|enumerator|kUSDHC_StopAtBlockGapFlag = USDHC_PROT_CTRL_SABGREQ_MASK, /*!< Stop at block gap */
DECL|kUSDHC_Support4BitFlag|enumerator|kUSDHC_Support4BitFlag = (USDHC_HOST_CTRL_CAP_MBL_SHIFT << 0U), /*!< Support 4 bit mode */
DECL|kUSDHC_Support8BitFlag|enumerator|kUSDHC_Support8BitFlag = (USDHC_HOST_CTRL_CAP_MBL_SHIFT << 1U), /*!< Support 8 bit mode */
DECL|kUSDHC_SupportAdmaFlag|enumerator|kUSDHC_SupportAdmaFlag = USDHC_HOST_CTRL_CAP_ADMAS_MASK, /*!< Support ADMA */
DECL|kUSDHC_SupportDDR50Flag|enumerator|kUSDHC_SupportDDR50Flag = USDHC_HOST_CTRL_CAP_DDR50_SUPPORT_MASK, /*!< support DDR50 mode */
DECL|kUSDHC_SupportDmaFlag|enumerator|kUSDHC_SupportDmaFlag = USDHC_HOST_CTRL_CAP_DMAS_MASK, /*!< Support DMA */
DECL|kUSDHC_SupportHighSpeedFlag|enumerator|kUSDHC_SupportHighSpeedFlag = USDHC_HOST_CTRL_CAP_HSS_MASK, /*!< Support high-speed */
DECL|kUSDHC_SupportSDR104Flag|enumerator|kUSDHC_SupportSDR104Flag = 0, /*!< not support SDR104 mode */
DECL|kUSDHC_SupportSDR50Flag|enumerator|kUSDHC_SupportSDR50Flag = 0U, /*!< not support SDR50 mode */
DECL|kUSDHC_SupportSuspendResumeFlag|enumerator|kUSDHC_SupportSuspendResumeFlag = USDHC_HOST_CTRL_CAP_SRS_MASK, /*!< Support suspend/resume */
DECL|kUSDHC_SupportV180Flag|enumerator|kUSDHC_SupportV180Flag = USDHC_HOST_CTRL_CAP_VS18_MASK, /*!< Support voltage 1.8V */
DECL|kUSDHC_SupportV300Flag|enumerator|kUSDHC_SupportV300Flag = USDHC_HOST_CTRL_CAP_VS30_MASK, /*!< Support voltage 3.0V */
DECL|kUSDHC_SupportV330Flag|enumerator|kUSDHC_SupportV330Flag = USDHC_HOST_CTRL_CAP_VS33_MASK, /*!< Support voltage 3.3V */
DECL|kUSDHC_TransferDataBootcontinous|enumerator|kUSDHC_TransferDataBootcontinous = 3U, /*!< transfer boot data continous */
DECL|kUSDHC_TransferDataBoot|enumerator|kUSDHC_TransferDataBoot = 2U, /*!< transfer boot data */
DECL|kUSDHC_TransferDataNormal|enumerator|kUSDHC_TransferDataNormal = 0U, /*!< transfer normal read/write data */
DECL|kUSDHC_TransferDataTuning|enumerator|kUSDHC_TransferDataTuning = 1U, /*!< transfer tuning data */
DECL|kUSDHC_TuningErrorFlag|enumerator|kUSDHC_TuningErrorFlag = 0U, /*!< SDR104 tuning error flag */
DECL|kUSDHC_TuningPassFlag|enumerator|kUSDHC_TuningPassFlag = 0U, /*!< SDR104 mode tuning pass flag */
DECL|kUSDHC_TuningSampleClockSel|enumerator|kUSDHC_TuningSampleClockSel = 0U, /*!< not support */
DECL|kUSDHC_WakeupEventOnCardInsert|enumerator|kUSDHC_WakeupEventOnCardInsert = USDHC_PROT_CTRL_WECINS_MASK, /*!< Wakeup on card insertion */
DECL|kUSDHC_WakeupEventOnCardInt|enumerator|kUSDHC_WakeupEventOnCardInt = USDHC_PROT_CTRL_WECINT_MASK, /*!< Wakeup on card interrupt */
DECL|kUSDHC_WakeupEventOnCardRemove|enumerator|kUSDHC_WakeupEventOnCardRemove = USDHC_PROT_CTRL_WECRM_MASK, /*!< Wakeup on card removal */
DECL|kUSDHC_WakeupEventsAll|enumerator|kUSDHC_WakeupEventsAll = (kUSDHC_WakeupEventOnCardInt | kUSDHC_WakeupEventOnCardInsert |
DECL|kUSDHC_WriteTransferActiveFlag|enumerator|kUSDHC_WriteTransferActiveFlag = USDHC_PRES_STATE_WTA_MASK, /*!< Write transfer active */
DECL|maxBlockCount|member|uint32_t maxBlockCount; /*!< Maximum block count can be set one time */
DECL|maxBlockLength|member|uint32_t maxBlockLength; /*!< Maximum block length united as byte */
DECL|mmcVersion|member|uint32_t mmcVersion; /*!< support emmc card version */
DECL|readBurstLen|member|uint8_t readBurstLen; /*!< Read burst len */
DECL|readWatermarkLevel|member|uint8_t readWatermarkLevel; /*!< Watermark level for DMA read operation. Available range is 1 ~ 128. */
DECL|responseErrorFlags|member|uint32_t responseErrorFlags; /*!< response error flag, the flag which need to check
DECL|responseType|member|usdhc_card_response_type_t responseType; /*!< Command response type */
DECL|response|member|uint32_t response[4U]; /*!< Response for this command */
DECL|rxData|member|uint32_t *rxData; /*!< Buffer to save data read */
DECL|sdVersion|member|uint32_t sdVersion; /*!< support SD card/sdio version */
DECL|sourceClock_Hz|member|uint32_t sourceClock_Hz; /*!< USDHC source clock frequency united in Hz */
DECL|transferredWords|member|volatile uint32_t transferredWords; /*!< Words transferred by DATAPORT way */
DECL|transfer|member|usdhc_transfer_function_t transfer; /*!< USDHC transfer function */
DECL|txData|member|const uint32_t *txData; /*!< Data buffer to write */
DECL|type|member|usdhc_card_command_type_t type; /*!< Command type */
DECL|usdhc_adma1_descriptor_t|typedef|typedef uint32_t usdhc_adma1_descriptor_t;
DECL|usdhc_adma2_descriptor_t|typedef|} usdhc_adma2_descriptor_t;
DECL|usdhc_adma_config_t|typedef|} usdhc_adma_config_t;
DECL|usdhc_boot_config_t|typedef|} usdhc_boot_config_t;
DECL|usdhc_boot_mode_t|typedef|} usdhc_boot_mode_t;
DECL|usdhc_burst_len_t|typedef|} usdhc_burst_len_t;
DECL|usdhc_capability_t|typedef|} usdhc_capability_t;
DECL|usdhc_card_command_type_t|typedef|} usdhc_card_command_type_t;
DECL|usdhc_card_response_type_t|typedef|} usdhc_card_response_type_t;
DECL|usdhc_command_t|typedef|} usdhc_command_t;
DECL|usdhc_config_t|typedef|} usdhc_config_t;
DECL|usdhc_data_bus_width_t|typedef|} usdhc_data_bus_width_t;
DECL|usdhc_data_t|typedef|} usdhc_data_t;
DECL|usdhc_dma_mode_t|typedef|} usdhc_dma_mode_t;
DECL|usdhc_endian_mode_t|typedef|} usdhc_endian_mode_t;
DECL|usdhc_handle_t|typedef|typedef struct _usdhc_handle usdhc_handle_t;
DECL|usdhc_host_t|typedef|} usdhc_host_t;
DECL|usdhc_transfer_callback_t|typedef|} usdhc_transfer_callback_t;
DECL|usdhc_transfer_function_t|typedef|typedef status_t (*usdhc_transfer_function_t)(USDHC_Type *base, usdhc_transfer_t *content);
DECL|usdhc_transfer_t|typedef|} usdhc_transfer_t;
DECL|userData|member|void *userData; /*!< Parameter for transfer complete callback */
DECL|writeBurstLen|member|uint8_t writeBurstLen; /*!< Write burst len */
DECL|writeWatermarkLevel|member|uint8_t writeWatermarkLevel; /*!< Watermark level for DMA write operation. Available range is 1 ~ 128. */
