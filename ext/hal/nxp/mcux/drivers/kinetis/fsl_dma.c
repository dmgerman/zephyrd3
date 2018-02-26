DECL|DMA0_DriverIRQHandler|function|void DMA0_DriverIRQHandler(void)
DECL|DMA1_DriverIRQHandler|function|void DMA1_DriverIRQHandler(void)
DECL|DMA2_DriverIRQHandler|function|void DMA2_DriverIRQHandler(void)
DECL|DMA3_DriverIRQHandler|function|void DMA3_DriverIRQHandler(void)
DECL|DMA_AbortTransfer|function|void DMA_AbortTransfer(dma_handle_t *handle)
DECL|DMA_CreateHandle|function|void DMA_CreateHandle(dma_handle_t *handle, DMA_Type *base, uint32_t channel)
DECL|DMA_Deinit|function|void DMA_Deinit(DMA_Type *base)
DECL|DMA_GetInstance|function|static uint32_t DMA_GetInstance(DMA_Type *base)
DECL|DMA_HandleIRQ|function|void DMA_HandleIRQ(dma_handle_t *handle)
DECL|DMA_Init|function|void DMA_Init(DMA_Type *base)
DECL|DMA_PrepareTransfer|function|void DMA_PrepareTransfer(dma_transfer_config_t *config, void *srcAddr, uint32_t srcWidth, void *destAddr, uint32_t destWidth,
DECL|DMA_ResetChannel|function|void DMA_ResetChannel(DMA_Type *base, uint32_t channel)
DECL|DMA_SetCallback|function|void DMA_SetCallback(dma_handle_t *handle, dma_callback callback, void *userData)
DECL|DMA_SetChannelLinkConfig|function|void DMA_SetChannelLinkConfig(DMA_Type *base, uint32_t channel, const dma_channel_link_config_t *config)
DECL|DMA_SetModulo|function|void DMA_SetModulo(DMA_Type *base, uint32_t channel, dma_modulo_t srcModulo, dma_modulo_t destModulo)
DECL|DMA_SetTransferConfig|function|void DMA_SetTransferConfig(DMA_Type *base, uint32_t channel, const dma_transfer_config_t *config)
DECL|DMA_SubmitTransfer|function|status_t DMA_SubmitTransfer(dma_handle_t *handle, const dma_transfer_config_t *config, uint32_t options)
DECL|s_DMAHandle|variable|s_DMAHandle
DECL|s_dmaBases|variable|s_dmaBases
DECL|s_dmaClockName|variable|s_dmaClockName
DECL|s_dmaIRQNumber|variable|s_dmaIRQNumber
