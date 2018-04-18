DECL|EPIT_ClearStatusFlag|function|static inline void EPIT_ClearStatusFlag(EPIT_Type* base)
DECL|EPIT_Disable|function|static inline void EPIT_Disable(EPIT_Type* base)
DECL|EPIT_Enable|function|static inline void EPIT_Enable(EPIT_Type* base)
DECL|EPIT_GetClockSource|function|static inline uint32_t EPIT_GetClockSource(EPIT_Type* base)
DECL|EPIT_GetCounterLoadValue|function|static inline uint32_t EPIT_GetCounterLoadValue(EPIT_Type* base)
DECL|EPIT_GetOutputCompareValue|function|static inline uint32_t EPIT_GetOutputCompareValue(EPIT_Type* base)
DECL|EPIT_GetOutputOperationMode|function|static inline uint32_t EPIT_GetOutputOperationMode(EPIT_Type* base)
DECL|EPIT_GetPrescaler|function|static inline uint32_t EPIT_GetPrescaler(EPIT_Type* base)
DECL|EPIT_GetStatusFlag|function|static inline uint32_t EPIT_GetStatusFlag(EPIT_Type* base)
DECL|EPIT_ReadCounter|function|static inline uint32_t EPIT_ReadCounter(EPIT_Type* base)
DECL|EPIT_SetClockSource|function|static inline void EPIT_SetClockSource(EPIT_Type* base, uint32_t source)
DECL|EPIT_SetCounterLoadValue|function|static inline void EPIT_SetCounterLoadValue(EPIT_Type* base, uint32_t value)
DECL|EPIT_SetOutputCompareValue|function|static inline void EPIT_SetOutputCompareValue(EPIT_Type* base, uint32_t value)
DECL|EPIT_SetOutputOperationMode|function|static inline void EPIT_SetOutputOperationMode(EPIT_Type* base, uint32_t mode)
DECL|EPIT_SetPrescaler|function|static inline void EPIT_SetPrescaler(EPIT_Type* base, uint32_t prescaler)
DECL|EPIT_SoftReset|function|static inline void EPIT_SoftReset(EPIT_Type* base)
DECL|__EPIT_H__|macro|__EPIT_H__
DECL|_epit_clock_source|enum|enum _epit_clock_source
DECL|_epit_init_config|struct|typedef struct _epit_init_config
DECL|_epit_output_operation_mode|enum|enum _epit_output_operation_mode
DECL|dbgEnable|member|bool dbgEnable; /*!< EPIT enabled in debug mode. */
DECL|enableMode|member|bool enableMode; /*!< true: counter starts counting from load value (RLD=1) or 0xFFFF_FFFF (If RLD=0) when enabled,
DECL|epitClockSourceHighFreq|enumerator|epitClockSourceHighFreq = 2U, /*!< EPIT Clock Source from High Frequency Reference Clock.*/
DECL|epitClockSourceLowFreq|enumerator|epitClockSourceLowFreq = 3U, /*!< EPIT Clock Source from Low Frequency Reference Clock.*/
DECL|epitClockSourceOff|enumerator|epitClockSourceOff = 0U, /*!< EPIT Clock Source Off.*/
DECL|epitClockSourcePeriph|enumerator|epitClockSourcePeriph = 1U, /*!< EPIT Clock Source from Peripheral Clock.*/
DECL|epitOutputOperationClear|enumerator|epitOutputOperationClear = 2U, /*!< EPIT Output Operation: Clear output pin.*/
DECL|epitOutputOperationDisconnected|enumerator|epitOutputOperationDisconnected = 0U, /*!< EPIT Output Operation: Disconnected from pad.*/
DECL|epitOutputOperationSet|enumerator|epitOutputOperationSet = 3U, /*!< EPIT Output Operation: Set putput pin.*/
DECL|epitOutputOperationToggle|enumerator|epitOutputOperationToggle = 1U, /*!< EPIT Output Operation: Toggle output pin.*/
DECL|epit_init_config_t|typedef|} epit_init_config_t;
DECL|freeRun|member|bool freeRun; /*!< true: set-and-forget mode, false: free-running mode. */
DECL|stopEnable|member|bool stopEnable; /*!< EPIT enabled in stop mode. */
DECL|waitEnable|member|bool waitEnable; /*!< EPIT enabled in wait mode. */
