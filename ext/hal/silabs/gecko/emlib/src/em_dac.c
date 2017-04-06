DECL|DAC_CH_VALID|macro|DAC_CH_VALID
DECL|DAC_ChannelOutputSet|function|void DAC_ChannelOutputSet( DAC_TypeDef *dac, unsigned int channel, uint32_t value )
DECL|DAC_Enable|function|void DAC_Enable(DAC_TypeDef *dac, unsigned int ch, bool enable)
DECL|DAC_InitChannel|function|void DAC_InitChannel(DAC_TypeDef *dac, const DAC_InitChannel_TypeDef *init, unsigned int ch)
DECL|DAC_Init|function|void DAC_Init(DAC_TypeDef *dac, const DAC_Init_TypeDef *init)
DECL|DAC_MAX_CLOCK|macro|DAC_MAX_CLOCK
DECL|DAC_PrescaleCalc|function|uint8_t DAC_PrescaleCalc(uint32_t dacFreq, uint32_t hfperFreq)
DECL|DAC_Reset|function|void DAC_Reset(DAC_TypeDef *dac)
