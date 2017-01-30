DECL|COP_Disable|function|static inline void COP_Disable(SIM_Type *base)
DECL|COP_FIRST_BYTE_OF_REFRESH|macro|COP_FIRST_BYTE_OF_REFRESH
DECL|COP_SECOND_BYTE_OF_REFRESH|macro|COP_SECOND_BYTE_OF_REFRESH
DECL|FSL_COP_DRIVER_VERSION|macro|FSL_COP_DRIVER_VERSION
DECL|_FSL_COP_H_|macro|_FSL_COP_H_
DECL|_cop_clock_source|enum|typedef enum _cop_clock_source
DECL|_cop_config|struct|typedef struct _cop_config
DECL|_cop_timeout_cycles|enum|typedef enum _cop_timeout_cycles
DECL|_cop_timeout_mode|enum|typedef enum _cop_timeout_mode
DECL|clockSource|member|cop_clock_source_t clockSource; /*!< Set COP clock source */
DECL|cop_clock_source_t|typedef|} cop_clock_source_t;
DECL|cop_config_t|typedef|} cop_config_t;
DECL|cop_timeout_cycles_t|typedef|} cop_timeout_cycles_t;
DECL|cop_timeout_mode_t|typedef|} cop_timeout_mode_t;
DECL|enableDebug|member|bool enableDebug; /*!< Enable or disable COP in DEBUG mode */
DECL|enableStop|member|bool enableStop; /*!< Enable or disable COP in STOP mode */
DECL|enableWindowMode|member|bool enableWindowMode; /*!< COP run mode: window mode or normal mode */
DECL|kCOP_2Power10CyclesOr2Power18Cycles|enumerator|kCOP_2Power10CyclesOr2Power18Cycles = 3U, /*!< 2^10 or 2^18 clock cycles */
DECL|kCOP_2Power5CyclesOr2Power13Cycles|enumerator|kCOP_2Power5CyclesOr2Power13Cycles = 1U, /*!< 2^5 or 2^13 clock cycles */
DECL|kCOP_2Power8CyclesOr2Power16Cycles|enumerator|kCOP_2Power8CyclesOr2Power16Cycles = 2U, /*!< 2^8 or 2^16 clock cycles */
DECL|kCOP_BusClock|enumerator|kCOP_BusClock = 3U, /*!< COP clock sourced from Bus clock */
DECL|kCOP_LongTimeoutMode|enumerator|kCOP_LongTimeoutMode = 1U, /*!< COP selects short timeout */
DECL|kCOP_LpoClock|enumerator|kCOP_LpoClock = 0U, /*!< COP clock sourced from LPO */
DECL|kCOP_McgIrClock|enumerator|kCOP_McgIrClock = 1U, /*!< COP clock sourced from MCGIRCLK */
DECL|kCOP_OscErClock|enumerator|kCOP_OscErClock = 2U, /*!< COP clock sourced from OSCERCLK */
DECL|kCOP_ShortTimeoutMode|enumerator|kCOP_ShortTimeoutMode = 0U, /*!< COP selects long timeout */
DECL|timeoutCycles|member|cop_timeout_cycles_t timeoutCycles; /*!< Set COP timeout value */
DECL|timeoutMode|member|cop_timeout_mode_t timeoutMode; /*!< COP timeout mode: long timeout or short timeout */
