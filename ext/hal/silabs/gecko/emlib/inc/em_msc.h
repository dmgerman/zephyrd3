DECL|EM_MSC_H|macro|EM_MSC_H
DECL|EM_MSC_RUN_FROM_FLASH|macro|EM_MSC_RUN_FROM_FLASH
DECL|MSC_BusStrategy_Typedef|typedef|} MSC_BusStrategy_Typedef;
DECL|MSC_BusStrategy|function|__STATIC_INLINE void MSC_BusStrategy(mscBusStrategy_Typedef mode)
DECL|MSC_EXECCONFIG_DEFAULT|macro|MSC_EXECCONFIG_DEFAULT
DECL|MSC_EnableAutoCacheFlush|function|__STATIC_INLINE void MSC_EnableAutoCacheFlush(bool enable)
DECL|MSC_EnableCacheIRQs|function|__STATIC_INLINE void MSC_EnableCacheIRQs(bool enable)
DECL|MSC_EnableCache|function|__STATIC_INLINE void MSC_EnableCache(bool enable)
DECL|MSC_ExecConfig_TypeDef|typedef|} MSC_ExecConfig_TypeDef;
DECL|MSC_FlushCache|function|__STATIC_INLINE void MSC_FlushCache(void)
DECL|MSC_GetCacheMeasurement|function|__STATIC_INLINE int32_t MSC_GetCacheMeasurement(void)
DECL|MSC_IntClear|function|__STATIC_INLINE void MSC_IntClear(uint32_t flags)
DECL|MSC_IntDisable|function|__STATIC_INLINE void MSC_IntDisable(uint32_t flags)
DECL|MSC_IntEnable|function|__STATIC_INLINE void MSC_IntEnable(uint32_t flags)
DECL|MSC_IntGetEnabled|function|__STATIC_INLINE uint32_t MSC_IntGetEnabled(void)
DECL|MSC_IntGet|function|__STATIC_INLINE uint32_t MSC_IntGet(void)
DECL|MSC_IntSet|function|__STATIC_INLINE void MSC_IntSet(uint32_t flags)
DECL|MSC_PROGRAM_TIMEOUT|macro|MSC_PROGRAM_TIMEOUT
DECL|MSC_RAMFUNC_DECLARATOR|macro|MSC_RAMFUNC_DECLARATOR
DECL|MSC_RAMFUNC_DECLARATOR|macro|MSC_RAMFUNC_DECLARATOR
DECL|MSC_RAMFUNC_DEFINITION_BEGIN|macro|MSC_RAMFUNC_DEFINITION_BEGIN
DECL|MSC_RAMFUNC_DEFINITION_BEGIN|macro|MSC_RAMFUNC_DEFINITION_BEGIN
DECL|MSC_RAMFUNC_DEFINITION_END|macro|MSC_RAMFUNC_DEFINITION_END
DECL|MSC_RAMFUNC_DEFINITION_END|macro|MSC_RAMFUNC_DEFINITION_END
DECL|MSC_StartCacheMeasurement|function|__STATIC_INLINE void MSC_StartCacheMeasurement(void)
DECL|MSC_Status_TypeDef|typedef|} MSC_Status_TypeDef;
DECL|aiDis|member|bool aiDis; /**< Disable automatic cache invalidation on write or erase */
DECL|iccDis|member|bool iccDis; /**< Disable automatic caching of fetches in interrupt context */
DECL|ifcDis|member|bool ifcDis; /**< Disable instruction cache */
DECL|mscBusStrategyCPU|enumerator|mscBusStrategyCPU = MSC_READCTRL_BUSSTRATEGY_CPU, /**< Prioritize CPU bus accesses */
DECL|mscBusStrategyDMAEM1|enumerator|mscBusStrategyDMAEM1 = MSC_READCTRL_BUSSTRATEGY_DMAEM1, /**< Prioritize DMAEM1 for bus accesses */
DECL|mscBusStrategyDMA|enumerator|mscBusStrategyDMA = MSC_READCTRL_BUSSTRATEGY_DMA, /**< Prioritize DMA bus accesses */
DECL|mscBusStrategyNone|enumerator|mscBusStrategyNone = MSC_READCTRL_BUSSTRATEGY_NONE /**< No unit has bus priority */
DECL|mscBusStrategy_Typedef|macro|mscBusStrategy_Typedef
DECL|mscReturnInvalidAddr|enumerator|mscReturnInvalidAddr = -1, /**< Invalid address. Write to an address that is not flash. */
DECL|mscReturnLocked|enumerator|mscReturnLocked = -2, /**< Flash address is locked. */
DECL|mscReturnOk|enumerator|mscReturnOk = 0, /**< Flash write/erase successful. */
DECL|mscReturnTimeOut|enumerator|mscReturnTimeOut = -3, /**< Timeout while writing to flash. */
DECL|mscReturnUnaligned|enumerator|mscReturnUnaligned = -4 /**< Unaligned access to flash. */
DECL|msc_Return_TypeDef|macro|msc_Return_TypeDef
DECL|prefetchEn|member|bool prefetchEn; /**< Enable MSC prefetching */
DECL|scbtEn|member|bool scbtEn; /**< Enable Suppressed Conditional Branch Target Prefetch */
DECL|useHprot|member|bool useHprot; /**< Use ahb_hprot to determine if the instruction is cacheable or not */
