DECL|DMA_CHANNEL_GROUP|macro|DMA_CHANNEL_GROUP
DECL|DMA_CHANNEL_INDEX|macro|DMA_CHANNEL_INDEX
DECL|DMA_ChannelIsActive|function|static inline bool DMA_ChannelIsActive(DMA_Type *base, uint32_t channel)
DECL|DMA_DisableChannelInterrupts|function|static inline void DMA_DisableChannelInterrupts(DMA_Type *base, uint32_t channel)
DECL|DMA_DisableChannelPeriphRq|function|static inline void DMA_DisableChannelPeriphRq(DMA_Type *base, uint32_t channel)
DECL|DMA_DisableChannel|function|static inline void DMA_DisableChannel(DMA_Type *base, uint32_t channel)
DECL|DMA_EnableChannelInterrupts|function|static inline void DMA_EnableChannelInterrupts(DMA_Type *base, uint32_t channel)
DECL|DMA_EnableChannelPeriphRq|function|static inline void DMA_EnableChannelPeriphRq(DMA_Type *base, uint32_t channel)
DECL|DMA_EnableChannel|function|static inline void DMA_EnableChannel(DMA_Type *base, uint32_t channel)
DECL|DMA_GetChannelPriority|function|static inline dma_priority_t DMA_GetChannelPriority(DMA_Type *base, uint32_t channel)
DECL|DMA_MAX_TRANSFER_COUNT|macro|DMA_MAX_TRANSFER_COUNT
DECL|DMA_SetChannelPriority|function|static inline void DMA_SetChannelPriority(DMA_Type *base, uint32_t channel, dma_priority_t priority)
DECL|FSL_DMA_DRIVER_VERSION|macro|FSL_DMA_DRIVER_VERSION
DECL|_FSL_DMA_H_|macro|_FSL_DMA_H_
DECL|_dma_burst_wrap|enum|typedef enum _dma_burst_wrap {
DECL|_dma_channel_trigger|struct|typedef struct _dma_channel_trigger {
DECL|_dma_descriptor|struct|typedef struct _dma_descriptor {
DECL|_dma_handle|struct|typedef struct _dma_handle
DECL|_dma_int|enum|typedef enum _dma_int {
DECL|_dma_priority|enum|typedef enum _dma_priority {
DECL|_dma_transfer_config|struct|typedef struct _dma_transfer_config
DECL|_dma_transfer_status|enum|enum _dma_transfer_status
DECL|_dma_transfer_type|enum|typedef enum _dma_transfer_type
DECL|_dma_trigger_burst|enum|typedef enum _dma_trigger_burst {
DECL|_dma_trigger_type|enum|typedef enum _dma_trigger_type {
DECL|_dma_xfercfg|struct|typedef struct _dma_xfercfg {
DECL|base|member|DMA_Type *base; /*!< DMA peripheral base address */
DECL|burst|member|dma_trigger_burst_t burst;
DECL|byteWidth|member|uint8_t byteWidth; /*!< Byte width of data to transfer */
DECL|callback|member|dma_callback callback; /*!< Callback function. Invoked when transfer
DECL|channel|member|uint8_t channel; /*!< DMA channel number */
DECL|clrtrig|member|bool clrtrig; /*!< Clear trigger */
DECL|dma_burst_wrap_t|typedef|} dma_burst_wrap_t;
DECL|dma_callback|typedef|typedef void (*dma_callback)(struct _dma_handle *handle, void *userData, bool transferDone, uint32_t intmode);
DECL|dma_channel_trigger_t|typedef|} dma_channel_trigger_t;
DECL|dma_descriptor_t|typedef|} dma_descriptor_t;
DECL|dma_handle_t|typedef|} dma_handle_t;
DECL|dma_irq_t|typedef|} dma_irq_t;
DECL|dma_priority_t|typedef|} dma_priority_t;
DECL|dma_transfer_config_t|typedef|} dma_transfer_config_t;
DECL|dma_transfer_type_t|typedef|} dma_transfer_type_t;
DECL|dma_trigger_burst_t|typedef|} dma_trigger_burst_t;
DECL|dma_trigger_type_t|typedef|} dma_trigger_type_t;
DECL|dma_xfercfg_t|typedef|} dma_xfercfg_t;
DECL|dstAddr|member|uint8_t *dstAddr; /*!< Destination data address */
DECL|dstEndAddr|member|void *dstEndAddr; /*!< Last destination address of DMA transfer */
DECL|dstInc|member|uint8_t dstInc; /*!< Increment destination address by 'dstInc' x 'byteWidth' */
DECL|intA|member|bool intA; /*!< Raises IRQ when transfer is done and set IRQA status register flag */
DECL|intB|member|bool intB; /*!< Raises IRQ when transfer is done and set IRQB status register flag */
DECL|isPeriph|member|bool isPeriph; /*!< DMA transfer is driven by peripheral */
DECL|kDMA_ChannelPriority0|enumerator|kDMA_ChannelPriority0 = 0, /*!< Highest channel priority - priority 0 */
DECL|kDMA_ChannelPriority1|enumerator|kDMA_ChannelPriority1, /*!< Channel priority 1 */
DECL|kDMA_ChannelPriority2|enumerator|kDMA_ChannelPriority2, /*!< Channel priority 2 */
DECL|kDMA_ChannelPriority3|enumerator|kDMA_ChannelPriority3, /*!< Channel priority 3 */
DECL|kDMA_ChannelPriority4|enumerator|kDMA_ChannelPriority4, /*!< Channel priority 4 */
DECL|kDMA_ChannelPriority5|enumerator|kDMA_ChannelPriority5, /*!< Channel priority 5 */
DECL|kDMA_ChannelPriority6|enumerator|kDMA_ChannelPriority6, /*!< Channel priority 6 */
DECL|kDMA_ChannelPriority7|enumerator|kDMA_ChannelPriority7, /*!< Lowest channel priority - priority 7 */
DECL|kDMA_DstWrap|enumerator|kDMA_DstWrap = DMA_CHANNEL_CFG_DSTBURSTWRAP(1), /*!< Wrapping is enabled for destination */
DECL|kDMA_EdgeBurstTransfer1024|enumerator|kDMA_EdgeBurstTransfer1024 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(10), /*!< Perform 1024 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer128|enumerator|kDMA_EdgeBurstTransfer128 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(7), /*!< Perform 128 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer16|enumerator|kDMA_EdgeBurstTransfer16 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(4), /*!< Perform 16 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer1|enumerator|kDMA_EdgeBurstTransfer1 = DMA_CHANNEL_CFG_TRIGBURST(1), /*!< Perform 1 transfer by edge trigger */
DECL|kDMA_EdgeBurstTransfer256|enumerator|kDMA_EdgeBurstTransfer256 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(8), /*!< Perform 256 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer2|enumerator|kDMA_EdgeBurstTransfer2 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(1), /*!< Perform 2 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer32|enumerator|kDMA_EdgeBurstTransfer32 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(5), /*!< Perform 32 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer4|enumerator|kDMA_EdgeBurstTransfer4 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(2), /*!< Perform 4 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer512|enumerator|kDMA_EdgeBurstTransfer512 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(9), /*!< Perform 512 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer64|enumerator|kDMA_EdgeBurstTransfer64 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(6), /*!< Perform 64 transfers by edge trigger */
DECL|kDMA_EdgeBurstTransfer8|enumerator|kDMA_EdgeBurstTransfer8 = DMA_CHANNEL_CFG_TRIGBURST(1) | DMA_CHANNEL_CFG_BURSTPOWER(3), /*!< Perform 8 transfers by edge trigger */
DECL|kDMA_FallingEdgeTrigger|enumerator|kDMA_FallingEdgeTrigger = DMA_CHANNEL_CFG_HWTRIGEN(1), /*!< Falling edge active trigger */
DECL|kDMA_HighLevelTrigger|enumerator|kDMA_HighLevelTrigger = DMA_CHANNEL_CFG_HWTRIGEN(1) | DMA_CHANNEL_CFG_TRIGTYPE(1) | DMA_CHANNEL_CFG_TRIGPOL(1), /*!< High level active trigger */
DECL|kDMA_IntA|enumerator|kDMA_IntA, /*!< DMA interrupt flag A */
DECL|kDMA_IntB|enumerator|kDMA_IntB, /*!< DMA interrupt flag B */
DECL|kDMA_LevelBurstTransfer|enumerator|kDMA_LevelBurstTransfer = DMA_CHANNEL_CFG_TRIGBURST(1), /*!< Burst transfer driven by level trigger */
DECL|kDMA_LowLevelTrigger|enumerator|kDMA_LowLevelTrigger = DMA_CHANNEL_CFG_HWTRIGEN(1) | DMA_CHANNEL_CFG_TRIGTYPE(1), /*!< Low level active trigger */
DECL|kDMA_MemoryToMemory|enumerator|kDMA_MemoryToMemory = 0x0U, /*!< Transfer from memory to memory (increment source and destination) */
DECL|kDMA_MemoryToPeripheral|enumerator|kDMA_MemoryToPeripheral, /*!< Transfer from memory to peripheral (increment only source)*/
DECL|kDMA_NoTrigger|enumerator|kDMA_NoTrigger = 0, /*!< Trigger is disabled */
DECL|kDMA_NoWrap|enumerator|kDMA_NoWrap = 0, /*!< Wrapping is disabled */
DECL|kDMA_PeripheralToMemory|enumerator|kDMA_PeripheralToMemory, /*!< Transfer from peripheral to memory (increment only destination) */
DECL|kDMA_RisingEdgeTrigger|enumerator|kDMA_RisingEdgeTrigger = DMA_CHANNEL_CFG_HWTRIGEN(1) | DMA_CHANNEL_CFG_TRIGPOL(1), /*!< Rising edge active trigger */
DECL|kDMA_SingleTransfer|enumerator|kDMA_SingleTransfer = 0, /*!< Single transfer */
DECL|kDMA_SrcAndDstWrap|enumerator|kDMA_SrcAndDstWrap = DMA_CHANNEL_CFG_SRCBURSTWRAP(1) | DMA_CHANNEL_CFG_DSTBURSTWRAP(1), /*!< Wrapping is enabled for source and destination */
DECL|kDMA_SrcWrap|enumerator|kDMA_SrcWrap = DMA_CHANNEL_CFG_SRCBURSTWRAP(1), /*!< Wrapping is enabled for source */
DECL|kDMA_StaticToStatic|enumerator|kDMA_StaticToStatic, /*!< Peripheral to static memory (do not increment source or destination) */
DECL|kStatus_DMA_Busy|enumerator|kStatus_DMA_Busy = MAKE_STATUS(kStatusGroup_DMA, 0), /*!< Channel is busy and can't handle the
DECL|linkToNextDesc|member|void *linkToNextDesc; /*!< Address of next DMA descriptor in chain */
DECL|nextDesc|member|uint8_t *nextDesc; /*!< Chain custom descriptor */
DECL|reload|member|bool reload; /*!< Reload channel configuration register after
DECL|srcAddr|member|uint8_t *srcAddr; /*!< Source data address */
DECL|srcEndAddr|member|void *srcEndAddr; /*!< Last source address of DMA transfer */
DECL|srcInc|member|uint8_t srcInc; /*!< Increment source address by 'srcInc' x 'byteWidth' */
DECL|swtrig|member|bool swtrig; /*!< Perform software trigger. Transfer if fired
DECL|transferCount|member|uint16_t transferCount; /*!< Number of transfers */
DECL|type|member|dma_trigger_type_t type;
DECL|userData|member|void *userData; /*!< Callback function parameter */
DECL|valid|member|bool valid; /*!< Descriptor is ready to transfer */
DECL|wrap|member|dma_burst_wrap_t wrap;
DECL|xfercfg|member|dma_xfercfg_t xfercfg; /*!< Transfer options */
DECL|xfercfg|member|uint32_t xfercfg; /*!< Transfer configuration */
