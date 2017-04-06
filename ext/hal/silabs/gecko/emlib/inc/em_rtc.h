DECL|EM_RTC_H|macro|EM_RTC_H
DECL|RTC_CounterGet|function|__STATIC_INLINE uint32_t RTC_CounterGet(void)
DECL|RTC_CounterSet|function|__STATIC_INLINE void RTC_CounterSet(uint32_t value)
DECL|RTC_INIT_DEFAULT|macro|RTC_INIT_DEFAULT
DECL|RTC_Init_TypeDef|typedef|} RTC_Init_TypeDef;
DECL|RTC_IntClear|function|__STATIC_INLINE void RTC_IntClear(uint32_t flags)
DECL|RTC_IntDisable|function|__STATIC_INLINE void RTC_IntDisable(uint32_t flags)
DECL|RTC_IntEnable|function|__STATIC_INLINE void RTC_IntEnable(uint32_t flags)
DECL|RTC_IntGetEnabled|function|__STATIC_INLINE uint32_t RTC_IntGetEnabled(void)
DECL|RTC_IntGet|function|__STATIC_INLINE uint32_t RTC_IntGet(void)
DECL|RTC_IntSet|function|__STATIC_INLINE void RTC_IntSet(uint32_t flags)
DECL|comp0Top|member|bool comp0Top; /**< Use compare register 0 as max count value. */
DECL|debugRun|member|bool debugRun; /**< Counter shall keep running during debug halt. */
DECL|enable|member|bool enable; /**< Start counting when init completed. */
