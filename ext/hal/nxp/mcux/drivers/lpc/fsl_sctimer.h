DECL|FSL_SCTIMER_DRIVER_VERSION|macro|FSL_SCTIMER_DRIVER_VERSION
DECL|SCTIMER_ClearStatusFlags|function|static inline void SCTIMER_ClearStatusFlags(SCT_Type *base, uint32_t mask)
DECL|SCTIMER_DisableInterrupts|function|static inline void SCTIMER_DisableInterrupts(SCT_Type *base, uint32_t mask)
DECL|SCTIMER_EnableInterrupts|function|static inline void SCTIMER_EnableInterrupts(SCT_Type *base, uint32_t mask)
DECL|SCTIMER_GetEnabledInterrupts|function|static inline uint32_t SCTIMER_GetEnabledInterrupts(SCT_Type *base)
DECL|SCTIMER_GetStatusFlags|function|static inline uint32_t SCTIMER_GetStatusFlags(SCT_Type *base)
DECL|SCTIMER_SetupCounterHaltAction|function|static inline void SCTIMER_SetupCounterHaltAction(SCT_Type *base, sctimer_counter_t whichCounter, uint32_t event)
DECL|SCTIMER_SetupCounterLimitAction|function|static inline void SCTIMER_SetupCounterLimitAction(SCT_Type *base, sctimer_counter_t whichCounter, uint32_t event)
DECL|SCTIMER_SetupCounterStartAction|function|static inline void SCTIMER_SetupCounterStartAction(SCT_Type *base, sctimer_counter_t whichCounter, uint32_t event)
DECL|SCTIMER_SetupCounterStopAction|function|static inline void SCTIMER_SetupCounterStopAction(SCT_Type *base, sctimer_counter_t whichCounter, uint32_t event)
DECL|SCTIMER_SetupDmaTriggerAction|function|static inline void SCTIMER_SetupDmaTriggerAction(SCT_Type *base, uint32_t dmaNumber, uint32_t event)
DECL|SCTIMER_SetupNextStateAction|function|static inline void SCTIMER_SetupNextStateAction(SCT_Type *base, uint32_t nextState, uint32_t event)
DECL|SCTIMER_SetupOutputClearAction|function|static inline void SCTIMER_SetupOutputClearAction(SCT_Type *base, uint32_t whichIO, uint32_t event)
DECL|SCTIMER_SetupOutputSetAction|function|static inline void SCTIMER_SetupOutputSetAction(SCT_Type *base, uint32_t whichIO, uint32_t event)
DECL|SCTIMER_StartTimer|function|static inline void SCTIMER_StartTimer(SCT_Type *base, sctimer_counter_t countertoStart)
DECL|SCTIMER_StopTimer|function|static inline void SCTIMER_StopTimer(SCT_Type *base, sctimer_counter_t countertoStop)
DECL|_FSL_SCTIMER_H_|macro|_FSL_SCTIMER_H_
DECL|_sctimer_clock_mode|enum|typedef enum _sctimer_clock_mode
DECL|_sctimer_clock_select|enum|typedef enum _sctimer_clock_select
DECL|_sctimer_config|struct|typedef struct _sctimer_config
DECL|_sctimer_conflict_resolution|enum|typedef enum _sctimer_conflict_resolution
DECL|_sctimer_counter|enum|typedef enum _sctimer_counter
DECL|_sctimer_event|enum|typedef enum _sctimer_event
DECL|_sctimer_input|enum|typedef enum _sctimer_input
DECL|_sctimer_interrupt_enable|enum|typedef enum _sctimer_interrupt_enable
DECL|_sctimer_out|enum|typedef enum _sctimer_out
DECL|_sctimer_pwm_level_select|enum|typedef enum _sctimer_pwm_level_select
DECL|_sctimer_pwm_mode|enum|typedef enum _sctimer_pwm_mode
DECL|_sctimer_pwm_signal_param|struct|typedef struct _sctimer_pwm_signal_param
DECL|_sctimer_status_flags|enum|typedef enum _sctimer_status_flags
DECL|clockMode|member|sctimer_clock_mode_t clockMode; /*!< SCT clock mode value */
DECL|clockSelect|member|sctimer_clock_select_t clockSelect; /*!< SCT clock select value */
DECL|dutyCyclePercent|member|uint8_t dutyCyclePercent; /*!< PWM pulse width, value should be between 1 to 100
DECL|enableBidirection_h|member|bool enableBidirection_h; /*!< true: Up-down count mode for the H or unified counter
DECL|enableBidirection_l|member|bool enableBidirection_l; /*!< true: Up-down count mode for the L or unified counter
DECL|enableCounterUnify|member|bool enableCounterUnify; /*!< true: SCT operates as a unified 32-bit counter;
DECL|kSCTIMER_Asynchronous_ClockMode|enumerator|kSCTIMER_Asynchronous_ClockMode /*!< Asynchronous Mode */
DECL|kSCTIMER_BusErrorHFlag|enumerator|kSCTIMER_BusErrorHFlag =
DECL|kSCTIMER_BusErrorLFlag|enumerator|kSCTIMER_BusErrorLFlag =
DECL|kSCTIMER_CenterAlignedPwm|enumerator|kSCTIMER_CenterAlignedPwm /*!< Center-aligned PWM */
DECL|kSCTIMER_Clock_On_Fall_Input_0|enumerator|kSCTIMER_Clock_On_Fall_Input_0, /*!< Falling edges on input 0 */
DECL|kSCTIMER_Clock_On_Fall_Input_1|enumerator|kSCTIMER_Clock_On_Fall_Input_1, /*!< Falling edges on input 1 */
DECL|kSCTIMER_Clock_On_Fall_Input_2|enumerator|kSCTIMER_Clock_On_Fall_Input_2, /*!< Falling edges on input 2 */
DECL|kSCTIMER_Clock_On_Fall_Input_3|enumerator|kSCTIMER_Clock_On_Fall_Input_3, /*!< Falling edges on input 3 */
DECL|kSCTIMER_Clock_On_Fall_Input_4|enumerator|kSCTIMER_Clock_On_Fall_Input_4, /*!< Falling edges on input 4 */
DECL|kSCTIMER_Clock_On_Fall_Input_5|enumerator|kSCTIMER_Clock_On_Fall_Input_5, /*!< Falling edges on input 5 */
DECL|kSCTIMER_Clock_On_Fall_Input_6|enumerator|kSCTIMER_Clock_On_Fall_Input_6, /*!< Falling edges on input 6 */
DECL|kSCTIMER_Clock_On_Fall_Input_7|enumerator|kSCTIMER_Clock_On_Fall_Input_7 /*!< Falling edges on input 7 */
DECL|kSCTIMER_Clock_On_Rise_Input_0|enumerator|kSCTIMER_Clock_On_Rise_Input_0 = 0U, /*!< Rising edges on input 0 */
DECL|kSCTIMER_Clock_On_Rise_Input_1|enumerator|kSCTIMER_Clock_On_Rise_Input_1, /*!< Rising edges on input 1 */
DECL|kSCTIMER_Clock_On_Rise_Input_2|enumerator|kSCTIMER_Clock_On_Rise_Input_2, /*!< Rising edges on input 2 */
DECL|kSCTIMER_Clock_On_Rise_Input_3|enumerator|kSCTIMER_Clock_On_Rise_Input_3, /*!< Rising edges on input 3 */
DECL|kSCTIMER_Clock_On_Rise_Input_4|enumerator|kSCTIMER_Clock_On_Rise_Input_4, /*!< Rising edges on input 4 */
DECL|kSCTIMER_Clock_On_Rise_Input_5|enumerator|kSCTIMER_Clock_On_Rise_Input_5, /*!< Rising edges on input 5 */
DECL|kSCTIMER_Clock_On_Rise_Input_6|enumerator|kSCTIMER_Clock_On_Rise_Input_6, /*!< Rising edges on input 6 */
DECL|kSCTIMER_Clock_On_Rise_Input_7|enumerator|kSCTIMER_Clock_On_Rise_Input_7, /*!< Rising edges on input 7 */
DECL|kSCTIMER_Counter_H|enumerator|kSCTIMER_Counter_H /*!< Counter H */
DECL|kSCTIMER_Counter_L|enumerator|kSCTIMER_Counter_L = 0U, /*!< Counter L */
DECL|kSCTIMER_EdgeAlignedPwm|enumerator|kSCTIMER_EdgeAlignedPwm = 0U, /*!< Edge-aligned PWM */
DECL|kSCTIMER_Event0Flag|enumerator|kSCTIMER_Event0Flag = (1U << 0), /*!< Event 0 Flag */
DECL|kSCTIMER_Event0InterruptEnable|enumerator|kSCTIMER_Event0InterruptEnable = (1U << 0), /*!< Event 0 interrupt */
DECL|kSCTIMER_Event10Flag|enumerator|kSCTIMER_Event10Flag = (1U << 10), /*!< Event 10 Flag */
DECL|kSCTIMER_Event10InterruptEnable|enumerator|kSCTIMER_Event10InterruptEnable = (1U << 10), /*!< Event 10 interrupt */
DECL|kSCTIMER_Event11Flag|enumerator|kSCTIMER_Event11Flag = (1U << 11), /*!< Event 11 Flag */
DECL|kSCTIMER_Event11InterruptEnable|enumerator|kSCTIMER_Event11InterruptEnable = (1U << 11), /*!< Event 11 interrupt */
DECL|kSCTIMER_Event12Flag|enumerator|kSCTIMER_Event12Flag = (1U << 12), /*!< Event 12 Flag */
DECL|kSCTIMER_Event12InterruptEnable|enumerator|kSCTIMER_Event12InterruptEnable = (1U << 12), /*!< Event 12 interrupt */
DECL|kSCTIMER_Event1Flag|enumerator|kSCTIMER_Event1Flag = (1U << 1), /*!< Event 1 Flag */
DECL|kSCTIMER_Event1InterruptEnable|enumerator|kSCTIMER_Event1InterruptEnable = (1U << 1), /*!< Event 1 interrupt */
DECL|kSCTIMER_Event2Flag|enumerator|kSCTIMER_Event2Flag = (1U << 2), /*!< Event 2 Flag */
DECL|kSCTIMER_Event2InterruptEnable|enumerator|kSCTIMER_Event2InterruptEnable = (1U << 2), /*!< Event 2 interrupt */
DECL|kSCTIMER_Event3Flag|enumerator|kSCTIMER_Event3Flag = (1U << 3), /*!< Event 3 Flag */
DECL|kSCTIMER_Event3InterruptEnable|enumerator|kSCTIMER_Event3InterruptEnable = (1U << 3), /*!< Event 3 interrupt */
DECL|kSCTIMER_Event4Flag|enumerator|kSCTIMER_Event4Flag = (1U << 4), /*!< Event 4 Flag */
DECL|kSCTIMER_Event4InterruptEnable|enumerator|kSCTIMER_Event4InterruptEnable = (1U << 4), /*!< Event 4 interrupt */
DECL|kSCTIMER_Event5Flag|enumerator|kSCTIMER_Event5Flag = (1U << 5), /*!< Event 5 Flag */
DECL|kSCTIMER_Event5InterruptEnable|enumerator|kSCTIMER_Event5InterruptEnable = (1U << 5), /*!< Event 5 interrupt */
DECL|kSCTIMER_Event6Flag|enumerator|kSCTIMER_Event6Flag = (1U << 6), /*!< Event 6 Flag */
DECL|kSCTIMER_Event6InterruptEnable|enumerator|kSCTIMER_Event6InterruptEnable = (1U << 6), /*!< Event 6 interrupt */
DECL|kSCTIMER_Event7Flag|enumerator|kSCTIMER_Event7Flag = (1U << 7), /*!< Event 7 Flag */
DECL|kSCTIMER_Event7InterruptEnable|enumerator|kSCTIMER_Event7InterruptEnable = (1U << 7), /*!< Event 7 interrupt */
DECL|kSCTIMER_Event8Flag|enumerator|kSCTIMER_Event8Flag = (1U << 8), /*!< Event 8 Flag */
DECL|kSCTIMER_Event8InterruptEnable|enumerator|kSCTIMER_Event8InterruptEnable = (1U << 8), /*!< Event 8 interrupt */
DECL|kSCTIMER_Event9Flag|enumerator|kSCTIMER_Event9Flag = (1U << 9), /*!< Event 9 Flag */
DECL|kSCTIMER_Event9InterruptEnable|enumerator|kSCTIMER_Event9InterruptEnable = (1U << 9), /*!< Event 9 interrupt */
DECL|kSCTIMER_HighTrue|enumerator|kSCTIMER_HighTrue /*!< High true pulses */
DECL|kSCTIMER_InputFallAndMatchEvent|enumerator|kSCTIMER_InputFallAndMatchEvent =
DECL|kSCTIMER_InputFallEvent|enumerator|kSCTIMER_InputFallEvent =
DECL|kSCTIMER_InputFallOrMatchEvent|enumerator|kSCTIMER_InputFallOrMatchEvent =
DECL|kSCTIMER_InputHighAndMatchEvent|enumerator|kSCTIMER_InputHighAndMatchEvent =
DECL|kSCTIMER_InputHighEvent|enumerator|kSCTIMER_InputHighEvent =
DECL|kSCTIMER_InputHighOrMatchEvent|enumerator|kSCTIMER_InputHighOrMatchEvent =
DECL|kSCTIMER_InputLowAndMatchEvent|enumerator|kSCTIMER_InputLowAndMatchEvent =
DECL|kSCTIMER_InputLowEvent|enumerator|kSCTIMER_InputLowEvent =
DECL|kSCTIMER_InputLowOrMatchEvent|enumerator|kSCTIMER_InputLowOrMatchEvent =
DECL|kSCTIMER_InputRiseAndMatchEvent|enumerator|kSCTIMER_InputRiseAndMatchEvent =
DECL|kSCTIMER_InputRiseEvent|enumerator|kSCTIMER_InputRiseEvent =
DECL|kSCTIMER_InputRiseOrMatchEvent|enumerator|kSCTIMER_InputRiseOrMatchEvent =
DECL|kSCTIMER_Input_0|enumerator|kSCTIMER_Input_0 = 0U, /*!< SCTIMER input 0 */
DECL|kSCTIMER_Input_1|enumerator|kSCTIMER_Input_1, /*!< SCTIMER input 1 */
DECL|kSCTIMER_Input_2|enumerator|kSCTIMER_Input_2, /*!< SCTIMER input 2 */
DECL|kSCTIMER_Input_3|enumerator|kSCTIMER_Input_3, /*!< SCTIMER input 3 */
DECL|kSCTIMER_Input_4|enumerator|kSCTIMER_Input_4, /*!< SCTIMER input 4 */
DECL|kSCTIMER_Input_5|enumerator|kSCTIMER_Input_5, /*!< SCTIMER input 5 */
DECL|kSCTIMER_Input_6|enumerator|kSCTIMER_Input_6, /*!< SCTIMER input 6 */
DECL|kSCTIMER_Input_7|enumerator|kSCTIMER_Input_7 /*!< SCTIMER input 7 */
DECL|kSCTIMER_Input_ClockMode|enumerator|kSCTIMER_Input_ClockMode, /*!< SCT Input Clock Mode */
DECL|kSCTIMER_LowTrue|enumerator|kSCTIMER_LowTrue = 0U, /*!< Low true pulses */
DECL|kSCTIMER_MatchEventOnly|enumerator|kSCTIMER_MatchEventOnly =
DECL|kSCTIMER_Out_0|enumerator|kSCTIMER_Out_0 = 0U, /*!< SCTIMER output 0*/
DECL|kSCTIMER_Out_1|enumerator|kSCTIMER_Out_1, /*!< SCTIMER output 1 */
DECL|kSCTIMER_Out_2|enumerator|kSCTIMER_Out_2, /*!< SCTIMER output 2 */
DECL|kSCTIMER_Out_3|enumerator|kSCTIMER_Out_3, /*!< SCTIMER output 3 */
DECL|kSCTIMER_Out_4|enumerator|kSCTIMER_Out_4, /*!< SCTIMER output 4 */
DECL|kSCTIMER_Out_5|enumerator|kSCTIMER_Out_5, /*!< SCTIMER output 5 */
DECL|kSCTIMER_Out_6|enumerator|kSCTIMER_Out_6, /*!< SCTIMER output 6 */
DECL|kSCTIMER_Out_7|enumerator|kSCTIMER_Out_7 /*!< SCTIMER output 7 */
DECL|kSCTIMER_OutputFallAndMatchEvent|enumerator|kSCTIMER_OutputFallAndMatchEvent =
DECL|kSCTIMER_OutputFallEvent|enumerator|kSCTIMER_OutputFallEvent =
DECL|kSCTIMER_OutputFallOrMatchEvent|enumerator|kSCTIMER_OutputFallOrMatchEvent =
DECL|kSCTIMER_OutputHighAndMatchEvent|enumerator|kSCTIMER_OutputHighAndMatchEvent =
DECL|kSCTIMER_OutputHighEvent|enumerator|kSCTIMER_OutputHighEvent =
DECL|kSCTIMER_OutputHighOrMatchEvent|enumerator|kSCTIMER_OutputHighOrMatchEvent =
DECL|kSCTIMER_OutputLowAndMatchEvent|enumerator|kSCTIMER_OutputLowAndMatchEvent =
DECL|kSCTIMER_OutputLowEvent|enumerator|kSCTIMER_OutputLowEvent =
DECL|kSCTIMER_OutputLowOrMatchEvent|enumerator|kSCTIMER_OutputLowOrMatchEvent =
DECL|kSCTIMER_OutputRiseAndMatchEvent|enumerator|kSCTIMER_OutputRiseAndMatchEvent =
DECL|kSCTIMER_OutputRiseEvent|enumerator|kSCTIMER_OutputRiseEvent =
DECL|kSCTIMER_OutputRiseOrMatchEvent|enumerator|kSCTIMER_OutputRiseOrMatchEvent =
DECL|kSCTIMER_ResolveClear|enumerator|kSCTIMER_ResolveClear, /*!< Clear output */
DECL|kSCTIMER_ResolveNone|enumerator|kSCTIMER_ResolveNone = 0U, /*!< No change */
DECL|kSCTIMER_ResolveSet|enumerator|kSCTIMER_ResolveSet, /*!< Set output */
DECL|kSCTIMER_ResolveToggle|enumerator|kSCTIMER_ResolveToggle /*!< Toggle output */
DECL|kSCTIMER_Sampled_ClockMode|enumerator|kSCTIMER_Sampled_ClockMode, /*!< Sampled System Clock Mode */
DECL|kSCTIMER_System_ClockMode|enumerator|kSCTIMER_System_ClockMode = 0U, /*!< System Clock Mode */
DECL|level|member|sctimer_pwm_level_select_t level; /*!< PWM output active level select. */
DECL|outInitState|member|uint8_t outInitState; /*!< Defines the initial output value */
DECL|output|member|sctimer_out_t output; /*!< The output pin to use to generate the PWM signal */
DECL|prescale_h|member|uint8_t prescale_h; /*!< Prescale value to produce the H counter clock.
DECL|prescale_l|member|uint8_t prescale_l; /*!< Prescale value to produce the L or unified counter clock */
DECL|sctimer_clock_mode_t|typedef|} sctimer_clock_mode_t;
DECL|sctimer_clock_select_t|typedef|} sctimer_clock_select_t;
DECL|sctimer_config_t|typedef|} sctimer_config_t;
DECL|sctimer_conflict_resolution_t|typedef|} sctimer_conflict_resolution_t;
DECL|sctimer_counter_t|typedef|} sctimer_counter_t;
DECL|sctimer_event_callback_t|typedef|typedef void (*sctimer_event_callback_t)(void);
DECL|sctimer_event_t|typedef|} sctimer_event_t;
DECL|sctimer_input_t|typedef|} sctimer_input_t;
DECL|sctimer_interrupt_enable_t|typedef|} sctimer_interrupt_enable_t;
DECL|sctimer_out_t|typedef|} sctimer_out_t;
DECL|sctimer_pwm_level_select_t|typedef|} sctimer_pwm_level_select_t;
DECL|sctimer_pwm_mode_t|typedef|} sctimer_pwm_mode_t;
DECL|sctimer_pwm_signal_param_t|typedef|} sctimer_pwm_signal_param_t;
DECL|sctimer_status_flags_t|typedef|} sctimer_status_flags_t;
