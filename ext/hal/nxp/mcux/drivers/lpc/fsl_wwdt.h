DECL|FSL_WWDT_DRIVER_VERSION|macro|FSL_WWDT_DRIVER_VERSION
DECL|WWDT_Disable|function|static inline void WWDT_Disable(WWDT_Type *base)
DECL|WWDT_Enable|function|static inline void WWDT_Enable(WWDT_Type *base)
DECL|WWDT_FIRST_WORD_OF_REFRESH|macro|WWDT_FIRST_WORD_OF_REFRESH
DECL|WWDT_GetStatusFlags|function|static inline uint32_t WWDT_GetStatusFlags(WWDT_Type *base)
DECL|WWDT_SECOND_WORD_OF_REFRESH|macro|WWDT_SECOND_WORD_OF_REFRESH
DECL|WWDT_SetTimeoutValue|function|static inline void WWDT_SetTimeoutValue(WWDT_Type *base, uint32_t timeoutCount)
DECL|WWDT_SetWarningValue|function|static inline void WWDT_SetWarningValue(WWDT_Type *base, uint32_t warningValue)
DECL|WWDT_SetWindowValue|function|static inline void WWDT_SetWindowValue(WWDT_Type *base, uint32_t windowValue)
DECL|_FSL_WWDT_H_|macro|_FSL_WWDT_H_
DECL|_wwdt_config|struct|typedef struct _wwdt_config
DECL|_wwdt_status_flags_t|enum|enum _wwdt_status_flags_t
DECL|enableLockOscillator|member|bool enableLockOscillator; /*!< true: Disabling or powering down the watchdog oscillator is prevented
DECL|enableWatchdogProtect|member|bool enableWatchdogProtect; /*!< true: Enable watchdog protect i.e timeout value can only be
DECL|enableWatchdogReset|member|bool enableWatchdogReset; /*!< true: Watchdog timeout will cause a chip reset
DECL|enableWwdt|member|bool enableWwdt; /*!< Enables or disables WWDT */
DECL|kWWDT_TimeoutFlag|enumerator|kWWDT_TimeoutFlag = WWDT_MOD_WDTOF_MASK, /*!< Time-out flag, set when the timer times out */
DECL|kWWDT_WarningFlag|enumerator|kWWDT_WarningFlag = WWDT_MOD_WDINT_MASK /*!< Warning interrupt flag, set when timer is below the value WDWARNINT */
DECL|timeoutValue|member|uint32_t timeoutValue; /*!< Timeout value */
DECL|warningValue|member|uint32_t warningValue; /*!< Watchdog time counter value that will generate a
DECL|windowValue|member|uint32_t windowValue; /*!< Window value, set this to 0xFFFFFF if windowing is not in effect */
DECL|wwdt_config_t|typedef|} wwdt_config_t;
