DECL|DMA_ActivateAuto|function|void DMA_ActivateAuto(unsigned int channel, bool primary, void *dst, const void *src, unsigned int nMinus1)
DECL|DMA_ActivateBasic|function|void DMA_ActivateBasic(unsigned int channel, bool primary, bool useBurst, void *dst, const void *src,
DECL|DMA_ActivatePingPong|function|void DMA_ActivatePingPong(unsigned int channel, bool useBurst, void *primDst, const void *primSrc, unsigned int primNMinus1,
DECL|DMA_ActivateScatterGather|function|void DMA_ActivateScatterGather(unsigned int channel, bool useBurst, DMA_DESCRIPTOR_TypeDef *altDescr, unsigned int count)
DECL|DMA_CfgChannel|function|void DMA_CfgChannel(unsigned int channel, DMA_CfgChannel_TypeDef *cfg)
DECL|DMA_CfgDescrScatterGather|function|void DMA_CfgDescrScatterGather(DMA_DESCRIPTOR_TypeDef *descr, unsigned int indx, DMA_CfgDescrSGAlt_TypeDef *cfg)
DECL|DMA_CfgDescr|function|void DMA_CfgDescr(unsigned int channel, bool primary, DMA_CfgDescr_TypeDef *cfg)
DECL|DMA_CfgLoop|function|void DMA_CfgLoop(unsigned int channel, DMA_CfgLoop_TypeDef *cfg)
DECL|DMA_CfgRect|function|void DMA_CfgRect(unsigned int channel, DMA_CfgRect_TypeDef *cfg)
DECL|DMA_ChannelEnabled|function|bool DMA_ChannelEnabled(unsigned int channel)
DECL|DMA_ChannelEnable|function|void DMA_ChannelEnable(unsigned int channel, bool enable)
DECL|DMA_ChannelRequestEnable|function|void DMA_ChannelRequestEnable(unsigned int channel, bool enable)
DECL|DMA_IRQHandler|function|void DMA_IRQHandler(void)
DECL|DMA_Init|function|void DMA_Init(DMA_Init_TypeDef *init)
DECL|DMA_Prepare|function|static void DMA_Prepare(unsigned int channel, DMA_CycleCtrl_TypeDef cycleCtrl, bool primary, bool useBurst, void *dst,
DECL|DMA_RefreshPingPong|function|void DMA_RefreshPingPong(unsigned int channel, bool primary, bool useBurst, void *dst, const void *src,
DECL|DMA_Reset|function|void DMA_Reset(void)
