DECL|CardInserted|member|void (*CardInserted)(void); /*!< Card inserted occurs when DAT3/CD pin is for card detect */
DECL|CardRemoved|member|void (*CardRemoved)(void); /*!< Card removed occurs */
DECL|FSL_SDHC_DRIVER_VERSION|macro|FSL_SDHC_DRIVER_VERSION
DECL|SDHC_ADMA1_ADDRESS_ALIGN|macro|SDHC_ADMA1_ADDRESS_ALIGN
DECL|SDHC_ADMA1_DESCRIPTOR_ADDRESS_MASK|macro|SDHC_ADMA1_DESCRIPTOR_ADDRESS_MASK
DECL|SDHC_ADMA1_DESCRIPTOR_ADDRESS_SHIFT|macro|SDHC_ADMA1_DESCRIPTOR_ADDRESS_SHIFT
DECL|SDHC_ADMA1_DESCRIPTOR_LENGTH_MASK|macro|SDHC_ADMA1_DESCRIPTOR_LENGTH_MASK
DECL|SDHC_ADMA1_DESCRIPTOR_LENGTH_SHIFT|macro|SDHC_ADMA1_DESCRIPTOR_LENGTH_SHIFT
DECL|SDHC_ADMA1_DESCRIPTOR_MAX_LENGTH_PER_ENTRY|macro|SDHC_ADMA1_DESCRIPTOR_MAX_LENGTH_PER_ENTRY
DECL|SDHC_ADMA1_LENGTH_ALIGN|macro|SDHC_ADMA1_LENGTH_ALIGN
DECL|SDHC_ADMA2_ADDRESS_ALIGN|macro|SDHC_ADMA2_ADDRESS_ALIGN
DECL|SDHC_ADMA2_DESCRIPTOR_LENGTH_MASK|macro|SDHC_ADMA2_DESCRIPTOR_LENGTH_MASK
DECL|SDHC_ADMA2_DESCRIPTOR_LENGTH_SHIFT|macro|SDHC_ADMA2_DESCRIPTOR_LENGTH_SHIFT
DECL|SDHC_ADMA2_DESCRIPTOR_MAX_LENGTH_PER_ENTRY|macro|SDHC_ADMA2_DESCRIPTOR_MAX_LENGTH_PER_ENTRY
DECL|SDHC_ADMA2_LENGTH_ALIGN|macro|SDHC_ADMA2_LENGTH_ALIGN
DECL|SDHC_ClearInterruptStatusFlags|function|static inline void SDHC_ClearInterruptStatusFlags(SDHC_Type *base, uint32_t mask)
DECL|SDHC_DisableInterruptSignal|function|static inline void SDHC_DisableInterruptSignal(SDHC_Type *base, uint32_t mask)
DECL|SDHC_DisableInterruptStatus|function|static inline void SDHC_DisableInterruptStatus(SDHC_Type *base, uint32_t mask)
DECL|SDHC_EnableCardDetectTest|function|static inline void SDHC_EnableCardDetectTest(SDHC_Type *base, bool enable)
DECL|SDHC_EnableInterruptSignal|function|static inline void SDHC_EnableInterruptSignal(SDHC_Type *base, uint32_t mask)
DECL|SDHC_EnableInterruptStatus|function|static inline void SDHC_EnableInterruptStatus(SDHC_Type *base, uint32_t mask)
DECL|SDHC_EnableSdClock|function|static inline void SDHC_EnableSdClock(SDHC_Type *base, bool enable)
DECL|SDHC_EnableWakeupEvent|function|static inline void SDHC_EnableWakeupEvent(SDHC_Type *base, uint32_t mask, bool enable)
DECL|SDHC_GetAdmaErrorStatusFlags|function|static inline uint32_t SDHC_GetAdmaErrorStatusFlags(SDHC_Type *base)
DECL|SDHC_GetAutoCommand12ErrorStatusFlags|function|static inline uint32_t SDHC_GetAutoCommand12ErrorStatusFlags(SDHC_Type *base)
DECL|SDHC_GetCommandResponse|function|static inline uint32_t SDHC_GetCommandResponse(SDHC_Type *base, uint32_t index)
DECL|SDHC_GetInterruptStatusFlags|function|static inline uint32_t SDHC_GetInterruptStatusFlags(SDHC_Type *base)
DECL|SDHC_GetPresentStatusFlags|function|static inline uint32_t SDHC_GetPresentStatusFlags(SDHC_Type *base)
DECL|SDHC_MAX_BLOCK_COUNT|macro|SDHC_MAX_BLOCK_COUNT
DECL|SDHC_ReadData|function|static inline uint32_t SDHC_ReadData(SDHC_Type *base)
DECL|SDHC_SetCardDetectTestLevel|function|static inline void SDHC_SetCardDetectTestLevel(SDHC_Type *base, bool high)
DECL|SDHC_SetContinueRequest|function|static inline void SDHC_SetContinueRequest(SDHC_Type *base)
DECL|SDHC_SetDataBusWidth|function|static inline void SDHC_SetDataBusWidth(SDHC_Type *base, sdhc_data_bus_width_t width)
DECL|SDHC_SetForceEvent|function|static inline void SDHC_SetForceEvent(SDHC_Type *base, uint32_t mask)
DECL|SDHC_WriteData|function|static inline void SDHC_WriteData(SDHC_Type *base, uint32_t data)
DECL|SdioBlockGap|member|void (*SdioBlockGap)(void); /*!< SDIO card stopped at block gap occurs */
DECL|SdioInterrupt|member|void (*SdioInterrupt)(void); /*!< SDIO card interrupt occurs */
DECL|TransferComplete|member|void (*TransferComplete)(SDHC_Type *base,
DECL|_FSL_SDHC_H_|macro|_FSL_SDHC_H_
DECL|_sdhc_adma1_descriptor_flag|enum|enum _sdhc_adma1_descriptor_flag
DECL|_sdhc_adma2_descriptor_flag|enum|enum _sdhc_adma2_descriptor_flag
DECL|_sdhc_adma2_descriptor|struct|typedef struct _sdhc_adma2_descriptor
DECL|_sdhc_adma_error_state|enum|typedef enum _sdhc_adma_error_state
DECL|_sdhc_adma_error_status_flag|enum|enum _sdhc_adma_error_status_flag
DECL|_sdhc_auto_command12_error_status_flag|enum|enum _sdhc_auto_command12_error_status_flag
DECL|_sdhc_boot_config|struct|typedef struct _sdhc_boot_config
DECL|_sdhc_boot_mode|enum|typedef enum _sdhc_boot_mode
DECL|_sdhc_capability_flag|enum|enum _sdhc_capability_flag
DECL|_sdhc_capability|struct|typedef struct _sdhc_capability
DECL|_sdhc_card_command_type|enum|typedef enum _sdhc_card_command_type
DECL|_sdhc_card_response_type|enum|typedef enum _sdhc_card_response_type
DECL|_sdhc_command|struct|typedef struct _sdhc_command
DECL|_sdhc_config|struct|typedef struct _sdhc_config
DECL|_sdhc_data_bus_width|enum|typedef enum _sdhc_data_bus_width
DECL|_sdhc_data|struct|typedef struct _sdhc_data
DECL|_sdhc_dma_mode|enum|typedef enum _sdhc_dma_mode
DECL|_sdhc_endian_mode|enum|typedef enum _sdhc_endian_mode
DECL|_sdhc_force_event|enum|enum _sdhc_force_event
DECL|_sdhc_handle|struct|struct _sdhc_handle
DECL|_sdhc_host|struct|typedef struct _sdhc_host
DECL|_sdhc_interrupt_status_flag|enum|enum _sdhc_interrupt_status_flag
DECL|_sdhc_present_status_flag|enum|enum _sdhc_present_status_flag
DECL|_sdhc_reset|enum|enum _sdhc_reset
DECL|_sdhc_sdio_control_flag|enum|enum _sdhc_sdio_control_flag
DECL|_sdhc_status|enum|enum _sdhc_status
DECL|_sdhc_transfer_callback|struct|typedef struct _sdhc_transfer_callback
DECL|_sdhc_transfer_config|struct|typedef struct _sdhc_transfer_config
DECL|_sdhc_transfer_flag|enum|enum _sdhc_transfer_flag
DECL|_sdhc_transfer|struct|typedef struct _sdhc_transfer
DECL|_sdhc_wakeup_event|enum|enum _sdhc_wakeup_event
DECL|ackTimeoutCount|member|uint32_t ackTimeoutCount; /*!< Timeout value for the boot ACK. The available range is 0 ~ 15. */
DECL|address|member|const uint32_t *address; /*!< The address field */
DECL|argument|member|uint32_t argument; /*!< Command argument */
DECL|attribute|member|uint32_t attribute; /*!< The control and status field */
DECL|base|member|SDHC_Type *base; /*!< SDHC peripheral base address */
DECL|blockCount|member|uint32_t blockCount; /*!< Block count */
DECL|blockCount|member|uint32_t blockCount; /*!< Stop at block gap value of automatic mode. Available range is 0 ~ 65535. */
DECL|blockSize|member|size_t blockSize; /*!< Block size */
DECL|bootMode|member|sdhc_boot_mode_t bootMode; /*!< Boot mode selection. */
DECL|callback|member|sdhc_transfer_callback_t callback; /*!< Callback function */
DECL|capability|member|sdhc_capability_t capability; /*!< SDHC capability information */
DECL|cardDetectDat3|member|bool cardDetectDat3; /*!< Enable DAT3 as card detection pin */
DECL|commandArgument|member|uint32_t commandArgument; /*!< Command argument */
DECL|commandIndex|member|uint32_t commandIndex; /*!< Command index */
DECL|command|member|sdhc_command_t *command; /*!< Command to send */
DECL|command|member|sdhc_command_t *volatile command; /*!< Command to send */
DECL|config|member|sdhc_config_t config; /*!< SDHC configuration */
DECL|dataBlockCount|member|uint32_t dataBlockCount; /*!< Data block count */
DECL|dataBlockSize|member|size_t dataBlockSize; /*!< Data block size */
DECL|data|member|sdhc_data_t *data; /*!< Data to transfer */
DECL|data|member|sdhc_data_t *volatile data; /*!< Data to transfer */
DECL|dmaMode|member|sdhc_dma_mode_t dmaMode; /*!< DMA mode */
DECL|enableAutoCommand12|member|bool enableAutoCommand12; /*!< Enable auto CMD12 */
DECL|enableAutoStopAtBlockGap|member|bool enableAutoStopAtBlockGap; /*!< Enable or disable auto stop at block gap function in boot period */
DECL|enableBootAck|member|bool enableBootAck; /*!< Enable or disable boot ACK */
DECL|enableBoot|member|bool enableBoot; /*!< Enable or disable fast boot */
DECL|enableIgnoreError|member|bool enableIgnoreError; /*!< Enable to ignore error event to read/write all the data */
DECL|endianMode|member|sdhc_endian_mode_t endianMode; /*!< Endian mode */
DECL|flags|member|uint32_t flags; /*!< Capability flags to indicate the support information(_sdhc_capability_flag) */
DECL|flags|member|uint32_t flags; /*!< Transfer flags(_sdhc_transfer_flag) */
DECL|index|member|uint32_t index; /*!< Command index */
DECL|interruptFlags|member|volatile uint32_t interruptFlags; /*!< Interrupt flags of last transaction */
DECL|kCARD_CommandTypeAbort|enumerator|kCARD_CommandTypeAbort = 3U, /*!< Abort command */
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
DECL|kSDHC_Adma1DescriptorActivity1Flag|enumerator|kSDHC_Adma1DescriptorActivity1Flag = (1U << 4U), /*!< Activity 1 flag */
DECL|kSDHC_Adma1DescriptorActivity2Flag|enumerator|kSDHC_Adma1DescriptorActivity2Flag = (1U << 5U), /*!< Activity 2 flag */
DECL|kSDHC_Adma1DescriptorEndFlag|enumerator|kSDHC_Adma1DescriptorEndFlag = (1U << 1U), /*!< End flag */
DECL|kSDHC_Adma1DescriptorInterrupFlag|enumerator|kSDHC_Adma1DescriptorInterrupFlag = (1U << 2U), /*!< Interrupt flag */
DECL|kSDHC_Adma1DescriptorTypeLink|enumerator|kSDHC_Adma1DescriptorTypeLink = (kSDHC_Adma1DescriptorActivity1Flag | kSDHC_Adma1DescriptorActivity2Flag |
DECL|kSDHC_Adma1DescriptorTypeNop|enumerator|kSDHC_Adma1DescriptorTypeNop = (kSDHC_Adma1DescriptorValidFlag), /*!< No operation */
DECL|kSDHC_Adma1DescriptorTypeSetLength|enumerator|kSDHC_Adma1DescriptorTypeSetLength =
DECL|kSDHC_Adma1DescriptorTypeTransfer|enumerator|kSDHC_Adma1DescriptorTypeTransfer =
DECL|kSDHC_Adma1DescriptorValidFlag|enumerator|kSDHC_Adma1DescriptorValidFlag = (1U << 0U), /*!< Valid flag */
DECL|kSDHC_Adma2DescriptorActivity1Flag|enumerator|kSDHC_Adma2DescriptorActivity1Flag = (1U << 4U), /*!< Activity 1 mask */
DECL|kSDHC_Adma2DescriptorActivity2Flag|enumerator|kSDHC_Adma2DescriptorActivity2Flag = (1U << 5U), /*!< Activity 2 mask */
DECL|kSDHC_Adma2DescriptorEndFlag|enumerator|kSDHC_Adma2DescriptorEndFlag = (1U << 1U), /*!< End flag */
DECL|kSDHC_Adma2DescriptorInterruptFlag|enumerator|kSDHC_Adma2DescriptorInterruptFlag = (1U << 2U), /*!< Interrupt flag */
DECL|kSDHC_Adma2DescriptorTypeLink|enumerator|kSDHC_Adma2DescriptorTypeLink = (kSDHC_Adma2DescriptorActivity1Flag | kSDHC_Adma2DescriptorActivity2Flag |
DECL|kSDHC_Adma2DescriptorTypeNop|enumerator|kSDHC_Adma2DescriptorTypeNop = (kSDHC_Adma2DescriptorValidFlag), /*!< No operation */
DECL|kSDHC_Adma2DescriptorTypeReserved|enumerator|kSDHC_Adma2DescriptorTypeReserved =
DECL|kSDHC_Adma2DescriptorTypeTransfer|enumerator|kSDHC_Adma2DescriptorTypeTransfer =
DECL|kSDHC_Adma2DescriptorValidFlag|enumerator|kSDHC_Adma2DescriptorValidFlag = (1U << 0U), /*!< Valid flag */
DECL|kSDHC_AdmaDescriptorErrorFlag|enumerator|kSDHC_AdmaDescriptorErrorFlag = SDHC_ADMAES_ADMADCE_MASK, /*!< Descriptor error */
DECL|kSDHC_AdmaErrorStateChangeAddress|enumerator|kSDHC_AdmaErrorStateChangeAddress = 0x02U, /*!< Change address */
DECL|kSDHC_AdmaErrorStateFetchDescriptor|enumerator|kSDHC_AdmaErrorStateFetchDescriptor = 0x01U, /*!< Fetch descriptor */
DECL|kSDHC_AdmaErrorStateStopDma|enumerator|kSDHC_AdmaErrorStateStopDma = 0x00U, /*!< Stop DMA */
DECL|kSDHC_AdmaErrorStateTransferData|enumerator|kSDHC_AdmaErrorStateTransferData = 0x03U, /*!< Transfer data */
DECL|kSDHC_AdmaLenghMismatchFlag|enumerator|kSDHC_AdmaLenghMismatchFlag = SDHC_ADMAES_ADMALME_MASK, /*!< Length mismatch error */
DECL|kSDHC_AllInterruptFlags|enumerator|kSDHC_AllInterruptFlags = (kSDHC_BlockGapEventFlag | kSDHC_CardInterruptFlag | kSDHC_CommandFlag | kSDHC_DataFlag |
DECL|kSDHC_AutoCommand12CrcErrorFlag|enumerator|kSDHC_AutoCommand12CrcErrorFlag = SDHC_AC12ERR_AC12CE_MASK, /*!< CRC error */
DECL|kSDHC_AutoCommand12EndBitErrorFlag|enumerator|kSDHC_AutoCommand12EndBitErrorFlag = SDHC_AC12ERR_AC12EBE_MASK, /*!< End bit error */
DECL|kSDHC_AutoCommand12ErrorFlag|enumerator|kSDHC_AutoCommand12ErrorFlag = SDHC_IRQSTAT_AC12E_MASK, /*!< Auto CMD12 error */
DECL|kSDHC_AutoCommand12IndexErrorFlag|enumerator|kSDHC_AutoCommand12IndexErrorFlag = SDHC_AC12ERR_AC12IE_MASK, /*!< Index error */
DECL|kSDHC_AutoCommand12NotExecutedFlag|enumerator|kSDHC_AutoCommand12NotExecutedFlag = SDHC_AC12ERR_AC12NE_MASK, /*!< Not executed error */
DECL|kSDHC_AutoCommand12NotIssuedFlag|enumerator|kSDHC_AutoCommand12NotIssuedFlag = SDHC_AC12ERR_CNIBAC12E_MASK, /*!< Not issued error */
DECL|kSDHC_AutoCommand12TimeoutFlag|enumerator|kSDHC_AutoCommand12TimeoutFlag = SDHC_AC12ERR_AC12TOE_MASK, /*!< Timeout error */
DECL|kSDHC_BlockGapEventFlag|enumerator|kSDHC_BlockGapEventFlag = SDHC_IRQSTAT_BGE_MASK, /*!< Block gap event */
DECL|kSDHC_BootModeAlternative|enumerator|kSDHC_BootModeAlternative = 1U, /*!< Alternative boot */
DECL|kSDHC_BootModeNormal|enumerator|kSDHC_BootModeNormal = 0U, /*!< Normal boot */
DECL|kSDHC_BufferReadEnableFlag|enumerator|kSDHC_BufferReadEnableFlag = SDHC_PRSSTAT_BREN_MASK, /*!< Buffer read enable */
DECL|kSDHC_BufferReadReadyFlag|enumerator|kSDHC_BufferReadReadyFlag = SDHC_IRQSTAT_BRR_MASK, /*!< Buffer read ready */
DECL|kSDHC_BufferWriteEnableFlag|enumerator|kSDHC_BufferWriteEnableFlag = SDHC_PRSSTAT_BWEN_MASK, /*!< Buffer write enable */
DECL|kSDHC_BufferWriteReadyFlag|enumerator|kSDHC_BufferWriteReadyFlag = SDHC_IRQSTAT_BWR_MASK, /*!< Buffer write ready */
DECL|kSDHC_CardDetectFlag|enumerator|kSDHC_CardDetectFlag = (kSDHC_CardInsertionFlag | kSDHC_CardRemovalFlag), /*!< Card detection interrupts */
DECL|kSDHC_CardInsertedFlag|enumerator|kSDHC_CardInsertedFlag = SDHC_PRSSTAT_CINS_MASK, /*!< Card inserted */
DECL|kSDHC_CardInsertionFlag|enumerator|kSDHC_CardInsertionFlag = SDHC_IRQSTAT_CINS_MASK, /*!< Card inserted */
DECL|kSDHC_CardInterruptFlag|enumerator|kSDHC_CardInterruptFlag = SDHC_IRQSTAT_CINT_MASK, /*!< Card interrupt */
DECL|kSDHC_CardRemovalFlag|enumerator|kSDHC_CardRemovalFlag = SDHC_IRQSTAT_CRM_MASK, /*!< Card removed */
DECL|kSDHC_CommandCompleteFlag|enumerator|kSDHC_CommandCompleteFlag = SDHC_IRQSTAT_CC_MASK, /*!< Command complete */
DECL|kSDHC_CommandCrcErrorFlag|enumerator|kSDHC_CommandCrcErrorFlag = SDHC_IRQSTAT_CCE_MASK, /*!< Command CRC error */
DECL|kSDHC_CommandEndBitErrorFlag|enumerator|kSDHC_CommandEndBitErrorFlag = SDHC_IRQSTAT_CEBE_MASK, /*!< Command end bit error */
DECL|kSDHC_CommandErrorFlag|enumerator|kSDHC_CommandErrorFlag = (kSDHC_CommandTimeoutFlag | kSDHC_CommandCrcErrorFlag | kSDHC_CommandEndBitErrorFlag |
DECL|kSDHC_CommandFlag|enumerator|kSDHC_CommandFlag = (kSDHC_CommandErrorFlag | kSDHC_CommandCompleteFlag), /*!< Command interrupts */
DECL|kSDHC_CommandIndexErrorFlag|enumerator|kSDHC_CommandIndexErrorFlag = SDHC_IRQSTAT_CIE_MASK, /*!< Command index error */
DECL|kSDHC_CommandInhibitFlag|enumerator|kSDHC_CommandInhibitFlag = SDHC_PRSSTAT_CIHB_MASK, /*!< Command inhibit */
DECL|kSDHC_CommandLineLevelFlag|enumerator|kSDHC_CommandLineLevelFlag = SDHC_PRSSTAT_CLSL_MASK, /*!< Command line signal level */
DECL|kSDHC_CommandTimeoutFlag|enumerator|kSDHC_CommandTimeoutFlag = SDHC_IRQSTAT_CTOE_MASK, /*!< Command timeout error */
DECL|kSDHC_CommandTypeAbortFlag|enumerator|kSDHC_CommandTypeAbortFlag = (SDHC_XFERTYP_CMDTYP(3U)), /*!< Abort command */
DECL|kSDHC_CommandTypeResumeFlag|enumerator|kSDHC_CommandTypeResumeFlag = (SDHC_XFERTYP_CMDTYP(2U)), /*!< Resume command */
DECL|kSDHC_CommandTypeSuspendFlag|enumerator|kSDHC_CommandTypeSuspendFlag = (SDHC_XFERTYP_CMDTYP(1U)), /*!< Suspend command */
DECL|kSDHC_Data0LineLevelFlag|enumerator|kSDHC_Data0LineLevelFlag = (1U << 24U), /*!< Data0 line signal level */
DECL|kSDHC_Data1LineLevelFlag|enumerator|kSDHC_Data1LineLevelFlag = (1U << 25U), /*!< Data1 line signal level */
DECL|kSDHC_Data2LineLevelFlag|enumerator|kSDHC_Data2LineLevelFlag = (1U << 26U), /*!< Data2 line signal level */
DECL|kSDHC_Data3LineLevelFlag|enumerator|kSDHC_Data3LineLevelFlag = (1U << 27U), /*!< Data3 line signal level */
DECL|kSDHC_Data4LineLevelFlag|enumerator|kSDHC_Data4LineLevelFlag = (1U << 28U), /*!< Data4 line signal level */
DECL|kSDHC_Data5LineLevelFlag|enumerator|kSDHC_Data5LineLevelFlag = (1U << 29U), /*!< Data5 line signal level */
DECL|kSDHC_Data6LineLevelFlag|enumerator|kSDHC_Data6LineLevelFlag = (1U << 30U), /*!< Data6 line signal level */
DECL|kSDHC_Data7LineLevelFlag|enumerator|kSDHC_Data7LineLevelFlag = (1U << 31U), /*!< Data7 line signal level */
DECL|kSDHC_DataBusWidth1Bit|enumerator|kSDHC_DataBusWidth1Bit = 0U, /*!< 1-bit mode */
DECL|kSDHC_DataBusWidth4Bit|enumerator|kSDHC_DataBusWidth4Bit = 1U, /*!< 4-bit mode */
DECL|kSDHC_DataBusWidth8Bit|enumerator|kSDHC_DataBusWidth8Bit = 2U, /*!< 8-bit mode */
DECL|kSDHC_DataCompleteFlag|enumerator|kSDHC_DataCompleteFlag = SDHC_IRQSTAT_TC_MASK, /*!< Data complete */
DECL|kSDHC_DataCrcErrorFlag|enumerator|kSDHC_DataCrcErrorFlag = SDHC_IRQSTAT_DCE_MASK, /*!< Data CRC error */
DECL|kSDHC_DataEndBitErrorFlag|enumerator|kSDHC_DataEndBitErrorFlag = SDHC_IRQSTAT_DEBE_MASK, /*!< Data end bit error */
DECL|kSDHC_DataErrorFlag|enumerator|kSDHC_DataErrorFlag = (kSDHC_DataTimeoutFlag | kSDHC_DataCrcErrorFlag | kSDHC_DataEndBitErrorFlag |
DECL|kSDHC_DataFlag|enumerator|kSDHC_DataFlag = (kSDHC_DataCompleteFlag | kSDHC_DmaCompleteFlag | kSDHC_BufferWriteReadyFlag |
DECL|kSDHC_DataInhibitFlag|enumerator|kSDHC_DataInhibitFlag = SDHC_PRSSTAT_CDIHB_MASK, /*!< Data inhibit */
DECL|kSDHC_DataLineActiveFlag|enumerator|kSDHC_DataLineActiveFlag = SDHC_PRSSTAT_DLA_MASK, /*!< Data line active */
DECL|kSDHC_DataPresentFlag|enumerator|kSDHC_DataPresentFlag = SDHC_XFERTYP_DPSEL_MASK, /*!< Data present flag */
DECL|kSDHC_DataReadFlag|enumerator|kSDHC_DataReadFlag = SDHC_XFERTYP_DTDSEL_MASK, /*!< Enable data read */
DECL|kSDHC_DataTimeoutFlag|enumerator|kSDHC_DataTimeoutFlag = SDHC_IRQSTAT_DTOE_MASK, /*!< Data timeout error */
DECL|kSDHC_DmaCompleteFlag|enumerator|kSDHC_DmaCompleteFlag = SDHC_IRQSTAT_DINT_MASK, /*!< DMA interrupt */
DECL|kSDHC_DmaErrorFlag|enumerator|kSDHC_DmaErrorFlag = SDHC_IRQSTAT_DMAE_MASK, /*!< DMA error */
DECL|kSDHC_DmaModeAdma1|enumerator|kSDHC_DmaModeAdma1 = 1U, /*!< ADMA1 is selected */
DECL|kSDHC_DmaModeAdma2|enumerator|kSDHC_DmaModeAdma2 = 2U, /*!< ADMA2 is selected */
DECL|kSDHC_DmaModeNo|enumerator|kSDHC_DmaModeNo = 0U, /*!< No DMA */
DECL|kSDHC_EnableAutoCommand12Flag|enumerator|kSDHC_EnableAutoCommand12Flag = SDHC_XFERTYP_AC12EN_MASK, /*!< Enable auto CMD12 */
DECL|kSDHC_EnableBlockCountFlag|enumerator|kSDHC_EnableBlockCountFlag = SDHC_XFERTYP_BCEN_MASK, /*!< Enable block count */
DECL|kSDHC_EnableCrcCheckFlag|enumerator|kSDHC_EnableCrcCheckFlag = SDHC_XFERTYP_CCCEN_MASK, /*!< Enable CRC check */
DECL|kSDHC_EnableDmaFlag|enumerator|kSDHC_EnableDmaFlag = SDHC_XFERTYP_DMAEN_MASK, /*!< Enable DMA */
DECL|kSDHC_EnableIndexCheckFlag|enumerator|kSDHC_EnableIndexCheckFlag = SDHC_XFERTYP_CICEN_MASK, /*!< Enable index check */
DECL|kSDHC_EndianModeBig|enumerator|kSDHC_EndianModeBig = 0U, /*!< Big endian mode */
DECL|kSDHC_EndianModeHalfWordBig|enumerator|kSDHC_EndianModeHalfWordBig = 1U, /*!< Half word big endian mode */
DECL|kSDHC_EndianModeLittle|enumerator|kSDHC_EndianModeLittle = 2U, /*!< Little endian mode */
DECL|kSDHC_ErrorFlag|enumerator|kSDHC_ErrorFlag = (kSDHC_CommandErrorFlag | kSDHC_DataErrorFlag | kSDHC_DmaErrorFlag), /*!< All error */
DECL|kSDHC_ExactBlockNumberReadFlag|enumerator|kSDHC_ExactBlockNumberReadFlag = 0x08, /*!< Exact block number read */
DECL|kSDHC_ForceEventAutoCommand12CrcError|enumerator|kSDHC_ForceEventAutoCommand12CrcError = SDHC_FEVT_AC12CE_MASK, /*!< Auto CMD12 CRC error */
DECL|kSDHC_ForceEventAutoCommand12Error|enumerator|kSDHC_ForceEventAutoCommand12Error = SDHC_FEVT_AC12E_MASK, /*!< Auto CMD12 error */
DECL|kSDHC_ForceEventAutoCommand12IndexError|enumerator|kSDHC_ForceEventAutoCommand12IndexError = SDHC_FEVT_AC12IE_MASK, /*!< Auto CMD12 index error */
DECL|kSDHC_ForceEventAutoCommand12NotExecuted|enumerator|kSDHC_ForceEventAutoCommand12NotExecuted = SDHC_FEVT_AC12NE_MASK, /*!< Auto CMD12 not executed error */
DECL|kSDHC_ForceEventAutoCommand12NotIssued|enumerator|kSDHC_ForceEventAutoCommand12NotIssued = SDHC_FEVT_CNIBAC12E_MASK, /*!< Auto CMD12 not issued error */
DECL|kSDHC_ForceEventAutoCommand12Timeout|enumerator|kSDHC_ForceEventAutoCommand12Timeout = SDHC_FEVT_AC12TOE_MASK, /*!< Auto CMD12 timeout error */
DECL|kSDHC_ForceEventCardInt|enumerator|kSDHC_ForceEventCardInt = SDHC_FEVT_CINT_MASK, /*!< Card interrupt */
DECL|kSDHC_ForceEventCommandCrcError|enumerator|kSDHC_ForceEventCommandCrcError = SDHC_FEVT_CCE_MASK, /*!< Command CRC error */
DECL|kSDHC_ForceEventCommandEndBitError|enumerator|kSDHC_ForceEventCommandEndBitError = SDHC_FEVT_CEBE_MASK, /*!< Command end bit error */
DECL|kSDHC_ForceEventCommandIndexError|enumerator|kSDHC_ForceEventCommandIndexError = SDHC_FEVT_CIE_MASK, /*!< Command index error */
DECL|kSDHC_ForceEventCommandTimeout|enumerator|kSDHC_ForceEventCommandTimeout = SDHC_FEVT_CTOE_MASK, /*!< Command timeout error */
DECL|kSDHC_ForceEventDataCrcError|enumerator|kSDHC_ForceEventDataCrcError = SDHC_FEVT_DCE_MASK, /*!< Data CRC error */
DECL|kSDHC_ForceEventDataEndBitError|enumerator|kSDHC_ForceEventDataEndBitError = SDHC_FEVT_DEBE_MASK, /*!< Data end bit error */
DECL|kSDHC_ForceEventDataTimeout|enumerator|kSDHC_ForceEventDataTimeout = SDHC_FEVT_DTOE_MASK, /*!< Data timeout error */
DECL|kSDHC_ForceEventDmaError|enumerator|kSDHC_ForceEventDmaError = SDHC_FEVT_DMAE_MASK, /*!< Dma error */
DECL|kSDHC_ForceEventEndBitError|enumerator|kSDHC_ForceEventEndBitError = SDHC_FEVT_AC12EBE_MASK, /*!< Auto CMD12 end bit error */
DECL|kSDHC_ForceEventsAll|enumerator|kSDHC_ForceEventsAll =
DECL|kSDHC_InterruptAtBlockGapFlag|enumerator|kSDHC_InterruptAtBlockGapFlag = 0x04, /*!< Interrupt at block gap */
DECL|kSDHC_MultipleBlockFlag|enumerator|kSDHC_MultipleBlockFlag = SDHC_XFERTYP_MSBSEL_MASK, /*!< Multiple block data read/write */
DECL|kSDHC_ReadTransferActiveFlag|enumerator|kSDHC_ReadTransferActiveFlag = SDHC_PRSSTAT_RTA_MASK, /*!< Read transfer active */
DECL|kSDHC_ReadWaitControlFlag|enumerator|kSDHC_ReadWaitControlFlag = 0x02, /*!< Read wait control */
DECL|kSDHC_ResetAll|enumerator|kSDHC_ResetAll = SDHC_SYSCTL_RSTA_MASK, /*!< Reset all except card detection */
DECL|kSDHC_ResetCommand|enumerator|kSDHC_ResetCommand = SDHC_SYSCTL_RSTC_MASK, /*!< Reset command line */
DECL|kSDHC_ResetData|enumerator|kSDHC_ResetData = SDHC_SYSCTL_RSTD_MASK, /*!< Reset data line */
DECL|kSDHC_ResetsAll|enumerator|kSDHC_ResetsAll = (kSDHC_ResetAll | kSDHC_ResetCommand | kSDHC_ResetData), /*!< All reset types */
DECL|kSDHC_ResponseLength136Flag|enumerator|kSDHC_ResponseLength136Flag = SDHC_XFERTYP_RSPTYP(1U), /*!< 136 bit response length */
DECL|kSDHC_ResponseLength48BusyFlag|enumerator|kSDHC_ResponseLength48BusyFlag = SDHC_XFERTYP_RSPTYP(3U), /*!< 48 bit response length with busy status */
DECL|kSDHC_ResponseLength48Flag|enumerator|kSDHC_ResponseLength48Flag = SDHC_XFERTYP_RSPTYP(2U), /*!< 48 bit response length */
DECL|kSDHC_SdClockStableFlag|enumerator|kSDHC_SdClockStableFlag = SDHC_PRSSTAT_SDSTB_MASK, /*!< SD bus clock stable */
DECL|kSDHC_StopAtBlockGapFlag|enumerator|kSDHC_StopAtBlockGapFlag = 0x01, /*!< Stop at block gap */
DECL|kSDHC_Support4BitFlag|enumerator|kSDHC_Support4BitFlag = (SDHC_HTCAPBLT_MBL_SHIFT << 0U), /*!< Support 4 bit mode */
DECL|kSDHC_Support8BitFlag|enumerator|kSDHC_Support8BitFlag = (SDHC_HTCAPBLT_MBL_SHIFT << 1U), /*!< Support 8 bit mode */
DECL|kSDHC_SupportAdmaFlag|enumerator|kSDHC_SupportAdmaFlag = SDHC_HTCAPBLT_ADMAS_MASK, /*!< Support ADMA */
DECL|kSDHC_SupportDmaFlag|enumerator|kSDHC_SupportDmaFlag = SDHC_HTCAPBLT_DMAS_MASK, /*!< Support DMA */
DECL|kSDHC_SupportHighSpeedFlag|enumerator|kSDHC_SupportHighSpeedFlag = SDHC_HTCAPBLT_HSS_MASK, /*!< Support high-speed */
DECL|kSDHC_SupportSuspendResumeFlag|enumerator|kSDHC_SupportSuspendResumeFlag = SDHC_HTCAPBLT_SRS_MASK, /*!< Support suspend/resume */
DECL|kSDHC_SupportV180Flag|enumerator|kSDHC_SupportV180Flag = SDHC_HTCAPBLT_VS18_MASK, /*!< Support voltage 1.8V */
DECL|kSDHC_SupportV300Flag|enumerator|kSDHC_SupportV300Flag = SDHC_HTCAPBLT_VS30_MASK, /*!< Support voltage 3.0V */
DECL|kSDHC_SupportV330Flag|enumerator|kSDHC_SupportV330Flag = SDHC_HTCAPBLT_VS33_MASK, /*!< Support voltage 3.3V */
DECL|kSDHC_WakeupEventOnCardInsert|enumerator|kSDHC_WakeupEventOnCardInsert = SDHC_PROCTL_WECINS_MASK, /*!< Wakeup on card insertion */
DECL|kSDHC_WakeupEventOnCardInt|enumerator|kSDHC_WakeupEventOnCardInt = SDHC_PROCTL_WECINT_MASK, /*!< Wakeup on card interrupt */
DECL|kSDHC_WakeupEventOnCardRemove|enumerator|kSDHC_WakeupEventOnCardRemove = SDHC_PROCTL_WECRM_MASK, /*!< Wakeup on card removal */
DECL|kSDHC_WakeupEventsAll|enumerator|kSDHC_WakeupEventsAll = (kSDHC_WakeupEventOnCardInt | kSDHC_WakeupEventOnCardInsert |
DECL|kSDHC_WriteTransferActiveFlag|enumerator|kSDHC_WriteTransferActiveFlag = SDHC_PRSSTAT_WTA_MASK, /*!< Write transfer active */
DECL|kStatus_SDHC_BusyTransferring|enumerator|kStatus_SDHC_BusyTransferring = MAKE_STATUS(kStatusGroup_SDHC, 0U), /*!< Transfer is on-going */
DECL|kStatus_SDHC_DMADataBufferAddrNotAlign|enumerator|kStatus_SDHC_DMADataBufferAddrNotAlign =
DECL|kStatus_SDHC_PrepareAdmaDescriptorFailed|enumerator|kStatus_SDHC_PrepareAdmaDescriptorFailed = MAKE_STATUS(kStatusGroup_SDHC, 1U), /*!< Set DMA descriptor failed */
DECL|kStatus_SDHC_SendCommandFailed|enumerator|kStatus_SDHC_SendCommandFailed = MAKE_STATUS(kStatusGroup_SDHC, 2U), /*!< Send command failed */
DECL|kStatus_SDHC_TransferDataFailed|enumerator|kStatus_SDHC_TransferDataFailed = MAKE_STATUS(kStatusGroup_SDHC, 3U), /*!< Transfer data failed */
DECL|maxBlockCount|member|uint32_t maxBlockCount; /*!< Maximum block count can be set one time */
DECL|maxBlockLength|member|uint32_t maxBlockLength; /*!< Maximum block length united as byte */
DECL|readWatermarkLevel|member|uint32_t readWatermarkLevel; /*!< Watermark level for DMA read operation. Available range is 1 ~ 128. */
DECL|responseErrorFlags|member|uint32_t responseErrorFlags; /*!< response error flag, the flag which need to check
DECL|responseType|member|sdhc_card_response_type_t responseType; /*!< Command response type */
DECL|response|member|uint32_t response[4U]; /*!< Response for this command */
DECL|rxData|member|uint32_t *rxData; /*!< Buffer to save data read */
DECL|sdhc_adma1_descriptor_t|typedef|typedef uint32_t sdhc_adma1_descriptor_t;
DECL|sdhc_adma2_descriptor_t|typedef|} sdhc_adma2_descriptor_t;
DECL|sdhc_adma_error_state_t|typedef|} sdhc_adma_error_state_t;
DECL|sdhc_boot_config_t|typedef|} sdhc_boot_config_t;
DECL|sdhc_boot_mode_t|typedef|} sdhc_boot_mode_t;
DECL|sdhc_capability_t|typedef|} sdhc_capability_t;
DECL|sdhc_card_command_type_t|typedef|} sdhc_card_command_type_t;
DECL|sdhc_card_response_type_t|typedef|} sdhc_card_response_type_t;
DECL|sdhc_command_t|typedef|} sdhc_command_t;
DECL|sdhc_config_t|typedef|} sdhc_config_t;
DECL|sdhc_data_bus_width_t|typedef|} sdhc_data_bus_width_t;
DECL|sdhc_data_t|typedef|} sdhc_data_t;
DECL|sdhc_dma_mode_t|typedef|} sdhc_dma_mode_t;
DECL|sdhc_endian_mode_t|typedef|} sdhc_endian_mode_t;
DECL|sdhc_handle_t|typedef|typedef struct _sdhc_handle sdhc_handle_t;
DECL|sdhc_host_t|typedef|} sdhc_host_t;
DECL|sdhc_transfer_callback_t|typedef|} sdhc_transfer_callback_t;
DECL|sdhc_transfer_config_t|typedef|} sdhc_transfer_config_t;
DECL|sdhc_transfer_function_t|typedef|typedef status_t (*sdhc_transfer_function_t)(SDHC_Type *base, sdhc_transfer_t *content);
DECL|sdhc_transfer_t|typedef|} sdhc_transfer_t;
DECL|sourceClock_Hz|member|uint32_t sourceClock_Hz; /*!< SDHC source clock frequency united in Hz */
DECL|specVersion|member|uint32_t specVersion; /*!< Specification version */
DECL|transferredWords|member|volatile uint32_t transferredWords; /*!< Words transferred by DATAPORT way */
DECL|transfer|member|sdhc_transfer_function_t transfer; /*!< SDHC transfer function */
DECL|txData|member|const uint32_t *txData; /*!< Data buffer to write */
DECL|type|member|sdhc_card_command_type_t type; /*!< Command type */
DECL|userData|member|void *userData; /*!< Parameter for transfer complete callback */
DECL|vendorVersion|member|uint32_t vendorVersion; /*!< Vendor version */
DECL|writeWatermarkLevel|member|uint32_t writeWatermarkLevel; /*!< Watermark level for DMA write operation. Available range is 1 ~ 128. */
