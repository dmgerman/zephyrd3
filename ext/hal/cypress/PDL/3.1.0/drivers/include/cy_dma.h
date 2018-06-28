DECL|CY_DMA_1D_TRANSFER|enumerator|CY_DMA_1D_TRANSFER = 1UL, /**< 1D transfer. */
DECL|CY_DMA_1ELEMENT|enumerator|CY_DMA_1ELEMENT = 0UL, /**< One element transfer. */
DECL|CY_DMA_2D_TRANSFER|enumerator|CY_DMA_2D_TRANSFER = 2UL, /**< 2D transfer. */
DECL|CY_DMA_BAD_PARAM|enumerator|CY_DMA_BAD_PARAM = CY_DMA_ID | CY_PDL_STATUS_ERROR | 0x01UL /**< The input parameters passed to the DMA API are not valid. */
DECL|CY_DMA_BWC|macro|CY_DMA_BWC
DECL|CY_DMA_BYTE|enumerator|CY_DMA_BYTE = 0UL, /**< One byte. */
DECL|CY_DMA_CHANNEL_DISABLED|enumerator|CY_DMA_CHANNEL_DISABLED = 1UL /**< Channel is disabled. */
DECL|CY_DMA_CHANNEL_ENABLED|enumerator|CY_DMA_CHANNEL_ENABLED = 0UL, /**< Channel stays enabled. */
DECL|CY_DMA_CH_DISABLED|macro|CY_DMA_CH_DISABLED
DECL|CY_DMA_CH_ENABLED|macro|CY_DMA_CH_ENABLED
DECL|CY_DMA_CRC_TRANSFER|enumerator|CY_DMA_CRC_TRANSFER = 3UL, /**< CRC transfer. Supported by the DW_v2 only (TODO: correct the user-facing info) */
DECL|CY_DMA_CTL_CH_DISABLE_Msk|macro|CY_DMA_CTL_CH_DISABLE_Msk
DECL|CY_DMA_CTL_CH_DISABLE_Pos|macro|CY_DMA_CTL_CH_DISABLE_Pos
DECL|CY_DMA_CTL_COUNT_Msk|macro|CY_DMA_CTL_COUNT_Msk
DECL|CY_DMA_CTL_COUNT_Pos|macro|CY_DMA_CTL_COUNT_Pos
DECL|CY_DMA_CTL_DATA_SIZE_Msk|macro|CY_DMA_CTL_DATA_SIZE_Msk
DECL|CY_DMA_CTL_DATA_SIZE_Pos|macro|CY_DMA_CTL_DATA_SIZE_Pos
DECL|CY_DMA_CTL_DST_INCR_Msk|macro|CY_DMA_CTL_DST_INCR_Msk
DECL|CY_DMA_CTL_DST_INCR_Pos|macro|CY_DMA_CTL_DST_INCR_Pos
DECL|CY_DMA_CTL_DST_SIZE_Msk|macro|CY_DMA_CTL_DST_SIZE_Msk
DECL|CY_DMA_CTL_DST_SIZE_Pos|macro|CY_DMA_CTL_DST_SIZE_Pos
DECL|CY_DMA_CTL_INTR_TYPE_Msk|macro|CY_DMA_CTL_INTR_TYPE_Msk
DECL|CY_DMA_CTL_INTR_TYPE_Pos|macro|CY_DMA_CTL_INTR_TYPE_Pos
DECL|CY_DMA_CTL_RETRIG_Msk|macro|CY_DMA_CTL_RETRIG_Msk
DECL|CY_DMA_CTL_RETRIG_Pos|macro|CY_DMA_CTL_RETRIG_Pos
DECL|CY_DMA_CTL_SRC_INCR_Msk|macro|CY_DMA_CTL_SRC_INCR_Msk
DECL|CY_DMA_CTL_SRC_INCR_Pos|macro|CY_DMA_CTL_SRC_INCR_Pos
DECL|CY_DMA_CTL_SRC_SIZE_Msk|macro|CY_DMA_CTL_SRC_SIZE_Msk
DECL|CY_DMA_CTL_SRC_SIZE_Pos|macro|CY_DMA_CTL_SRC_SIZE_Pos
DECL|CY_DMA_CTL_TR_IN_TYPE_Msk|macro|CY_DMA_CTL_TR_IN_TYPE_Msk
DECL|CY_DMA_CTL_TR_IN_TYPE_Pos|macro|CY_DMA_CTL_TR_IN_TYPE_Pos
DECL|CY_DMA_CTL_TR_OUT_TYPE_Msk|macro|CY_DMA_CTL_TR_OUT_TYPE_Msk
DECL|CY_DMA_CTL_TR_OUT_TYPE_Pos|macro|CY_DMA_CTL_TR_OUT_TYPE_Pos
DECL|CY_DMA_CTL_TYPE_Msk|macro|CY_DMA_CTL_TYPE_Msk
DECL|CY_DMA_CTL_TYPE_Pos|macro|CY_DMA_CTL_TYPE_Pos
DECL|CY_DMA_DESCR_CHAIN|enumerator|CY_DMA_DESCR_CHAIN = 3UL /**< Entire descriptor chain transfer. */
DECL|CY_DMA_DESCR|enumerator|CY_DMA_DESCR = 2UL, /**< One descriptor transfer. */
DECL|CY_DMA_DRV_VERSION_MAJOR|macro|CY_DMA_DRV_VERSION_MAJOR
DECL|CY_DMA_DRV_VERSION_MINOR|macro|CY_DMA_DRV_VERSION_MINOR
DECL|CY_DMA_HALFWORD|enumerator|CY_DMA_HALFWORD = 1UL, /**< Half word (two bytes). */
DECL|CY_DMA_H|macro|CY_DMA_H
DECL|CY_DMA_ID|macro|CY_DMA_ID
DECL|CY_DMA_INTR_1ELEMENT_CMPLT|macro|CY_DMA_INTR_1ELEMENT_CMPLT
DECL|CY_DMA_INTR_CAUSE_ACTIVE_CH_DISABLED|enumerator|CY_DMA_INTR_CAUSE_ACTIVE_CH_DISABLED = 7U, /**< Active channel is disabled. */
DECL|CY_DMA_INTR_CAUSE_COMPLETION|enumerator|CY_DMA_INTR_CAUSE_COMPLETION = 1U, /**< Completion. */
DECL|CY_DMA_INTR_CAUSE_CURR_PTR_NULL|enumerator|CY_DMA_INTR_CAUSE_CURR_PTR_NULL = 6U, /**< Current descripror pointer is NULL. */
DECL|CY_DMA_INTR_CAUSE_DESCR_BUS_ERROR|enumerator|CY_DMA_INTR_CAUSE_DESCR_BUS_ERROR = 8U /**< Descriptor bus error. */
DECL|CY_DMA_INTR_CAUSE_DST_BUS_ERROR|enumerator|CY_DMA_INTR_CAUSE_DST_BUS_ERROR = 3U, /**< Destination bus error. */
DECL|CY_DMA_INTR_CAUSE_DST_MISAL|enumerator|CY_DMA_INTR_CAUSE_DST_MISAL = 5U, /**< Destination address is not aligned. */
DECL|CY_DMA_INTR_CAUSE_NO_INTR|enumerator|CY_DMA_INTR_CAUSE_NO_INTR = 0U, /**< No interrupt. */
DECL|CY_DMA_INTR_CAUSE_SRC_BUS_ERROR|enumerator|CY_DMA_INTR_CAUSE_SRC_BUS_ERROR = 2U, /**< Source bus error. */
DECL|CY_DMA_INTR_CAUSE_SRC_MISAL|enumerator|CY_DMA_INTR_CAUSE_SRC_MISAL = 4U, /**< Source address is not aligned */
DECL|CY_DMA_INTR_DESCRCHAIN_CMPLT|macro|CY_DMA_INTR_DESCRCHAIN_CMPLT
DECL|CY_DMA_INTR_DESCR_CMPLT|macro|CY_DMA_INTR_DESCR_CMPLT
DECL|CY_DMA_INTR_MASK|macro|CY_DMA_INTR_MASK
DECL|CY_DMA_INTR_X_LOOP_CMPLT|macro|CY_DMA_INTR_X_LOOP_CMPLT
DECL|CY_DMA_INVALID_INPUT_PARAMETERS|macro|CY_DMA_INVALID_INPUT_PARAMETERS
DECL|CY_DMA_IS_CHANNEL_STATE_VALID|macro|CY_DMA_IS_CHANNEL_STATE_VALID
DECL|CY_DMA_IS_CH_NR_VALID|macro|CY_DMA_IS_CH_NR_VALID
DECL|CY_DMA_IS_DATA_SIZE_VALID|macro|CY_DMA_IS_DATA_SIZE_VALID
DECL|CY_DMA_IS_INTR_MASK_VALID|macro|CY_DMA_IS_INTR_MASK_VALID
DECL|CY_DMA_IS_LOOP_COUNT_VALID|macro|CY_DMA_IS_LOOP_COUNT_VALID
DECL|CY_DMA_IS_LOOP_INCR_VALID|macro|CY_DMA_IS_LOOP_INCR_VALID
DECL|CY_DMA_IS_PRIORITY_VALID|macro|CY_DMA_IS_PRIORITY_VALID
DECL|CY_DMA_IS_RETRIG_VALID|macro|CY_DMA_IS_RETRIG_VALID
DECL|CY_DMA_IS_TRIG_TYPE_VALID|macro|CY_DMA_IS_TRIG_TYPE_VALID
DECL|CY_DMA_IS_TYPE_VALID|macro|CY_DMA_IS_TYPE_VALID
DECL|CY_DMA_IS_XFER_SIZE_VALID|macro|CY_DMA_IS_XFER_SIZE_VALID
DECL|CY_DMA_LOOP_COUNT_MAX|macro|CY_DMA_LOOP_COUNT_MAX
DECL|CY_DMA_LOOP_COUNT_MIN|macro|CY_DMA_LOOP_COUNT_MIN
DECL|CY_DMA_LOOP_INCREMENT_MAX|macro|CY_DMA_LOOP_INCREMENT_MAX
DECL|CY_DMA_LOOP_INCREMENT_MIN|macro|CY_DMA_LOOP_INCREMENT_MIN
DECL|CY_DMA_RETDIG_16CYC|macro|CY_DMA_RETDIG_16CYC
DECL|CY_DMA_RETDIG_4CYC|macro|CY_DMA_RETDIG_4CYC
DECL|CY_DMA_RETDIG_IM|macro|CY_DMA_RETDIG_IM
DECL|CY_DMA_RETRIG_16CYC|enumerator|CY_DMA_RETRIG_16CYC = 2UL, /**< Retrigger after 16 Clk_Slow cycles. */
DECL|CY_DMA_RETRIG_4CYC|enumerator|CY_DMA_RETRIG_4CYC = 1UL, /**< Retrigger after 4 Clk_Slow cycles. */
DECL|CY_DMA_RETRIG_IM|enumerator|CY_DMA_RETRIG_IM = 0UL, /**< Retrigger immediatelly. */
DECL|CY_DMA_SINGLE_TRANSFER|enumerator|CY_DMA_SINGLE_TRANSFER = 0UL, /**< Single transfer. */
DECL|CY_DMA_SUCCESS|enumerator|CY_DMA_SUCCESS = 0x00UL, /**< Success. */
DECL|CY_DMA_TRANSFER_SIZE_DATA|enumerator|CY_DMA_TRANSFER_SIZE_DATA = 0UL, /**< As specified by dataSize. */
DECL|CY_DMA_TRANSFER_SIZE_WORD|enumerator|CY_DMA_TRANSFER_SIZE_WORD = 1UL, /**< A full word (four bytes). */
DECL|CY_DMA_TRIGIN_1ELEMENT|macro|CY_DMA_TRIGIN_1ELEMENT
DECL|CY_DMA_TRIGIN_DESCRCHAIN|macro|CY_DMA_TRIGIN_DESCRCHAIN
DECL|CY_DMA_TRIGIN_DESCR|macro|CY_DMA_TRIGIN_DESCR
DECL|CY_DMA_TRIGIN_XLOOP|macro|CY_DMA_TRIGIN_XLOOP
DECL|CY_DMA_TRIGOUT_1ELEMENT_CMPLT|macro|CY_DMA_TRIGOUT_1ELEMENT_CMPLT
DECL|CY_DMA_TRIGOUT_DESCRCHAIN_CMPLT|macro|CY_DMA_TRIGOUT_DESCRCHAIN_CMPLT
DECL|CY_DMA_TRIGOUT_DESCR_CMPLT|macro|CY_DMA_TRIGOUT_DESCR_CMPLT
DECL|CY_DMA_TRIGOUT_X_LOOP_CMPLT|macro|CY_DMA_TRIGOUT_X_LOOP_CMPLT
DECL|CY_DMA_TXFR_SIZE_DATA_SIZE|macro|CY_DMA_TXFR_SIZE_DATA_SIZE
DECL|CY_DMA_TXFR_SIZE_WORD|macro|CY_DMA_TXFR_SIZE_WORD
DECL|CY_DMA_WAIT_FOR_REACT|enumerator|CY_DMA_WAIT_FOR_REACT = 3UL /**< Wait for trigger reactivation. */
DECL|CY_DMA_WORD|enumerator|CY_DMA_WORD = 2UL /**< Full word (four bytes). */
DECL|CY_DMA_X_LOOP|enumerator|CY_DMA_X_LOOP = 1UL, /**< One X loop transfer. */
DECL|Cy_DMA_Channel_ClearInterrupt|function|__STATIC_INLINE void Cy_DMA_Channel_ClearInterrupt(DW_Type * base, uint32_t channel)
DECL|Cy_DMA_Channel_Disable|function|__STATIC_INLINE void Cy_DMA_Channel_Disable(DW_Type * base, uint32_t channel)
DECL|Cy_DMA_Channel_Enable|function|__STATIC_INLINE void Cy_DMA_Channel_Enable(DW_Type * base, uint32_t channel)
DECL|Cy_DMA_Channel_GetCurrentDescriptor|function|__STATIC_INLINE cy_stc_dma_descriptor_t * Cy_DMA_Channel_GetCurrentDescriptor(DW_Type const * base, uint32_t channel)
DECL|Cy_DMA_Channel_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_DMA_Channel_GetInterruptMask(DW_Type const * base, uint32_t channel)
DECL|Cy_DMA_Channel_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_DMA_Channel_GetInterruptStatusMasked(DW_Type const * base, uint32_t channel)
DECL|Cy_DMA_Channel_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_DMA_Channel_GetInterruptStatus(DW_Type const * base, uint32_t channel)
DECL|Cy_DMA_Channel_GetPriority|function|__STATIC_INLINE uint32_t Cy_DMA_Channel_GetPriority(DW_Type const * base, uint32_t channel)
DECL|Cy_DMA_Channel_GetStatus|function|__STATIC_INLINE cy_en_dma_intr_cause_t Cy_DMA_Channel_GetStatus(DW_Type const * base, uint32_t channel)
DECL|Cy_DMA_Channel_SetDescriptor|function|__STATIC_INLINE void Cy_DMA_Channel_SetDescriptor(DW_Type * base, uint32_t channel, cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Channel_SetInterruptMask|function|__STATIC_INLINE void Cy_DMA_Channel_SetInterruptMask(DW_Type * base, uint32_t channel, uint32_t interrupt)
DECL|Cy_DMA_Channel_SetInterrupt|function|__STATIC_INLINE void Cy_DMA_Channel_SetInterrupt(DW_Type * base, uint32_t channel)
DECL|Cy_DMA_Channel_SetPriority|function|__STATIC_INLINE void Cy_DMA_Channel_SetPriority(DW_Type * base, uint32_t channel, uint32_t priority)
DECL|Cy_DMA_Chnl_ClearInterrupt|macro|Cy_DMA_Chnl_ClearInterrupt
DECL|Cy_DMA_Chnl_DeInit|macro|Cy_DMA_Chnl_DeInit
DECL|Cy_DMA_Chnl_Disable|macro|Cy_DMA_Chnl_Disable
DECL|Cy_DMA_Chnl_Enable|macro|Cy_DMA_Chnl_Enable
DECL|Cy_DMA_Chnl_GetCurrentDescr|macro|Cy_DMA_Chnl_GetCurrentDescr
DECL|Cy_DMA_Chnl_GetInterruptCause|macro|Cy_DMA_Chnl_GetInterruptCause
DECL|Cy_DMA_Chnl_GetInterruptMask|macro|Cy_DMA_Chnl_GetInterruptMask
DECL|Cy_DMA_Chnl_GetInterruptStatusMasked|macro|Cy_DMA_Chnl_GetInterruptStatusMasked
DECL|Cy_DMA_Chnl_GetInterruptStatus|macro|Cy_DMA_Chnl_GetInterruptStatus
DECL|Cy_DMA_Chnl_GetPriority|macro|Cy_DMA_Chnl_GetPriority
DECL|Cy_DMA_Chnl_Init|macro|Cy_DMA_Chnl_Init
DECL|Cy_DMA_Chnl_SetDescr|macro|Cy_DMA_Chnl_SetDescr
DECL|Cy_DMA_Chnl_SetInterruptMask|macro|Cy_DMA_Chnl_SetInterruptMask
DECL|Cy_DMA_Chnl_SetInterrupt|macro|Cy_DMA_Chnl_SetInterrupt
DECL|Cy_DMA_Chnl_SetPriority|macro|Cy_DMA_Chnl_SetPriority
DECL|Cy_DMA_Descr_DeInit|macro|Cy_DMA_Descr_DeInit
DECL|Cy_DMA_Descr_Init|macro|Cy_DMA_Descr_Init
DECL|Cy_DMA_Descr_SetDestAddr|macro|Cy_DMA_Descr_SetDestAddr
DECL|Cy_DMA_Descr_SetIntrType|macro|Cy_DMA_Descr_SetIntrType
DECL|Cy_DMA_Descr_SetNxtDescr|macro|Cy_DMA_Descr_SetNxtDescr
DECL|Cy_DMA_Descr_SetSrcAddr|macro|Cy_DMA_Descr_SetSrcAddr
DECL|Cy_DMA_Descr_SetTrigInType|macro|Cy_DMA_Descr_SetTrigInType
DECL|Cy_DMA_Descr_SetTrigOutType|macro|Cy_DMA_Descr_SetTrigOutType
DECL|Cy_DMA_Descr_SetTxfrWidth|function|__STATIC_INLINE void Cy_DMA_Descr_SetTxfrWidth(cy_stc_dma_descr_t * descriptor, uint32_t dataElementSize, uint32_t srcTxfrWidth, uint32_t dstTxfrWidth)
DECL|Cy_DMA_Descriptor_GetChannelState|function|__STATIC_INLINE cy_en_dma_channel_state_t Cy_DMA_Descriptor_GetChannelState(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetDataSize|function|__STATIC_INLINE cy_en_dma_data_size_t Cy_DMA_Descriptor_GetDataSize(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetDescriptorType|function|__STATIC_INLINE cy_en_dma_descriptor_type_t Cy_DMA_Descriptor_GetDescriptorType(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetDstAddress|function|__STATIC_INLINE void * Cy_DMA_Descriptor_GetDstAddress(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetDstTransferSize|function|__STATIC_INLINE cy_en_dma_transfer_size_t Cy_DMA_Descriptor_GetDstTransferSize(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetInterruptType|function|__STATIC_INLINE cy_en_dma_trigger_type_t Cy_DMA_Descriptor_GetInterruptType(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetRetrigger|function|__STATIC_INLINE cy_en_dma_retrigger_t Cy_DMA_Descriptor_GetRetrigger(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetSrcAddress|function|__STATIC_INLINE void * Cy_DMA_Descriptor_GetSrcAddress(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetSrcTransferSize|function|__STATIC_INLINE cy_en_dma_transfer_size_t Cy_DMA_Descriptor_GetSrcTransferSize(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetTriggerInType|function|__STATIC_INLINE cy_en_dma_trigger_type_t Cy_DMA_Descriptor_GetTriggerInType(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetTriggerOutType|function|__STATIC_INLINE cy_en_dma_trigger_type_t Cy_DMA_Descriptor_GetTriggerOutType(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetXloopDataCount|function|__STATIC_INLINE uint32_t Cy_DMA_Descriptor_GetXloopDataCount(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetXloopDstIncrement|function|__STATIC_INLINE int32_t Cy_DMA_Descriptor_GetXloopDstIncrement(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetXloopSrcIncrement|function|__STATIC_INLINE int32_t Cy_DMA_Descriptor_GetXloopSrcIncrement(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetYloopDataCount|function|__STATIC_INLINE uint32_t Cy_DMA_Descriptor_GetYloopDataCount(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetYloopDstIncrement|function|__STATIC_INLINE int32_t Cy_DMA_Descriptor_GetYloopDstIncrement(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_GetYloopSrcIncrement|function|__STATIC_INLINE int32_t Cy_DMA_Descriptor_GetYloopSrcIncrement(cy_stc_dma_descriptor_t const * descriptor)
DECL|Cy_DMA_Descriptor_SetChannelState|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetChannelState(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_channel_state_t channelState)
DECL|Cy_DMA_Descriptor_SetDataSize|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetDataSize(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_data_size_t dataSize)
DECL|Cy_DMA_Descriptor_SetDstAddress|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetDstAddress(cy_stc_dma_descriptor_t * descriptor, void const * dstAddress)
DECL|Cy_DMA_Descriptor_SetDstTransferSize|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetDstTransferSize(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_transfer_size_t dstTransferSize)
DECL|Cy_DMA_Descriptor_SetInterruptType|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetInterruptType(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_trigger_type_t interruptType)
DECL|Cy_DMA_Descriptor_SetRetrigger|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetRetrigger(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_retrigger_t retrigger)
DECL|Cy_DMA_Descriptor_SetSrcAddress|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetSrcAddress(cy_stc_dma_descriptor_t * descriptor, void const * srcAddress)
DECL|Cy_DMA_Descriptor_SetSrcTransferSize|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetSrcTransferSize(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_transfer_size_t srcTransferSize)
DECL|Cy_DMA_Descriptor_SetTriggerInType|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetTriggerInType(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_trigger_type_t triggerInType)
DECL|Cy_DMA_Descriptor_SetTriggerOutType|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetTriggerOutType(cy_stc_dma_descriptor_t * descriptor, cy_en_dma_trigger_type_t triggerOutType)
DECL|Cy_DMA_Descriptor_SetXloopDataCount|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetXloopDataCount(cy_stc_dma_descriptor_t * descriptor, uint32_t xCount)
DECL|Cy_DMA_Descriptor_SetXloopDstIncrement|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetXloopDstIncrement(cy_stc_dma_descriptor_t * descriptor, int32_t dstXincrement)
DECL|Cy_DMA_Descriptor_SetXloopSrcIncrement|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetXloopSrcIncrement(cy_stc_dma_descriptor_t * descriptor, int32_t srcXincrement)
DECL|Cy_DMA_Descriptor_SetYloopDataCount|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetYloopDataCount(cy_stc_dma_descriptor_t * descriptor, uint32_t yCount)
DECL|Cy_DMA_Descriptor_SetYloopDstIncrement|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetYloopDstIncrement(cy_stc_dma_descriptor_t * descriptor, int32_t dstYincrement)
DECL|Cy_DMA_Descriptor_SetYloopSrcIncrement|function|__STATIC_INLINE void Cy_DMA_Descriptor_SetYloopSrcIncrement(cy_stc_dma_descriptor_t * descriptor, int32_t srcYincrement)
DECL|Cy_DMA_Disable|function|__STATIC_INLINE void Cy_DMA_Disable(DW_Type * base)
DECL|Cy_DMA_Enable|function|__STATIC_INLINE void Cy_DMA_Enable(DW_Type * base)
DECL|Cy_DMA_GetActiveChannel|function|__STATIC_INLINE uint32_t Cy_DMA_GetActiveChannel(DW_Type const * base)
DECL|Cy_DMA_GetActiveChnl|macro|Cy_DMA_GetActiveChnl
DECL|Cy_DMA_GetActiveDstAddress|function|__STATIC_INLINE void * Cy_DMA_GetActiveDstAddress(DW_Type * base)
DECL|Cy_DMA_GetActiveDstAddr|macro|Cy_DMA_GetActiveDstAddr
DECL|Cy_DMA_GetActiveSrcAddress|function|__STATIC_INLINE void * Cy_DMA_GetActiveSrcAddress(DW_Type * base)
DECL|Cy_DMA_GetActiveSrcAddr|macro|Cy_DMA_GetActiveSrcAddr
DECL|DESCR_CTL|macro|DESCR_CTL
DECL|DESCR_DST|macro|DESCR_DST
DECL|DESCR_NEXT_PTR|macro|DESCR_NEXT_PTR
DECL|DESCR_SRC|macro|DESCR_SRC
DECL|DESCR_X_CTL|macro|DESCR_X_CTL
DECL|DESCR_Y_CTL|macro|DESCR_Y_CTL
DECL|DMA_Descriptor|macro|DMA_Descriptor
DECL|DW_DESCR_STRUCT_DESCR_CTL_CH_DISABLE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_CH_DISABLE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_CH_DISABLE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_CH_DISABLE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_DATA_SIZE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_DATA_SIZE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_DATA_SIZE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_DATA_SIZE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_DESCR_TYPE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_DESCR_TYPE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_DESCR_TYPE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_DESCR_TYPE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_DST_TRANSFER_SIZE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_DST_TRANSFER_SIZE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_DST_TRANSFER_SIZE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_DST_TRANSFER_SIZE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_INTR_TYPE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_INTR_TYPE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_INTR_TYPE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_INTR_TYPE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_SRC_TRANSFER_SIZE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_SRC_TRANSFER_SIZE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_SRC_TRANSFER_SIZE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_SRC_TRANSFER_SIZE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_TR_IN_TYPE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_TR_IN_TYPE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_TR_IN_TYPE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_TR_IN_TYPE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_TR_OUT_TYPE_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_TR_OUT_TYPE_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_TR_OUT_TYPE_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_TR_OUT_TYPE_Pos
DECL|DW_DESCR_STRUCT_DESCR_CTL_WAIT_FOR_DEACT_Msk|macro|DW_DESCR_STRUCT_DESCR_CTL_WAIT_FOR_DEACT_Msk
DECL|DW_DESCR_STRUCT_DESCR_CTL_WAIT_FOR_DEACT_Pos|macro|DW_DESCR_STRUCT_DESCR_CTL_WAIT_FOR_DEACT_Pos
DECL|DW_DESCR_STRUCT_DESCR_DST_DST_ADDR_Msk|macro|DW_DESCR_STRUCT_DESCR_DST_DST_ADDR_Msk
DECL|DW_DESCR_STRUCT_DESCR_DST_DST_ADDR_Pos|macro|DW_DESCR_STRUCT_DESCR_DST_DST_ADDR_Pos
DECL|DW_DESCR_STRUCT_DESCR_NEXT_PTR_ADDR_Msk|macro|DW_DESCR_STRUCT_DESCR_NEXT_PTR_ADDR_Msk
DECL|DW_DESCR_STRUCT_DESCR_NEXT_PTR_ADDR_Pos|macro|DW_DESCR_STRUCT_DESCR_NEXT_PTR_ADDR_Pos
DECL|DW_DESCR_STRUCT_DESCR_SRC_SRC_ADDR_Msk|macro|DW_DESCR_STRUCT_DESCR_SRC_SRC_ADDR_Msk
DECL|DW_DESCR_STRUCT_DESCR_SRC_SRC_ADDR_Pos|macro|DW_DESCR_STRUCT_DESCR_SRC_SRC_ADDR_Pos
DECL|DW_DESCR_STRUCT_DESCR_X_CTL_DST_X_INCR_Msk|macro|DW_DESCR_STRUCT_DESCR_X_CTL_DST_X_INCR_Msk
DECL|DW_DESCR_STRUCT_DESCR_X_CTL_DST_X_INCR_Pos|macro|DW_DESCR_STRUCT_DESCR_X_CTL_DST_X_INCR_Pos
DECL|DW_DESCR_STRUCT_DESCR_X_CTL_SRC_X_INCR_Msk|macro|DW_DESCR_STRUCT_DESCR_X_CTL_SRC_X_INCR_Msk
DECL|DW_DESCR_STRUCT_DESCR_X_CTL_SRC_X_INCR_Pos|macro|DW_DESCR_STRUCT_DESCR_X_CTL_SRC_X_INCR_Pos
DECL|DW_DESCR_STRUCT_DESCR_X_CTL_X_COUNT_Msk|macro|DW_DESCR_STRUCT_DESCR_X_CTL_X_COUNT_Msk
DECL|DW_DESCR_STRUCT_DESCR_X_CTL_X_COUNT_Pos|macro|DW_DESCR_STRUCT_DESCR_X_CTL_X_COUNT_Pos
DECL|DW_DESCR_STRUCT_DESCR_Y_CTL_DST_Y_INCR_Msk|macro|DW_DESCR_STRUCT_DESCR_Y_CTL_DST_Y_INCR_Msk
DECL|DW_DESCR_STRUCT_DESCR_Y_CTL_DST_Y_INCR_Pos|macro|DW_DESCR_STRUCT_DESCR_Y_CTL_DST_Y_INCR_Pos
DECL|DW_DESCR_STRUCT_DESCR_Y_CTL_SRC_Y_INCR_Msk|macro|DW_DESCR_STRUCT_DESCR_Y_CTL_SRC_Y_INCR_Msk
DECL|DW_DESCR_STRUCT_DESCR_Y_CTL_SRC_Y_INCR_Pos|macro|DW_DESCR_STRUCT_DESCR_Y_CTL_SRC_Y_INCR_Pos
DECL|DW_DESCR_STRUCT_DESCR_Y_CTL_Y_COUNT_Msk|macro|DW_DESCR_STRUCT_DESCR_Y_CTL_Y_COUNT_Msk
DECL|DW_DESCR_STRUCT_DESCR_Y_CTL_Y_COUNT_Pos|macro|DW_DESCR_STRUCT_DESCR_Y_CTL_Y_COUNT_Pos
DECL|bufferable|member|bool bufferable; /**< This parameter specifies whether a write transaction can complete
DECL|chStateAtCmplt|macro|chStateAtCmplt
DECL|channelState|member|cy_en_dma_channel_state_t channelState; /**< Specifies if the channel is enabled or disabled on completion of descriptor see \ref cy_en_dma_channel_state_t. */
DECL|ctl|member|uint32_t ctl; /*!< 0x00000000 Descriptor control */
DECL|cy_en_dma_channel_state_t|typedef|} cy_en_dma_channel_state_t;
DECL|cy_en_dma_data_size_t|typedef|} cy_en_dma_data_size_t;
DECL|cy_en_dma_descriptor_type_t|typedef|} cy_en_dma_descriptor_type_t;
DECL|cy_en_dma_intr_cause_t|typedef|} cy_en_dma_intr_cause_t;
DECL|cy_en_dma_retrigger_t|typedef|} cy_en_dma_retrigger_t;
DECL|cy_en_dma_status_t|typedef|} cy_en_dma_status_t;
DECL|cy_en_dma_transfer_size_t|typedef|} cy_en_dma_transfer_size_t;
DECL|cy_en_dma_trig_type_t|macro|cy_en_dma_trig_type_t
DECL|cy_en_dma_trigger_type_t|typedef|} cy_en_dma_trigger_type_t;
DECL|cy_stc_dma_channel_config_t|typedef|} cy_stc_dma_channel_config_t;
DECL|cy_stc_dma_chnl_config_t|macro|cy_stc_dma_chnl_config_t
DECL|cy_stc_dma_crc_config_t|typedef|} cy_stc_dma_crc_config_t;
DECL|cy_stc_dma_descr_config_t|macro|cy_stc_dma_descr_config_t
DECL|cy_stc_dma_descr_t|macro|cy_stc_dma_descr_t
DECL|cy_stc_dma_descriptor_config_t|typedef|} cy_stc_dma_descriptor_config_t;
DECL|cy_stc_dma_descriptor_t|typedef|} cy_stc_dma_descriptor_t;
DECL|dataReverse|member|bool dataReverse; /**< Specifies the bit order in which a data Byte is processed (reversal is performed after XORing):
DECL|dataSize|member|cy_en_dma_data_size_t dataSize; /**< The size of the data bus for transfer, see \ref cy_en_dma_data_size_t. */
DECL|dataXor|member|uint32_t dataXor; /**< Specifies a byte mask with which each data byte is XOR'd. The XOR is performed before data reversal. */
DECL|deact|macro|deact
DECL|descrNext|macro|descrNext
DECL|descrType|macro|descrType
DECL|descriptorType|member|cy_en_dma_descriptor_type_t descriptorType; /**< The type of the descriptor see \ref cy_en_dma_descriptor_type_t. */
DECL|descriptor|member|cy_stc_dma_descriptor_t * descriptor; /**< The DMA descriptor associated with the channel being initialized */
DECL|destAddr|macro|destAddr
DECL|destTxfrSize|macro|destTxfrSize
DECL|destXincr|macro|destXincr
DECL|destYincr|macro|destYincr
DECL|dstAddress|member|void * dstAddress; /**< The destination address of the transfer. */
DECL|dstTransferSize|member|cy_en_dma_transfer_size_t dstTransferSize; /**< The destination transfer size. */
DECL|dstXincrement|member|int32_t dstXincrement; /**< The address increment of the destination after each X-loop transfer. Valid range is -2048 ... 2047. */
DECL|dstYincrement|member|int32_t dstYincrement; /**< The address increment of the destination after each Y-loop transfer. Valid range is -2048 ... 2047. */
DECL|dst|member|uint32_t dst; /*!< 0x00000008 Descriptor destination */
DECL|enable|member|bool enable; /**< This parameter specifies if the channel is enabled after initializing */
DECL|interruptType|member|cy_en_dma_trigger_type_t interruptType; /**< Sets the event that triggers an interrupt, see \ref cy_en_dma_trigger_type_t. */
DECL|intrType|macro|intrType
DECL|nextDescriptor|member|cy_stc_dma_descriptor_t * nextDescriptor; /**< The next descriptor to chain after completion, a NULL value will signify no chaining. */
DECL|nextPtr|member|uint32_t nextPtr; /*!< 0x00000014 Descriptor next pointer */
DECL|polynomial|member|uint32_t polynomial; /**< CRC polynomial. The polynomial is represented WITHOUT the high order bit (this bit is always assumed '1').
DECL|preemptable|member|bool preemptable; /**< Specifies if the channel is preemptable by another higher-priority channel */
DECL|priority|member|uint32_t priority; /**< This parameter specifies the channel's priority */
DECL|reminderReverse|member|bool reminderReverse; /**< Specifies whether the remainder is bit reversed (reversal is performed after XORing) */
DECL|reminderXor|member|uint32_t reminderXor; /**< Specifies a mask with which the remainder is XOR'd. The XOR is performed before remainder reversal. */
DECL|retrigger|member|cy_en_dma_retrigger_t retrigger; /**< Specifies whether the DW controller should wait for the input trigger to be deactivated. */
DECL|srcAddress|member|void * srcAddress; /**< The source address of the transfer. */
DECL|srcAddr|macro|srcAddr
DECL|srcTransferSize|member|cy_en_dma_transfer_size_t srcTransferSize; /**< The source transfer size. */
DECL|srcTxfrSize|macro|srcTxfrSize
DECL|srcXincrement|member|int32_t srcXincrement; /**< The address increment of the source after each X-loop transfer. Valid range is -2048 ... 2047. */
DECL|srcXincr|macro|srcXincr
DECL|srcYincrement|member|int32_t srcYincrement; /**< The address increment of the source after each Y-loop transfer. Valid range is -2048 ... 2047. */
DECL|srcYincr|macro|srcYincr
DECL|src|member|uint32_t src; /*!< 0x00000004 Descriptor source */
DECL|triggerInType|member|cy_en_dma_trigger_type_t triggerInType; /**< Sets what type of transfer is triggered, see \ref cy_en_dma_trigger_type_t. */
DECL|triggerOutType|member|cy_en_dma_trigger_type_t triggerOutType; /**< Sets the event that triggers an output, see \ref cy_en_dma_trigger_type_t. */
DECL|triginType|macro|triginType
DECL|trigoutType|macro|trigoutType
DECL|xCount|member|uint32_t xCount; /**< The number of transfers in an X-loop. Valid range is 1 ... 256. */
DECL|xCtl|member|uint32_t xCtl; /*!< 0x0000000C Descriptor X loop control */
DECL|yCount|member|uint32_t yCount; /**< The number of X-loops in the Y-loop. Valid range is 1 ... 256. */
DECL|yCtl|member|uint32_t yCtl; /*!< 0x00000010 Descriptor Y loop control */
