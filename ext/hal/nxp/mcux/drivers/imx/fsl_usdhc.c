DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|USDHC0_DriverIRQHandler|function|void USDHC0_DriverIRQHandler(void)
DECL|USDHC1_DriverIRQHandler|function|void USDHC1_DriverIRQHandler(void)
DECL|USDHC2_DriverIRQHandler|function|void USDHC2_DriverIRQHandler(void)
DECL|USDHC_AdjustDelayForManualTuning|function|status_t USDHC_AdjustDelayForManualTuning(USDHC_Type *base, uint32_t delay)
DECL|USDHC_Deinit|function|void USDHC_Deinit(USDHC_Type *base)
DECL|USDHC_EnableAutoTuningForCmdAndData|function|void USDHC_EnableAutoTuningForCmdAndData(USDHC_Type *base)
DECL|USDHC_EnableDDRMode|function|void USDHC_EnableDDRMode(USDHC_Type *base, bool enable, uint32_t nibblePos)
DECL|USDHC_EnableManualTuning|function|void USDHC_EnableManualTuning(USDHC_Type *base, bool enable)
DECL|USDHC_EnableStandardTuning|function|void USDHC_EnableStandardTuning(USDHC_Type *base, uint32_t tuningStartTap, uint32_t step, bool enable)
DECL|USDHC_GetCapability|function|void USDHC_GetCapability(USDHC_Type *base, usdhc_capability_t *capability)
DECL|USDHC_GetInstance|function|static uint32_t USDHC_GetInstance(USDHC_Type *base)
DECL|USDHC_Init|function|void USDHC_Init(USDHC_Type *base, const usdhc_config_t *config)
DECL|USDHC_MAX_CLKFS|macro|USDHC_MAX_CLKFS
DECL|USDHC_MAX_DVS|macro|USDHC_MAX_DVS
DECL|USDHC_PREV_CLKFS|macro|USDHC_PREV_CLKFS
DECL|USDHC_PREV_DVS|macro|USDHC_PREV_DVS
DECL|USDHC_ReadByDataPortBlocking|function|static status_t USDHC_ReadByDataPortBlocking(USDHC_Type *base, usdhc_data_t *data)
DECL|USDHC_ReadDataPort|function|static uint32_t USDHC_ReadDataPort(USDHC_Type *base, usdhc_data_t *data, uint32_t transferredWords)
DECL|USDHC_ReceiveCommandResponse|function|static status_t USDHC_ReceiveCommandResponse(USDHC_Type *base, usdhc_command_t *command)
DECL|USDHC_Reset|function|bool USDHC_Reset(USDHC_Type *base, uint32_t mask, uint32_t timeout)
DECL|USDHC_SendCommand|function|void USDHC_SendCommand(USDHC_Type *base, usdhc_command_t *command)
DECL|USDHC_SetADMA1Descriptor|function|status_t USDHC_SetADMA1Descriptor( uint32_t *admaTable, uint32_t admaTableWords, const uint32_t *dataBufferAddr, uint32_t dataBytes, uint32_t flags)
DECL|USDHC_SetADMA2Descriptor|function|status_t USDHC_SetADMA2Descriptor( uint32_t *admaTable, uint32_t admaTableWords, const uint32_t *dataBufferAddr, uint32_t dataBytes, uint32_t flags)
DECL|USDHC_SetAdmaTableConfig|function|status_t USDHC_SetAdmaTableConfig(USDHC_Type *base, usdhc_adma_config_t *dmaConfig, usdhc_data_t *dataConfig, uint32_t flags)
DECL|USDHC_SetCardActive|function|bool USDHC_SetCardActive(USDHC_Type *base, uint32_t timeout)
DECL|USDHC_SetDataTransferConfig|function|static status_t USDHC_SetDataTransferConfig(USDHC_Type *base, usdhc_data_t *data, uint32_t *dataPresentFlag)
DECL|USDHC_SetInternalDmaConfig|function|status_t USDHC_SetInternalDmaConfig(USDHC_Type *base, usdhc_adma_config_t *dmaConfig, const uint32_t *dataAddr, bool enAutoCmd23)
DECL|USDHC_SetMmcBootConfig|function|void USDHC_SetMmcBootConfig(USDHC_Type *base, const usdhc_boot_config_t *config)
DECL|USDHC_SetSdClock|function|uint32_t USDHC_SetSdClock(USDHC_Type *base, uint32_t srcClock_Hz, uint32_t busClock_Hz)
DECL|USDHC_SetTransferInterrupt|function|static void USDHC_SetTransferInterrupt(USDHC_Type *base, bool usingInterruptSignal)
DECL|USDHC_TransferBlocking|function|status_t USDHC_TransferBlocking(USDHC_Type *base, usdhc_adma_config_t *dmaConfig, usdhc_transfer_t *transfer)
DECL|USDHC_TransferCreateHandle|function|void USDHC_TransferCreateHandle(USDHC_Type *base, usdhc_handle_t *handle, const usdhc_transfer_callback_t *callback, void *userData)
DECL|USDHC_TransferDataBlocking|function|static status_t USDHC_TransferDataBlocking(USDHC_Type *base, usdhc_data_t *data, bool enDMA)
DECL|USDHC_TransferHandleBlockGap|function|static void USDHC_TransferHandleBlockGap(USDHC_Type *base, usdhc_handle_t *handle)
DECL|USDHC_TransferHandleCardDetect|function|static void USDHC_TransferHandleCardDetect(USDHC_Type *base, usdhc_handle_t *handle, uint32_t interruptFlags)
DECL|USDHC_TransferHandleCommand|function|static void USDHC_TransferHandleCommand(USDHC_Type *base, usdhc_handle_t *handle, uint32_t interruptFlags)
DECL|USDHC_TransferHandleData|function|static void USDHC_TransferHandleData(USDHC_Type *base, usdhc_handle_t *handle, uint32_t interruptFlags)
DECL|USDHC_TransferHandleIRQ|function|void USDHC_TransferHandleIRQ(USDHC_Type *base, usdhc_handle_t *handle)
DECL|USDHC_TransferHandleReTuning|function|static void USDHC_TransferHandleReTuning(USDHC_Type *base, usdhc_handle_t *handle, uint32_t interruptFlags)
DECL|USDHC_TransferHandleSdioInterrupt|function|static void USDHC_TransferHandleSdioInterrupt(USDHC_Type *base, usdhc_handle_t *handle)
DECL|USDHC_TransferNonBlocking|function|status_t USDHC_TransferNonBlocking(USDHC_Type *base, usdhc_handle_t *handle, usdhc_adma_config_t *dmaConfig, usdhc_transfer_t *transfer)
DECL|USDHC_WaitCommandDone|function|static status_t USDHC_WaitCommandDone(USDHC_Type *base, usdhc_command_t *command, bool pollingCmdDone)
DECL|USDHC_WriteByDataPortBlocking|function|static status_t USDHC_WriteByDataPortBlocking(USDHC_Type *base, usdhc_data_t *data)
DECL|USDHC_WriteDataPort|function|static uint32_t USDHC_WriteDataPort(USDHC_Type *base, usdhc_data_t *data, uint32_t transferredWords)
DECL|s_usdhcBase|variable|s_usdhcBase
DECL|s_usdhcClock|variable|s_usdhcClock
DECL|s_usdhcHandle|variable|s_usdhcHandle
DECL|s_usdhcIRQ|variable|s_usdhcIRQ
DECL|s_usdhcIsr|variable|s_usdhcIsr
DECL|usdhc_isr_t|typedef|typedef void (*usdhc_isr_t)(USDHC_Type *base, usdhc_handle_t *handle);
