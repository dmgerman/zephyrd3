DECL|FSL_RTWDOG_DRIVER_VERSION|macro|FSL_RTWDOG_DRIVER_VERSION
DECL|RTWDOG_DisableInterrupts|function|static inline void RTWDOG_DisableInterrupts(RTWDOG_Type *base, uint32_t mask)
DECL|RTWDOG_Disable|function|static inline void RTWDOG_Disable(RTWDOG_Type *base)
DECL|RTWDOG_EnableInterrupts|function|static inline void RTWDOG_EnableInterrupts(RTWDOG_Type *base, uint32_t mask)
DECL|RTWDOG_Enable|function|static inline void RTWDOG_Enable(RTWDOG_Type *base)
DECL|RTWDOG_GetCounterValue|function|static inline uint16_t RTWDOG_GetCounterValue(RTWDOG_Type *base)
DECL|RTWDOG_GetStatusFlags|function|static inline uint32_t RTWDOG_GetStatusFlags(RTWDOG_Type *base)
DECL|RTWDOG_Refresh|function|static inline void RTWDOG_Refresh(RTWDOG_Type *base)
DECL|RTWDOG_SetTimeoutValue|function|static inline void RTWDOG_SetTimeoutValue(RTWDOG_Type *base, uint16_t timeoutCount)
DECL|RTWDOG_SetWindowValue|function|static inline void RTWDOG_SetWindowValue(RTWDOG_Type *base, uint16_t windowValue)
DECL|RTWDOG_Unlock|function|static inline void RTWDOG_Unlock(RTWDOG_Type *base)
DECL|WDOG_FIRST_WORD_OF_REFRESH|macro|WDOG_FIRST_WORD_OF_REFRESH
DECL|WDOG_FIRST_WORD_OF_UNLOCK|macro|WDOG_FIRST_WORD_OF_UNLOCK
DECL|WDOG_SECOND_WORD_OF_REFRESH|macro|WDOG_SECOND_WORD_OF_REFRESH
DECL|WDOG_SECOND_WORD_OF_UNLOCK|macro|WDOG_SECOND_WORD_OF_UNLOCK
DECL|_FSL_RTWDOG_H_|macro|_FSL_RTWDOG_H_
DECL|_rtwdog_clock_prescaler|enum|typedef enum _rtwdog_clock_prescaler
DECL|_rtwdog_clock_source|enum|typedef enum _rtwdog_clock_source
DECL|_rtwdog_config|struct|typedef struct _rtwdog_config
DECL|_rtwdog_interrupt_enable_t|enum|enum _rtwdog_interrupt_enable_t
DECL|_rtwdog_status_flags_t|enum|enum _rtwdog_status_flags_t
DECL|_rtwdog_test_mode|enum|typedef enum _rtwdog_test_mode
DECL|_rtwdog_work_mode|struct|typedef struct _rtwdog_work_mode
DECL|clockSource|member|rtwdog_clock_source_t clockSource; /*!< Clock source select */
DECL|enableDebug|member|bool enableDebug; /*!< Enables or disables RTWDOG in debug mode */
DECL|enableInterrupt|member|bool enableInterrupt; /*!< Enables or disables RTWDOG interrupt */
DECL|enableRtwdog|member|bool enableRtwdog; /*!< Enables or disables RTWDOG */
DECL|enableStop|member|bool enableStop; /*!< Enables or disables RTWDOG in stop mode */
DECL|enableUpdate|member|bool enableUpdate; /*!< Update write-once register enable */
DECL|enableWait|member|bool enableWait; /*!< Enables or disables RTWDOG in wait mode */
DECL|enableWindowMode|member|bool enableWindowMode; /*!< Enables or disables RTWDOG window mode */
DECL|kRTWDOG_ClockPrescalerDivide1|enumerator|kRTWDOG_ClockPrescalerDivide1 = 0x0U, /*!< Divided by 1 */
DECL|kRTWDOG_ClockPrescalerDivide256|enumerator|kRTWDOG_ClockPrescalerDivide256 = 0x1U, /*!< Divided by 256 */
DECL|kRTWDOG_ClockSource0|enumerator|kRTWDOG_ClockSource0 = 0U, /*!< Clock source 0 */
DECL|kRTWDOG_ClockSource1|enumerator|kRTWDOG_ClockSource1 = 1U, /*!< Clock source 1 */
DECL|kRTWDOG_ClockSource2|enumerator|kRTWDOG_ClockSource2 = 2U, /*!< Clock source 2 */
DECL|kRTWDOG_ClockSource3|enumerator|kRTWDOG_ClockSource3 = 3U, /*!< Clock source 3 */
DECL|kRTWDOG_HighByteTest|enumerator|kRTWDOG_HighByteTest = 3U, /*!< Test Mode enabled, only high byte is used */
DECL|kRTWDOG_InterruptEnable|enumerator|kRTWDOG_InterruptEnable = RTWDOG_CS_INT_MASK, /*!< Interrupt is generated before forcing a reset */
DECL|kRTWDOG_InterruptFlag|enumerator|kRTWDOG_InterruptFlag = RTWDOG_CS_FLG_MASK, /*!< Interrupt flag, set when interrupt occurs */
DECL|kRTWDOG_LowByteTest|enumerator|kRTWDOG_LowByteTest = 2U, /*!< Test Mode enabled, only low byte is used */
DECL|kRTWDOG_RunningFlag|enumerator|kRTWDOG_RunningFlag = RTWDOG_CS_EN_MASK, /*!< Running flag, set when RTWDOG is enabled */
DECL|kRTWDOG_TestModeDisabled|enumerator|kRTWDOG_TestModeDisabled = 0U, /*!< Test Mode disabled */
DECL|kRTWDOG_UserModeEnabled|enumerator|kRTWDOG_UserModeEnabled = 1U, /*!< User Mode enabled */
DECL|prescaler|member|rtwdog_clock_prescaler_t prescaler; /*!< Clock prescaler value */
DECL|rtwdog_clock_prescaler_t|typedef|} rtwdog_clock_prescaler_t;
DECL|rtwdog_clock_source_t|typedef|} rtwdog_clock_source_t;
DECL|rtwdog_config_t|typedef|} rtwdog_config_t;
DECL|rtwdog_test_mode_t|typedef|} rtwdog_test_mode_t;
DECL|rtwdog_work_mode_t|typedef|} rtwdog_work_mode_t;
DECL|testMode|member|rtwdog_test_mode_t testMode; /*!< Configures RTWDOG test mode */
DECL|timeoutValue|member|uint16_t timeoutValue; /*!< Timeout value */
DECL|windowValue|member|uint16_t windowValue; /*!< Window value */
DECL|workMode|member|rtwdog_work_mode_t workMode; /*!< Configures RTWDOG work mode in debug stop and wait mode */
