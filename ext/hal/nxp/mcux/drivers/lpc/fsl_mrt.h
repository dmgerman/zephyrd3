DECL|FSL_MRT_DRIVER_VERSION|macro|FSL_MRT_DRIVER_VERSION
DECL|MRT_ClearStatusFlags|function|static inline void MRT_ClearStatusFlags(MRT_Type *base, mrt_chnl_t channel, uint32_t mask)
DECL|MRT_DisableInterrupts|function|static inline void MRT_DisableInterrupts(MRT_Type *base, mrt_chnl_t channel, uint32_t mask)
DECL|MRT_EnableInterrupts|function|static inline void MRT_EnableInterrupts(MRT_Type *base, mrt_chnl_t channel, uint32_t mask)
DECL|MRT_GetCurrentTimerCount|function|static inline uint32_t MRT_GetCurrentTimerCount(MRT_Type *base, mrt_chnl_t channel)
DECL|MRT_GetDefaultConfig|function|static inline void MRT_GetDefaultConfig(mrt_config_t *config)
DECL|MRT_GetEnabledInterrupts|function|static inline uint32_t MRT_GetEnabledInterrupts(MRT_Type *base, mrt_chnl_t channel)
DECL|MRT_GetIdleChannel|function|static inline uint32_t MRT_GetIdleChannel(MRT_Type *base)
DECL|MRT_GetStatusFlags|function|static inline uint32_t MRT_GetStatusFlags(MRT_Type *base, mrt_chnl_t channel)
DECL|MRT_ReleaseChannel|function|static inline void MRT_ReleaseChannel(MRT_Type *base, mrt_chnl_t channel)
DECL|MRT_SetupChannelMode|function|static inline void MRT_SetupChannelMode(MRT_Type *base, mrt_chnl_t channel, const mrt_timer_mode_t mode)
DECL|MRT_StartTimer|function|static inline void MRT_StartTimer(MRT_Type *base, mrt_chnl_t channel, uint32_t count)
DECL|MRT_StopTimer|function|static inline void MRT_StopTimer(MRT_Type *base, mrt_chnl_t channel)
DECL|_FSL_MRT_H_|macro|_FSL_MRT_H_
DECL|_mrt_chnl|enum|typedef enum _mrt_chnl
DECL|_mrt_config|struct|typedef struct _mrt_config
DECL|_mrt_interrupt_enable|enum|typedef enum _mrt_interrupt_enable
DECL|_mrt_status_flags|enum|typedef enum _mrt_status_flags
DECL|_mrt_timer_mode|enum|typedef enum _mrt_timer_mode
DECL|enableMultiTask|member|bool enableMultiTask; /*!< true: Timers run in multi-task mode; false: Timers run in hardware status mode */
DECL|kMRT_Channel_0|enumerator|kMRT_Channel_0 = 0U, /*!< MRT channel number 0*/
DECL|kMRT_Channel_1|enumerator|kMRT_Channel_1, /*!< MRT channel number 1 */
DECL|kMRT_Channel_2|enumerator|kMRT_Channel_2, /*!< MRT channel number 2 */
DECL|kMRT_Channel_3|enumerator|kMRT_Channel_3 /*!< MRT channel number 3 */
DECL|kMRT_OneShotMode|enumerator|kMRT_OneShotMode = (1 << MRT_CHANNEL_CTRL_MODE_SHIFT), /*!< One-shot Interrupt mode */
DECL|kMRT_OneShotStallMode|enumerator|kMRT_OneShotStallMode = (2 << MRT_CHANNEL_CTRL_MODE_SHIFT) /*!< One-shot stall mode */
DECL|kMRT_RepeatMode|enumerator|kMRT_RepeatMode = (0 << MRT_CHANNEL_CTRL_MODE_SHIFT), /*!< Repeat Interrupt mode */
DECL|kMRT_TimerInterruptEnable|enumerator|kMRT_TimerInterruptEnable = MRT_CHANNEL_CTRL_INTEN_MASK /*!< Timer interrupt enable*/
DECL|kMRT_TimerInterruptFlag|enumerator|kMRT_TimerInterruptFlag = MRT_CHANNEL_STAT_INTFLAG_MASK, /*!< Timer interrupt flag */
DECL|kMRT_TimerRunFlag|enumerator|kMRT_TimerRunFlag = MRT_CHANNEL_STAT_RUN_MASK, /*!< Indicates state of the timer */
DECL|mrt_chnl_t|typedef|} mrt_chnl_t;
DECL|mrt_config_t|typedef|} mrt_config_t;
DECL|mrt_interrupt_enable_t|typedef|} mrt_interrupt_enable_t;
DECL|mrt_status_flags_t|typedef|} mrt_status_flags_t;
DECL|mrt_timer_mode_t|typedef|} mrt_timer_mode_t;
