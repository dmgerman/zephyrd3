DECL|DMA_ArbiterConfig_TypeDef|typedef|} DMA_ArbiterConfig_TypeDef;
DECL|DMA_CB_TypeDef|typedef|} DMA_CB_TypeDef;
DECL|DMA_CfgChannel_TypeDef|typedef|} DMA_CfgChannel_TypeDef;
DECL|DMA_CfgDescrSGAlt_TypeDef|typedef|} DMA_CfgDescrSGAlt_TypeDef;
DECL|DMA_CfgDescr_TypeDef|typedef|} DMA_CfgDescr_TypeDef;
DECL|DMA_CfgLoop_TypeDef|typedef|} DMA_CfgLoop_TypeDef;
DECL|DMA_CfgRect_TypeDef|typedef|} DMA_CfgRect_TypeDef;
DECL|DMA_CycleCtrl_TypeDef|typedef|} DMA_CycleCtrl_TypeDef;
DECL|DMA_DataInc_TypeDef|typedef|} DMA_DataInc_TypeDef;
DECL|DMA_DataSize_TypeDef|typedef|} DMA_DataSize_TypeDef;
DECL|DMA_FuncPtr_TypeDef|typedef|typedef void (*DMA_FuncPtr_TypeDef)(unsigned int channel, bool primary, void *user);
DECL|DMA_Init_TypeDef|typedef|} DMA_Init_TypeDef;
DECL|DMA_IntClear|function|__STATIC_INLINE void DMA_IntClear(uint32_t flags)
DECL|DMA_IntDisable|function|__STATIC_INLINE void DMA_IntDisable(uint32_t flags)
DECL|DMA_IntEnable|function|__STATIC_INLINE void DMA_IntEnable(uint32_t flags)
DECL|DMA_IntGetEnabled|function|__STATIC_INLINE uint32_t DMA_IntGetEnabled(void)
DECL|DMA_IntGet|function|__STATIC_INLINE uint32_t DMA_IntGet(void)
DECL|DMA_IntSet|function|__STATIC_INLINE void DMA_IntSet(uint32_t flags)
DECL|DMA_ResetLoop|function|__STATIC_INLINE void DMA_ResetLoop(unsigned int channel)
DECL|DMA_ResetRect|function|__STATIC_INLINE void DMA_ResetRect(unsigned int channel)
DECL|EM_DMA_H|macro|EM_DMA_H
DECL|arbRate|member|DMA_ArbiterConfig_TypeDef arbRate;
DECL|arbRate|member|DMA_ArbiterConfig_TypeDef arbRate;
DECL|cbFunc|member|DMA_FuncPtr_TypeDef cbFunc;
DECL|cb|member|DMA_CB_TypeDef *cb;
DECL|controlBlock|member|DMA_DESCRIPTOR_TypeDef *controlBlock;
DECL|dmaArbitrate1024|enumerator|dmaArbitrate1024 = _DMA_CTRL_R_POWER_1024 /**< Arbitrate after 1024 DMA transfers. */
DECL|dmaArbitrate128|enumerator|dmaArbitrate128 = _DMA_CTRL_R_POWER_128, /**< Arbitrate after 128 DMA transfers. */
DECL|dmaArbitrate16|enumerator|dmaArbitrate16 = _DMA_CTRL_R_POWER_16, /**< Arbitrate after 16 DMA transfers. */
DECL|dmaArbitrate1|enumerator|dmaArbitrate1 = _DMA_CTRL_R_POWER_1, /**< Arbitrate after 1 DMA transfer. */
DECL|dmaArbitrate256|enumerator|dmaArbitrate256 = _DMA_CTRL_R_POWER_256, /**< Arbitrate after 256 DMA transfers. */
DECL|dmaArbitrate2|enumerator|dmaArbitrate2 = _DMA_CTRL_R_POWER_2, /**< Arbitrate after 2 DMA transfers. */
DECL|dmaArbitrate32|enumerator|dmaArbitrate32 = _DMA_CTRL_R_POWER_32, /**< Arbitrate after 32 DMA transfers. */
DECL|dmaArbitrate4|enumerator|dmaArbitrate4 = _DMA_CTRL_R_POWER_4, /**< Arbitrate after 4 DMA transfers. */
DECL|dmaArbitrate512|enumerator|dmaArbitrate512 = _DMA_CTRL_R_POWER_512, /**< Arbitrate after 512 DMA transfers. */
DECL|dmaArbitrate64|enumerator|dmaArbitrate64 = _DMA_CTRL_R_POWER_64, /**< Arbitrate after 64 DMA transfers. */
DECL|dmaArbitrate8|enumerator|dmaArbitrate8 = _DMA_CTRL_R_POWER_8, /**< Arbitrate after 8 DMA transfers. */
DECL|dmaCycleCtrlAuto|enumerator|dmaCycleCtrlAuto = _DMA_CTRL_CYCLE_CTRL_AUTO,
DECL|dmaCycleCtrlBasic|enumerator|dmaCycleCtrlBasic = _DMA_CTRL_CYCLE_CTRL_BASIC,
DECL|dmaCycleCtrlMemScatterGather|enumerator|dmaCycleCtrlMemScatterGather = _DMA_CTRL_CYCLE_CTRL_MEM_SCATTER_GATHER,
DECL|dmaCycleCtrlPerScatterGather|enumerator|dmaCycleCtrlPerScatterGather = _DMA_CTRL_CYCLE_CTRL_PER_SCATTER_GATHER
DECL|dmaCycleCtrlPingPong|enumerator|dmaCycleCtrlPingPong = _DMA_CTRL_CYCLE_CTRL_PINGPONG,
DECL|dmaDataInc1|enumerator|dmaDataInc1 = _DMA_CTRL_SRC_INC_BYTE, /**< Increment address 1 byte. */
DECL|dmaDataInc2|enumerator|dmaDataInc2 = _DMA_CTRL_SRC_INC_HALFWORD, /**< Increment address 2 bytes. */
DECL|dmaDataInc4|enumerator|dmaDataInc4 = _DMA_CTRL_SRC_INC_WORD, /**< Increment address 4 bytes. */
DECL|dmaDataIncNone|enumerator|dmaDataIncNone = _DMA_CTRL_SRC_INC_NONE /**< Do not increment address. */
DECL|dmaDataSize1|enumerator|dmaDataSize1 = _DMA_CTRL_SRC_SIZE_BYTE, /**< 1 byte DMA transfer size. */
DECL|dmaDataSize2|enumerator|dmaDataSize2 = _DMA_CTRL_SRC_SIZE_HALFWORD, /**< 2 byte DMA transfer size. */
DECL|dmaDataSize4|enumerator|dmaDataSize4 = _DMA_CTRL_SRC_SIZE_WORD /**< 4 byte DMA transfer size. */
DECL|dstInc|member|DMA_DataInc_TypeDef dstInc;
DECL|dstInc|member|DMA_DataInc_TypeDef dstInc;
DECL|dstStride|member|uint16_t dstStride;
DECL|dst|member|void *dst;
DECL|enableInt|member|bool enableInt;
DECL|enable|member|bool enable;
DECL|height|member|uint16_t height;
DECL|highPri|member|bool highPri;
DECL|hprot|member|uint8_t hprot;
DECL|hprot|member|uint8_t hprot;
DECL|hprot|member|uint8_t hprot;
DECL|nMinus1|member|uint16_t nMinus1;
DECL|nMinus1|member|uint16_t nMinus1;
DECL|peripheral|member|bool peripheral;
DECL|primary|member|uint8_t primary;
DECL|select|member|uint32_t select;
DECL|size|member|DMA_DataSize_TypeDef size;
DECL|size|member|DMA_DataSize_TypeDef size;
DECL|srcInc|member|DMA_DataInc_TypeDef srcInc;
DECL|srcInc|member|DMA_DataInc_TypeDef srcInc;
DECL|srcStride|member|uint16_t srcStride;
DECL|src|member|void *src;
DECL|userPtr|member|void *userPtr;
