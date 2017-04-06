DECL|EM_VDAC_H|macro|EM_VDAC_H
DECL|VDAC_Channel0OutputSet|function|__STATIC_INLINE void VDAC_Channel0OutputSet(VDAC_TypeDef *vdac, uint32_t value)
DECL|VDAC_Channel1OutputSet|function|__STATIC_INLINE void VDAC_Channel1OutputSet(VDAC_TypeDef *vdac, uint32_t value)
DECL|VDAC_INITCHANNEL_DEFAULT|macro|VDAC_INITCHANNEL_DEFAULT
DECL|VDAC_INIT_DEFAULT|macro|VDAC_INIT_DEFAULT
DECL|VDAC_InitChannel_TypeDef|typedef|} VDAC_InitChannel_TypeDef;
DECL|VDAC_Init_TypeDef|typedef|} VDAC_Init_TypeDef;
DECL|VDAC_IntClear|function|__STATIC_INLINE void VDAC_IntClear(VDAC_TypeDef *vdac, uint32_t flags)
DECL|VDAC_IntDisable|function|__STATIC_INLINE void VDAC_IntDisable(VDAC_TypeDef *vdac, uint32_t flags)
DECL|VDAC_IntEnable|function|__STATIC_INLINE void VDAC_IntEnable(VDAC_TypeDef *vdac, uint32_t flags)
DECL|VDAC_IntGetEnabled|function|__STATIC_INLINE uint32_t VDAC_IntGetEnabled(VDAC_TypeDef *vdac)
DECL|VDAC_IntGet|function|__STATIC_INLINE uint32_t VDAC_IntGet(VDAC_TypeDef *vdac)
DECL|VDAC_IntSet|function|__STATIC_INLINE void VDAC_IntSet(VDAC_TypeDef *vdac, uint32_t flags)
DECL|VDAC_PrsSel_TypeDef|typedef|} VDAC_PrsSel_TypeDef;
DECL|VDAC_REF_VALID|macro|VDAC_REF_VALID
DECL|VDAC_Ref_TypeDef|typedef|} VDAC_Ref_TypeDef;
DECL|VDAC_Refresh_TypeDef|typedef|} VDAC_Refresh_TypeDef;
DECL|VDAC_TrigMode_TypeDef|typedef|} VDAC_TrigMode_TypeDef;
DECL|asyncClockMode|member|bool asyncClockMode;
DECL|ch0ResetPre|member|bool ch0ResetPre;
DECL|diff|member|bool diff;
DECL|enable|member|bool enable;
DECL|mainCalibration|member|bool mainCalibration;
DECL|outEnablePRS|member|bool outEnablePRS;
DECL|prescaler|member|uint32_t prescaler;
DECL|prsAsync|member|bool prsAsync;
DECL|prsSel|member|VDAC_PrsSel_TypeDef prsSel;
DECL|reference|member|VDAC_Ref_TypeDef reference;
DECL|refresh|member|VDAC_Refresh_TypeDef refresh;
DECL|sampleOffMode|member|bool sampleOffMode;
DECL|sineEnable|member|bool sineEnable;
DECL|trigMode|member|VDAC_TrigMode_TypeDef trigMode;
DECL|vdacPrsSelCh0|enumerator|vdacPrsSelCh0 = _VDAC_CH0CTRL_PRSSEL_PRSCH0 , /**< PRS ch 0 triggers conversion. */
DECL|vdacPrsSelCh10|enumerator|vdacPrsSelCh10 = _VDAC_CH0CTRL_PRSSEL_PRSCH10, /**< PRS ch 10 triggers conversion. */
DECL|vdacPrsSelCh11|enumerator|vdacPrsSelCh11 = _VDAC_CH0CTRL_PRSSEL_PRSCH11, /**< PRS ch 11 triggers conversion. */
DECL|vdacPrsSelCh1|enumerator|vdacPrsSelCh1 = _VDAC_CH0CTRL_PRSSEL_PRSCH1 , /**< PRS ch 1 triggers conversion. */
DECL|vdacPrsSelCh2|enumerator|vdacPrsSelCh2 = _VDAC_CH0CTRL_PRSSEL_PRSCH2 , /**< PRS ch 2 triggers conversion. */
DECL|vdacPrsSelCh3|enumerator|vdacPrsSelCh3 = _VDAC_CH0CTRL_PRSSEL_PRSCH3 , /**< PRS ch 3 triggers conversion. */
DECL|vdacPrsSelCh4|enumerator|vdacPrsSelCh4 = _VDAC_CH0CTRL_PRSSEL_PRSCH4 , /**< PRS ch 4 triggers conversion. */
DECL|vdacPrsSelCh5|enumerator|vdacPrsSelCh5 = _VDAC_CH0CTRL_PRSSEL_PRSCH5 , /**< PRS ch 5 triggers conversion. */
DECL|vdacPrsSelCh6|enumerator|vdacPrsSelCh6 = _VDAC_CH0CTRL_PRSSEL_PRSCH6 , /**< PRS ch 6 triggers conversion. */
DECL|vdacPrsSelCh7|enumerator|vdacPrsSelCh7 = _VDAC_CH0CTRL_PRSSEL_PRSCH7 , /**< PRS ch 7 triggers conversion. */
DECL|vdacPrsSelCh8|enumerator|vdacPrsSelCh8 = _VDAC_CH0CTRL_PRSSEL_PRSCH8 , /**< PRS ch 8 triggers conversion. */
DECL|vdacPrsSelCh9|enumerator|vdacPrsSelCh9 = _VDAC_CH0CTRL_PRSSEL_PRSCH9 , /**< PRS ch 9 triggers conversion. */
DECL|vdacRef1V25Ln|enumerator|vdacRef1V25Ln = _VDAC_CTRL_REFSEL_1V25LN, /**< Internal low noise 1.25 V bandgap reference. */
DECL|vdacRef1V25|enumerator|vdacRef1V25 = _VDAC_CTRL_REFSEL_1V25, /**< Internal 1.25 V bandgap reference. */
DECL|vdacRef2V5Ln|enumerator|vdacRef2V5Ln = _VDAC_CTRL_REFSEL_2V5LN, /**< Internal low noise 2.5 V bandgap reference. */
DECL|vdacRef2V5|enumerator|vdacRef2V5 = _VDAC_CTRL_REFSEL_2V5, /**< Internal 2.5 V bandgap reference. */
DECL|vdacRefAvdd|enumerator|vdacRefAvdd = _VDAC_CTRL_REFSEL_VDD, /**< AVDD reference. */
DECL|vdacRefExtPin|enumerator|vdacRefExtPin = _VDAC_CTRL_REFSEL_EXT, /**< External pin reference. */
DECL|vdacRefresh16|enumerator|vdacRefresh16 = _VDAC_CTRL_REFRESHPERIOD_16CYCLES, /**< Refresh every 16 clock cycles. */
DECL|vdacRefresh32|enumerator|vdacRefresh32 = _VDAC_CTRL_REFRESHPERIOD_32CYCLES, /**< Refresh every 32 clock cycles. */
DECL|vdacRefresh64|enumerator|vdacRefresh64 = _VDAC_CTRL_REFRESHPERIOD_64CYCLES, /**< Refresh every 64 clock cycles. */
DECL|vdacRefresh8|enumerator|vdacRefresh8 = _VDAC_CTRL_REFRESHPERIOD_8CYCLES, /**< Refresh every 8 clock cycles. */
DECL|vdacTrigModeLesense|enumerator|vdacTrigModeLesense = _VDAC_CH0CTRL_TRIGMODE_LESENSE, /**< Channel is triggered by LESENSE. */
DECL|vdacTrigModePrs|enumerator|vdacTrigModePrs = _VDAC_CH0CTRL_TRIGMODE_PRS, /**< Channel is triggered by PRS input. */
DECL|vdacTrigModeRefresh|enumerator|vdacTrigModeRefresh = _VDAC_CH0CTRL_TRIGMODE_REFRESH, /**< Channel is triggered by Refresh timer. */
DECL|vdacTrigModeSwPrs|enumerator|vdacTrigModeSwPrs = _VDAC_CH0CTRL_TRIGMODE_SWPRS, /**< Channel is triggered by CHnDATA/COMBDATA write or PRS input. */
DECL|vdacTrigModeSwRefresh|enumerator|vdacTrigModeSwRefresh = _VDAC_CH0CTRL_TRIGMODE_SWREFRESH, /**< Channel is triggered by CHnDATA/COMBDATA write or Refresh timer. */
DECL|vdacTrigModeSw|enumerator|vdacTrigModeSw = _VDAC_CH0CTRL_TRIGMODE_SW, /**< Channel is triggered by CHnDATA or COMBDATA write. */
DECL|warmupKeepOn|member|bool warmupKeepOn;
