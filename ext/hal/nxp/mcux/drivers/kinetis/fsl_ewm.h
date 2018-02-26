DECL|EWM_DisableInterrupts|function|static inline void EWM_DisableInterrupts(EWM_Type *base, uint32_t mask)
DECL|EWM_EnableInterrupts|function|static inline void EWM_EnableInterrupts(EWM_Type *base, uint32_t mask)
DECL|EWM_GetStatusFlags|function|static inline uint32_t EWM_GetStatusFlags(EWM_Type *base)
DECL|FSL_EWM_DRIVER_VERSION|macro|FSL_EWM_DRIVER_VERSION
DECL|_FSL_EWM_H_|macro|_FSL_EWM_H_
DECL|_ewm_config|struct|typedef struct _ewm_config
DECL|_ewm_interrupt_enable_t|enum|enum _ewm_interrupt_enable_t
DECL|_ewm_lpo_clock_source|enum|typedef enum _ewm_lpo_clock_source
DECL|_ewm_status_flags_t|enum|enum _ewm_status_flags_t
DECL|clockSource|member|ewm_lpo_clock_source_t clockSource; /*!< Clock source select */
DECL|compareHighValue|member|uint8_t compareHighValue; /*!< Compare high-register value */
DECL|compareLowValue|member|uint8_t compareLowValue; /*!< Compare low-register value */
DECL|enableEwmInput|member|bool enableEwmInput; /*!< Enable EWM_in input */
DECL|enableEwm|member|bool enableEwm; /*!< Enable EWM module */
DECL|enableInterrupt|member|bool enableInterrupt; /*!< Enable EWM interrupt */
DECL|ewm_config_t|typedef|} ewm_config_t;
DECL|ewm_lpo_clock_source_t|typedef|} ewm_lpo_clock_source_t;
DECL|kEWM_InterruptEnable|enumerator|kEWM_InterruptEnable = EWM_CTRL_INTEN_MASK, /*!< Enable the EWM to generate an interrupt*/
DECL|kEWM_LpoClockSource0|enumerator|kEWM_LpoClockSource0 = 0U, /*!< EWM clock sourced from lpo_clk[0]*/
DECL|kEWM_LpoClockSource1|enumerator|kEWM_LpoClockSource1 = 1U, /*!< EWM clock sourced from lpo_clk[1]*/
DECL|kEWM_LpoClockSource2|enumerator|kEWM_LpoClockSource2 = 2U, /*!< EWM clock sourced from lpo_clk[2]*/
DECL|kEWM_LpoClockSource3|enumerator|kEWM_LpoClockSource3 = 3U, /*!< EWM clock sourced from lpo_clk[3]*/
DECL|kEWM_RunningFlag|enumerator|kEWM_RunningFlag = EWM_CTRL_EWMEN_MASK, /*!< Running flag, set when EWM is enabled*/
DECL|prescaler|member|uint8_t prescaler; /*!< Clock prescaler value */
DECL|setInputAssertLogic|member|bool setInputAssertLogic; /*!< EWM_in signal assertion state */
