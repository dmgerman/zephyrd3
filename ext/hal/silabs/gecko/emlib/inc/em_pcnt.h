DECL|EM_PCNT_H|macro|EM_PCNT_H
DECL|PCNT0_CNT_SIZE|macro|PCNT0_CNT_SIZE
DECL|PCNT0_CNT_SIZE|macro|PCNT0_CNT_SIZE
DECL|PCNT1_CNT_SIZE|macro|PCNT1_CNT_SIZE
DECL|PCNT2_CNT_SIZE|macro|PCNT2_CNT_SIZE
DECL|PCNT_AuxCounterGet|function|__STATIC_INLINE uint32_t PCNT_AuxCounterGet(PCNT_TypeDef *pcnt)
DECL|PCNT_CntEvent_TypeDef|typedef|} PCNT_CntEvent_TypeDef;
DECL|PCNT_CounterGet|function|__STATIC_INLINE uint32_t PCNT_CounterGet(PCNT_TypeDef *pcnt)
DECL|PCNT_CounterSet|function|__STATIC_INLINE void PCNT_CounterSet(PCNT_TypeDef *pcnt, uint32_t count)
DECL|PCNT_FILTER_DEFAULT|macro|PCNT_FILTER_DEFAULT
DECL|PCNT_Filter_TypeDef|typedef|} PCNT_Filter_TypeDef;
DECL|PCNT_INIT_DEFAULT|macro|PCNT_INIT_DEFAULT
DECL|PCNT_INIT_DEFAULT|macro|PCNT_INIT_DEFAULT
DECL|PCNT_Init_TypeDef|typedef|} PCNT_Init_TypeDef;
DECL|PCNT_IntClear|function|__STATIC_INLINE void PCNT_IntClear(PCNT_TypeDef *pcnt, uint32_t flags)
DECL|PCNT_IntDisable|function|__STATIC_INLINE void PCNT_IntDisable(PCNT_TypeDef *pcnt, uint32_t flags)
DECL|PCNT_IntEnable|function|__STATIC_INLINE void PCNT_IntEnable(PCNT_TypeDef *pcnt, uint32_t flags)
DECL|PCNT_IntGetEnabled|function|__STATIC_INLINE uint32_t PCNT_IntGetEnabled(PCNT_TypeDef *pcnt)
DECL|PCNT_IntGet|function|__STATIC_INLINE uint32_t PCNT_IntGet(PCNT_TypeDef *pcnt)
DECL|PCNT_IntSet|function|__STATIC_INLINE void PCNT_IntSet(PCNT_TypeDef *pcnt, uint32_t flags)
DECL|PCNT_Mode_TypeDef|typedef|} PCNT_Mode_TypeDef;
DECL|PCNT_PRSInput_TypeDef|typedef|} PCNT_PRSInput_TypeDef;
DECL|PCNT_PRSSel_TypeDef|typedef|} PCNT_PRSSel_TypeDef;
DECL|PCNT_TCCComp_Typedef|typedef|} PCNT_TCCComp_Typedef;
DECL|PCNT_TCCMode_TypeDef|typedef|} PCNT_TCCMode_TypeDef;
DECL|PCNT_TCCPresc_Typedef|typedef|} PCNT_TCCPresc_Typedef;
DECL|PCNT_TCC_DEFAULT|macro|PCNT_TCC_DEFAULT
DECL|PCNT_TCC_TypeDef|typedef|} PCNT_TCC_TypeDef;
DECL|PCNT_TopBufferGet|function|__STATIC_INLINE uint32_t PCNT_TopBufferGet(PCNT_TypeDef *pcnt)
DECL|PCNT_TopGet|function|__STATIC_INLINE uint32_t PCNT_TopGet(PCNT_TypeDef *pcnt)
DECL|auxCntEvent|member|PCNT_CntEvent_TypeDef auxCntEvent;
DECL|cntEvent|member|PCNT_CntEvent_TypeDef cntEvent;
DECL|compare|member|PCNT_TCCComp_Typedef compare;
DECL|countDown|member|bool countDown;
DECL|counter|member|uint32_t counter;
DECL|filtLen|member|uint8_t filtLen;
DECL|filter|member|bool filter;
DECL|flutterrm|member|bool flutterrm;
DECL|hyst|member|bool hyst;
DECL|mode|member|PCNT_Mode_TypeDef mode;
DECL|mode|member|PCNT_TCCMode_TypeDef mode;
DECL|negEdge|member|bool negEdge;
DECL|pcntCntEventBoth|enumerator|pcntCntEventBoth = _PCNT_CTRL_CNTEV_BOTH,
DECL|pcntCntEventDown|enumerator|pcntCntEventDown = _PCNT_CTRL_CNTEV_DOWN,
DECL|pcntCntEventNone|enumerator|pcntCntEventNone = _PCNT_CTRL_CNTEV_NONE
DECL|pcntCntEventUp|enumerator|pcntCntEventUp = _PCNT_CTRL_CNTEV_UP,
DECL|pcntModeDisable|enumerator|pcntModeDisable = _PCNT_CTRL_MODE_DISABLE,
DECL|pcntModeExtQuad|enumerator|pcntModeExtQuad = _PCNT_CTRL_MODE_EXTCLKQUAD,
DECL|pcntModeExtSingle|enumerator|pcntModeExtSingle = _PCNT_CTRL_MODE_EXTCLKSINGLE,
DECL|pcntModeOvsQuad1|enumerator|pcntModeOvsQuad1 = _PCNT_CTRL_MODE_OVSQUAD1X,
DECL|pcntModeOvsQuad2|enumerator|pcntModeOvsQuad2 = _PCNT_CTRL_MODE_OVSQUAD2X,
DECL|pcntModeOvsQuad4|enumerator|pcntModeOvsQuad4 = _PCNT_CTRL_MODE_OVSQUAD4X,
DECL|pcntModeOvsSingle|enumerator|pcntModeOvsSingle = _PCNT_CTRL_MODE_OVSSINGLE,
DECL|pcntPRSCh0|enumerator|pcntPRSCh0 = 0, /**< PRS channel 0. */
DECL|pcntPRSCh10|enumerator|pcntPRSCh10 = 10, /**< PRS channel 10. */
DECL|pcntPRSCh11|enumerator|pcntPRSCh11 = 11 /**< PRS channel 11. */
DECL|pcntPRSCh1|enumerator|pcntPRSCh1 = 1, /**< PRS channel 1. */
DECL|pcntPRSCh2|enumerator|pcntPRSCh2 = 2, /**< PRS channel 2. */
DECL|pcntPRSCh3|enumerator|pcntPRSCh3 = 3, /**< PRS channel 3. */
DECL|pcntPRSCh4|enumerator|pcntPRSCh4 = 4, /**< PRS channel 4. */
DECL|pcntPRSCh5|enumerator|pcntPRSCh5 = 5, /**< PRS channel 5. */
DECL|pcntPRSCh6|enumerator|pcntPRSCh6 = 6, /**< PRS channel 6. */
DECL|pcntPRSCh7|enumerator|pcntPRSCh7 = 7, /**< PRS channel 7. */
DECL|pcntPRSCh8|enumerator|pcntPRSCh8 = 8, /**< PRS channel 8. */
DECL|pcntPRSCh9|enumerator|pcntPRSCh9 = 9, /**< PRS channel 9. */
DECL|pcntPRSInputS0|enumerator|pcntPRSInputS0 = 0, /** PRS input 0. */
DECL|pcntPRSInputS1|enumerator|pcntPRSInputS1 = 1 /** PRS input 1. */
DECL|prescaler|member|PCNT_TCCPresc_Typedef prescaler;
DECL|prsGateEnable|member|bool prsGateEnable;
DECL|prsPolarity|member|bool prsPolarity;
DECL|s0PRS|member|PCNT_PRSSel_TypeDef s0PRS;
DECL|s1CntDir|member|bool s1CntDir;
DECL|s1PRS|member|PCNT_PRSSel_TypeDef s1PRS;
DECL|tccCompGTOE|enumerator|tccCompGTOE = _PCNT_CTRL_TCCCOMP_GTOE,
DECL|tccCompLTOE|enumerator|tccCompLTOE = _PCNT_CTRL_TCCCOMP_LTOE,
DECL|tccCompRange|enumerator|tccCompRange = _PCNT_CTRL_TCCCOMP_RANGE
DECL|tccModeDisabled|enumerator|tccModeDisabled = _PCNT_CTRL_TCCMODE_DISABLED,
DECL|tccModeLFA|enumerator|tccModeLFA = _PCNT_CTRL_TCCMODE_LFA,
DECL|tccModePRS|enumerator|tccModePRS = _PCNT_CTRL_TCCMODE_PRS
DECL|tccPRS|member|PCNT_PRSSel_TypeDef tccPRS;
DECL|tccPrescDiv1|enumerator|tccPrescDiv1 = _PCNT_CTRL_TCCPRESC_DIV1,
DECL|tccPrescDiv2|enumerator|tccPrescDiv2 = _PCNT_CTRL_TCCPRESC_DIV2,
DECL|tccPrescDiv4|enumerator|tccPrescDiv4 = _PCNT_CTRL_TCCPRESC_DIV4,
DECL|tccPrescDiv8|enumerator|tccPrescDiv8 = _PCNT_CTRL_TCCPRESC_DIV8
DECL|top|member|uint32_t top;
