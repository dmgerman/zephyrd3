DECL|EM_VCMP_H|macro|EM_VCMP_H
DECL|VCMP_Disable|function|__STATIC_INLINE void VCMP_Disable(void)
DECL|VCMP_Enable|function|__STATIC_INLINE void VCMP_Enable(void)
DECL|VCMP_Hysteresis_TypeDef|typedef|} VCMP_Hysteresis_TypeDef;
DECL|VCMP_INIT_DEFAULT|macro|VCMP_INIT_DEFAULT
DECL|VCMP_Init_TypeDef|typedef|} VCMP_Init_TypeDef;
DECL|VCMP_IntClear|function|__STATIC_INLINE void VCMP_IntClear(uint32_t flags)
DECL|VCMP_IntDisable|function|__STATIC_INLINE void VCMP_IntDisable(uint32_t flags)
DECL|VCMP_IntEnable|function|__STATIC_INLINE void VCMP_IntEnable(uint32_t flags)
DECL|VCMP_IntGetEnabled|function|__STATIC_INLINE uint32_t VCMP_IntGetEnabled(void)
DECL|VCMP_IntGet|function|__STATIC_INLINE uint32_t VCMP_IntGet(void)
DECL|VCMP_IntSet|function|__STATIC_INLINE void VCMP_IntSet(uint32_t flags)
DECL|VCMP_Ready|function|__STATIC_INLINE bool VCMP_Ready(void)
DECL|VCMP_VDDHigher|function|__STATIC_INLINE bool VCMP_VDDHigher(void)
DECL|VCMP_VDDLower|function|__STATIC_INLINE bool VCMP_VDDLower(void)
DECL|VCMP_VoltageToLevel|function|__STATIC_INLINE uint32_t VCMP_VoltageToLevel(float v)
DECL|VCMP_WarmTime_TypeDef|typedef|} VCMP_WarmTime_TypeDef;
DECL|biasProg|member|int biasProg;
DECL|enable|member|bool enable;
DECL|halfBias|member|bool halfBias;
DECL|hyst|member|VCMP_Hysteresis_TypeDef hyst;
DECL|inactive|member|int inactive;
DECL|irqFalling|member|bool irqFalling;
DECL|irqRising|member|bool irqRising;
DECL|lowPowerRef|member|bool lowPowerRef;
DECL|triggerLevel|member|int triggerLevel;
DECL|vcmpHyst20mV|enumerator|vcmpHyst20mV
DECL|vcmpHystNone|enumerator|vcmpHystNone,
DECL|vcmpWarmTime128Cycles|enumerator|vcmpWarmTime128Cycles = _VCMP_CTRL_WARMTIME_128CYCLES,
DECL|vcmpWarmTime16Cycles|enumerator|vcmpWarmTime16Cycles = _VCMP_CTRL_WARMTIME_16CYCLES,
DECL|vcmpWarmTime256Cycles|enumerator|vcmpWarmTime256Cycles = _VCMP_CTRL_WARMTIME_256CYCLES,
DECL|vcmpWarmTime32Cycles|enumerator|vcmpWarmTime32Cycles = _VCMP_CTRL_WARMTIME_32CYCLES,
DECL|vcmpWarmTime4Cycles|enumerator|vcmpWarmTime4Cycles = _VCMP_CTRL_WARMTIME_4CYCLES,
DECL|vcmpWarmTime512Cycles|enumerator|vcmpWarmTime512Cycles = _VCMP_CTRL_WARMTIME_512CYCLES
DECL|vcmpWarmTime64Cycles|enumerator|vcmpWarmTime64Cycles = _VCMP_CTRL_WARMTIME_64CYCLES,
DECL|vcmpWarmTime8Cycles|enumerator|vcmpWarmTime8Cycles = _VCMP_CTRL_WARMTIME_8CYCLES,
DECL|warmup|member|VCMP_WarmTime_TypeDef warmup;
