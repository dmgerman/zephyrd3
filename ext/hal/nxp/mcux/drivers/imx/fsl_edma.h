DECL|ATTR|member|__IO uint16_t ATTR; /*!< ATTR register, source/destination transfer size and modulo */
DECL|BITER|member|__IO uint16_t BITER; /*!< BITER register, begin minor loop count. */
DECL|CITER|member|__IO uint16_t CITER; /*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
DECL|CSR|member|__IO uint16_t CSR; /*!< CSR register, for TCD control status */
DECL|DADDR|member|__IO uint32_t DADDR; /*!< DADDR register, used for destination address */
DECL|DLAST_SGA|member|__IO uint32_t DLAST_SGA; /*!< DLASTSGA register, next tcd address used in scatter-gather mode */
DECL|DMA_DCHPRI_INDEX|macro|DMA_DCHPRI_INDEX
DECL|DMA_DCHPRIn|macro|DMA_DCHPRIn
DECL|DOFF|member|__IO uint16_t DOFF; /*!< DOFF register, used for destination offset */
DECL|EDMA_DisableChannelRequest|function|static inline void EDMA_DisableChannelRequest(DMA_Type *base, uint32_t channel)
DECL|EDMA_EnableAsyncRequest|function|static inline void EDMA_EnableAsyncRequest(DMA_Type *base, uint32_t channel, bool enable)
DECL|EDMA_EnableAutoStopRequest|function|static inline void EDMA_EnableAutoStopRequest(DMA_Type *base, uint32_t channel, bool enable)
DECL|EDMA_EnableChannelRequest|function|static inline void EDMA_EnableChannelRequest(DMA_Type *base, uint32_t channel)
DECL|EDMA_GetErrorStatusFlags|function|static inline uint32_t EDMA_GetErrorStatusFlags(DMA_Type *base)
DECL|EDMA_GetNextTCDAddress|function|static inline uint32_t EDMA_GetNextTCDAddress(edma_handle_t *handle)
DECL|EDMA_GetUnusedTCDNumber|function|static inline uint32_t EDMA_GetUnusedTCDNumber(edma_handle_t *handle)
DECL|EDMA_SetChannelPreemptionConfig|function|static inline void EDMA_SetChannelPreemptionConfig(DMA_Type *base, uint32_t channel, const edma_channel_Preemption_config_t *config)
DECL|EDMA_TcdEnableAutoStopRequest|function|static inline void EDMA_TcdEnableAutoStopRequest(edma_tcd_t *tcd, bool enable)
DECL|EDMA_TcdSetBandWidth|function|static inline void EDMA_TcdSetBandWidth(edma_tcd_t *tcd, edma_bandwidth_t bandWidth)
DECL|EDMA_TriggerChannelStart|function|static inline void EDMA_TriggerChannelStart(DMA_Type *base, uint32_t channel)
DECL|FSL_EDMA_DRIVER_VERSION|macro|FSL_EDMA_DRIVER_VERSION
DECL|NBYTES|member|__IO uint32_t NBYTES; /*!< Nbytes register, minor loop length in bytes */
DECL|SADDR|member|__IO uint32_t SADDR; /*!< SADDR register, used to save source address */
DECL|SLAST|member|__IO uint32_t SLAST; /*!< SLAST register */
DECL|SOFF|member|__IO uint16_t SOFF; /*!< SOFF register, save offset bytes every transfer */
DECL|_FSL_EDMA_H_|macro|_FSL_EDMA_H_
DECL|_edma_bandwidth|enum|typedef enum _edma_bandwidth
DECL|_edma_channel_Preemption_config|struct|typedef struct _edma_channel_Preemption_config
DECL|_edma_channel_link_type|enum|typedef enum _edma_channel_link_type
DECL|_edma_channel_status_flags|enum|enum _edma_channel_status_flags
DECL|_edma_config|struct|typedef struct _edma_config
DECL|_edma_error_status_flags|enum|enum _edma_error_status_flags
DECL|_edma_handle|struct|typedef struct _edma_handle
DECL|_edma_interrupt_enable|enum|typedef enum _edma_interrupt_enable
DECL|_edma_minor_offset_config|struct|typedef struct _edma_minor_offset_config
DECL|_edma_modulo|enum|typedef enum _edma_modulo
DECL|_edma_tcd|struct|typedef struct _edma_tcd
DECL|_edma_transfer_config|struct|typedef struct _edma_transfer_config
DECL|_edma_transfer_size|enum|typedef enum _edma_transfer_size
DECL|_edma_transfer_status|enum|enum _edma_transfer_status
DECL|_edma_transfer_type|enum|typedef enum _edma_transfer_type
DECL|base|member|DMA_Type *base; /*!< eDMA peripheral base address. */
DECL|callback|member|edma_callback callback; /*!< Callback function for major count exhausted. */
DECL|channelPriority|member|uint8_t channelPriority; /*!< Channel priority */
DECL|channel|member|uint8_t channel; /*!< eDMA channel number. */
DECL|destAddr|member|uint32_t destAddr; /*!< Destination data address. */
DECL|destOffset|member|int16_t destOffset; /*!< Sign-extended offset applied to the current destination address to
DECL|destTransferSize|member|edma_transfer_size_t destTransferSize; /*!< Destination data transfer size. */
DECL|edma_bandwidth_t|typedef|} edma_bandwidth_t;
DECL|edma_callback|typedef|typedef void (*edma_callback)(struct _edma_handle *handle, void *userData, bool transferDone, uint32_t tcds);
DECL|edma_channel_Preemption_config_t|typedef|} edma_channel_Preemption_config_t;
DECL|edma_channel_link_type_t|typedef|} edma_channel_link_type_t;
DECL|edma_config_t|typedef|} edma_config_t;
DECL|edma_handle_t|typedef|} edma_handle_t;
DECL|edma_interrupt_enable_t|typedef|} edma_interrupt_enable_t;
DECL|edma_minor_offset_config_t|typedef|} edma_minor_offset_config_t;
DECL|edma_modulo_t|typedef|} edma_modulo_t;
DECL|edma_tcd_t|typedef|} edma_tcd_t;
DECL|edma_transfer_config_t|typedef|} edma_transfer_config_t;
DECL|edma_transfer_size_t|typedef|} edma_transfer_size_t;
DECL|edma_transfer_type_t|typedef|} edma_transfer_type_t;
DECL|enableChannelPreemption|member|bool enableChannelPreemption; /*!< If true: a channel can be suspended by other channel with higher priority */
DECL|enableContinuousLinkMode|member|bool enableContinuousLinkMode; /*!< Enable (true) continuous link mode. Upon minor loop completion, the channel
DECL|enableDebugMode|member|bool enableDebugMode; /*!< Enable(true) eDMA debug mode. When in debug mode, the eDMA stalls the start of
DECL|enableDestMinorOffset|member|bool enableDestMinorOffset; /*!< Enable(true) or Disable(false) destination minor loop offset. */
DECL|enableHaltOnError|member|bool enableHaltOnError; /*!< Enable (true) transfer halt on error. Any error causes the HALT bit to set.
DECL|enablePreemptAbility|member|bool enablePreemptAbility; /*!< If true: a channel can suspend other channel with low priority */
DECL|enableRoundRobinArbitration|member|bool enableRoundRobinArbitration; /*!< Enable (true) round robin channel arbitration method or fixed priority
DECL|enableSrcMinorOffset|member|bool enableSrcMinorOffset; /*!< Enable(true) or Disable(false) source minor loop offset. */
DECL|flags|member|uint8_t flags; /*!< The status of the current channel. */
DECL|header|member|volatile int8_t header; /*!< The first TCD index. Should point to the next TCD to be loaded into the eDMA engine. */
DECL|kEDMA_BandwidthStall4Cycle|enumerator|kEDMA_BandwidthStall4Cycle = 0x2U, /*!< eDMA engine stalls for 4 cycles after each read/write. */
DECL|kEDMA_BandwidthStall8Cycle|enumerator|kEDMA_BandwidthStall8Cycle = 0x3U, /*!< eDMA engine stalls for 8 cycles after each read/write. */
DECL|kEDMA_BandwidthStallNone|enumerator|kEDMA_BandwidthStallNone = 0x0U, /*!< No eDMA engine stalls. */
DECL|kEDMA_ChannelPriorityErrorFlag|enumerator|kEDMA_ChannelPriorityErrorFlag = DMA_ES_CPE_MASK, /*!< Channel priority is not unique. */
DECL|kEDMA_DestinationAddressErrorFlag|enumerator|kEDMA_DestinationAddressErrorFlag = DMA_ES_DAE_MASK, /*!< Destination address not aligned with destination size */
DECL|kEDMA_DestinationBusErrorFlag|enumerator|kEDMA_DestinationBusErrorFlag = DMA_ES_DBE_MASK, /*!< Bus error on destination address */
DECL|kEDMA_DestinationOffsetErrorFlag|enumerator|kEDMA_DestinationOffsetErrorFlag = DMA_ES_DOE_MASK, /*!< Destination offset not aligned with destination size */
DECL|kEDMA_DoneFlag|enumerator|kEDMA_DoneFlag = 0x1U, /*!< DONE flag, set while transfer finished, CITER value exhausted*/
DECL|kEDMA_ErrorChannelFlag|enumerator|kEDMA_ErrorChannelFlag = DMA_ES_ERRCHN_MASK, /*!< Error channel number of the cancelled channel number */
DECL|kEDMA_ErrorFlag|enumerator|kEDMA_ErrorFlag = 0x2U, /*!< eDMA error flag, an error occurred in a transfer */
DECL|kEDMA_ErrorInterruptEnable|enumerator|kEDMA_ErrorInterruptEnable = 0x1U, /*!< Enable interrupt while channel error occurs. */
DECL|kEDMA_GroupPriorityErrorFlag|enumerator|kEDMA_GroupPriorityErrorFlag = DMA_ES_GPE_MASK, /*!< Group priority is not unique. */
DECL|kEDMA_HalfInterruptEnable|enumerator|kEDMA_HalfInterruptEnable = DMA_CSR_INTHALF_MASK, /*!< Enable interrupt while major count to half value. */
DECL|kEDMA_InterruptFlag|enumerator|kEDMA_InterruptFlag = 0x4U, /*!< eDMA interrupt flag, set while an interrupt occurred of this channel */
DECL|kEDMA_LinkNone|enumerator|kEDMA_LinkNone = 0x0U, /*!< No channel link */
DECL|kEDMA_MajorInterruptEnable|enumerator|kEDMA_MajorInterruptEnable = DMA_CSR_INTMAJOR_MASK, /*!< Enable interrupt while major count exhausted. */
DECL|kEDMA_MajorLink|enumerator|kEDMA_MajorLink, /*!< Channel link while major loop count exhausted */
DECL|kEDMA_MemoryToMemory|enumerator|kEDMA_MemoryToMemory = 0x0U, /*!< Transfer from memory to memory */
DECL|kEDMA_MemoryToPeripheral|enumerator|kEDMA_MemoryToPeripheral, /*!< Transfer from memory to peripheral */
DECL|kEDMA_MinorLink|enumerator|kEDMA_MinorLink, /*!< Channel link after each minor loop */
DECL|kEDMA_Modulo128Kbytes|enumerator|kEDMA_Modulo128Kbytes, /*!< Circular buffer size is 128 K bytes. */
DECL|kEDMA_Modulo128Mbytes|enumerator|kEDMA_Modulo128Mbytes, /*!< Circular buffer size is 128 M bytes. */
DECL|kEDMA_Modulo128bytes|enumerator|kEDMA_Modulo128bytes, /*!< Circular buffer size is 128 bytes. */
DECL|kEDMA_Modulo16Kbytes|enumerator|kEDMA_Modulo16Kbytes, /*!< Circular buffer size is 16 K bytes. */
DECL|kEDMA_Modulo16Mbytes|enumerator|kEDMA_Modulo16Mbytes, /*!< Circular buffer size is 16 M bytes. */
DECL|kEDMA_Modulo16bytes|enumerator|kEDMA_Modulo16bytes, /*!< Circular buffer size is 16 bytes. */
DECL|kEDMA_Modulo1Gbytes|enumerator|kEDMA_Modulo1Gbytes, /*!< Circular buffer size is 1 G bytes. */
DECL|kEDMA_Modulo1Kbytes|enumerator|kEDMA_Modulo1Kbytes, /*!< Circular buffer size is 1 K bytes. */
DECL|kEDMA_Modulo1Mbytes|enumerator|kEDMA_Modulo1Mbytes, /*!< Circular buffer size is 1 M bytes. */
DECL|kEDMA_Modulo256Kbytes|enumerator|kEDMA_Modulo256Kbytes, /*!< Circular buffer size is 256 K bytes. */
DECL|kEDMA_Modulo256Mbytes|enumerator|kEDMA_Modulo256Mbytes, /*!< Circular buffer size is 256 M bytes. */
DECL|kEDMA_Modulo256bytes|enumerator|kEDMA_Modulo256bytes, /*!< Circular buffer size is 256 bytes. */
DECL|kEDMA_Modulo2Gbytes|enumerator|kEDMA_Modulo2Gbytes, /*!< Circular buffer size is 2 G bytes. */
DECL|kEDMA_Modulo2Kbytes|enumerator|kEDMA_Modulo2Kbytes, /*!< Circular buffer size is 2 K bytes. */
DECL|kEDMA_Modulo2Mbytes|enumerator|kEDMA_Modulo2Mbytes, /*!< Circular buffer size is 2 M bytes. */
DECL|kEDMA_Modulo2bytes|enumerator|kEDMA_Modulo2bytes, /*!< Circular buffer size is 2 bytes. */
DECL|kEDMA_Modulo32Kbytes|enumerator|kEDMA_Modulo32Kbytes, /*!< Circular buffer size is 32 K bytes. */
DECL|kEDMA_Modulo32Mbytes|enumerator|kEDMA_Modulo32Mbytes, /*!< Circular buffer size is 32 M bytes. */
DECL|kEDMA_Modulo32bytes|enumerator|kEDMA_Modulo32bytes, /*!< Circular buffer size is 32 bytes. */
DECL|kEDMA_Modulo4Kbytes|enumerator|kEDMA_Modulo4Kbytes, /*!< Circular buffer size is 4 K bytes. */
DECL|kEDMA_Modulo4Mbytes|enumerator|kEDMA_Modulo4Mbytes, /*!< Circular buffer size is 4 M bytes. */
DECL|kEDMA_Modulo4bytes|enumerator|kEDMA_Modulo4bytes, /*!< Circular buffer size is 4 bytes. */
DECL|kEDMA_Modulo512Kbytes|enumerator|kEDMA_Modulo512Kbytes, /*!< Circular buffer size is 512 K bytes. */
DECL|kEDMA_Modulo512Mbytes|enumerator|kEDMA_Modulo512Mbytes, /*!< Circular buffer size is 512 M bytes. */
DECL|kEDMA_Modulo512bytes|enumerator|kEDMA_Modulo512bytes, /*!< Circular buffer size is 512 bytes. */
DECL|kEDMA_Modulo64Kbytes|enumerator|kEDMA_Modulo64Kbytes, /*!< Circular buffer size is 64 K bytes. */
DECL|kEDMA_Modulo64Mbytes|enumerator|kEDMA_Modulo64Mbytes, /*!< Circular buffer size is 64 M bytes. */
DECL|kEDMA_Modulo64bytes|enumerator|kEDMA_Modulo64bytes, /*!< Circular buffer size is 64 bytes. */
DECL|kEDMA_Modulo8Kbytes|enumerator|kEDMA_Modulo8Kbytes, /*!< Circular buffer size is 8 K bytes. */
DECL|kEDMA_Modulo8Mbytes|enumerator|kEDMA_Modulo8Mbytes, /*!< Circular buffer size is 8 M bytes. */
DECL|kEDMA_Modulo8bytes|enumerator|kEDMA_Modulo8bytes, /*!< Circular buffer size is 8 bytes. */
DECL|kEDMA_ModuloDisable|enumerator|kEDMA_ModuloDisable = 0x0U, /*!< Disable modulo */
DECL|kEDMA_NbytesErrorFlag|enumerator|kEDMA_NbytesErrorFlag = DMA_ES_NCE_MASK, /*!< NBYTES/CITER configuration error */
DECL|kEDMA_PeripheralToMemory|enumerator|kEDMA_PeripheralToMemory, /*!< Transfer from peripheral to memory */
DECL|kEDMA_ScatterGatherErrorFlag|enumerator|kEDMA_ScatterGatherErrorFlag = DMA_ES_SGE_MASK, /*!< Error on the Scatter/Gather address, not 32byte aligned. */
DECL|kEDMA_SourceAddressErrorFlag|enumerator|kEDMA_SourceAddressErrorFlag = DMA_ES_SAE_MASK, /*!< Source address not aligned with source size*/
DECL|kEDMA_SourceBusErrorFlag|enumerator|kEDMA_SourceBusErrorFlag = DMA_ES_SBE_MASK, /*!< Bus error on the source address */
DECL|kEDMA_SourceOffsetErrorFlag|enumerator|kEDMA_SourceOffsetErrorFlag = DMA_ES_SOE_MASK, /*!< Source offset not aligned with source size */
DECL|kEDMA_TransferCanceledFlag|enumerator|kEDMA_TransferCanceledFlag = DMA_ES_ECX_MASK, /*!< Transfer cancelled */
DECL|kEDMA_TransferSize16Bytes|enumerator|kEDMA_TransferSize16Bytes = 0x4U, /*!< Source/Destination data transfer size is 16 bytes every time */
DECL|kEDMA_TransferSize1Bytes|enumerator|kEDMA_TransferSize1Bytes = 0x0U, /*!< Source/Destination data transfer size is 1 byte every time */
DECL|kEDMA_TransferSize2Bytes|enumerator|kEDMA_TransferSize2Bytes = 0x1U, /*!< Source/Destination data transfer size is 2 bytes every time */
DECL|kEDMA_TransferSize32Bytes|enumerator|kEDMA_TransferSize32Bytes = 0x5U, /*!< Source/Destination data transfer size is 32 bytes every time */
DECL|kEDMA_TransferSize4Bytes|enumerator|kEDMA_TransferSize4Bytes = 0x2U, /*!< Source/Destination data transfer size is 4 bytes every time */
DECL|kEDMA_TransferSize8Bytes|enumerator|kEDMA_TransferSize8Bytes = 0x3U, /*!< Source/Destination data transfer size is 8 bytes every time */
DECL|kEDMA_ValidFlag|enumerator|kEDMA_ValidFlag = DMA_ES_VLD_MASK, /*!< No error occurred, this bit is 0. Otherwise, it is 1. */
DECL|kStatus_EDMA_Busy|enumerator|kStatus_EDMA_Busy = MAKE_STATUS(kStatusGroup_EDMA, 1), /*!< Channel is busy and can't handle the
DECL|kStatus_EDMA_QueueFull|enumerator|kStatus_EDMA_QueueFull = MAKE_STATUS(kStatusGroup_EDMA, 0), /*!< TCD queue is full. */
DECL|majorLoopCounts|member|uint32_t majorLoopCounts; /*!< Major loop iteration count. */
DECL|minorLoopBytes|member|uint32_t minorLoopBytes; /*!< Bytes to transfer in a minor loop*/
DECL|minorOffset|member|uint32_t minorOffset; /*!< Offset for a minor loop mapping. */
DECL|srcAddr|member|uint32_t srcAddr; /*!< Source data address. */
DECL|srcOffset|member|int16_t srcOffset; /*!< Sign-extended offset applied to the current source address to
DECL|srcTransferSize|member|edma_transfer_size_t srcTransferSize; /*!< Source data transfer size. */
DECL|tail|member|volatile int8_t tail; /*!< The last TCD index. Should point to the next TCD to be stored into the memory pool. */
DECL|tcdPool|member|edma_tcd_t *tcdPool; /*!< Pointer to memory stored TCDs. */
DECL|tcdSize|member|volatile int8_t tcdSize; /*!< The total number of TCD slots in the queue. */
DECL|tcdUsed|member|volatile int8_t tcdUsed; /*!< The number of used TCD slots. Should reflect the number of TCDs can be used/loaded in
DECL|userData|member|void *userData; /*!< Callback function parameter. */
