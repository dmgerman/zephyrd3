DECL|DMA0_DriverIRQHandler|function|void DMA0_DriverIRQHandler(void)
DECL|DMA_AbortTransfer|function|void DMA_AbortTransfer(dma_handle_t *handle)
DECL|DMA_ConfigureChannelTrigger|function|void DMA_ConfigureChannelTrigger(DMA_Type *base, uint32_t channel, dma_channel_trigger_t *trigger)
DECL|DMA_CreateDescriptor|function|void DMA_CreateDescriptor( dma_descriptor_t *desc, dma_xfercfg_t *xfercfg, void *srcAddr, void *dstAddr,
DECL|DMA_CreateHandle|function|void DMA_CreateHandle(dma_handle_t *handle, DMA_Type *base, uint32_t channel)
DECL|DMA_Deinit|function|void DMA_Deinit(DMA_Type *base)
DECL|DMA_GetInstance|function|static int32_t DMA_GetInstance(DMA_Type *base)
DECL|DMA_GetRemainingBytes|function|uint32_t DMA_GetRemainingBytes(DMA_Type *base, uint32_t channel)
DECL|DMA_Init|function|void DMA_Init(DMA_Type *base)
DECL|DMA_PrepareTransfer|function|void DMA_PrepareTransfer(dma_transfer_config_t *config, void *srcAddr, void *dstAddr, uint32_t byteWidth, uint32_t transferBytes,
DECL|DMA_SetCallback|function|void DMA_SetCallback(dma_handle_t *handle, dma_callback callback, void *userData)
DECL|DMA_SetupDescriptor|function|static void DMA_SetupDescriptor( dma_descriptor_t *desc, uint32_t xfercfg, void *srcEndAddr, void *dstEndAddr,
DECL|DMA_SetupXferCFG|function|static void DMA_SetupXferCFG( dma_xfercfg_t *xfercfg, uint32_t *xfercfg_addr )
DECL|DMA_StartTransfer|function|void DMA_StartTransfer(dma_handle_t *handle)
DECL|DMA_SubmitTransfer|function|status_t DMA_SubmitTransfer(dma_handle_t *handle, dma_transfer_config_t *config)
DECL|s_DMAHandle|variable|s_DMAHandle
DECL|s_dmaBases|variable|s_dmaBases
DECL|s_dmaIRQNumber|variable|s_dmaIRQNumber
DECL|s_dma_descriptor_table|variable|s_dma_descriptor_table
DECL|s_dma_descriptor_table|variable|s_dma_descriptor_table
DECL|s_dma_descriptor_table|variable|s_dma_descriptor_table
