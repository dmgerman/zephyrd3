DECL|CSI0_DriverIRQHandler|function|void CSI0_DriverIRQHandler(void)
DECL|CSI_ClearFifo|function|void CSI_ClearFifo(CSI_Type *base, csi_fifo_t fifo)
DECL|CSI_Deinit|function|void CSI_Deinit(CSI_Type *base)
DECL|CSI_DisableInterrupts|function|void CSI_DisableInterrupts(CSI_Type *base, uint32_t mask)
DECL|CSI_DriverIRQHandler|function|void CSI_DriverIRQHandler(void)
DECL|CSI_EnableFifoDmaRequest|function|void CSI_EnableFifoDmaRequest(CSI_Type *base, csi_fifo_t fifo, bool enable)
DECL|CSI_EnableInterrupts|function|void CSI_EnableInterrupts(CSI_Type *base, uint32_t mask)
DECL|CSI_GetDefaultConfig|function|void CSI_GetDefaultConfig(csi_config_t *config)
DECL|CSI_GetInstance|function|static uint32_t CSI_GetInstance(CSI_Type *base)
DECL|CSI_Init|function|status_t CSI_Init(CSI_Type *base, const csi_config_t *config)
DECL|CSI_MAX_ACTIVE_FRAME_NUM|macro|CSI_MAX_ACTIVE_FRAME_NUM
DECL|CSI_ReflashFifoDma|function|void CSI_ReflashFifoDma(CSI_Type *base, csi_fifo_t fifo)
DECL|CSI_Reset|function|void CSI_Reset(CSI_Type *base)
DECL|CSI_SetRxBufferAddr|function|void CSI_SetRxBufferAddr(CSI_Type *base, uint8_t index, uint32_t addr)
DECL|CSI_TransferCreateHandle|function|status_t CSI_TransferCreateHandle(CSI_Type *base, csi_handle_t *handle, csi_transfer_callback_t callback, void *userData)
DECL|CSI_TransferGetEmptyBufferCount|function|static uint32_t CSI_TransferGetEmptyBufferCount(CSI_Type *base, csi_handle_t *handle)
DECL|CSI_TransferGetFullBuffer|function|status_t CSI_TransferGetFullBuffer(CSI_Type *base, csi_handle_t *handle, uint32_t *frameBuffer)
DECL|CSI_TransferGetQueueDelta|function|static uint32_t CSI_TransferGetQueueDelta(uint32_t startIdx, uint32_t endIdx)
DECL|CSI_TransferHandleIRQ|function|void CSI_TransferHandleIRQ(CSI_Type *base, csi_handle_t *handle)
DECL|CSI_TransferIncreaseQueueIdx|function|static uint32_t CSI_TransferIncreaseQueueIdx(uint32_t idx)
DECL|CSI_TransferLoadBufferToDevice|function|static void CSI_TransferLoadBufferToDevice(CSI_Type *base, csi_handle_t *handle)
DECL|CSI_TransferStart|function|status_t CSI_TransferStart(CSI_Type *base, csi_handle_t *handle)
DECL|CSI_TransferStop|function|status_t CSI_TransferStop(CSI_Type *base, csi_handle_t *handle)
DECL|CSI_TransferSubmitEmptyBuffer|function|status_t CSI_TransferSubmitEmptyBuffer(CSI_Type *base, csi_handle_t *handle, uint32_t frameBuffer)
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|csi_isr_t|typedef|typedef void (*csi_isr_t)(CSI_Type *base, csi_handle_t *handle);
DECL|s_csiBases|variable|s_csiBases
DECL|s_csiClocks|variable|s_csiClocks
DECL|s_csiHandle|variable|s_csiHandle
DECL|s_csiIRQ|variable|s_csiIRQ
DECL|s_csiIsr|variable|s_csiIsr
