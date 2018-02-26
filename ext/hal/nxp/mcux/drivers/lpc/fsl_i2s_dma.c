DECL|DMA_DESCRIPTORS|macro|DMA_DESCRIPTORS
DECL|DMA_MAX_TRANSFER_BYTES|macro|DMA_MAX_TRANSFER_BYTES
DECL|I2S_AddTransferDMA|function|static void I2S_AddTransferDMA(I2S_Type *base, i2s_dma_handle_t *handle)
DECL|I2S_DMACallback|function|void I2S_DMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t tcds)
DECL|I2S_DisableDMAInterrupts|function|static inline void I2S_DisableDMAInterrupts(i2s_dma_handle_t *handle)
DECL|I2S_EnableDMAInterrupts|function|static inline void I2S_EnableDMAInterrupts(i2s_dma_handle_t *handle)
DECL|I2S_EnqueueUserBuffer|function|static status_t I2S_EnqueueUserBuffer(I2S_Type *base, i2s_dma_handle_t *handle, i2s_transfer_t transfer)
DECL|I2S_GetInstance|function|static uint32_t I2S_GetInstance(I2S_Type *base)
DECL|I2S_GetTransferBytes|function|static uint16_t I2S_GetTransferBytes(volatile i2s_transfer_t *transfer)
DECL|I2S_RxEnableDMA|function|static void I2S_RxEnableDMA(I2S_Type *base, bool enable)
DECL|I2S_RxTransferCreateHandleDMA|function|void I2S_RxTransferCreateHandleDMA(I2S_Type *base, i2s_dma_handle_t *handle, dma_handle_t *dmaHandle, i2s_dma_transfer_callback_t callback, void *userData)
DECL|I2S_RxTransferReceiveDMA|function|status_t I2S_RxTransferReceiveDMA(I2S_Type *base, i2s_dma_handle_t *handle, i2s_transfer_t transfer)
DECL|I2S_StartTransferDMA|function|static status_t I2S_StartTransferDMA(I2S_Type *base, i2s_dma_handle_t *handle)
DECL|I2S_TransferAbortDMA|function|void I2S_TransferAbortDMA(I2S_Type *base, i2s_dma_handle_t *handle)
DECL|I2S_TxEnableDMA|function|static void I2S_TxEnableDMA(I2S_Type *base, bool enable)
DECL|I2S_TxTransferCreateHandleDMA|function|void I2S_TxTransferCreateHandleDMA(I2S_Type *base, i2s_dma_handle_t *handle, dma_handle_t *dmaHandle, i2s_dma_transfer_callback_t callback, void *userData)
DECL|I2S_TxTransferSendDMA|function|status_t I2S_TxTransferSendDMA(I2S_Type *base, i2s_dma_handle_t *handle, i2s_transfer_t transfer)
DECL|_i2s_dma_private_handle|struct|typedef struct _i2s_dma_private_handle
DECL|_i2s_dma_state|enum|enum _i2s_dma_state
DECL|base|member|I2S_Type *base; /*!< I2S base address */
DECL|descriptorQueue|member|volatile i2s_transfer_t descriptorQueue[I2S_NUM_BUFFERS]; /*!< Transfer data to be queued to DMA */
DECL|descriptor|member|descriptor; /*!< Index of next DMA descriptor in s_DmaDescriptors to be configured with data (does not include
DECL|dmaDescriptorsUsed|member|dmaDescriptorsUsed; /*!< Number of DMA descriptors with valid data (in queue, excluding initial descriptor) */
DECL|enqueuedBytesEnd|member|volatile uint8_t enqueuedBytesEnd; /*!< Last item in enqueuedBytes (for adding) */
DECL|enqueuedBytesStart|member|volatile uint8_t enqueuedBytesStart; /*!< First item in enqueuedBytes (for reading) */
DECL|enqueuedBytes|member|volatile uint16_t enqueuedBytes[DMA_DESCRIPTORS]; /*!< Number of bytes being transferred by DMA descriptors */
DECL|handle|member|i2s_dma_handle_t *handle; /*!< I2S handle */
DECL|i2s_dma_private_handle_t|typedef|} i2s_dma_private_handle_t;
DECL|intA|member|volatile bool intA; /*!< If next scheduled DMA transfer will cause interrupt A or B */
DECL|kI2S_DmaStateIdle|enumerator|kI2S_DmaStateIdle = 0x0U, /*!< I2S is in idle state */
DECL|kI2S_DmaStateRx|enumerator|kI2S_DmaStateRx, /*!< I2S is busy receiving data */
DECL|kI2S_DmaStateTx|enumerator|kI2S_DmaStateTx, /*!< I2S is busy transmitting data */
DECL|queueDescriptor|member|volatile uint8_t queueDescriptor; /*!< Queue index of buffer to be actually consumed by DMA
DECL|s_DmaDescriptors|variable|s_DmaDescriptors
DECL|s_DmaDescriptors|variable|s_DmaDescriptors
DECL|s_DmaDescriptors|variable|s_DmaDescriptors
DECL|s_DmaPrivateHandle|variable|s_DmaPrivateHandle
DECL|s_DummyBufferRx|variable|s_DummyBufferRx
DECL|s_DummyBufferRx|variable|s_DummyBufferRx
DECL|s_DummyBufferRx|variable|s_DummyBufferRx
DECL|s_DummyBufferTx|variable|s_DummyBufferTx
DECL|s_DummyBufferTx|variable|s_DummyBufferTx
DECL|s_DummyBufferTx|variable|s_DummyBufferTx
DECL|s_I2sBaseAddrs|variable|s_I2sBaseAddrs
