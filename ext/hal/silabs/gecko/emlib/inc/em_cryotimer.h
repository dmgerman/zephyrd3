DECL|CRYOTIMER_CounterGet|function|__STATIC_INLINE uint32_t CRYOTIMER_CounterGet(void)
DECL|CRYOTIMER_EM4WakeupEnable|function|__STATIC_INLINE void CRYOTIMER_EM4WakeupEnable(bool enable)
DECL|CRYOTIMER_Enable|function|__STATIC_INLINE void CRYOTIMER_Enable(bool enable)
DECL|CRYOTIMER_INIT_DEFAULT|macro|CRYOTIMER_INIT_DEFAULT
DECL|CRYOTIMER_Init_TypeDef|typedef|} CRYOTIMER_Init_TypeDef;
DECL|CRYOTIMER_IntClear|function|__STATIC_INLINE void CRYOTIMER_IntClear(uint32_t flags)
DECL|CRYOTIMER_IntDisable|function|__STATIC_INLINE void CRYOTIMER_IntDisable(uint32_t flags)
DECL|CRYOTIMER_IntEnable|function|__STATIC_INLINE void CRYOTIMER_IntEnable(uint32_t flags)
DECL|CRYOTIMER_IntGetEnabled|function|__STATIC_INLINE uint32_t CRYOTIMER_IntGetEnabled(void)
DECL|CRYOTIMER_IntGet|function|__STATIC_INLINE uint32_t CRYOTIMER_IntGet(void)
DECL|CRYOTIMER_IntSet|function|__STATIC_INLINE void CRYOTIMER_IntSet(uint32_t flags)
DECL|CRYOTIMER_Osc_TypeDef|typedef|} CRYOTIMER_Osc_TypeDef;
DECL|CRYOTIMER_PeriodGet|function|__STATIC_INLINE uint32_t CRYOTIMER_PeriodGet(void)
DECL|CRYOTIMER_PeriodSet|function|__STATIC_INLINE void CRYOTIMER_PeriodSet(uint32_t period)
DECL|CRYOTIMER_Period_TypeDef|typedef|} CRYOTIMER_Period_TypeDef;
DECL|CRYOTIMER_Presc_TypeDef|typedef|} CRYOTIMER_Presc_TypeDef;
DECL|EM_CRYOTIMER_H|macro|EM_CRYOTIMER_H
DECL|cryotimerOscLFRCO|enumerator|cryotimerOscLFRCO = _CRYOTIMER_CTRL_OSCSEL_LFRCO, /**< Select Low Frequency RC Oscillator. */
DECL|cryotimerOscLFXO|enumerator|cryotimerOscLFXO = _CRYOTIMER_CTRL_OSCSEL_LFXO, /**< Select Low Frequency Crystal Oscillator. */
DECL|cryotimerOscULFRCO|enumerator|cryotimerOscULFRCO = _CRYOTIMER_CTRL_OSCSEL_ULFRCO, /**< Select Ultra Low Frequency RC Oscillator. */
DECL|cryotimerPeriod_1024m|enumerator|cryotimerPeriod_1024m = 30, /**< Wakeup event after 1024m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_128k|enumerator|cryotimerPeriod_128k = 17, /**< Wakeup event after 128k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_128m|enumerator|cryotimerPeriod_128m = 27, /**< Wakeup event after 128m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_128|enumerator|cryotimerPeriod_128 = 7, /**< Wakeup event after 128 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_16k|enumerator|cryotimerPeriod_16k = 14, /**< Wakeup event after 16k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_16m|enumerator|cryotimerPeriod_16m = 24, /**< Wakeup event after 16m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_16|enumerator|cryotimerPeriod_16 = 4, /**< Wakeup event after 16 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_1k|enumerator|cryotimerPeriod_1k = 10, /**< Wakeup event after 1k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_1m|enumerator|cryotimerPeriod_1m = 20, /**< Wakeup event after 1m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_1|enumerator|cryotimerPeriod_1 = 0, /**< Wakeup event after every Pre-scaled clock cycle. */
DECL|cryotimerPeriod_2048m|enumerator|cryotimerPeriod_2048m = 31, /**< Wakeup event after 2048m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_256k|enumerator|cryotimerPeriod_256k = 18, /**< Wakeup event after 256k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_256m|enumerator|cryotimerPeriod_256m = 28, /**< Wakeup event after 256m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_256|enumerator|cryotimerPeriod_256 = 8, /**< Wakeup event after 256 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_2k|enumerator|cryotimerPeriod_2k = 11, /**< Wakeup event after 2k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_2m|enumerator|cryotimerPeriod_2m = 21, /**< Wakeup event after 2m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_2|enumerator|cryotimerPeriod_2 = 1, /**< Wakeup event after 2 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_32k|enumerator|cryotimerPeriod_32k = 15, /**< Wakeup event after 32k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_32m|enumerator|cryotimerPeriod_32m = 25, /**< Wakeup event after 32m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_32|enumerator|cryotimerPeriod_32 = 5, /**< Wakeup event after 32 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_4096m|enumerator|cryotimerPeriod_4096m = 32, /**< Wakeup event after 4096m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_4k|enumerator|cryotimerPeriod_4k = 12, /**< Wakeup event after 4k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_4m|enumerator|cryotimerPeriod_4m = 22, /**< Wakeup event after 4m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_4|enumerator|cryotimerPeriod_4 = 2, /**< Wakeup event after 4 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_512k|enumerator|cryotimerPeriod_512k = 19, /**< Wakeup event after 512k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_512m|enumerator|cryotimerPeriod_512m = 29, /**< Wakeup event after 512m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_512|enumerator|cryotimerPeriod_512 = 9, /**< Wakeup event after 512 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_64k|enumerator|cryotimerPeriod_64k = 16, /**< Wakeup event after 64k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_64m|enumerator|cryotimerPeriod_64m = 26, /**< Wakeup event after 64m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_64|enumerator|cryotimerPeriod_64 = 6, /**< Wakeup event after 64 Pre-scaled clock cycles. */
DECL|cryotimerPeriod_8k|enumerator|cryotimerPeriod_8k = 13, /**< Wakeup event after 8k Pre-scaled clock cycles. */
DECL|cryotimerPeriod_8m|enumerator|cryotimerPeriod_8m = 23, /**< Wakeup event after 8m Pre-scaled clock cycles. */
DECL|cryotimerPeriod_8|enumerator|cryotimerPeriod_8 = 3, /**< Wakeup event after 8 Pre-scaled clock cycles. */
DECL|cryotimerPresc_128|enumerator|cryotimerPresc_128 = _CRYOTIMER_CTRL_PRESC_DIV128, /**< Divide clock by 128. */
DECL|cryotimerPresc_16|enumerator|cryotimerPresc_16 = _CRYOTIMER_CTRL_PRESC_DIV16, /**< Divide clock by 16. */
DECL|cryotimerPresc_1|enumerator|cryotimerPresc_1 = _CRYOTIMER_CTRL_PRESC_DIV1, /**< Divide clock by 1. */
DECL|cryotimerPresc_2|enumerator|cryotimerPresc_2 = _CRYOTIMER_CTRL_PRESC_DIV2, /**< Divide clock by 2. */
DECL|cryotimerPresc_32|enumerator|cryotimerPresc_32 = _CRYOTIMER_CTRL_PRESC_DIV32, /**< Divide clock by 32. */
DECL|cryotimerPresc_4|enumerator|cryotimerPresc_4 = _CRYOTIMER_CTRL_PRESC_DIV4, /**< Divide clock by 4. */
DECL|cryotimerPresc_64|enumerator|cryotimerPresc_64 = _CRYOTIMER_CTRL_PRESC_DIV64, /**< Divide clock by 64. */
DECL|cryotimerPresc_8|enumerator|cryotimerPresc_8 = _CRYOTIMER_CTRL_PRESC_DIV8, /**< Divide clock by 8. */
DECL|debugRun|member|bool debugRun;
DECL|em4Wakeup|member|bool em4Wakeup;
DECL|enable|member|bool enable;
DECL|osc|member|CRYOTIMER_Osc_TypeDef osc;
DECL|period|member|CRYOTIMER_Period_TypeDef period;
DECL|presc|member|CRYOTIMER_Presc_TypeDef presc;
