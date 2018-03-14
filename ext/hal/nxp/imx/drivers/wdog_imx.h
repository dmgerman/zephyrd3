DECL|WDOG_ClearStatusFlag|function|static inline void WDOG_ClearStatusFlag(WDOG_Type *base)
DECL|WDOG_DisablePowerdown|function|static inline void WDOG_DisablePowerdown(WDOG_Type *base)
DECL|WDOG_EnableInt|function|static inline void WDOG_EnableInt(WDOG_Type *base, uint8_t time)
DECL|WDOG_GetResetSource|function|static inline uint32_t WDOG_GetResetSource(WDOG_Type *base)
DECL|WDOG_Init|function|static inline void WDOG_Init(WDOG_Type *base, const wdog_init_config_t *initConfig)
DECL|WDOG_IsIntPending|function|static inline bool WDOG_IsIntPending(WDOG_Type *base)
DECL|__WDOG_IMX_H__|macro|__WDOG_IMX_H__
DECL|_wdog_init_config|struct|typedef struct _wdog_init_config
DECL|_wdog_reset_source|enum|enum _wdog_reset_source
DECL|wdbg|member|bool wdbg; /*!< true: suspend in debug mode, false: not suspend */
DECL|wdogResetSourcePor|enumerator|wdogResetSourcePor = WDOG_WRSR_POR_MASK, /*!< Indicates the reset is the result of a power on reset.*/
DECL|wdogResetSourceSwRst|enumerator|wdogResetSourceSwRst = WDOG_WRSR_SFTW_MASK, /*!< Indicates the reset is the result of a software reset.*/
DECL|wdogResetSourceTimeout|enumerator|wdogResetSourceTimeout = WDOG_WRSR_TOUT_MASK, /*!< Indicates the reset is the result of a WDOG timeout.*/
DECL|wdog_init_config_t|typedef|} wdog_init_config_t;
DECL|wdt|member|bool wdt; /*!< true: assert WDOG_B when timeout, false: not assert WDOG_B */
DECL|wdw|member|bool wdw; /*!< true: suspend in low power wait, false: not suspend */
DECL|wdzst|member|bool wdzst; /*!< true: suspend in doze and stop mode, false: not suspend */
