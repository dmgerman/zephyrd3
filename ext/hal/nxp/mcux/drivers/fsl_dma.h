DECL|DMA_ClearChannelStatusFlags|function|static inline void DMA_ClearChannelStatusFlags(DMA_Type *base, uint32_t channel, uint32_t mask)
DECL|DMA_DisableChannelRequest|function|static inline void DMA_DisableChannelRequest(DMA_Type *base, uint32_t channel)
DECL|DMA_DisableInterrupts|function|static inline void DMA_DisableInterrupts(DMA_Type *base, uint32_t channel)
DECL|DMA_EnableAsyncRequest|function|static inline void DMA_EnableAsyncRequest(DMA_Type *base, uint32_t channel, bool enable)
DECL|DMA_EnableAutoAlign|function|static inline void DMA_EnableAutoAlign(DMA_Type *base, uint32_t channel, bool enable)
DECL|DMA_EnableChannelRequest|function|static inline void DMA_EnableChannelRequest(DMA_Type *base, uint32_t channel)
DECL|DMA_EnableCycleSteal|function|static inline void DMA_EnableCycleSteal(DMA_Type *base, uint32_t channel, bool enable)
DECL|DMA_EnableInterrupts|function|static inline void DMA_EnableInterrupts(DMA_Type *base, uint32_t channel)
DECL|DMA_GetChannelStatusFlags|function|static inline uint32_t DMA_GetChannelStatusFlags(DMA_Type *base, uint32_t channel)
DECL|DMA_GetRemainingBytes|function|static inline uint32_t DMA_GetRemainingBytes(DMA_Type *base, uint32_t channel)
DECL|DMA_SetDestinationAddress|function|static inline void DMA_SetDestinationAddress(DMA_Type *base, uint32_t channel, uint32_t destAddr)
DECL|DMA_SetSourceAddress|function|static inline void DMA_SetSourceAddress(DMA_Type *base, uint32_t channel, uint32_t srcAddr)
DECL|DMA_SetTransferSize|function|static inline void DMA_SetTransferSize(DMA_Type *base, uint32_t channel, uint32_t size)
DECL|DMA_StartTransfer|function|static inline void DMA_StartTransfer(dma_handle_t *handle)
DECL|DMA_StopTransfer|function|static inline void DMA_StopTransfer(dma_handle_t *handle)
DECL|DMA_TriggerChannelStart|function|static inline void DMA_TriggerChannelStart(DMA_Type *base, uint32_t channel)
DECL|FSL_DMA_DRIVER_VERSION|macro|FSL_DMA_DRIVER_VERSION
DECL|_FSL_DMA_H_|macro|_FSL_DMA_H_
DECL|_dma_channel_link_config|struct|typedef struct _dma_channel_link_config
DECL|_dma_channel_link_type|enum|typedef enum _dma_channel_link_type
DECL|_dma_channel_status_flags|enum|enum _dma_channel_status_flags
DECL|_dma_handle|struct|typedef struct _dma_handle
DECL|_dma_modulo|enum|typedef enum _dma_modulo
DECL|_dma_transfer_config|struct|typedef struct _dma_transfer_config
DECL|_dma_transfer_options|enum|typedef enum _dma_transfer_options
DECL|_dma_transfer_size|enum|typedef enum _dma_transfer_size
DECL|_dma_transfer_status|enum|enum _dma_transfer_status
DECL|_dma_transfer_type|enum|typedef enum _dma_transfer_type
DECL|base|member|DMA_Type *base; /*!< DMA peripheral address. */
DECL|callback|member|dma_callback callback; /*!< DMA callback function.*/
DECL|channel1|member|uint32_t channel1; /*!< The index of channel 1. */
DECL|channel2|member|uint32_t channel2; /*!< The index of channel 2. */
DECL|channel|member|uint8_t channel; /*!< DMA channel used. */
DECL|destAddr|member|uint32_t destAddr; /*!< DMA destination address.*/
DECL|destSize|member|dma_transfer_size_t destSize; /*!< Destination transfer unit.*/
DECL|dma_callback|typedef|typedef void (*dma_callback)(struct _dma_handle *handle, void *userData);
DECL|dma_channel_link_config_t|typedef|} dma_channel_link_config_t;
DECL|dma_channel_link_type_t|typedef|} dma_channel_link_type_t;
DECL|dma_handle_t|typedef|} dma_handle_t;
DECL|dma_modulo_t|typedef|} dma_modulo_t;
DECL|dma_transfer_config_t|typedef|} dma_transfer_config_t;
DECL|dma_transfer_options_t|typedef|} dma_transfer_options_t;
DECL|dma_transfer_size_t|typedef|} dma_transfer_size_t;
DECL|dma_transfer_type_t|typedef|} dma_transfer_type_t;
DECL|enableDestIncrement|member|bool enableDestIncrement; /*!< Destination address increase after each transfer. */
DECL|enableSrcIncrement|member|bool enableSrcIncrement; /*!< Source address increase after each transfer. */
DECL|kDMA_BusErrorOnDestinationFlag|enumerator|kDMA_BusErrorOnDestinationFlag = DMA_DSR_BCR_BED_MASK, /*!< Bus Error on Destination */
DECL|kDMA_BusErrorOnSourceFlag|enumerator|kDMA_BusErrorOnSourceFlag = DMA_DSR_BCR_BES_MASK, /*!< Bus Error on Source */
DECL|kDMA_ChannelLinkChannel1AfterBCR0|enumerator|kDMA_ChannelLinkChannel1AfterBCR0, /*!< Perform a link to LCH1 after the BCR decrements. */
DECL|kDMA_ChannelLinkChannel1AndChannel2|enumerator|kDMA_ChannelLinkChannel1AndChannel2, /*!< Perform a link to channel LCH1 after each cycle-steal transfer.
DECL|kDMA_ChannelLinkChannel1|enumerator|kDMA_ChannelLinkChannel1, /*!< Perform a link to LCH1 after each cycle-steal transfer. */
DECL|kDMA_ChannelLinkDisable|enumerator|kDMA_ChannelLinkDisable = 0x0U, /*!< No channel link. */
DECL|kDMA_ConfigurationErrorFlag|enumerator|kDMA_ConfigurationErrorFlag = DMA_DSR_BCR_CE_MASK, /*!< Configuration Error */
DECL|kDMA_EnableInterrupt|enumerator|kDMA_EnableInterrupt, /*!< Enable interrupt while transfer complete. */
DECL|kDMA_MemoryToMemory|enumerator|kDMA_MemoryToMemory = 0x0U, /*!< Memory to Memory transfer. */
DECL|kDMA_MemoryToPeripheral|enumerator|kDMA_MemoryToPeripheral, /*!< Memory to Peripheral transfer. */
DECL|kDMA_Modulo128Bytes|enumerator|kDMA_Modulo128Bytes, /*!< Circular buffer size is 128 bytes. */
DECL|kDMA_Modulo128KBytes|enumerator|kDMA_Modulo128KBytes, /*!< Circular buffer size is 128 KB. */
DECL|kDMA_Modulo16Bytes|enumerator|kDMA_Modulo16Bytes, /*!< Circular buffer size is 16 bytes. */
DECL|kDMA_Modulo16KBytes|enumerator|kDMA_Modulo16KBytes, /*!< Circular buffer size is 16 KB. */
DECL|kDMA_Modulo1KBytes|enumerator|kDMA_Modulo1KBytes, /*!< Circular buffer size is 1 KB. */
DECL|kDMA_Modulo256Bytes|enumerator|kDMA_Modulo256Bytes, /*!< Circular buffer size is 256 bytes. */
DECL|kDMA_Modulo256KBytes|enumerator|kDMA_Modulo256KBytes, /*!< Circular buffer size is 256 KB. */
DECL|kDMA_Modulo2KBytes|enumerator|kDMA_Modulo2KBytes, /*!< Circular buffer size is 2 KB. */
DECL|kDMA_Modulo32Bytes|enumerator|kDMA_Modulo32Bytes, /*!< Circular buffer size is 32 bytes. */
DECL|kDMA_Modulo32KBytes|enumerator|kDMA_Modulo32KBytes, /*!< Circular buffer size is 32 KB. */
DECL|kDMA_Modulo4KBytes|enumerator|kDMA_Modulo4KBytes, /*!< Circular buffer size is 4 KB. */
DECL|kDMA_Modulo512Bytes|enumerator|kDMA_Modulo512Bytes, /*!< Circular buffer size is 512 bytes. */
DECL|kDMA_Modulo64Bytes|enumerator|kDMA_Modulo64Bytes, /*!< Circular buffer size is 64 bytes. */
DECL|kDMA_Modulo64KBytes|enumerator|kDMA_Modulo64KBytes, /*!< Circular buffer size is 64 KB. */
DECL|kDMA_Modulo8KBytes|enumerator|kDMA_Modulo8KBytes, /*!< Circular buffer size is 8 KB. */
DECL|kDMA_ModuloDisable|enumerator|kDMA_ModuloDisable = 0x0U, /*!< Buffer disabled */
DECL|kDMA_NoOptions|enumerator|kDMA_NoOptions = 0x0U, /*!< Transfer without options. */
DECL|kDMA_PeripheralToMemory|enumerator|kDMA_PeripheralToMemory, /*!< Peripheral to Memory transfer. */
DECL|kDMA_TransactionsBCRFlag|enumerator|kDMA_TransactionsBCRFlag = DMA_DSR_BCR_BCR_MASK, /*!< Contains the number of bytes yet to be
DECL|kDMA_TransactionsBusyFlag|enumerator|kDMA_TransactionsBusyFlag = DMA_DSR_BCR_BSY_MASK, /*!< Transactions Busy */
DECL|kDMA_TransactionsDoneFlag|enumerator|kDMA_TransactionsDoneFlag = DMA_DSR_BCR_DONE_MASK, /*!< Transactions Done */
DECL|kDMA_TransactionsRequestFlag|enumerator|kDMA_TransactionsRequestFlag = DMA_DSR_BCR_REQ_MASK, /*!< Transactions Request */
DECL|kDMA_Transfersize16bits|enumerator|kDMA_Transfersize16bits, /*!< 16b its are transferred for every read/write */
DECL|kDMA_Transfersize32bits|enumerator|kDMA_Transfersize32bits = 0x0U, /*!< 32 bits are transferred for every read/write */
DECL|kDMA_Transfersize8bits|enumerator|kDMA_Transfersize8bits, /*!< 8 bits are transferred for every read/write */
DECL|kStatus_DMA_Busy|enumerator|kStatus_DMA_Busy = MAKE_STATUS(kStatusGroup_DMA, 0),
DECL|linkType|member|dma_channel_link_type_t linkType; /*!< Channel link type. */
DECL|srcAddr|member|uint32_t srcAddr; /*!< DMA transfer source address. */
DECL|srcSize|member|dma_transfer_size_t srcSize; /*!< Source transfer size unit. */
DECL|transferSize|member|uint32_t transferSize; /*!< The number of bytes to be transferred. */
DECL|userData|member|void *userData; /*!< Callback parameter. */
