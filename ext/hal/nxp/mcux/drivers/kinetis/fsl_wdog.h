DECL|FSL_WDOG_DRIVER_VERSION|macro|FSL_WDOG_DRIVER_VERSION
DECL|WDOG_ClearResetCount|function|static inline void WDOG_ClearResetCount(WDOG_Type *base)
DECL|WDOG_DisableInterrupts|function|static inline void WDOG_DisableInterrupts(WDOG_Type *base, uint32_t mask)
DECL|WDOG_Disable|function|static inline void WDOG_Disable(WDOG_Type *base)
DECL|WDOG_EnableInterrupts|function|static inline void WDOG_EnableInterrupts(WDOG_Type *base, uint32_t mask)
DECL|WDOG_Enable|function|static inline void WDOG_Enable(WDOG_Type *base)
DECL|WDOG_FIRST_WORD_OF_REFRESH|macro|WDOG_FIRST_WORD_OF_REFRESH
DECL|WDOG_FIRST_WORD_OF_UNLOCK|macro|WDOG_FIRST_WORD_OF_UNLOCK
DECL|WDOG_GetResetCount|function|static inline uint16_t WDOG_GetResetCount(WDOG_Type *base)
DECL|WDOG_SECOND_WORD_OF_REFRESH|macro|WDOG_SECOND_WORD_OF_REFRESH
DECL|WDOG_SECOND_WORD_OF_UNLOCK|macro|WDOG_SECOND_WORD_OF_UNLOCK
DECL|WDOG_SetTimeoutValue|function|static inline void WDOG_SetTimeoutValue(WDOG_Type *base, uint32_t timeoutCount)
DECL|WDOG_SetWindowValue|function|static inline void WDOG_SetWindowValue(WDOG_Type *base, uint32_t windowValue)
DECL|WDOG_Unlock|function|static inline void WDOG_Unlock(WDOG_Type *base)
DECL|_FSL_WDOG_H_|macro|_FSL_WDOG_H_
DECL|_wdog_clock_prescaler|enum|typedef enum _wdog_clock_prescaler
DECL|_wdog_clock_source|enum|typedef enum _wdog_clock_source
DECL|_wdog_config|struct|typedef struct _wdog_config
DECL|_wdog_interrupt_enable_t|enum|enum _wdog_interrupt_enable_t
DECL|_wdog_status_flags_t|enum|enum _wdog_status_flags_t
DECL|_wdog_test_config|struct|typedef struct _wdog_test_config
DECL|_wdog_test_mode|enum|typedef enum _wdog_test_mode
DECL|_wdog_tested_byte|enum|typedef enum _wdog_tested_byte
DECL|_wdog_work_mode|struct|typedef struct _wdog_work_mode
DECL|clockSource|member|wdog_clock_source_t clockSource; /*!< Clock source select */
DECL|enableDebug|member|bool enableDebug; /*!< Enables or disables WDOG in debug mode */
DECL|enableInterrupt|member|bool enableInterrupt; /*!< Enables or disables WDOG interrupt */
DECL|enableStop|member|bool enableStop; /*!< Enables or disables WDOG in stop mode */
DECL|enableUpdate|member|bool enableUpdate; /*!< Update write-once register enable */
DECL|enableWait|member|bool enableWait; /*!< Enables or disables WDOG in wait mode */
DECL|enableWdog|member|bool enableWdog; /*!< Enables or disables WDOG */
DECL|enableWindowMode|member|bool enableWindowMode; /*!< Enables or disables WDOG window mode */
DECL|kWDOG_AlternateClockSource|enumerator|kWDOG_AlternateClockSource = 1U, /*!< WDOG clock sourced from alternate clock source*/
DECL|kWDOG_ByteTest|enumerator|kWDOG_ByteTest = 1U, /*!< Selects byte test */
DECL|kWDOG_ClockPrescalerDivide1|enumerator|kWDOG_ClockPrescalerDivide1 = 0x0U, /*!< Divided by 1 */
DECL|kWDOG_ClockPrescalerDivide2|enumerator|kWDOG_ClockPrescalerDivide2 = 0x1U, /*!< Divided by 2 */
DECL|kWDOG_ClockPrescalerDivide3|enumerator|kWDOG_ClockPrescalerDivide3 = 0x2U, /*!< Divided by 3 */
DECL|kWDOG_ClockPrescalerDivide4|enumerator|kWDOG_ClockPrescalerDivide4 = 0x3U, /*!< Divided by 4 */
DECL|kWDOG_ClockPrescalerDivide5|enumerator|kWDOG_ClockPrescalerDivide5 = 0x4U, /*!< Divided by 5 */
DECL|kWDOG_ClockPrescalerDivide6|enumerator|kWDOG_ClockPrescalerDivide6 = 0x5U, /*!< Divided by 6 */
DECL|kWDOG_ClockPrescalerDivide7|enumerator|kWDOG_ClockPrescalerDivide7 = 0x6U, /*!< Divided by 7 */
DECL|kWDOG_ClockPrescalerDivide8|enumerator|kWDOG_ClockPrescalerDivide8 = 0x7U, /*!< Divided by 8 */
DECL|kWDOG_InterruptEnable|enumerator|kWDOG_InterruptEnable = WDOG_STCTRLH_IRQRSTEN_MASK, /*!< WDOG timeout generates an interrupt before reset*/
DECL|kWDOG_LpoClockSource|enumerator|kWDOG_LpoClockSource = 0U, /*!< WDOG clock sourced from LPO*/
DECL|kWDOG_QuickTest|enumerator|kWDOG_QuickTest = 0U, /*!< Selects quick test */
DECL|kWDOG_RunningFlag|enumerator|kWDOG_RunningFlag = WDOG_STCTRLH_WDOGEN_MASK, /*!< Running flag, set when WDOG is enabled*/
DECL|kWDOG_TestByte0|enumerator|kWDOG_TestByte0 = 0U, /*!< Byte 0 selected in byte test mode */
DECL|kWDOG_TestByte1|enumerator|kWDOG_TestByte1 = 1U, /*!< Byte 1 selected in byte test mode */
DECL|kWDOG_TestByte2|enumerator|kWDOG_TestByte2 = 2U, /*!< Byte 2 selected in byte test mode */
DECL|kWDOG_TestByte3|enumerator|kWDOG_TestByte3 = 3U, /*!< Byte 3 selected in byte test mode */
DECL|kWDOG_TimeoutFlag|enumerator|kWDOG_TimeoutFlag = WDOG_STCTRLL_INTFLG_MASK, /*!< Interrupt flag, set when an exception occurs*/
DECL|prescaler|member|wdog_clock_prescaler_t prescaler; /*!< Clock prescaler value */
DECL|testMode|member|wdog_test_mode_t testMode; /*!< Selects test mode */
DECL|testedByte|member|wdog_tested_byte_t testedByte; /*!< Selects tested byte in byte test mode */
DECL|timeoutValue|member|uint32_t timeoutValue; /*!< Timeout value */
DECL|timeoutValue|member|uint32_t timeoutValue; /*!< Timeout value */
DECL|wdog_clock_prescaler_t|typedef|} wdog_clock_prescaler_t;
DECL|wdog_clock_source_t|typedef|} wdog_clock_source_t;
DECL|wdog_config_t|typedef|} wdog_config_t;
DECL|wdog_test_config_t|typedef|} wdog_test_config_t;
DECL|wdog_test_mode_t|typedef|} wdog_test_mode_t;
DECL|wdog_tested_byte_t|typedef|} wdog_tested_byte_t;
DECL|wdog_work_mode_t|typedef|} wdog_work_mode_t;
DECL|windowValue|member|uint32_t windowValue; /*!< Window value */
DECL|workMode|member|wdog_work_mode_t workMode; /*!< Configures WDOG work mode in debug stop and wait mode */
