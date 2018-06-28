DECL|CY_DMAC_1D_TRANSFER|enumerator|CY_DMAC_1D_TRANSFER = 1U, /**< 1D transfer. */
DECL|CY_DMAC_1ELEMENT|enumerator|CY_DMAC_1ELEMENT = 0U, /**< One element transfer. */
DECL|CY_DMAC_2D_TRANSFER|enumerator|CY_DMAC_2D_TRANSFER = 2U, /**< 2D transfer. */
DECL|CY_DMAC_BAD_PARAM|enumerator|CY_DMAC_BAD_PARAM = CY_DMAC_ID | CY_PDL_STATUS_ERROR | 0x1UL /**< The input parameters passed to the DMA API are not valid. */
DECL|CY_DMAC_BYTE|enumerator|CY_DMAC_BYTE = 0U, /**< One byte. */
DECL|CY_DMAC_CHANNEL_DISABLED|enumerator|CY_DMAC_CHANNEL_DISABLED = 1U /**< Channel is disabled. */
DECL|CY_DMAC_CHANNEL_ENABLED|enumerator|CY_DMAC_CHANNEL_ENABLED = 0U, /**< Channel stays enabled. */
DECL|CY_DMAC_DESCR_CHAIN|enumerator|CY_DMAC_DESCR_CHAIN = 3U /**< Entire descriptor chain transfer. */
DECL|CY_DMAC_DESCR|enumerator|CY_DMAC_DESCR = 2U, /**< One descriptor transfer. */
DECL|CY_DMAC_DRV_VERSION_MAJOR|macro|CY_DMAC_DRV_VERSION_MAJOR
DECL|CY_DMAC_DRV_VERSION_MINOR|macro|CY_DMAC_DRV_VERSION_MINOR
DECL|CY_DMAC_HALFWORD|enumerator|CY_DMAC_HALFWORD = 1U, /**< Half word (two bytes). */
DECL|CY_DMAC_H|macro|CY_DMAC_H
DECL|CY_DMAC_ID|macro|CY_DMAC_ID
DECL|CY_DMAC_INTR_ACTIVE_CH_DISABLED|macro|CY_DMAC_INTR_ACTIVE_CH_DISABLED
DECL|CY_DMAC_INTR_COMPLETION|macro|CY_DMAC_INTR_COMPLETION
DECL|CY_DMAC_INTR_CURR_PTR_NULL|macro|CY_DMAC_INTR_CURR_PTR_NULL
DECL|CY_DMAC_INTR_DESCR_BUS_ERROR|macro|CY_DMAC_INTR_DESCR_BUS_ERROR
DECL|CY_DMAC_INTR_DST_BUS_ERROR|macro|CY_DMAC_INTR_DST_BUS_ERROR
DECL|CY_DMAC_INTR_DST_MISAL|macro|CY_DMAC_INTR_DST_MISAL
DECL|CY_DMAC_INTR_MASK|macro|CY_DMAC_INTR_MASK
DECL|CY_DMAC_INTR_SRC_BUS_ERROR|macro|CY_DMAC_INTR_SRC_BUS_ERROR
DECL|CY_DMAC_INTR_SRC_MISAL|macro|CY_DMAC_INTR_SRC_MISAL
DECL|CY_DMAC_IS_CHANNEL_STATE_VALID|macro|CY_DMAC_IS_CHANNEL_STATE_VALID
DECL|CY_DMAC_IS_CH_NR_VALID|macro|CY_DMAC_IS_CH_NR_VALID
DECL|CY_DMAC_IS_DATA_SIZE_VALID|macro|CY_DMAC_IS_DATA_SIZE_VALID
DECL|CY_DMAC_IS_INTR_MASK_VALID|macro|CY_DMAC_IS_INTR_MASK_VALID
DECL|CY_DMAC_IS_LOOP_COUNT_VALID|macro|CY_DMAC_IS_LOOP_COUNT_VALID
DECL|CY_DMAC_IS_LOOP_INCR_VALID|macro|CY_DMAC_IS_LOOP_INCR_VALID
DECL|CY_DMAC_IS_PRIORITY_VALID|macro|CY_DMAC_IS_PRIORITY_VALID
DECL|CY_DMAC_IS_RETRIGGER_VALID|macro|CY_DMAC_IS_RETRIGGER_VALID
DECL|CY_DMAC_IS_TRIG_TYPE_VALID|macro|CY_DMAC_IS_TRIG_TYPE_VALID
DECL|CY_DMAC_IS_TYPE_VALID|macro|CY_DMAC_IS_TYPE_VALID
DECL|CY_DMAC_IS_XFER_SIZE_VALID|macro|CY_DMAC_IS_XFER_SIZE_VALID
DECL|CY_DMAC_LOOP_COUNT_MAX|macro|CY_DMAC_LOOP_COUNT_MAX
DECL|CY_DMAC_LOOP_COUNT_MIN|macro|CY_DMAC_LOOP_COUNT_MIN
DECL|CY_DMAC_LOOP_INCREMENT_MAX|macro|CY_DMAC_LOOP_INCREMENT_MAX
DECL|CY_DMAC_LOOP_INCREMENT_MIN|macro|CY_DMAC_LOOP_INCREMENT_MIN
DECL|CY_DMAC_MEMORY_COPY|enumerator|CY_DMAC_MEMORY_COPY = 3U, /**< Memory copy. */
DECL|CY_DMAC_RETRIG_16CYC|enumerator|CY_DMAC_RETRIG_16CYC = 2U, /**< Retrigger after 16 Clk_Slow cycles. */
DECL|CY_DMAC_RETRIG_4CYC|enumerator|CY_DMAC_RETRIG_4CYC = 1U, /**< Retrigger after 4 Clk_Slow cycles. */
DECL|CY_DMAC_RETRIG_IM|enumerator|CY_DMAC_RETRIG_IM = 0U, /**< Retrigger immediatelly. */
DECL|CY_DMAC_SCATTER_TRANSFER|enumerator|CY_DMAC_SCATTER_TRANSFER = 4U /**< Scatter transfer. */
DECL|CY_DMAC_SINGLE_TRANSFER|enumerator|CY_DMAC_SINGLE_TRANSFER = 0U, /**< Single transfer. */
DECL|CY_DMAC_SUCCESS|enumerator|CY_DMAC_SUCCESS = 0x0UL, /**< Success. */
DECL|CY_DMAC_TRANSFER_SIZE_DATA|enumerator|CY_DMAC_TRANSFER_SIZE_DATA = 0U, /**< As specified by dataSize. */
DECL|CY_DMAC_TRANSFER_SIZE_WORD|enumerator|CY_DMAC_TRANSFER_SIZE_WORD = 1U, /**< A full word (four bytes). */
DECL|CY_DMAC_WAIT_FOR_REACT|enumerator|CY_DMAC_WAIT_FOR_REACT = 3U /**< Wait for trigger reactivation. */
DECL|CY_DMAC_WORD|enumerator|CY_DMAC_WORD = 2U /**< Full word (four bytes). */
DECL|CY_DMAC_X_LOOP|enumerator|CY_DMAC_X_LOOP = 1U, /**< One X loop transfer. */
DECL|Cy_DMAC_Channel_ClearInterrupt|function|__STATIC_INLINE void Cy_DMAC_Channel_ClearInterrupt(DMAC_Type * base, uint32_t channel, uint32_t interrupt)
DECL|Cy_DMAC_Channel_Disable|function|__STATIC_INLINE void Cy_DMAC_Channel_Disable(DMAC_Type * base, uint32_t channel)
DECL|Cy_DMAC_Channel_Enable|function|__STATIC_INLINE void Cy_DMAC_Channel_Enable(DMAC_Type * base, uint32_t channel)
DECL|Cy_DMAC_Channel_GetCurrentDescriptor|function|__STATIC_INLINE cy_stc_dmac_descriptor_t * Cy_DMAC_Channel_GetCurrentDescriptor(DMAC_Type const * base, uint32_t channel)
DECL|Cy_DMAC_Channel_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_DMAC_Channel_GetInterruptMask(DMAC_Type const * base, uint32_t channel)
DECL|Cy_DMAC_Channel_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_DMAC_Channel_GetInterruptStatusMasked(DMAC_Type const * base, uint32_t channel)
DECL|Cy_DMAC_Channel_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_DMAC_Channel_GetInterruptStatus(DMAC_Type const * base, uint32_t channel)
DECL|Cy_DMAC_Channel_GetPriority|function|__STATIC_INLINE uint32_t Cy_DMAC_Channel_GetPriority(DMAC_Type const * base, uint32_t channel)
DECL|Cy_DMAC_Channel_SetDescriptor|function|__STATIC_INLINE void Cy_DMAC_Channel_SetDescriptor(DMAC_Type * base, uint32_t channel, cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Channel_SetInterruptMask|function|__STATIC_INLINE void Cy_DMAC_Channel_SetInterruptMask(DMAC_Type * base, uint32_t channel, uint32_t interrupt)
DECL|Cy_DMAC_Channel_SetInterrupt|function|__STATIC_INLINE void Cy_DMAC_Channel_SetInterrupt(DMAC_Type * base, uint32_t channel, uint32_t interrupt)
DECL|Cy_DMAC_Channel_SetPriority|function|__STATIC_INLINE void Cy_DMAC_Channel_SetPriority(DMAC_Type * base, uint32_t channel, uint32_t priority)
DECL|Cy_DMAC_Descriptor_GetChannelState|function|__STATIC_INLINE cy_en_dmac_channel_state_t Cy_DMAC_Descriptor_GetChannelState(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetDataSize|function|__STATIC_INLINE cy_en_dmac_data_size_t Cy_DMAC_Descriptor_GetDataSize(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetDescriptorType|function|__STATIC_INLINE cy_en_dmac_descriptor_type_t Cy_DMAC_Descriptor_GetDescriptorType(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetDstAddress|function|__STATIC_INLINE void * Cy_DMAC_Descriptor_GetDstAddress(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetDstTransferSize|function|__STATIC_INLINE cy_en_dmac_transfer_size_t Cy_DMAC_Descriptor_GetDstTransferSize(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetInterruptType|function|__STATIC_INLINE cy_en_dmac_trigger_type_t Cy_DMAC_Descriptor_GetInterruptType(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetRetrigger|function|__STATIC_INLINE cy_en_dmac_retrigger_t Cy_DMAC_Descriptor_GetRetrigger(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetSrcAddress|function|__STATIC_INLINE void * Cy_DMAC_Descriptor_GetSrcAddress(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetSrcTransferSize|function|__STATIC_INLINE cy_en_dmac_transfer_size_t Cy_DMAC_Descriptor_GetSrcTransferSize(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetTriggerInType|function|__STATIC_INLINE cy_en_dmac_trigger_type_t Cy_DMAC_Descriptor_GetTriggerInType(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetTriggerOutType|function|__STATIC_INLINE cy_en_dmac_trigger_type_t Cy_DMAC_Descriptor_GetTriggerOutType(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetXloopDstIncrement|function|__STATIC_INLINE int32_t Cy_DMAC_Descriptor_GetXloopDstIncrement(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetXloopSrcIncrement|function|__STATIC_INLINE int32_t Cy_DMAC_Descriptor_GetXloopSrcIncrement(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetYloopDataCount|function|__STATIC_INLINE uint32_t Cy_DMAC_Descriptor_GetYloopDataCount(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetYloopDstIncrement|function|__STATIC_INLINE int32_t Cy_DMAC_Descriptor_GetYloopDstIncrement(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_GetYloopSrcIncrement|function|__STATIC_INLINE int32_t Cy_DMAC_Descriptor_GetYloopSrcIncrement(cy_stc_dmac_descriptor_t const * descriptor)
DECL|Cy_DMAC_Descriptor_SetChannelState|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetChannelState(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_channel_state_t channelState)
DECL|Cy_DMAC_Descriptor_SetDataSize|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetDataSize(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_data_size_t dataSize)
DECL|Cy_DMAC_Descriptor_SetDstAddress|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetDstAddress(cy_stc_dmac_descriptor_t * descriptor, void const * dstAddress)
DECL|Cy_DMAC_Descriptor_SetDstTransferSize|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetDstTransferSize(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_transfer_size_t dstTransferSize)
DECL|Cy_DMAC_Descriptor_SetInterruptType|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetInterruptType(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_trigger_type_t interruptType)
DECL|Cy_DMAC_Descriptor_SetRetrigger|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetRetrigger(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_retrigger_t retrigger)
DECL|Cy_DMAC_Descriptor_SetSrcAddress|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetSrcAddress(cy_stc_dmac_descriptor_t * descriptor, void const * srcAddress)
DECL|Cy_DMAC_Descriptor_SetSrcTransferSize|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetSrcTransferSize(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_transfer_size_t srcTransferSize)
DECL|Cy_DMAC_Descriptor_SetTriggerInType|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetTriggerInType(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_trigger_type_t triggerInType)
DECL|Cy_DMAC_Descriptor_SetTriggerOutType|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetTriggerOutType(cy_stc_dmac_descriptor_t * descriptor, cy_en_dmac_trigger_type_t triggerOutType)
DECL|Cy_DMAC_Descriptor_SetXloopDstIncrement|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetXloopDstIncrement(cy_stc_dmac_descriptor_t * descriptor, int32_t dstXincrement)
DECL|Cy_DMAC_Descriptor_SetXloopSrcIncrement|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetXloopSrcIncrement(cy_stc_dmac_descriptor_t * descriptor, int32_t srcXincrement)
DECL|Cy_DMAC_Descriptor_SetYloopDataCount|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetYloopDataCount(cy_stc_dmac_descriptor_t * descriptor, uint32_t yCount)
DECL|Cy_DMAC_Descriptor_SetYloopDstIncrement|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetYloopDstIncrement(cy_stc_dmac_descriptor_t * descriptor, int32_t dstYincrement)
DECL|Cy_DMAC_Descriptor_SetYloopSrcIncrement|function|__STATIC_INLINE void Cy_DMAC_Descriptor_SetYloopSrcIncrement(cy_stc_dmac_descriptor_t * descriptor, int32_t srcYincrement)
DECL|Cy_DMAC_Disable|function|__STATIC_INLINE void Cy_DMAC_Disable(DMAC_Type * base)
DECL|Cy_DMAC_Enable|function|__STATIC_INLINE void Cy_DMAC_Enable(DMAC_Type * base)
DECL|Cy_DMAC_GetActiveChannel|function|__STATIC_INLINE uint32_t Cy_DMAC_GetActiveChannel(DMAC_Type const * base)
DECL|bufferable|member|bool bufferable; /**< This parameter specifies whether a write transaction can complete
DECL|channelState|member|cy_en_dmac_channel_state_t channelState; /**< Specifies if the channel is enabled or disabled on completion of descriptor see \ref cy_en_dmac_channel_state_t. */
DECL|ctl|member|uint32_t ctl; /*!< 0x00000000 Descriptor control */
DECL|cy_en_dmac_channel_state_t|typedef|} cy_en_dmac_channel_state_t;
DECL|cy_en_dmac_data_size_t|typedef|} cy_en_dmac_data_size_t;
DECL|cy_en_dmac_descriptor_type_t|typedef|} cy_en_dmac_descriptor_type_t;
DECL|cy_en_dmac_retrigger_t|typedef|} cy_en_dmac_retrigger_t;
DECL|cy_en_dmac_status_t|typedef|} cy_en_dmac_status_t;
DECL|cy_en_dmac_transfer_size_t|typedef|} cy_en_dmac_transfer_size_t;
DECL|cy_en_dmac_trigger_type_t|typedef|} cy_en_dmac_trigger_type_t;
DECL|cy_stc_dmac_channel_config_t|typedef|} cy_stc_dmac_channel_config_t;
DECL|cy_stc_dmac_descriptor_config_t|typedef|} cy_stc_dmac_descriptor_config_t;
DECL|cy_stc_dmac_descriptor_t|typedef|} cy_stc_dmac_descriptor_t;
DECL|dataPrefetch|member|bool dataPrefetch; /**< Source data transfers are initiated as soon as the channel is enabled, the current descriptor pointer is NOT "0"
DECL|dataSize|member|cy_en_dmac_data_size_t dataSize; /**< The size of the data bus for transfer, see \ref cy_en_dmac_data_size_t. */
DECL|descriptorType|member|cy_en_dmac_descriptor_type_t descriptorType; /**< The type of the descriptor see \ref cy_en_dmac_descriptor_type_t. */
DECL|descriptor|member|cy_stc_dmac_descriptor_t * descriptor; /**< The DMA descriptor associated with the channel being initialized */
DECL|dstAddress|member|void * dstAddress; /**< The destination address of the transfer. */
DECL|dstTransferSize|member|cy_en_dmac_transfer_size_t dstTransferSize; /**< The destination transfer size. */
DECL|dstXincrement|member|int32_t dstXincrement; /**< The address increment of the destination after each X-loop transfer. Valid range is -2048...2047. */
DECL|dstYincrement|member|int32_t dstYincrement; /**< The address increment of the destination after each Y-loop transfer. Valid range is -2048...2047. */
DECL|dst|member|uint32_t dst; /*!< 0x00000008 Descriptor destination */
DECL|enable|member|bool enable; /**< This parameter specifies if the channel is enabled after initializing */
DECL|interruptType|member|cy_en_dmac_trigger_type_t interruptType; /**< Sets the event that triggers an interrupt, see \ref cy_en_dmac_trigger_type_t. */
DECL|nextDescriptor|member|cy_stc_dmac_descriptor_t * nextDescriptor; /**< The next descriptor to chain after completion, a NULL value will signify no chaining. */
DECL|nextPtr|member|uint32_t nextPtr; /*!< 0x00000014 Descriptor next pointer */
DECL|priority|member|uint32_t priority; /**< This parameter specifies the channel's priority */
DECL|retrigger|member|cy_en_dmac_retrigger_t retrigger; /**< Specifies whether the DW controller should wait for the input trigger to be deactivated. */
DECL|srcAddress|member|void * srcAddress; /**< The source address of the transfer. */
DECL|srcTransferSize|member|cy_en_dmac_transfer_size_t srcTransferSize; /**< The source transfer size. */
DECL|srcXincrement|member|int32_t srcXincrement; /**< The address increment of the source after each X-loop transfer. Valid range is -2048...2047. */
DECL|srcYincrement|member|int32_t srcYincrement; /**< The address increment of the source after each Y-loop transfer. Valid range is -2048...2047. */
DECL|src|member|uint32_t src; /*!< 0x00000004 Descriptor source */
DECL|triggerInType|member|cy_en_dmac_trigger_type_t triggerInType; /**< Sets what type of transfer is triggered, see \ref cy_en_dmac_trigger_type_t. */
DECL|triggerOutType|member|cy_en_dmac_trigger_type_t triggerOutType; /**< Sets the event that triggers an output, see \ref cy_en_dmac_trigger_type_t. */
DECL|xCount|member|uint32_t xCount; /**< The number of transfers in an X-loop. Valid range is 1...256. */
DECL|xIncr|member|uint32_t xIncr; /*!< 0x00000010 Descriptor X loop increment */
DECL|xSize|member|uint32_t xSize; /*!< 0x0000000C Descriptor X loop size */
DECL|yCount|member|uint32_t yCount; /**< The number of X-loops in the Y-loop. Valid range is 1...256. */
DECL|yIncr|member|uint32_t yIncr; /*!< 0x00000010 Descriptor Y loop increment */
DECL|ySize|member|uint32_t ySize; /*!< 0x00000014 Descriptor Y loop size */
