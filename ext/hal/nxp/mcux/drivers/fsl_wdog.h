DECL|FSL_WDOG_DRIVER_VERSION|macro|FSL_WDOG_DRIVER_VERSION
DECL|WDOG_DisablePowerDownEnable|function|static inline void WDOG_DisablePowerDownEnable(WDOG_Type *base)
DECL|WDOG_Disable|function|static inline void WDOG_Disable(WDOG_Type *base)
DECL|WDOG_EnableInterrupts|function|static inline void WDOG_EnableInterrupts(WDOG_Type *base, uint16_t mask)
DECL|WDOG_Enable|function|static inline void WDOG_Enable(WDOG_Type *base)
DECL|WDOG_REFRESH_KEY|macro|WDOG_REFRESH_KEY
DECL|WDOG_SetInterrputTimeoutValue|function|static inline void WDOG_SetInterrputTimeoutValue(WDOG_Type *base, uint16_t timeoutCount)
DECL|WDOG_SetTimeoutValue|function|static inline void WDOG_SetTimeoutValue(WDOG_Type *base, uint16_t timeoutCount)
DECL|_FSL_WDOG_H_|macro|_FSL_WDOG_H_
DECL|_wdog_config|struct|typedef struct _wdog_config
DECL|_wdog_interrupt_enable|enum|enum _wdog_interrupt_enable
DECL|_wdog_status_flags|enum|enum _wdog_status_flags
DECL|_wdog_work_mode|struct|typedef struct _wdog_work_mode
DECL|enableDebug|member|bool enableDebug; /*!< continue or suspend WDOG in debug mode */
DECL|enableInterrupt|member|bool enableInterrupt; /*!< Enables or disables WDOG interrupt */
DECL|enablePowerDown|member|bool enablePowerDown; /*!< power down enable bit */
DECL|enableStop|member|bool enableStop; /*!< continue or suspend WDOG in stop mode */
DECL|enableWait|member|bool enableWait; /*!< continue or suspend WDOG in wait mode */
DECL|enableWdog|member|bool enableWdog; /*!< Enables or disables WDOG */
DECL|interruptTimeValue|member|uint16_t interruptTimeValue; /*!< Interrupt count timeout value */
DECL|kWDOG_InterruptEnable|enumerator|kWDOG_InterruptEnable = WDOG_WICR_WIE_MASK /*!< WDOG timeout generates an interrupt before reset*/
DECL|kWDOG_InterruptFlag|enumerator|kWDOG_InterruptFlag = WDOG_WICR_WTIS_MASK /*!< interrupt flag,whether interrupt has occurred or not*/
DECL|kWDOG_PowerOnResetFlag|enumerator|kWDOG_PowerOnResetFlag = WDOG_WRSR_POR_MASK, /*!< Power On flag, set when reset is the result of a powerOnReset*/
DECL|kWDOG_RunningFlag|enumerator|kWDOG_RunningFlag = WDOG_WCR_WDE_MASK, /*!< Running flag, set when WDOG is enabled*/
DECL|kWDOG_SoftwareResetFlag|enumerator|kWDOG_SoftwareResetFlag = WDOG_WRSR_SFTW_MASK, /*!< Software flag, set when reset is the result of a software*/
DECL|kWDOG_TimeoutResetFlag|enumerator|kWDOG_TimeoutResetFlag = WDOG_WRSR_TOUT_MASK, /*!< Timeout flag, set when reset is the result of a timeout*/
DECL|softwareAssertion|member|bool softwareAssertion; /*!< software assertion bit*/
DECL|softwareResetExtension|member|bool softwareResetExtension; /*!< software reset extension */
DECL|softwareResetSignal|member|bool softwareResetSignal; /*!< software reset signalbit*/
DECL|timeoutValue|member|uint16_t timeoutValue; /*!< Timeout value */
DECL|wdog_config_t|typedef|} wdog_config_t;
DECL|wdog_work_mode_t|typedef|} wdog_work_mode_t;
DECL|workMode|member|wdog_work_mode_t workMode; /*!< Configures WDOG work mode in debug stop and wait mode */
