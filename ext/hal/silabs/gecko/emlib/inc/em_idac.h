DECL|EM_IDAC_H|macro|EM_IDAC_H
DECL|IDAC_INIT_DEFAULT|macro|IDAC_INIT_DEFAULT
DECL|IDAC_INIT_DEFAULT|macro|IDAC_INIT_DEFAULT
DECL|IDAC_Init_TypeDef|typedef|} IDAC_Init_TypeDef;
DECL|IDAC_IntClear|function|__STATIC_INLINE void IDAC_IntClear(IDAC_TypeDef *idac, uint32_t flags)
DECL|IDAC_IntDisable|function|__STATIC_INLINE void IDAC_IntDisable(IDAC_TypeDef *idac, uint32_t flags)
DECL|IDAC_IntEnable|function|__STATIC_INLINE void IDAC_IntEnable(IDAC_TypeDef *idac, uint32_t flags)
DECL|IDAC_IntGetEnabled|function|__STATIC_INLINE uint32_t IDAC_IntGetEnabled(IDAC_TypeDef *idac)
DECL|IDAC_IntGet|function|__STATIC_INLINE uint32_t IDAC_IntGet(IDAC_TypeDef *idac)
DECL|IDAC_IntSet|function|__STATIC_INLINE void IDAC_IntSet(IDAC_TypeDef *idac, uint32_t flags)
DECL|IDAC_OutMode_TypeDef|typedef|} IDAC_OutMode_TypeDef;
DECL|IDAC_PRSSEL_TypeDef|typedef|} IDAC_PRSSEL_TypeDef;
DECL|IDAC_REF_VALID|macro|IDAC_REF_VALID
DECL|IDAC_Range_TypeDef|typedef|} IDAC_Range_TypeDef;
DECL|enable|member|bool enable;
DECL|idacCurrentRange0|enumerator|idacCurrentRange0 = IDAC_CURPROG_RANGESEL_RANGE0, /**< current range 0. */
DECL|idacCurrentRange1|enumerator|idacCurrentRange1 = IDAC_CURPROG_RANGESEL_RANGE1, /**< current range 1. */
DECL|idacCurrentRange2|enumerator|idacCurrentRange2 = IDAC_CURPROG_RANGESEL_RANGE2, /**< current range 2. */
DECL|idacCurrentRange3|enumerator|idacCurrentRange3 = IDAC_CURPROG_RANGESEL_RANGE3, /**< current range 3. */
DECL|idacOutputADC|enumerator|idacOutputADC = IDAC_CTRL_OUTMODE_ADC /**< Output to ADC */
DECL|idacOutputPin|enumerator|idacOutputPin = IDAC_CTRL_OUTMODE_PIN, /**< Output to IDAC OUT pin */
DECL|idacPRSSELCh0|enumerator|idacPRSSELCh0 = IDAC_CTRL_PRSSEL_PRSCH0, /**< PRS channel 0. */
DECL|idacPRSSELCh10|enumerator|idacPRSSELCh10 = IDAC_CTRL_PRSSEL_PRSCH10, /**< PRS channel 10 */
DECL|idacPRSSELCh11|enumerator|idacPRSSELCh11 = IDAC_CTRL_PRSSEL_PRSCH11, /**< PRS channel 11 */
DECL|idacPRSSELCh1|enumerator|idacPRSSELCh1 = IDAC_CTRL_PRSSEL_PRSCH1, /**< PRS channel 1. */
DECL|idacPRSSELCh2|enumerator|idacPRSSELCh2 = IDAC_CTRL_PRSSEL_PRSCH2, /**< PRS channel 2. */
DECL|idacPRSSELCh3|enumerator|idacPRSSELCh3 = IDAC_CTRL_PRSSEL_PRSCH3, /**< PRS channel 3. */
DECL|idacPRSSELCh4|enumerator|idacPRSSELCh4 = IDAC_CTRL_PRSSEL_PRSCH4, /**< PRS channel 4. */
DECL|idacPRSSELCh5|enumerator|idacPRSSELCh5 = IDAC_CTRL_PRSSEL_PRSCH5, /**< PRS channel 5. */
DECL|idacPRSSELCh6|enumerator|idacPRSSELCh6 = IDAC_CTRL_PRSSEL_PRSCH6, /**< PRS channel 6. */
DECL|idacPRSSELCh7|enumerator|idacPRSSELCh7 = IDAC_CTRL_PRSSEL_PRSCH7, /**< PRS channel 7. */
DECL|idacPRSSELCh8|enumerator|idacPRSSELCh8 = IDAC_CTRL_PRSSEL_PRSCH8, /**< PRS channel 8. */
DECL|idacPRSSELCh9|enumerator|idacPRSSELCh9 = IDAC_CTRL_PRSSEL_PRSCH9, /**< PRS channel 9. */
DECL|outMode|member|IDAC_OutMode_TypeDef outMode;
DECL|prsEnable|member|bool prsEnable;
DECL|prsSel|member|IDAC_PRSSEL_TypeDef prsSel;
DECL|sinkEnable|member|bool sinkEnable;
