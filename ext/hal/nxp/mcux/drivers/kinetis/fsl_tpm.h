DECL|FSL_TPM_DRIVER_VERSION|macro|FSL_TPM_DRIVER_VERSION
DECL|TPM_ClearStatusFlags|function|static inline void TPM_ClearStatusFlags(TPM_Type *base, uint32_t mask)
DECL|TPM_GetCurrentTimerCount|function|static inline uint32_t TPM_GetCurrentTimerCount(TPM_Type *base)
DECL|TPM_GetStatusFlags|function|static inline uint32_t TPM_GetStatusFlags(TPM_Type *base)
DECL|TPM_Reset|function|static inline void TPM_Reset(TPM_Type *base)
DECL|TPM_SetTimerPeriod|function|static inline void TPM_SetTimerPeriod(TPM_Type *base, uint32_t ticks)
DECL|TPM_StartTimer|function|static inline void TPM_StartTimer(TPM_Type *base, tpm_clock_source_t clockSource)
DECL|TPM_StopTimer|function|static inline void TPM_StopTimer(TPM_Type *base)
DECL|_FSL_TPM_H_|macro|_FSL_TPM_H_
DECL|_tpm_chnl_pwm_signal_param|struct|typedef struct _tpm_chnl_pwm_signal_param
DECL|_tpm_chnl|enum|typedef enum _tpm_chnl
DECL|_tpm_clock_prescale|enum|typedef enum _tpm_clock_prescale
DECL|_tpm_clock_source|enum|typedef enum _tpm_clock_source
DECL|_tpm_config|struct|typedef struct _tpm_config
DECL|_tpm_dual_edge_capture_param|struct|typedef struct _tpm_dual_edge_capture_param
DECL|_tpm_input_capture_edge|enum|typedef enum _tpm_input_capture_edge
DECL|_tpm_interrupt_enable|enum|typedef enum _tpm_interrupt_enable
DECL|_tpm_output_compare_mode|enum|typedef enum _tpm_output_compare_mode
DECL|_tpm_phase_param|struct|typedef struct _tpm_phase_param
DECL|_tpm_phase_polarity|enum|typedef enum _tpm_phase_polarity
DECL|_tpm_pwm_level_select|enum|typedef enum _tpm_pwm_level_select
DECL|_tpm_pwm_mode|enum|typedef enum _tpm_pwm_mode
DECL|_tpm_quad_decode_mode|enum|typedef enum _tpm_quad_decode_mode
DECL|_tpm_status_flags|enum|typedef enum _tpm_status_flags
DECL|_tpm_trigger_select|enum|typedef enum _tpm_trigger_select
DECL|_tpm_trigger_source|enum|typedef enum _tpm_trigger_source
DECL|chnlNumber|member|tpm_chnl_t chnlNumber; /*!< TPM channel to configure.
DECL|currChanEdgeMode|member|tpm_input_capture_edge_t currChanEdgeMode; /*!< Input capture edge select for channel n */
DECL|dutyCyclePercent|member|uint8_t dutyCyclePercent; /*!< PWM pulse width, value should be between 0 to 100
DECL|enableDebugMode|member|bool enableDebugMode; /*!< true: TPM counter continues in debug mode;
DECL|enableDoze|member|bool enableDoze; /*!< true: TPM counter is paused in doze mode;
DECL|enablePauseOnTrigger|member|bool enablePauseOnTrigger; /*!< true: TPM counter will pause while trigger remains asserted;
DECL|enableReloadOnTrigger|member|bool enableReloadOnTrigger; /*!< true: TPM counter is reloaded on trigger;
DECL|enableStartOnTrigger|member|bool enableStartOnTrigger; /*!< true: TPM counter only starts when a trigger is detected;
DECL|enableStopOnOverflow|member|bool enableStopOnOverflow; /*!< true: TPM counter stops after overflow;
DECL|enableSwap|member|bool enableSwap; /*!< true: Use channel n+1 input, channel n input is ignored;
DECL|firstEdgeDelayPercent|member|uint8_t firstEdgeDelayPercent; /*!< Used only in combined PWM mode to generate asymmetrical PWM.
DECL|kTPM_CenterAlignedPwm|enumerator|kTPM_CenterAlignedPwm, /*!< Center aligned PWM */
DECL|kTPM_Chnl0Flag|enumerator|kTPM_Chnl0Flag = (1U << 0), /*!< Channel 0 flag */
DECL|kTPM_Chnl0InterruptEnable|enumerator|kTPM_Chnl0InterruptEnable = (1U << 0), /*!< Channel 0 interrupt.*/
DECL|kTPM_Chnl1Flag|enumerator|kTPM_Chnl1Flag = (1U << 1), /*!< Channel 1 flag */
DECL|kTPM_Chnl1InterruptEnable|enumerator|kTPM_Chnl1InterruptEnable = (1U << 1), /*!< Channel 1 interrupt.*/
DECL|kTPM_Chnl2Flag|enumerator|kTPM_Chnl2Flag = (1U << 2), /*!< Channel 2 flag */
DECL|kTPM_Chnl2InterruptEnable|enumerator|kTPM_Chnl2InterruptEnable = (1U << 2), /*!< Channel 2 interrupt.*/
DECL|kTPM_Chnl3Flag|enumerator|kTPM_Chnl3Flag = (1U << 3), /*!< Channel 3 flag */
DECL|kTPM_Chnl3InterruptEnable|enumerator|kTPM_Chnl3InterruptEnable = (1U << 3), /*!< Channel 3 interrupt.*/
DECL|kTPM_Chnl4Flag|enumerator|kTPM_Chnl4Flag = (1U << 4), /*!< Channel 4 flag */
DECL|kTPM_Chnl4InterruptEnable|enumerator|kTPM_Chnl4InterruptEnable = (1U << 4), /*!< Channel 4 interrupt.*/
DECL|kTPM_Chnl5Flag|enumerator|kTPM_Chnl5Flag = (1U << 5), /*!< Channel 5 flag */
DECL|kTPM_Chnl5InterruptEnable|enumerator|kTPM_Chnl5InterruptEnable = (1U << 5), /*!< Channel 5 interrupt.*/
DECL|kTPM_Chnl6Flag|enumerator|kTPM_Chnl6Flag = (1U << 6), /*!< Channel 6 flag */
DECL|kTPM_Chnl6InterruptEnable|enumerator|kTPM_Chnl6InterruptEnable = (1U << 6), /*!< Channel 6 interrupt.*/
DECL|kTPM_Chnl7Flag|enumerator|kTPM_Chnl7Flag = (1U << 7), /*!< Channel 7 flag */
DECL|kTPM_Chnl7InterruptEnable|enumerator|kTPM_Chnl7InterruptEnable = (1U << 7), /*!< Channel 7 interrupt.*/
DECL|kTPM_Chnl_0|enumerator|kTPM_Chnl_0 = 0U, /*!< TPM channel number 0*/
DECL|kTPM_Chnl_1|enumerator|kTPM_Chnl_1, /*!< TPM channel number 1 */
DECL|kTPM_Chnl_2|enumerator|kTPM_Chnl_2, /*!< TPM channel number 2 */
DECL|kTPM_Chnl_3|enumerator|kTPM_Chnl_3, /*!< TPM channel number 3 */
DECL|kTPM_Chnl_4|enumerator|kTPM_Chnl_4, /*!< TPM channel number 4 */
DECL|kTPM_Chnl_5|enumerator|kTPM_Chnl_5, /*!< TPM channel number 5 */
DECL|kTPM_Chnl_6|enumerator|kTPM_Chnl_6, /*!< TPM channel number 6 */
DECL|kTPM_Chnl_7|enumerator|kTPM_Chnl_7 /*!< TPM channel number 7 */
DECL|kTPM_ClearOnMatch|enumerator|kTPM_ClearOnMatch = ((1U << TPM_CnSC_MSA_SHIFT) | (2U << TPM_CnSC_ELSA_SHIFT)), /*!< Clear output */
DECL|kTPM_CombinedPwm|enumerator|kTPM_CombinedPwm /*!< Combined PWM */
DECL|kTPM_EdgeAlignedPwm|enumerator|kTPM_EdgeAlignedPwm = 0U, /*!< Edge aligned PWM */
DECL|kTPM_ExternalClock|enumerator|kTPM_ExternalClock /*!< External clock */
DECL|kTPM_FallingEdge|enumerator|kTPM_FallingEdge = (2U << TPM_CnSC_ELSA_SHIFT), /*!< Capture on falling edge only */
DECL|kTPM_HighPulseOutput|enumerator|kTPM_HighPulseOutput = ((3U << TPM_CnSC_MSA_SHIFT) | (1U << TPM_CnSC_ELSA_SHIFT)), /*!< Pulse output high */
DECL|kTPM_HighTrue|enumerator|kTPM_HighTrue /*!< High true pulses */
DECL|kTPM_LowPulseOutput|enumerator|kTPM_LowPulseOutput = ((3U << TPM_CnSC_MSA_SHIFT) | (2U << TPM_CnSC_ELSA_SHIFT)) /*!< Pulse output low */
DECL|kTPM_LowTrue|enumerator|kTPM_LowTrue, /*!< Low true pulses */
DECL|kTPM_NoOutputSignal|enumerator|kTPM_NoOutputSignal = (1U << TPM_CnSC_MSA_SHIFT), /*!< No channel output when counter reaches CnV */
DECL|kTPM_NoPwmSignal|enumerator|kTPM_NoPwmSignal = 0U, /*!< No PWM output on pin */
DECL|kTPM_Prescale_Divide_128|enumerator|kTPM_Prescale_Divide_128 /*!< Divide by 128 */
DECL|kTPM_Prescale_Divide_16|enumerator|kTPM_Prescale_Divide_16, /*!< Divide by 16 */
DECL|kTPM_Prescale_Divide_1|enumerator|kTPM_Prescale_Divide_1 = 0U, /*!< Divide by 1 */
DECL|kTPM_Prescale_Divide_2|enumerator|kTPM_Prescale_Divide_2, /*!< Divide by 2 */
DECL|kTPM_Prescale_Divide_32|enumerator|kTPM_Prescale_Divide_32, /*!< Divide by 32 */
DECL|kTPM_Prescale_Divide_4|enumerator|kTPM_Prescale_Divide_4, /*!< Divide by 4 */
DECL|kTPM_Prescale_Divide_64|enumerator|kTPM_Prescale_Divide_64, /*!< Divide by 64 */
DECL|kTPM_Prescale_Divide_8|enumerator|kTPM_Prescale_Divide_8, /*!< Divide by 8 */
DECL|kTPM_QuadCountAndDir|enumerator|kTPM_QuadCountAndDir /*!< Count and direction encoding mode */
DECL|kTPM_QuadPhaseEncode|enumerator|kTPM_QuadPhaseEncode = 0U, /*!< Phase A and Phase B encoding mode */
DECL|kTPM_QuadPhaseInvert|enumerator|kTPM_QuadPhaseInvert /*!< Phase input signal is inverted */
DECL|kTPM_QuadPhaseNormal|enumerator|kTPM_QuadPhaseNormal = 0U, /*!< Phase input signal is not inverted */
DECL|kTPM_RiseAndFallEdge|enumerator|kTPM_RiseAndFallEdge = (3U << TPM_CnSC_ELSA_SHIFT) /*!< Capture on rising or falling edge */
DECL|kTPM_RisingEdge|enumerator|kTPM_RisingEdge = (1U << TPM_CnSC_ELSA_SHIFT), /*!< Capture on rising edge only */
DECL|kTPM_SetOnMatch|enumerator|kTPM_SetOnMatch = ((1U << TPM_CnSC_MSA_SHIFT) | (3U << TPM_CnSC_ELSA_SHIFT)), /*!< Set output */
DECL|kTPM_SystemClock|enumerator|kTPM_SystemClock = 1U, /*!< System clock */
DECL|kTPM_TimeOverflowFlag|enumerator|kTPM_TimeOverflowFlag = (1U << 8) /*!< Time overflow flag */
DECL|kTPM_TimeOverflowInterruptEnable|enumerator|kTPM_TimeOverflowInterruptEnable = (1U << 8) /*!< Time overflow interrupt.*/
DECL|kTPM_ToggleOnMatch|enumerator|kTPM_ToggleOnMatch = ((1U << TPM_CnSC_MSA_SHIFT) | (1U << TPM_CnSC_ELSA_SHIFT)), /*!< Toggle output */
DECL|kTPM_TriggerSource_External|enumerator|kTPM_TriggerSource_External = 0U, /*!< Use external trigger input */
DECL|kTPM_TriggerSource_Internal|enumerator|kTPM_TriggerSource_Internal /*!< Use internal trigger */
DECL|kTPM_Trigger_Select_0|enumerator|kTPM_Trigger_Select_0 = 0U,
DECL|kTPM_Trigger_Select_10|enumerator|kTPM_Trigger_Select_10,
DECL|kTPM_Trigger_Select_11|enumerator|kTPM_Trigger_Select_11,
DECL|kTPM_Trigger_Select_12|enumerator|kTPM_Trigger_Select_12,
DECL|kTPM_Trigger_Select_13|enumerator|kTPM_Trigger_Select_13,
DECL|kTPM_Trigger_Select_14|enumerator|kTPM_Trigger_Select_14,
DECL|kTPM_Trigger_Select_15|enumerator|kTPM_Trigger_Select_15
DECL|kTPM_Trigger_Select_1|enumerator|kTPM_Trigger_Select_1,
DECL|kTPM_Trigger_Select_2|enumerator|kTPM_Trigger_Select_2,
DECL|kTPM_Trigger_Select_3|enumerator|kTPM_Trigger_Select_3,
DECL|kTPM_Trigger_Select_4|enumerator|kTPM_Trigger_Select_4,
DECL|kTPM_Trigger_Select_5|enumerator|kTPM_Trigger_Select_5,
DECL|kTPM_Trigger_Select_6|enumerator|kTPM_Trigger_Select_6,
DECL|kTPM_Trigger_Select_7|enumerator|kTPM_Trigger_Select_7,
DECL|kTPM_Trigger_Select_8|enumerator|kTPM_Trigger_Select_8,
DECL|kTPM_Trigger_Select_9|enumerator|kTPM_Trigger_Select_9,
DECL|level|member|tpm_pwm_level_select_t level; /*!< PWM output active level select */
DECL|nextChanEdgeMode|member|tpm_input_capture_edge_t nextChanEdgeMode; /*!< Input capture edge select for channel n+1 */
DECL|phaseFilterVal|member|uint32_t phaseFilterVal; /*!< Filter value, filter is disabled when the value is zero */
DECL|phasePolarity|member|tpm_phase_polarity_t phasePolarity; /*!< Phase polarity */
DECL|prescale|member|tpm_clock_prescale_t prescale; /*!< Select TPM clock prescale value */
DECL|tpm_chnl_pwm_signal_param_t|typedef|} tpm_chnl_pwm_signal_param_t;
DECL|tpm_chnl_t|typedef|} tpm_chnl_t;
DECL|tpm_clock_prescale_t|typedef|} tpm_clock_prescale_t;
DECL|tpm_clock_source_t|typedef|} tpm_clock_source_t;
DECL|tpm_config_t|typedef|} tpm_config_t;
DECL|tpm_dual_edge_capture_param_t|typedef|} tpm_dual_edge_capture_param_t;
DECL|tpm_input_capture_edge_t|typedef|} tpm_input_capture_edge_t;
DECL|tpm_interrupt_enable_t|typedef|} tpm_interrupt_enable_t;
DECL|tpm_output_compare_mode_t|typedef|} tpm_output_compare_mode_t;
DECL|tpm_phase_params_t|typedef|} tpm_phase_params_t;
DECL|tpm_phase_polarity_t|typedef|} tpm_phase_polarity_t;
DECL|tpm_pwm_level_select_t|typedef|} tpm_pwm_level_select_t;
DECL|tpm_pwm_mode_t|typedef|} tpm_pwm_mode_t;
DECL|tpm_quad_decode_mode_t|typedef|} tpm_quad_decode_mode_t;
DECL|tpm_status_flags_t|typedef|} tpm_status_flags_t;
DECL|tpm_trigger_select_t|typedef|} tpm_trigger_select_t;
DECL|tpm_trigger_source_t|typedef|} tpm_trigger_source_t;
DECL|triggerSelect|member|tpm_trigger_select_t triggerSelect; /*!< Input trigger to use for controlling the counter operation */
DECL|triggerSource|member|tpm_trigger_source_t triggerSource; /*!< Decides if we use external or internal trigger. */
DECL|useGlobalTimeBase|member|bool useGlobalTimeBase; /*!< true: Use of an external global time base is enabled;
