DECL|FSL_PIT_DRIVER_VERSION|macro|FSL_PIT_DRIVER_VERSION
DECL|PIT_ClearStatusFlags|function|static inline void PIT_ClearStatusFlags(PIT_Type *base, pit_chnl_t channel, uint32_t mask)
DECL|PIT_DisableInterrupts|function|static inline void PIT_DisableInterrupts(PIT_Type *base, pit_chnl_t channel, uint32_t mask)
DECL|PIT_EnableInterrupts|function|static inline void PIT_EnableInterrupts(PIT_Type *base, pit_chnl_t channel, uint32_t mask)
DECL|PIT_GetCurrentTimerCount|function|static inline uint32_t PIT_GetCurrentTimerCount(PIT_Type *base, pit_chnl_t channel)
DECL|PIT_GetDefaultConfig|function|static inline void PIT_GetDefaultConfig(pit_config_t *config)
DECL|PIT_GetEnabledInterrupts|function|static inline uint32_t PIT_GetEnabledInterrupts(PIT_Type *base, pit_chnl_t channel)
DECL|PIT_GetStatusFlags|function|static inline uint32_t PIT_GetStatusFlags(PIT_Type *base, pit_chnl_t channel)
DECL|PIT_SetTimerChainMode|function|static inline void PIT_SetTimerChainMode(PIT_Type *base, pit_chnl_t channel, bool enable)
DECL|PIT_SetTimerPeriod|function|static inline void PIT_SetTimerPeriod(PIT_Type *base, pit_chnl_t channel, uint32_t count)
DECL|PIT_StartTimer|function|static inline void PIT_StartTimer(PIT_Type *base, pit_chnl_t channel)
DECL|PIT_StopTimer|function|static inline void PIT_StopTimer(PIT_Type *base, pit_chnl_t channel)
DECL|_FSL_PIT_H_|macro|_FSL_PIT_H_
DECL|_pit_chnl|enum|typedef enum _pit_chnl
DECL|_pit_config|struct|typedef struct _pit_config
DECL|_pit_interrupt_enable|enum|typedef enum _pit_interrupt_enable
DECL|_pit_status_flags|enum|typedef enum _pit_status_flags
DECL|enableRunInDebug|member|bool enableRunInDebug; /*!< true: Timers run in debug mode; false: Timers stop in debug mode */
DECL|kPIT_Chnl_0|enumerator|kPIT_Chnl_0 = 0U, /*!< PIT channel number 0*/
DECL|kPIT_Chnl_1|enumerator|kPIT_Chnl_1, /*!< PIT channel number 1 */
DECL|kPIT_Chnl_2|enumerator|kPIT_Chnl_2, /*!< PIT channel number 2 */
DECL|kPIT_Chnl_3|enumerator|kPIT_Chnl_3, /*!< PIT channel number 3 */
DECL|kPIT_TimerFlag|enumerator|kPIT_TimerFlag = PIT_TFLG_TIF_MASK, /*!< Timer flag */
DECL|kPIT_TimerInterruptEnable|enumerator|kPIT_TimerInterruptEnable = PIT_TCTRL_TIE_MASK, /*!< Timer interrupt enable*/
DECL|pit_chnl_t|typedef|} pit_chnl_t;
DECL|pit_config_t|typedef|} pit_config_t;
DECL|pit_interrupt_enable_t|typedef|} pit_interrupt_enable_t;
DECL|pit_status_flags_t|typedef|} pit_status_flags_t;
