DECL|EM_LETIMER_H|macro|EM_LETIMER_H
DECL|LETIMER_CounterGet|function|__STATIC_INLINE uint32_t LETIMER_CounterGet(LETIMER_TypeDef *letimer)
DECL|LETIMER_INIT_DEFAULT|macro|LETIMER_INIT_DEFAULT
DECL|LETIMER_INIT_DEFAULT|macro|LETIMER_INIT_DEFAULT
DECL|LETIMER_Init_TypeDef|typedef|} LETIMER_Init_TypeDef;
DECL|LETIMER_IntClear|function|__STATIC_INLINE void LETIMER_IntClear(LETIMER_TypeDef *letimer, uint32_t flags)
DECL|LETIMER_IntDisable|function|__STATIC_INLINE void LETIMER_IntDisable(LETIMER_TypeDef *letimer, uint32_t flags)
DECL|LETIMER_IntEnable|function|__STATIC_INLINE void LETIMER_IntEnable(LETIMER_TypeDef *letimer, uint32_t flags)
DECL|LETIMER_IntGetEnabled|function|__STATIC_INLINE uint32_t LETIMER_IntGetEnabled(LETIMER_TypeDef *letimer)
DECL|LETIMER_IntGet|function|__STATIC_INLINE uint32_t LETIMER_IntGet(LETIMER_TypeDef *letimer)
DECL|LETIMER_IntSet|function|__STATIC_INLINE void LETIMER_IntSet(LETIMER_TypeDef *letimer, uint32_t flags)
DECL|LETIMER_RepeatMode_TypeDef|typedef|} LETIMER_RepeatMode_TypeDef;
DECL|LETIMER_UFOA_TypeDef|typedef|} LETIMER_UFOA_TypeDef;
DECL|bufTop|member|bool bufTop; /**< Load COMP1 into COMP0 when REP0 reaches 0. */
DECL|comp0Top|member|bool comp0Top; /**< Load COMP0 register into CNT when counter underflows. */
DECL|debugRun|member|bool debugRun; /**< Counter shall keep running during debug halt. */
DECL|enable|member|bool enable; /**< Start counting when init completed. */
DECL|letimerRepeatBuffered|enumerator|letimerRepeatBuffered = _LETIMER_CTRL_REPMODE_BUFFERED,
DECL|letimerRepeatDouble|enumerator|letimerRepeatDouble = _LETIMER_CTRL_REPMODE_DOUBLE
DECL|letimerRepeatFree|enumerator|letimerRepeatFree = _LETIMER_CTRL_REPMODE_FREE,
DECL|letimerRepeatOneshot|enumerator|letimerRepeatOneshot = _LETIMER_CTRL_REPMODE_ONESHOT,
DECL|letimerUFOANone|enumerator|letimerUFOANone = _LETIMER_CTRL_UFOA0_NONE,
DECL|letimerUFOAPulse|enumerator|letimerUFOAPulse = _LETIMER_CTRL_UFOA0_PULSE,
DECL|letimerUFOAPwm|enumerator|letimerUFOAPwm = _LETIMER_CTRL_UFOA0_PWM
DECL|letimerUFOAToggle|enumerator|letimerUFOAToggle = _LETIMER_CTRL_UFOA0_TOGGLE,
DECL|out0Pol|member|uint8_t out0Pol; /**< Idle value for output 0. */
DECL|out1Pol|member|uint8_t out1Pol; /**< Idle value for output 1. */
DECL|repMode|member|LETIMER_RepeatMode_TypeDef repMode; /**< Repeat mode. */
DECL|rtcComp0Enable|member|bool rtcComp0Enable; /**< Start counting on RTC COMP0 match. */
DECL|rtcComp1Enable|member|bool rtcComp1Enable; /**< Start counting on RTC COMP1 match. */
DECL|ufoa0|member|LETIMER_UFOA_TypeDef ufoa0; /**< Underflow output 0 action. */
DECL|ufoa1|member|LETIMER_UFOA_TypeDef ufoa1; /**< Underflow output 1 action. */
