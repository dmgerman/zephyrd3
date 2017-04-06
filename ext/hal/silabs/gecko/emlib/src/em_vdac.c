DECL|VDAC_CH_VALID|macro|VDAC_CH_VALID
DECL|VDAC_ChannelOutputSet|function|void VDAC_ChannelOutputSet(VDAC_TypeDef *vdac, unsigned int channel, uint32_t value)
DECL|VDAC_Enable|function|void VDAC_Enable(VDAC_TypeDef *vdac, unsigned int ch, bool enable)
DECL|VDAC_INTERNAL_CLOCK_FREQ|macro|VDAC_INTERNAL_CLOCK_FREQ
DECL|VDAC_InitChannel|function|void VDAC_InitChannel(VDAC_TypeDef *vdac, const VDAC_InitChannel_TypeDef *init, unsigned int ch)
DECL|VDAC_Init|function|void VDAC_Init(VDAC_TypeDef *vdac, const VDAC_Init_TypeDef *init)
DECL|VDAC_MAX_CLOCK|macro|VDAC_MAX_CLOCK
DECL|VDAC_PrescaleCalc|function|uint32_t VDAC_PrescaleCalc(uint32_t vdacFreq, bool syncMode, uint32_t hfperFreq)
DECL|VDAC_Reset|function|void VDAC_Reset(VDAC_TypeDef *vdac)
