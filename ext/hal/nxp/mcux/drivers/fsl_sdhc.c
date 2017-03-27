DECL|SDHC_Deinit|function|void SDHC_Deinit(SDHC_Type *base)
DECL|SDHC_DriverIRQHandler|function|void SDHC_DriverIRQHandler(void)
DECL|SDHC_EnableSdioControl|function|void SDHC_EnableSdioControl(SDHC_Type *base, uint32_t mask, bool enable)
DECL|SDHC_GetCapability|function|void SDHC_GetCapability(SDHC_Type *base, sdhc_capability_t *capability)
DECL|SDHC_GetInstance|function|static uint32_t SDHC_GetInstance(SDHC_Type *base)
DECL|SDHC_Init|function|void SDHC_Init(SDHC_Type *base, const sdhc_config_t *config)
DECL|SDHC_MAX_CLKFS|macro|SDHC_MAX_CLKFS
DECL|SDHC_MAX_DVS|macro|SDHC_MAX_DVS
DECL|SDHC_PREV_CLKFS|macro|SDHC_PREV_CLKFS
DECL|SDHC_PREV_DVS|macro|SDHC_PREV_DVS
DECL|SDHC_ReadByDataPortBlocking|function|static status_t SDHC_ReadByDataPortBlocking(SDHC_Type *base, sdhc_data_t *data)
DECL|SDHC_ReadDataPort|function|static uint32_t SDHC_ReadDataPort(SDHC_Type *base, sdhc_data_t *data, uint32_t transferredWords)
DECL|SDHC_ReceiveCommandResponse|function|static status_t SDHC_ReceiveCommandResponse(SDHC_Type *base, sdhc_command_t *command)
DECL|SDHC_Reset|function|bool SDHC_Reset(SDHC_Type *base, uint32_t mask, uint32_t timeout)
DECL|SDHC_SendCommandBlocking|function|static status_t SDHC_SendCommandBlocking(SDHC_Type *base, sdhc_command_t *command)
DECL|SDHC_SetAdmaTableConfig|function|status_t SDHC_SetAdmaTableConfig(SDHC_Type *base, sdhc_dma_mode_t dmaMode, uint32_t *table, uint32_t tableWords, const uint32_t *data,
DECL|SDHC_SetCardActive|function|bool SDHC_SetCardActive(SDHC_Type *base, uint32_t timeout)
DECL|SDHC_SetMmcBootConfig|function|void SDHC_SetMmcBootConfig(SDHC_Type *base, const sdhc_boot_config_t *config)
DECL|SDHC_SetSdClock|function|uint32_t SDHC_SetSdClock(SDHC_Type *base, uint32_t srcClock_Hz, uint32_t busClock_Hz)
DECL|SDHC_SetTransferConfig|function|void SDHC_SetTransferConfig(SDHC_Type *base, const sdhc_transfer_config_t *config)
DECL|SDHC_SetTransferInterrupt|function|static void SDHC_SetTransferInterrupt(SDHC_Type *base, bool usingInterruptSignal)
DECL|SDHC_StartTransfer|function|static void SDHC_StartTransfer(SDHC_Type *base, sdhc_command_t *command, sdhc_data_t *data, sdhc_dma_mode_t dmaMode)
DECL|SDHC_TransferBlocking|function|status_t SDHC_TransferBlocking(SDHC_Type *base, uint32_t *admaTable, uint32_t admaTableWords, sdhc_transfer_t *transfer)
DECL|SDHC_TransferByAdma1Blocking|macro|SDHC_TransferByAdma1Blocking
DECL|SDHC_TransferByAdma2Blocking|function|static status_t SDHC_TransferByAdma2Blocking(SDHC_Type *base, sdhc_data_t *data)
DECL|SDHC_TransferByDataPortBlocking|function|static status_t SDHC_TransferByDataPortBlocking(SDHC_Type *base, sdhc_data_t *data)
DECL|SDHC_TransferCreateHandle|function|void SDHC_TransferCreateHandle(SDHC_Type *base, sdhc_handle_t *handle, const sdhc_transfer_callback_t *callback, void *userData)
DECL|SDHC_TransferDataBlocking|function|static status_t SDHC_TransferDataBlocking(sdhc_dma_mode_t dmaMode, SDHC_Type *base, sdhc_data_t *data)
DECL|SDHC_TransferHandleCardDetect|function|static void SDHC_TransferHandleCardDetect(sdhc_handle_t *handle, uint32_t interruptFlags)
DECL|SDHC_TransferHandleCommand|function|static void SDHC_TransferHandleCommand(SDHC_Type *base, sdhc_handle_t *handle, uint32_t interruptFlags)
DECL|SDHC_TransferHandleData|function|static void SDHC_TransferHandleData(SDHC_Type *base, sdhc_handle_t *handle, uint32_t interruptFlags)
DECL|SDHC_TransferHandleIRQ|function|void SDHC_TransferHandleIRQ(SDHC_Type *base, sdhc_handle_t *handle)
DECL|SDHC_TransferHandleSdioBlockGap|function|static void SDHC_TransferHandleSdioBlockGap(sdhc_handle_t *handle)
DECL|SDHC_TransferHandleSdioInterrupt|function|static void SDHC_TransferHandleSdioInterrupt(sdhc_handle_t *handle)
DECL|SDHC_TransferNonBlocking|function|status_t SDHC_TransferNonBlocking( SDHC_Type *base, sdhc_handle_t *handle, uint32_t *admaTable, uint32_t admaTableWords, sdhc_transfer_t *transfer)
DECL|SDHC_WriteByDataPortBlocking|function|static status_t SDHC_WriteByDataPortBlocking(SDHC_Type *base, sdhc_data_t *data)
DECL|SDHC_WriteDataPort|function|static uint32_t SDHC_WriteDataPort(SDHC_Type *base, sdhc_data_t *data, uint32_t transferredWords)
DECL|_sdhc_adma_table_config|struct|typedef struct _sdhc_adma_table_config
DECL|admaTableWords|member|uint32_t admaTableWords; /*!< ADMA table length united as words, can't be 0 if transfer way is ADMA1/ADMA2 */
DECL|admaTable|member|uint32_t *admaTable; /*!< ADMA table address, can't be null if transfer way is ADMA1/ADMA2 */
DECL|s_sdhcBase|variable|s_sdhcBase
DECL|s_sdhcClock|variable|s_sdhcClock
DECL|s_sdhcHandle|variable|s_sdhcHandle
DECL|s_sdhcIRQ|variable|s_sdhcIRQ
DECL|s_sdhcIsr|variable|s_sdhcIsr
DECL|sdhc_adma_table_config_t|typedef|} sdhc_adma_table_config_t;
DECL|sdhc_isr_t|typedef|typedef void (*sdhc_isr_t)(SDHC_Type *base, sdhc_handle_t *handle);
