DECL|CTIMER_ClearStatusFlags|function|static inline void CTIMER_ClearStatusFlags(CTIMER_Type *base, uint32_t mask)
DECL|CTIMER_DisableInterrupts|function|static inline void CTIMER_DisableInterrupts(CTIMER_Type *base, uint32_t mask)
DECL|CTIMER_EnableInterrupts|function|static inline void CTIMER_EnableInterrupts(CTIMER_Type *base, uint32_t mask)
DECL|CTIMER_GetEnabledInterrupts|function|static inline uint32_t CTIMER_GetEnabledInterrupts(CTIMER_Type *base)
DECL|CTIMER_GetStatusFlags|function|static inline uint32_t CTIMER_GetStatusFlags(CTIMER_Type *base)
DECL|CTIMER_Reset|function|static inline void CTIMER_Reset(CTIMER_Type *base)
DECL|CTIMER_StartTimer|function|static inline void CTIMER_StartTimer(CTIMER_Type *base)
DECL|CTIMER_StopTimer|function|static inline void CTIMER_StopTimer(CTIMER_Type *base)
DECL|FSL_CTIMER_DRIVER_VERSION|macro|FSL_CTIMER_DRIVER_VERSION
DECL|_FSL_CTIMER_H_|macro|_FSL_CTIMER_H_
DECL|_ctimer_capture_channel|enum|typedef enum _ctimer_capture_channel
DECL|_ctimer_capture_edge|enum|typedef enum _ctimer_capture_edge
DECL|_ctimer_config|struct|typedef struct _ctimer_config
DECL|_ctimer_interrupt_enable|enum|typedef enum _ctimer_interrupt_enable
DECL|_ctimer_match_config|struct|typedef struct _ctimer_match_config
DECL|_ctimer_match_output_control|enum|typedef enum _ctimer_match_output_control
DECL|_ctimer_match|enum|typedef enum _ctimer_match
DECL|_ctimer_status_flags|enum|typedef enum _ctimer_status_flags
DECL|_ctimer_timer_mode|enum|typedef enum _ctimer_timer_mode
DECL|ctimer_callback_type_t|typedef|} ctimer_callback_type_t;
DECL|ctimer_callback_t|typedef|typedef void (*ctimer_callback_t)(uint32_t flags);
DECL|ctimer_capture_channel_t|typedef|} ctimer_capture_channel_t;
DECL|ctimer_capture_edge_t|typedef|} ctimer_capture_edge_t;
DECL|ctimer_config_t|typedef|} ctimer_config_t;
DECL|ctimer_interrupt_enable_t|typedef|} ctimer_interrupt_enable_t;
DECL|ctimer_match_config_t|typedef|} ctimer_match_config_t;
DECL|ctimer_match_output_control_t|typedef|} ctimer_match_output_control_t;
DECL|ctimer_match_t|typedef|} ctimer_match_t;
DECL|ctimer_status_flags_t|typedef|} ctimer_status_flags_t;
DECL|ctimer_timer_mode_t|typedef|} ctimer_timer_mode_t;
DECL|enableCounterReset|member|bool enableCounterReset; /*!< true: Match will reset the counter
DECL|enableCounterStop|member|bool enableCounterStop; /*!< true: Match will stop the counter
DECL|enableInterrupt|member|bool enableInterrupt; /*!< true: Generate interrupt upon match
DECL|input|member|ctimer_capture_channel_t input; /*!< Input channel to increment the timer, used only in timer
DECL|kCTIMER_Capture0Flag|enumerator|kCTIMER_Capture0Flag = CTIMER_IR_CR0INT_MASK, /*!< Capture 0 interrupt flag */
DECL|kCTIMER_Capture0InterruptEnable|enumerator|kCTIMER_Capture0InterruptEnable = CTIMER_CCR_CAP0I_MASK, /*!< Capture 0 interrupt */
DECL|kCTIMER_Capture1Flag|enumerator|kCTIMER_Capture1Flag = CTIMER_IR_CR1INT_MASK, /*!< Capture 1 interrupt flag */
DECL|kCTIMER_Capture1InterruptEnable|enumerator|kCTIMER_Capture1InterruptEnable = CTIMER_CCR_CAP1I_MASK, /*!< Capture 1 interrupt */
DECL|kCTIMER_Capture2Flag|enumerator|kCTIMER_Capture2Flag = CTIMER_IR_CR2INT_MASK, /*!< Capture 2 interrupt flag */
DECL|kCTIMER_Capture2InterruptEnable|enumerator|kCTIMER_Capture2InterruptEnable = CTIMER_CCR_CAP2I_MASK, /*!< Capture 2 interrupt */
DECL|kCTIMER_Capture3Flag|enumerator|kCTIMER_Capture3Flag = CTIMER_IR_CR3INT_MASK, /*!< Capture 3 interrupt flag */
DECL|kCTIMER_Capture3InterruptEnable|enumerator|kCTIMER_Capture3InterruptEnable = CTIMER_CCR_CAP3I_MASK, /*!< Capture 3 interrupt */
DECL|kCTIMER_Capture_0|enumerator|kCTIMER_Capture_0 = 0U, /*!< Timer capture channel 0 */
DECL|kCTIMER_Capture_1|enumerator|kCTIMER_Capture_1, /*!< Timer capture channel 1 */
DECL|kCTIMER_Capture_2|enumerator|kCTIMER_Capture_2, /*!< Timer capture channel 2 */
DECL|kCTIMER_Capture_3|enumerator|kCTIMER_Capture_3 /*!< Timer capture channel 3 */
DECL|kCTIMER_Capture_BothEdge|enumerator|kCTIMER_Capture_BothEdge = 3U, /*!< Capture on rising and falling edge */
DECL|kCTIMER_Capture_FallEdge|enumerator|kCTIMER_Capture_FallEdge = 2U, /*!< Capture on falling edge */
DECL|kCTIMER_Capture_RiseEdge|enumerator|kCTIMER_Capture_RiseEdge = 1U, /*!< Capture on rising edge */
DECL|kCTIMER_IncreaseOnBothEdge|enumerator|kCTIMER_IncreaseOnBothEdge /* TC is incremented on both edges of input signal */
DECL|kCTIMER_IncreaseOnFallEdge|enumerator|kCTIMER_IncreaseOnFallEdge, /* TC is incremented on falling edge of input signal */
DECL|kCTIMER_IncreaseOnRiseEdge|enumerator|kCTIMER_IncreaseOnRiseEdge, /* TC is incremented on rising edge of input signal */
DECL|kCTIMER_Match0Flag|enumerator|kCTIMER_Match0Flag = CTIMER_IR_MR0INT_MASK, /*!< Match 0 interrupt flag */
DECL|kCTIMER_Match0InterruptEnable|enumerator|kCTIMER_Match0InterruptEnable = CTIMER_MCR_MR0I_MASK, /*!< Match 0 interrupt */
DECL|kCTIMER_Match1Flag|enumerator|kCTIMER_Match1Flag = CTIMER_IR_MR1INT_MASK, /*!< Match 1 interrupt flag */
DECL|kCTIMER_Match1InterruptEnable|enumerator|kCTIMER_Match1InterruptEnable = CTIMER_MCR_MR1I_MASK, /*!< Match 1 interrupt */
DECL|kCTIMER_Match2Flag|enumerator|kCTIMER_Match2Flag = CTIMER_IR_MR2INT_MASK, /*!< Match 2 interrupt flag */
DECL|kCTIMER_Match2InterruptEnable|enumerator|kCTIMER_Match2InterruptEnable = CTIMER_MCR_MR2I_MASK, /*!< Match 2 interrupt */
DECL|kCTIMER_Match3Flag|enumerator|kCTIMER_Match3Flag = CTIMER_IR_MR3INT_MASK, /*!< Match 3 interrupt flag */
DECL|kCTIMER_Match3InterruptEnable|enumerator|kCTIMER_Match3InterruptEnable = CTIMER_MCR_MR3I_MASK, /*!< Match 3 interrupt */
DECL|kCTIMER_Match_0|enumerator|kCTIMER_Match_0 = 0U, /*!< Timer match register 0 */
DECL|kCTIMER_Match_1|enumerator|kCTIMER_Match_1, /*!< Timer match register 1 */
DECL|kCTIMER_Match_2|enumerator|kCTIMER_Match_2, /*!< Timer match register 2 */
DECL|kCTIMER_Match_3|enumerator|kCTIMER_Match_3 /*!< Timer match register 3 */
DECL|kCTIMER_MultipleCallback|enumerator|kCTIMER_MultipleCallback /*!< Multiple Callback type where there can be 8 valid callbacks, one per channel.
DECL|kCTIMER_Output_Clear|enumerator|kCTIMER_Output_Clear, /*!< Clear the EM bit/output to 0 */
DECL|kCTIMER_Output_NoAction|enumerator|kCTIMER_Output_NoAction = 0U, /*!< No action is taken */
DECL|kCTIMER_Output_Set|enumerator|kCTIMER_Output_Set, /*!< Set the EM bit/output to 1 */
DECL|kCTIMER_Output_Toggle|enumerator|kCTIMER_Output_Toggle /*!< Toggle the EM bit/output */
DECL|kCTIMER_SingleCallback|enumerator|kCTIMER_SingleCallback, /*!< Single Callback type where there is only one callback for the timer.
DECL|kCTIMER_TimerMode|enumerator|kCTIMER_TimerMode = 0U, /* TC is incremented every rising APB bus clock edge */
DECL|matchValue|member|uint32_t matchValue; /*!< This is stored in the match register */
DECL|mode|member|ctimer_timer_mode_t mode; /*!< Timer mode */
DECL|outControl|member|ctimer_match_output_control_t outControl; /*!< Action to be taken on a match on the EM bit/output */
DECL|outPinInitState|member|bool outPinInitState; /*!< Initial value of the EM bit/output */
DECL|prescale|member|uint32_t prescale; /*!< Prescale value */
