DECL|EBI_AHigh_TypeDef|typedef|} EBI_AHigh_TypeDef;
DECL|EBI_ALow_TypeDef|typedef|} EBI_ALow_TypeDef;
DECL|EBI_BANK0|macro|EBI_BANK0
DECL|EBI_BANK1|macro|EBI_BANK1
DECL|EBI_BANK2|macro|EBI_BANK2
DECL|EBI_BANK3|macro|EBI_BANK3
DECL|EBI_CS0|macro|EBI_CS0
DECL|EBI_CS1|macro|EBI_CS1
DECL|EBI_CS2|macro|EBI_CS2
DECL|EBI_CS3|macro|EBI_CS3
DECL|EBI_INIT_DEFAULT|macro|EBI_INIT_DEFAULT
DECL|EBI_INIT_DEFAULT|macro|EBI_INIT_DEFAULT
DECL|EBI_Init_TypeDef|typedef|} EBI_Init_TypeDef;
DECL|EBI_IntClear|function|__STATIC_INLINE void EBI_IntClear(uint32_t flags)
DECL|EBI_IntDisable|function|__STATIC_INLINE void EBI_IntDisable(uint32_t flags)
DECL|EBI_IntEnable|function|__STATIC_INLINE void EBI_IntEnable(uint32_t flags)
DECL|EBI_IntGetEnabled|function|__STATIC_INLINE uint32_t EBI_IntGetEnabled(void)
DECL|EBI_IntGet|function|__STATIC_INLINE uint32_t EBI_IntGet(void)
DECL|EBI_IntSet|function|__STATIC_INLINE void EBI_IntSet(uint32_t flags)
DECL|EBI_Line_TypeDef|typedef|} EBI_Line_TypeDef;
DECL|EBI_Location_TypeDef|typedef|} EBI_Location_TypeDef;
DECL|EBI_Mode_TypeDef|typedef|} EBI_Mode_TypeDef;
DECL|EBI_Polarity_TypeDef|typedef|} EBI_Polarity_TypeDef;
DECL|EBI_StartNandEccGen|function|__STATIC_INLINE void EBI_StartNandEccGen(void)
DECL|EBI_StopNandEccGen|function|__STATIC_INLINE uint32_t EBI_StopNandEccGen( void )
DECL|EBI_TFTAlphaBlendSet|function|__STATIC_INLINE void EBI_TFTAlphaBlendSet(uint8_t alpha)
DECL|EBI_TFTBank_TypeDef|typedef|} EBI_TFTBank_TypeDef;
DECL|EBI_TFTColorSrc_TypeDef|typedef|} EBI_TFTColorSrc_TypeDef;
DECL|EBI_TFTDDMode_TypeDef|typedef|} EBI_TFTDDMode_TypeDef;
DECL|EBI_TFTEnable|function|__STATIC_INLINE void EBI_TFTEnable(EBI_TFTDDMode_TypeDef mode)
DECL|EBI_TFTFBTriggerSet|function|__STATIC_INLINE void EBI_TFTFBTriggerSet(EBI_TFTFrameBufTrigger_TypeDef sync)
DECL|EBI_TFTFrameBaseSet|function|__STATIC_INLINE void EBI_TFTFrameBaseSet(uint32_t address)
DECL|EBI_TFTFrameBufTrigger_TypeDef|typedef|} EBI_TFTFrameBufTrigger_TypeDef;
DECL|EBI_TFTHCount|function|__STATIC_INLINE uint32_t EBI_TFTHCount(void)
DECL|EBI_TFTHStrideSet|function|__STATIC_INLINE void EBI_TFTHStrideSet(uint32_t nbytes)
DECL|EBI_TFTINIT_DEFAULT|macro|EBI_TFTINIT_DEFAULT
DECL|EBI_TFTInit_TypeDef|typedef|} EBI_TFTInit_TypeDef;
DECL|EBI_TFTInterleave_TypeDef|typedef|} EBI_TFTInterleave_TypeDef;
DECL|EBI_TFTMaskBlendMode|function|__STATIC_INLINE void EBI_TFTMaskBlendMode(EBI_TFTMaskBlend_TypeDef maskBlend)
DECL|EBI_TFTMaskBlend_TypeDef|typedef|} EBI_TFTMaskBlend_TypeDef;
DECL|EBI_TFTMaskSet|function|__STATIC_INLINE void EBI_TFTMaskSet(uint32_t mask)
DECL|EBI_TFTPixelSet|function|__STATIC_INLINE void EBI_TFTPixelSet(int pixel, uint32_t color)
DECL|EBI_TFTVCount|function|__STATIC_INLINE uint32_t EBI_TFTVCount(void)
DECL|EBI_TFTWidth_TypeDef|typedef|} EBI_TFTWidth_TypeDef;
DECL|EM_EBI_H|macro|EM_EBI_H
DECL|aHigh|member|EBI_AHigh_TypeDef aHigh;
DECL|aLow|member|EBI_ALow_TypeDef aLow;
DECL|addrHalfALE|member|bool addrHalfALE;
DECL|addrHoldCycles|member|int addrHoldCycles;
DECL|addrSetupCycles|member|int addrSetupCycles;
DECL|addressOffset|member|uint32_t addressOffset;
DECL|alePolarity|member|EBI_Polarity_TypeDef alePolarity;
DECL|ardyDisableTimeout|member|bool ardyDisableTimeout;
DECL|ardyEnable|member|bool ardyEnable;
DECL|ardyPolarity|member|EBI_Polarity_TypeDef ardyPolarity;
DECL|banks|member|uint32_t banks;
DECL|bank|member|EBI_TFTBank_TypeDef bank;
DECL|blEnable|member|bool blEnable;
DECL|blPolarity|member|EBI_Polarity_TypeDef blPolarity;
DECL|colSrc|member|EBI_TFTColorSrc_TypeDef colSrc;
DECL|csLines|member|uint32_t csLines;
DECL|csPolarity|member|EBI_Polarity_TypeDef csPolarity;
DECL|csPolarity|member|EBI_Polarity_TypeDef csPolarity;
DECL|dataenPolarity|member|EBI_Polarity_TypeDef dataenPolarity;
DECL|dclkPeriod|member|int dclkPeriod;
DECL|dclkPolarity|member|EBI_Polarity_TypeDef dclkPolarity;
DECL|driveMode|member|EBI_TFTDDMode_TypeDef driveMode;
DECL|ebiAHighA0|enumerator|ebiAHighA0 = EBI_ROUTE_APEN_A0,
DECL|ebiAHighA10|enumerator|ebiAHighA10 = EBI_ROUTE_APEN_A10,
DECL|ebiAHighA11|enumerator|ebiAHighA11 = EBI_ROUTE_APEN_A11,
DECL|ebiAHighA12|enumerator|ebiAHighA12 = EBI_ROUTE_APEN_A12,
DECL|ebiAHighA13|enumerator|ebiAHighA13 = EBI_ROUTE_APEN_A13,
DECL|ebiAHighA14|enumerator|ebiAHighA14 = EBI_ROUTE_APEN_A14,
DECL|ebiAHighA15|enumerator|ebiAHighA15 = EBI_ROUTE_APEN_A15,
DECL|ebiAHighA16|enumerator|ebiAHighA16 = EBI_ROUTE_APEN_A16,
DECL|ebiAHighA17|enumerator|ebiAHighA17 = EBI_ROUTE_APEN_A17,
DECL|ebiAHighA18|enumerator|ebiAHighA18 = EBI_ROUTE_APEN_A18,
DECL|ebiAHighA19|enumerator|ebiAHighA19 = EBI_ROUTE_APEN_A19,
DECL|ebiAHighA20|enumerator|ebiAHighA20 = EBI_ROUTE_APEN_A20,
DECL|ebiAHighA21|enumerator|ebiAHighA21 = EBI_ROUTE_APEN_A21,
DECL|ebiAHighA22|enumerator|ebiAHighA22 = EBI_ROUTE_APEN_A22,
DECL|ebiAHighA23|enumerator|ebiAHighA23 = EBI_ROUTE_APEN_A23,
DECL|ebiAHighA24|enumerator|ebiAHighA24 = EBI_ROUTE_APEN_A24,
DECL|ebiAHighA25|enumerator|ebiAHighA25 = EBI_ROUTE_APEN_A25,
DECL|ebiAHighA26|enumerator|ebiAHighA26 = EBI_ROUTE_APEN_A26,
DECL|ebiAHighA27|enumerator|ebiAHighA27 = EBI_ROUTE_APEN_A27,
DECL|ebiAHighA28|enumerator|ebiAHighA28 = EBI_ROUTE_APEN_A28,
DECL|ebiAHighA5|enumerator|ebiAHighA5 = EBI_ROUTE_APEN_A5,
DECL|ebiAHighA6|enumerator|ebiAHighA6 = EBI_ROUTE_APEN_A6,
DECL|ebiAHighA7|enumerator|ebiAHighA7 = EBI_ROUTE_APEN_A7,
DECL|ebiAHighA8|enumerator|ebiAHighA8 = EBI_ROUTE_APEN_A8,
DECL|ebiAHighA9|enumerator|ebiAHighA9 = EBI_ROUTE_APEN_A9,
DECL|ebiALowA0|enumerator|ebiALowA0 = EBI_ROUTE_ALB_A0,
DECL|ebiALowA16|enumerator|ebiALowA16 = EBI_ROUTE_ALB_A16,
DECL|ebiALowA24|enumerator|ebiALowA24 = EBI_ROUTE_ALB_A24,
DECL|ebiALowA8|enumerator|ebiALowA8 = EBI_ROUTE_ALB_A8,
DECL|ebiActiveHigh|enumerator|ebiActiveHigh = 1
DECL|ebiActiveLow|enumerator|ebiActiveLow = 0,
DECL|ebiLineALE|enumerator|ebiLineALE,
DECL|ebiLineARDY|enumerator|ebiLineARDY,
DECL|ebiLineBL|enumerator|ebiLineBL,
DECL|ebiLineCS|enumerator|ebiLineCS,
DECL|ebiLineRE|enumerator|ebiLineRE,
DECL|ebiLineTFTCS|enumerator|ebiLineTFTCS,
DECL|ebiLineTFTDClk|enumerator|ebiLineTFTDClk,
DECL|ebiLineTFTDataEn|enumerator|ebiLineTFTDataEn,
DECL|ebiLineTFTHSync|enumerator|ebiLineTFTHSync,
DECL|ebiLineTFTVSync|enumerator|ebiLineTFTVSync,
DECL|ebiLineWE|enumerator|ebiLineWE,
DECL|ebiLocation0|enumerator|ebiLocation0 = EBI_ROUTE_LOCATION_LOC0,
DECL|ebiLocation1|enumerator|ebiLocation1 = EBI_ROUTE_LOCATION_LOC1,
DECL|ebiLocation2|enumerator|ebiLocation2 = EBI_ROUTE_LOCATION_LOC2
DECL|ebiModeD16A16ALE|enumerator|ebiModeD16A16ALE = EBI_CTRL_MODE_D16A16ALE,
DECL|ebiModeD16|enumerator|ebiModeD16 = EBI_CTRL_MODE_D16,
DECL|ebiModeD8A24ALE|enumerator|ebiModeD8A24ALE = EBI_CTRL_MODE_D8A24ALE,
DECL|ebiModeD8A8|enumerator|ebiModeD8A8 = EBI_CTRL_MODE_D8A8,
DECL|ebiTFTBank0|enumerator|ebiTFTBank0 = EBI_TFTCTRL_BANKSEL_BANK0,
DECL|ebiTFTBank1|enumerator|ebiTFTBank1 = EBI_TFTCTRL_BANKSEL_BANK1,
DECL|ebiTFTBank2|enumerator|ebiTFTBank2 = EBI_TFTCTRL_BANKSEL_BANK2,
DECL|ebiTFTBank3|enumerator|ebiTFTBank3 = EBI_TFTCTRL_BANKSEL_BANK3
DECL|ebiTFTColorSrcMem|enumerator|ebiTFTColorSrcMem = EBI_TFTCTRL_COLOR1SRC_MEM,
DECL|ebiTFTColorSrcPixel1|enumerator|ebiTFTColorSrcPixel1 = EBI_TFTCTRL_COLOR1SRC_PIXEL1,
DECL|ebiTFTDDModeDisabled|enumerator|ebiTFTDDModeDisabled = EBI_TFTCTRL_DD_DISABLED,
DECL|ebiTFTDDModeExternal|enumerator|ebiTFTDDModeExternal = EBI_TFTCTRL_DD_EXTERNAL,
DECL|ebiTFTDDModeInternal|enumerator|ebiTFTDDModeInternal = EBI_TFTCTRL_DD_INTERNAL,
DECL|ebiTFTFrameBufTriggerHSync|enumerator|ebiTFTFrameBufTriggerHSync = EBI_TFTCTRL_FBCTRIG_HSYNC,
DECL|ebiTFTFrameBufTriggerVSync|enumerator|ebiTFTFrameBufTriggerVSync = EBI_TFTCTRL_FBCTRIG_VSYNC,
DECL|ebiTFTInterleaveOnePerDClk|enumerator|ebiTFTInterleaveOnePerDClk = EBI_TFTCTRL_INTERLEAVE_ONEPERDCLK,
DECL|ebiTFTInterleavePorch|enumerator|ebiTFTInterleavePorch = EBI_TFTCTRL_INTERLEAVE_PORCH,
DECL|ebiTFTInterleaveUnlimited|enumerator|ebiTFTInterleaveUnlimited = EBI_TFTCTRL_INTERLEAVE_UNLIMITED,
DECL|ebiTFTMBDisabled|enumerator|ebiTFTMBDisabled = EBI_TFTCTRL_MASKBLEND_DISABLED,
DECL|ebiTFTMBEAlpha|enumerator|ebiTFTMBEAlpha = EBI_TFTCTRL_MASKBLEND_EALPHA,
DECL|ebiTFTMBEMaskAlpha|enumerator|ebiTFTMBEMaskAlpha = EBI_TFTCTRL_MASKBLEND_EMASKEALPHA,
DECL|ebiTFTMBEMask|enumerator|ebiTFTMBEMask = EBI_TFTCTRL_MASKBLEND_EMASK,
DECL|ebiTFTMBIAlpha|enumerator|ebiTFTMBIAlpha = EBI_TFTCTRL_MASKBLEND_IALPHA,
DECL|ebiTFTMBIMaskAlpha|enumerator|ebiTFTMBIMaskAlpha = EBI_TFTCTRL_MASKBLEND_IMASKIALPHA,
DECL|ebiTFTMBIMask|enumerator|ebiTFTMBIMask = EBI_TFTCTRL_MASKBLEND_IMASK,
DECL|ebiTFTWidthByte|enumerator|ebiTFTWidthByte = EBI_TFTCTRL_WIDTH_BYTE,
DECL|ebiTFTWidthHalfWord|enumerator|ebiTFTWidthHalfWord = EBI_TFTCTRL_WIDTH_HALFWORD,
DECL|enable|member|bool enable;
DECL|fbTrigger|member|EBI_TFTFrameBufTrigger_TypeDef fbTrigger;
DECL|hPorchBack|member|int hPorchBack;
DECL|hPorchFront|member|int hPorchFront;
DECL|hPulseWidth|member|int hPulseWidth;
DECL|holdCycles|member|int holdCycles;
DECL|hsize|member|int hsize;
DECL|hsyncPolarity|member|EBI_Polarity_TypeDef hsyncPolarity;
DECL|interleave|member|EBI_TFTInterleave_TypeDef interleave;
DECL|location|member|EBI_Location_TypeDef location;
DECL|maskBlend|member|EBI_TFTMaskBlend_TypeDef maskBlend;
DECL|mode|member|EBI_Mode_TypeDef mode;
DECL|noIdle|member|bool noIdle;
DECL|rePolarity|member|EBI_Polarity_TypeDef rePolarity;
DECL|readHalfRE|member|bool readHalfRE;
DECL|readHoldCycles|member|int readHoldCycles;
DECL|readPageMode|member|bool readPageMode;
DECL|readPrefetch|member|bool readPrefetch;
DECL|readSetupCycles|member|int readSetupCycles;
DECL|readStrobeCycles|member|int readStrobeCycles;
DECL|setupCycles|member|int setupCycles;
DECL|shiftDClk|member|bool shiftDClk;
DECL|startPosition|member|int startPosition;
DECL|vPorchBack|member|int vPorchBack;
DECL|vPorchFront|member|int vPorchFront;
DECL|vPulseWidth|member|int vPulseWidth;
DECL|vsize|member|int vsize;
DECL|vsyncPolarity|member|EBI_Polarity_TypeDef vsyncPolarity;
DECL|wePolarity|member|EBI_Polarity_TypeDef wePolarity;
DECL|width|member|EBI_TFTWidth_TypeDef width;
DECL|writeBufferDisable|member|bool writeBufferDisable;
DECL|writeHalfWE|member|bool writeHalfWE;
DECL|writeHoldCycles|member|int writeHoldCycles;
DECL|writeSetupCycles|member|int writeSetupCycles;
DECL|writeStrobeCycles|member|int writeStrobeCycles;
