DECL|AReg|member|uint32_t AReg;
DECL|AShift|member|LCD_AnimShift_TypeDef AShift;
DECL|BReg|member|uint32_t BReg;
DECL|BShift|member|LCD_AnimShift_TypeDef BShift;
DECL|EM_LCD_H|macro|EM_LCD_H
DECL|LCD_AnimEnable|function|__STATIC_INLINE void LCD_AnimEnable(bool enable)
DECL|LCD_AnimInit_TypeDef|typedef|} LCD_AnimInit_TypeDef;
DECL|LCD_AnimLogic_TypeDef|typedef|} LCD_AnimLogic_TypeDef;
DECL|LCD_AnimShift_TypeDef|typedef|} LCD_AnimShift_TypeDef;
DECL|LCD_AnimState|function|__STATIC_INLINE int LCD_AnimState(void)
DECL|LCD_Bias_TypeDef|typedef|} LCD_Bias_TypeDef;
DECL|LCD_BlankEnable|function|__STATIC_INLINE void LCD_BlankEnable(bool enable)
DECL|LCD_BlinkEnable|function|__STATIC_INLINE void LCD_BlinkEnable(bool enable)
DECL|LCD_BlinkState|function|__STATIC_INLINE int LCD_BlinkState(void)
DECL|LCD_ConConf_TypeDef|typedef|} LCD_ConConf_TypeDef;
DECL|LCD_DSCEnable|function|__STATIC_INLINE void LCD_DSCEnable(bool enable)
DECL|LCD_Enable|function|__STATIC_INLINE void LCD_Enable(bool enable)
DECL|LCD_FCPreScale_TypeDef|typedef|} LCD_FCPreScale_TypeDef;
DECL|LCD_FrameCountEnable|function|__STATIC_INLINE void LCD_FrameCountEnable(bool enable)
DECL|LCD_FrameCountInit_TypeDef|typedef|} LCD_FrameCountInit_TypeDef;
DECL|LCD_FreezeEnable|function|__STATIC_INLINE void LCD_FreezeEnable(bool enable)
DECL|LCD_INIT_DEFAULT|macro|LCD_INIT_DEFAULT
DECL|LCD_Init_TypeDef|typedef|} LCD_Init_TypeDef;
DECL|LCD_IntClear|function|__STATIC_INLINE void LCD_IntClear(uint32_t flags)
DECL|LCD_IntDisable|function|__STATIC_INLINE void LCD_IntDisable(uint32_t flags)
DECL|LCD_IntEnable|function|__STATIC_INLINE void LCD_IntEnable(uint32_t flags)
DECL|LCD_IntGetEnabled|function|__STATIC_INLINE uint32_t LCD_IntGetEnabled(void)
DECL|LCD_IntGet|function|__STATIC_INLINE uint32_t LCD_IntGet(void)
DECL|LCD_IntSet|function|__STATIC_INLINE void LCD_IntSet(uint32_t flags)
DECL|LCD_Mux_TypeDef|typedef|} LCD_Mux_TypeDef;
DECL|LCD_SegmentRange_TypeDef|typedef|} LCD_SegmentRange_TypeDef;
DECL|LCD_SyncBusyDelay|function|__STATIC_INLINE void LCD_SyncBusyDelay(uint32_t flags)
DECL|LCD_SyncBusyGet|function|__STATIC_INLINE uint32_t LCD_SyncBusyGet(void)
DECL|LCD_UpdateCtrl_TypeDef|typedef|} LCD_UpdateCtrl_TypeDef;
DECL|LCD_VBoostLevel_TypeDef|typedef|} LCD_VBoostLevel_TypeDef;
DECL|LCD_VLCDSel_TypeDef|typedef|} LCD_VLCDSel_TypeDef;
DECL|LCD_Wave_TypeDef|typedef|} LCD_Wave_TypeDef;
DECL|animLogic|member|LCD_AnimLogic_TypeDef animLogic;
DECL|bias|member|LCD_Bias_TypeDef bias;
DECL|contrast|member|LCD_ConConf_TypeDef contrast;
DECL|enable|member|bool enable;
DECL|enable|member|bool enable;
DECL|enable|member|bool enable;
DECL|lcdAnimLogicAnd|enumerator|lcdAnimLogicAnd = LCD_BACTRL_ALOGSEL_AND,
DECL|lcdAnimLogicOr|enumerator|lcdAnimLogicOr = LCD_BACTRL_ALOGSEL_OR
DECL|lcdAnimShiftLeft|enumerator|lcdAnimShiftLeft = _LCD_BACTRL_AREGASC_SHIFTLEFT,
DECL|lcdAnimShiftNone|enumerator|lcdAnimShiftNone = _LCD_BACTRL_AREGASC_NOSHIFT,
DECL|lcdAnimShiftRight|enumerator|lcdAnimShiftRight = _LCD_BACTRL_AREGASC_SHIFTRIGHT
DECL|lcdBiasOneFourth|enumerator|lcdBiasOneFourth = LCD_DISPCTRL_BIAS_ONEFOURTH,
DECL|lcdBiasOneHalf|enumerator|lcdBiasOneHalf = LCD_DISPCTRL_BIAS_ONEHALF,
DECL|lcdBiasOneThird|enumerator|lcdBiasOneThird = LCD_DISPCTRL_BIAS_ONETHIRD,
DECL|lcdBiasStatic|enumerator|lcdBiasStatic = LCD_DISPCTRL_BIAS_STATIC,
DECL|lcdConConfGND|enumerator|lcdConConfGND = LCD_DISPCTRL_CONCONF_GND
DECL|lcdConConfVLCD|enumerator|lcdConConfVLCD = LCD_DISPCTRL_CONCONF_VLCD,
DECL|lcdFCPrescDiv1|enumerator|lcdFCPrescDiv1 = LCD_BACTRL_FCPRESC_DIV1,
DECL|lcdFCPrescDiv2|enumerator|lcdFCPrescDiv2 = LCD_BACTRL_FCPRESC_DIV2,
DECL|lcdFCPrescDiv4|enumerator|lcdFCPrescDiv4 = LCD_BACTRL_FCPRESC_DIV4,
DECL|lcdFCPrescDiv8|enumerator|lcdFCPrescDiv8 = LCD_BACTRL_FCPRESC_DIV8
DECL|lcdMuxDuplex|enumerator|lcdMuxDuplex = LCD_DISPCTRL_MUX_DUPLEX,
DECL|lcdMuxOctaplex|enumerator|lcdMuxOctaplex = LCD_DISPCTRL_MUXE_MUXE | LCD_DISPCTRL_MUX_QUADRUPLEX
DECL|lcdMuxQuadruplex|enumerator|lcdMuxQuadruplex = LCD_DISPCTRL_MUX_QUADRUPLEX,
DECL|lcdMuxSextaplex|enumerator|lcdMuxSextaplex = LCD_DISPCTRL_MUXE_MUXE | LCD_DISPCTRL_MUX_DUPLEX,
DECL|lcdMuxStatic|enumerator|lcdMuxStatic = LCD_DISPCTRL_MUX_STATIC,
DECL|lcdMuxTriplex|enumerator|lcdMuxTriplex = LCD_DISPCTRL_MUX_TRIPLEX,
DECL|lcdSegment0_3|enumerator|lcdSegment0_3 = (1 << 0),
DECL|lcdSegment12_15|enumerator|lcdSegment12_15 = (1 << 3),
DECL|lcdSegment16_19|enumerator|lcdSegment16_19 = (1 << 4),
DECL|lcdSegment20_23|enumerator|lcdSegment20_23 = (1 << 5),
DECL|lcdSegment4_7|enumerator|lcdSegment4_7 = (1 << 1),
DECL|lcdSegment8_11|enumerator|lcdSegment8_11 = (1 << 2),
DECL|lcdSegmentAll|enumerator|lcdSegmentAll = (0x003f)
DECL|lcdUpdateCtrlFCEvent|enumerator|lcdUpdateCtrlFCEvent = LCD_CTRL_UDCTRL_FCEVENT,
DECL|lcdUpdateCtrlFrameStart|enumerator|lcdUpdateCtrlFrameStart = LCD_CTRL_UDCTRL_FRAMESTART
DECL|lcdUpdateCtrlRegular|enumerator|lcdUpdateCtrlRegular = LCD_CTRL_UDCTRL_REGULAR,
DECL|lcdVBoostLevel0|enumerator|lcdVBoostLevel0 = LCD_DISPCTRL_VBLEV_LEVEL0, /**< Voltage boost LEVEL0 */
DECL|lcdVBoostLevel1|enumerator|lcdVBoostLevel1 = LCD_DISPCTRL_VBLEV_LEVEL1, /**< Voltage boost LEVEL1 */
DECL|lcdVBoostLevel2|enumerator|lcdVBoostLevel2 = LCD_DISPCTRL_VBLEV_LEVEL2, /**< Voltage boost LEVEL2 */
DECL|lcdVBoostLevel3|enumerator|lcdVBoostLevel3 = LCD_DISPCTRL_VBLEV_LEVEL3, /**< Voltage boost LEVEL3 */
DECL|lcdVBoostLevel4|enumerator|lcdVBoostLevel4 = LCD_DISPCTRL_VBLEV_LEVEL4, /**< Voltage boost LEVEL4 */
DECL|lcdVBoostLevel5|enumerator|lcdVBoostLevel5 = LCD_DISPCTRL_VBLEV_LEVEL5, /**< Voltage boost LEVEL5 */
DECL|lcdVBoostLevel6|enumerator|lcdVBoostLevel6 = LCD_DISPCTRL_VBLEV_LEVEL6, /**< Voltage boost LEVEL6 */
DECL|lcdVBoostLevel7|enumerator|lcdVBoostLevel7 = LCD_DISPCTRL_VBLEV_LEVEL7 /**< Voltage boost LEVEL7 */
DECL|lcdVLCDSelVDD|enumerator|lcdVLCDSelVDD = LCD_DISPCTRL_VLCDSEL_VDD,
DECL|lcdVLCDSelVExtBoost|enumerator|lcdVLCDSelVExtBoost = LCD_DISPCTRL_VLCDSEL_VEXTBOOST
DECL|lcdWaveLowPower|enumerator|lcdWaveLowPower = LCD_DISPCTRL_WAVE_LOWPOWER,
DECL|lcdWaveNormal|enumerator|lcdWaveNormal = LCD_DISPCTRL_WAVE_NORMAL
DECL|mux|member|LCD_Mux_TypeDef mux;
DECL|prescale|member|LCD_FCPreScale_TypeDef prescale;
DECL|startSeg|member|int startSeg;
DECL|top|member|uint32_t top;
DECL|vlcd|member|LCD_VLCDSel_TypeDef vlcd;
DECL|wave|member|LCD_Wave_TypeDef wave;
