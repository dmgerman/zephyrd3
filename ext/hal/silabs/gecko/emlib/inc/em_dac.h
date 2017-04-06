DECL|DAC_Channel0OutputSet|function|__STATIC_INLINE void DAC_Channel0OutputSet( DAC_TypeDef *dac, uint32_t value )
DECL|DAC_Channel1OutputSet|function|__STATIC_INLINE void DAC_Channel1OutputSet( DAC_TypeDef *dac, uint32_t value )
DECL|DAC_ConvMode_TypeDef|typedef|} DAC_ConvMode_TypeDef;
DECL|DAC_INITCHANNEL_DEFAULT|macro|DAC_INITCHANNEL_DEFAULT
DECL|DAC_INIT_DEFAULT|macro|DAC_INIT_DEFAULT
DECL|DAC_InitChannel_TypeDef|typedef|} DAC_InitChannel_TypeDef;
DECL|DAC_Init_TypeDef|typedef|} DAC_Init_TypeDef;
DECL|DAC_IntClear|function|__STATIC_INLINE void DAC_IntClear(DAC_TypeDef *dac, uint32_t flags)
DECL|DAC_IntDisable|function|__STATIC_INLINE void DAC_IntDisable(DAC_TypeDef *dac, uint32_t flags)
DECL|DAC_IntEnable|function|__STATIC_INLINE void DAC_IntEnable(DAC_TypeDef *dac, uint32_t flags)
DECL|DAC_IntGetEnabled|function|__STATIC_INLINE uint32_t DAC_IntGetEnabled(DAC_TypeDef *dac)
DECL|DAC_IntGet|function|__STATIC_INLINE uint32_t DAC_IntGet(DAC_TypeDef *dac)
DECL|DAC_IntSet|function|__STATIC_INLINE void DAC_IntSet(DAC_TypeDef *dac, uint32_t flags)
DECL|DAC_Output_TypeDef|typedef|} DAC_Output_TypeDef;
DECL|DAC_PRSSEL_TypeDef|typedef|} DAC_PRSSEL_TypeDef;
DECL|DAC_REF_VALID|macro|DAC_REF_VALID
DECL|DAC_Ref_TypeDef|typedef|} DAC_Ref_TypeDef;
DECL|DAC_Refresh_TypeDef|typedef|} DAC_Refresh_TypeDef;
DECL|EM_DAC_H|macro|EM_DAC_H
DECL|ch0ResetPre|member|bool ch0ResetPre;
DECL|convMode|member|DAC_ConvMode_TypeDef convMode;
DECL|dacConvModeContinuous|enumerator|dacConvModeContinuous = _DAC_CTRL_CONVMODE_CONTINUOUS, /**< Continuous mode. */
DECL|dacConvModeSampleHold|enumerator|dacConvModeSampleHold = _DAC_CTRL_CONVMODE_SAMPLEHOLD, /**< Sample/hold mode. */
DECL|dacConvModeSampleOff|enumerator|dacConvModeSampleOff = _DAC_CTRL_CONVMODE_SAMPLEOFF /**< Sample/shut off mode. */
DECL|dacOutputADC|enumerator|dacOutputADC = _DAC_CTRL_OUTMODE_ADC, /**< Output to ADC only */
DECL|dacOutputDisable|enumerator|dacOutputDisable = _DAC_CTRL_OUTMODE_DISABLE, /**< Output to pin and ADC disabled. */
DECL|dacOutputPinADC|enumerator|dacOutputPinADC = _DAC_CTRL_OUTMODE_PINADC /**< Output to pin and ADC. */
DECL|dacOutputPin|enumerator|dacOutputPin = _DAC_CTRL_OUTMODE_PIN, /**< Output to pin only. */
DECL|dacPRSSELCh0|enumerator|dacPRSSELCh0 = _DAC_CH0CTRL_PRSSEL_PRSCH0, /**< PRS channel 0. */
DECL|dacPRSSELCh10|enumerator|dacPRSSELCh10 = _DAC_CH0CTRL_PRSSEL_PRSCH10, /**< PRS channel 10. */
DECL|dacPRSSELCh11|enumerator|dacPRSSELCh11 = _DAC_CH0CTRL_PRSSEL_PRSCH11, /**< PRS channel 11. */
DECL|dacPRSSELCh1|enumerator|dacPRSSELCh1 = _DAC_CH0CTRL_PRSSEL_PRSCH1, /**< PRS channel 1. */
DECL|dacPRSSELCh2|enumerator|dacPRSSELCh2 = _DAC_CH0CTRL_PRSSEL_PRSCH2, /**< PRS channel 2. */
DECL|dacPRSSELCh3|enumerator|dacPRSSELCh3 = _DAC_CH0CTRL_PRSSEL_PRSCH3, /**< PRS channel 3. */
DECL|dacPRSSELCh4|enumerator|dacPRSSELCh4 = _DAC_CH0CTRL_PRSSEL_PRSCH4, /**< PRS channel 4. */
DECL|dacPRSSELCh5|enumerator|dacPRSSELCh5 = _DAC_CH0CTRL_PRSSEL_PRSCH5, /**< PRS channel 5. */
DECL|dacPRSSELCh6|enumerator|dacPRSSELCh6 = _DAC_CH0CTRL_PRSSEL_PRSCH6, /**< PRS channel 6. */
DECL|dacPRSSELCh7|enumerator|dacPRSSELCh7 = _DAC_CH0CTRL_PRSSEL_PRSCH7, /**< PRS channel 7. */
DECL|dacPRSSELCh8|enumerator|dacPRSSELCh8 = _DAC_CH0CTRL_PRSSEL_PRSCH8, /**< PRS channel 8. */
DECL|dacPRSSELCh9|enumerator|dacPRSSELCh9 = _DAC_CH0CTRL_PRSSEL_PRSCH9, /**< PRS channel 9. */
DECL|dacRef1V25|enumerator|dacRef1V25 = _DAC_CTRL_REFSEL_1V25, /**< Internal 1.25V bandgap reference. */
DECL|dacRef2V5|enumerator|dacRef2V5 = _DAC_CTRL_REFSEL_2V5, /**< Internal 2.5V bandgap reference. */
DECL|dacRefVDD|enumerator|dacRefVDD = _DAC_CTRL_REFSEL_VDD /**< VDD reference. */
DECL|dacRefresh16|enumerator|dacRefresh16 = _DAC_CTRL_REFRSEL_16CYCLES, /**< Refresh every 16 prescaled cycles. */
DECL|dacRefresh32|enumerator|dacRefresh32 = _DAC_CTRL_REFRSEL_32CYCLES, /**< Refresh every 32 prescaled cycles. */
DECL|dacRefresh64|enumerator|dacRefresh64 = _DAC_CTRL_REFRSEL_64CYCLES /**< Refresh every 64 prescaled cycles. */
DECL|dacRefresh8|enumerator|dacRefresh8 = _DAC_CTRL_REFRSEL_8CYCLES, /**< Refresh every 8 prescaled cycles. */
DECL|diff|member|bool diff;
DECL|enable|member|bool enable;
DECL|lpEnable|member|bool lpEnable;
DECL|outEnablePRS|member|bool outEnablePRS;
DECL|outMode|member|DAC_Output_TypeDef outMode;
DECL|prescale|member|uint8_t prescale;
DECL|prsEnable|member|bool prsEnable;
DECL|prsSel|member|DAC_PRSSEL_TypeDef prsSel;
DECL|reference|member|DAC_Ref_TypeDef reference;
DECL|refreshEnable|member|bool refreshEnable;
DECL|refresh|member|DAC_Refresh_TypeDef refresh;
DECL|sineEnable|member|bool sineEnable;
