DECL|FSL_FTM_DRIVER_VERSION|macro|FSL_FTM_DRIVER_VERSION
DECL|FTM_ClearQuadDecoderCounterValue|function|static inline void FTM_ClearQuadDecoderCounterValue(FTM_Type *base)
DECL|FTM_GetCurrentTimerCount|function|static inline uint32_t FTM_GetCurrentTimerCount(FTM_Type *base)
DECL|FTM_GetQuadDecoderCounterValue|function|static inline uint32_t FTM_GetQuadDecoderCounterValue(FTM_Type *base)
DECL|FTM_GetQuadDecoderFlags|function|static inline uint32_t FTM_GetQuadDecoderFlags(FTM_Type *base)
DECL|FTM_SetComplementaryEnable|function|static inline void FTM_SetComplementaryEnable(FTM_Type *base, ftm_chnl_t chnlPairNumber, bool value)
DECL|FTM_SetDeadTimeEnable|function|static inline void FTM_SetDeadTimeEnable(FTM_Type *base, ftm_chnl_t chnlPairNumber, bool value)
DECL|FTM_SetFaultControlEnable|function|static inline void FTM_SetFaultControlEnable(FTM_Type *base, ftm_chnl_t chnlPairNumber, bool value)
DECL|FTM_SetGlobalTimeBaseOutputEnable|function|static inline void FTM_SetGlobalTimeBaseOutputEnable(FTM_Type *base, bool enable)
DECL|FTM_SetInvertEnable|function|static inline void FTM_SetInvertEnable(FTM_Type *base, ftm_chnl_t chnlPairNumber, bool value)
DECL|FTM_SetOutputMask|function|static inline void FTM_SetOutputMask(FTM_Type *base, ftm_chnl_t chnlNumber, bool mask)
DECL|FTM_SetPwmOutputEnable|function|static inline void FTM_SetPwmOutputEnable(FTM_Type *base, ftm_chnl_t chnlNumber, bool value)
DECL|FTM_SetQuadDecoderModuloValue|function|static inline void FTM_SetQuadDecoderModuloValue(FTM_Type *base, uint32_t startValue, uint32_t overValue)
DECL|FTM_SetSoftwareCtrlEnable|function|static inline void FTM_SetSoftwareCtrlEnable(FTM_Type *base, ftm_chnl_t chnlNumber, bool value)
DECL|FTM_SetSoftwareCtrlVal|function|static inline void FTM_SetSoftwareCtrlVal(FTM_Type *base, ftm_chnl_t chnlNumber, bool value)
DECL|FTM_SetSoftwareTrigger|function|static inline void FTM_SetSoftwareTrigger(FTM_Type *base, bool enable)
DECL|FTM_SetTimerPeriod|function|static inline void FTM_SetTimerPeriod(FTM_Type *base, uint32_t ticks)
DECL|FTM_SetWriteProtection|function|static inline void FTM_SetWriteProtection(FTM_Type *base, bool enable)
DECL|FTM_StartTimer|function|static inline void FTM_StartTimer(FTM_Type *base, ftm_clock_source_t clockSource)
DECL|FTM_StopTimer|function|static inline void FTM_StopTimer(FTM_Type *base)
DECL|_FSL_FTM_H_|macro|_FSL_FTM_H_
DECL|_ftm_bdm_mode|enum|typedef enum _ftm_bdm_mode
DECL|_ftm_chnl_pwm_signal_param|struct|typedef struct _ftm_chnl_pwm_signal_param
DECL|_ftm_chnl|enum|typedef enum _ftm_chnl
DECL|_ftm_clock_prescale|enum|typedef enum _ftm_clock_prescale
DECL|_ftm_clock_source|enum|typedef enum _ftm_clock_source
DECL|_ftm_config|struct|typedef struct _ftm_config
DECL|_ftm_deadtime_prescale|enum|typedef enum _ftm_deadtime_prescale
DECL|_ftm_dual_edge_capture_mode|enum|typedef enum _ftm_dual_edge_capture_mode
DECL|_ftm_dual_edge_capture_param|struct|typedef struct _ftm_dual_edge_capture_param
DECL|_ftm_external_trigger|enum|typedef enum _ftm_external_trigger
DECL|_ftm_fault_input|enum|typedef enum _ftm_fault_input
DECL|_ftm_fault_mode|enum|typedef enum _ftm_fault_mode
DECL|_ftm_fault_param|struct|typedef struct _ftm_fault_param
DECL|_ftm_input_capture_edge|enum|typedef enum _ftm_input_capture_edge
DECL|_ftm_interrupt_enable|enum|typedef enum _ftm_interrupt_enable
DECL|_ftm_output_compare_mode|enum|typedef enum _ftm_output_compare_mode
DECL|_ftm_phase_param|struct|typedef struct _ftm_phase_param
DECL|_ftm_phase_polarity|enum|typedef enum _ftm_phase_polarity
DECL|_ftm_pwm_level_select|enum|typedef enum _ftm_pwm_level_select
DECL|_ftm_pwm_mode|enum|typedef enum _ftm_pwm_mode
DECL|_ftm_pwm_sync_method|enum|typedef enum _ftm_pwm_sync_method
DECL|_ftm_quad_decode_mode|enum|typedef enum _ftm_quad_decode_mode
DECL|_ftm_quad_decoder_flags|enum|enum _ftm_quad_decoder_flags
DECL|_ftm_reload_point|enum|typedef enum _ftm_reload_point
DECL|_ftm_status_flags|enum|typedef enum _ftm_status_flags
DECL|bdmMode|member|ftm_bdm_mode_t bdmMode; /*!< FTM behavior in BDM mode */
DECL|chnlInitState|member|uint8_t chnlInitState; /*!< Defines the initialization value of the channels in OUTINT register */
DECL|chnlNumber|member|ftm_chnl_t chnlNumber; /*!< The channel/channel pair number.
DECL|chnlPolarity|member|uint8_t chnlPolarity; /*!< Defines the output polarity of the channels in POL register */
DECL|currChanEdgeMode|member|ftm_input_capture_edge_t currChanEdgeMode; /*!< Input capture edge select for channel n */
DECL|deadTimePrescale|member|ftm_deadtime_prescale_t deadTimePrescale; /*!< The dead time prescalar value */
DECL|deadTimeValue|member|uint32_t deadTimeValue; /*!< The dead time value
DECL|dutyCyclePercent|member|uint8_t dutyCyclePercent; /*!< PWM pulse width, value should be between 0 to 100
DECL|enableFaultInput|member|bool enableFaultInput; /*!< True: Fault input is enabled; false: Fault input is disabled */
DECL|enablePhaseFilter|member|bool enablePhaseFilter; /*!< True: enable phase filter; false: disable filter */
DECL|extTriggers|member|uint32_t extTriggers; /*!< External triggers to enable. Multiple trigger sources can be
DECL|faultFilterValue|member|uint8_t faultFilterValue; /*!< Fault input filter value */
DECL|faultLevel|member|bool faultLevel; /*!< True: Fault polarity is active low; in other words, '0' indicates a fault;
DECL|faultMode|member|ftm_fault_mode_t faultMode; /*!< FTM fault control mode */
DECL|firstEdgeDelayPercent|member|uint8_t firstEdgeDelayPercent; /*!< Used only in combined PWM mode to generate an asymmetrical PWM.
DECL|ftm_bdm_mode_t|typedef|} ftm_bdm_mode_t;
DECL|ftm_chnl_pwm_signal_param_t|typedef|} ftm_chnl_pwm_signal_param_t;
DECL|ftm_chnl_t|typedef|} ftm_chnl_t;
DECL|ftm_clock_prescale_t|typedef|} ftm_clock_prescale_t;
DECL|ftm_clock_source_t|typedef|} ftm_clock_source_t;
DECL|ftm_config_t|typedef|} ftm_config_t;
DECL|ftm_deadtime_prescale_t|typedef|} ftm_deadtime_prescale_t;
DECL|ftm_dual_edge_capture_mode_t|typedef|} ftm_dual_edge_capture_mode_t;
DECL|ftm_dual_edge_capture_param_t|typedef|} ftm_dual_edge_capture_param_t;
DECL|ftm_external_trigger_t|typedef|} ftm_external_trigger_t;
DECL|ftm_fault_input_t|typedef|} ftm_fault_input_t;
DECL|ftm_fault_mode_t|typedef|} ftm_fault_mode_t;
DECL|ftm_fault_param_t|typedef|} ftm_fault_param_t;
DECL|ftm_input_capture_edge_t|typedef|} ftm_input_capture_edge_t;
DECL|ftm_interrupt_enable_t|typedef|} ftm_interrupt_enable_t;
DECL|ftm_output_compare_mode_t|typedef|} ftm_output_compare_mode_t;
DECL|ftm_phase_params_t|typedef|} ftm_phase_params_t;
DECL|ftm_phase_polarity_t|typedef|} ftm_phase_polarity_t;
DECL|ftm_pwm_level_select_t|typedef|} ftm_pwm_level_select_t;
DECL|ftm_pwm_mode_t|typedef|} ftm_pwm_mode_t;
DECL|ftm_pwm_sync_method_t|typedef|} ftm_pwm_sync_method_t;
DECL|ftm_quad_decode_mode_t|typedef|} ftm_quad_decode_mode_t;
DECL|ftm_reload_point_t|typedef|} ftm_reload_point_t;
DECL|ftm_status_flags_t|typedef|} ftm_status_flags_t;
DECL|kFTM_BdmMode_0|enumerator|kFTM_BdmMode_0 = 0U,
DECL|kFTM_BdmMode_1|enumerator|kFTM_BdmMode_1,
DECL|kFTM_BdmMode_2|enumerator|kFTM_BdmMode_2,
DECL|kFTM_BdmMode_3|enumerator|kFTM_BdmMode_3
DECL|kFTM_CenterAlignedPwm|enumerator|kFTM_CenterAlignedPwm, /*!< Center-aligned PWM */
DECL|kFTM_Chnl0Flag|enumerator|kFTM_Chnl0Flag = (1U << 0), /*!< Channel 0 Flag */
DECL|kFTM_Chnl0InterruptEnable|enumerator|kFTM_Chnl0InterruptEnable = (1U << 0), /*!< Channel 0 interrupt */
DECL|kFTM_Chnl0Match|enumerator|kFTM_Chnl0Match = (1U << 0), /*!< Channel 0 match included as a reload point */
DECL|kFTM_Chnl0Trigger|enumerator|kFTM_Chnl0Trigger = (1U << 4), /*!< Generate trigger when counter equals chnl 0 CnV reg */
DECL|kFTM_Chnl1Flag|enumerator|kFTM_Chnl1Flag = (1U << 1), /*!< Channel 1 Flag */
DECL|kFTM_Chnl1InterruptEnable|enumerator|kFTM_Chnl1InterruptEnable = (1U << 1), /*!< Channel 1 interrupt */
DECL|kFTM_Chnl1Match|enumerator|kFTM_Chnl1Match = (1U << 1), /*!< Channel 1 match included as a reload point */
DECL|kFTM_Chnl1Trigger|enumerator|kFTM_Chnl1Trigger = (1U << 5), /*!< Generate trigger when counter equals chnl 1 CnV reg */
DECL|kFTM_Chnl2Flag|enumerator|kFTM_Chnl2Flag = (1U << 2), /*!< Channel 2 Flag */
DECL|kFTM_Chnl2InterruptEnable|enumerator|kFTM_Chnl2InterruptEnable = (1U << 2), /*!< Channel 2 interrupt */
DECL|kFTM_Chnl2Match|enumerator|kFTM_Chnl2Match = (1U << 2), /*!< Channel 2 match included as a reload point */
DECL|kFTM_Chnl2Trigger|enumerator|kFTM_Chnl2Trigger = (1U << 0), /*!< Generate trigger when counter equals chnl 2 CnV reg */
DECL|kFTM_Chnl3Flag|enumerator|kFTM_Chnl3Flag = (1U << 3), /*!< Channel 3 Flag */
DECL|kFTM_Chnl3InterruptEnable|enumerator|kFTM_Chnl3InterruptEnable = (1U << 3), /*!< Channel 3 interrupt */
DECL|kFTM_Chnl3Match|enumerator|kFTM_Chnl3Match = (1U << 3), /*!< Channel 3 match included as a reload point */
DECL|kFTM_Chnl3Trigger|enumerator|kFTM_Chnl3Trigger = (1U << 1), /*!< Generate trigger when counter equals chnl 3 CnV reg */
DECL|kFTM_Chnl4Flag|enumerator|kFTM_Chnl4Flag = (1U << 4), /*!< Channel 4 Flag */
DECL|kFTM_Chnl4InterruptEnable|enumerator|kFTM_Chnl4InterruptEnable = (1U << 4), /*!< Channel 4 interrupt */
DECL|kFTM_Chnl4Match|enumerator|kFTM_Chnl4Match = (1U << 4), /*!< Channel 4 match included as a reload point */
DECL|kFTM_Chnl4Trigger|enumerator|kFTM_Chnl4Trigger = (1U << 2), /*!< Generate trigger when counter equals chnl 4 CnV reg */
DECL|kFTM_Chnl5Flag|enumerator|kFTM_Chnl5Flag = (1U << 5), /*!< Channel 5 Flag */
DECL|kFTM_Chnl5InterruptEnable|enumerator|kFTM_Chnl5InterruptEnable = (1U << 5), /*!< Channel 5 interrupt */
DECL|kFTM_Chnl5Match|enumerator|kFTM_Chnl5Match = (1U << 5), /*!< Channel 5 match included as a reload point */
DECL|kFTM_Chnl5Trigger|enumerator|kFTM_Chnl5Trigger = (1U << 3), /*!< Generate trigger when counter equals chnl 5 CnV reg */
DECL|kFTM_Chnl6Flag|enumerator|kFTM_Chnl6Flag = (1U << 6), /*!< Channel 6 Flag */
DECL|kFTM_Chnl6InterruptEnable|enumerator|kFTM_Chnl6InterruptEnable = (1U << 6), /*!< Channel 6 interrupt */
DECL|kFTM_Chnl6Match|enumerator|kFTM_Chnl6Match = (1U << 6), /*!< Channel 6 match included as a reload point */
DECL|kFTM_Chnl6Trigger|enumerator|kFTM_Chnl6Trigger =
DECL|kFTM_Chnl7Flag|enumerator|kFTM_Chnl7Flag = (1U << 7), /*!< Channel 7 Flag */
DECL|kFTM_Chnl7InterruptEnable|enumerator|kFTM_Chnl7InterruptEnable = (1U << 7), /*!< Channel 7 interrupt */
DECL|kFTM_Chnl7Match|enumerator|kFTM_Chnl7Match = (1U << 7), /*!< Channel 7 match included as a reload point */
DECL|kFTM_Chnl7Trigger|enumerator|kFTM_Chnl7Trigger =
DECL|kFTM_ChnlTriggerFlag|enumerator|kFTM_ChnlTriggerFlag = (1U << 10), /*!< Channel trigger Flag */
DECL|kFTM_Chnl_0|enumerator|kFTM_Chnl_0 = 0U, /*!< FTM channel number 0*/
DECL|kFTM_Chnl_1|enumerator|kFTM_Chnl_1, /*!< FTM channel number 1 */
DECL|kFTM_Chnl_2|enumerator|kFTM_Chnl_2, /*!< FTM channel number 2 */
DECL|kFTM_Chnl_3|enumerator|kFTM_Chnl_3, /*!< FTM channel number 3 */
DECL|kFTM_Chnl_4|enumerator|kFTM_Chnl_4, /*!< FTM channel number 4 */
DECL|kFTM_Chnl_5|enumerator|kFTM_Chnl_5, /*!< FTM channel number 5 */
DECL|kFTM_Chnl_6|enumerator|kFTM_Chnl_6, /*!< FTM channel number 6 */
DECL|kFTM_Chnl_7|enumerator|kFTM_Chnl_7 /*!< FTM channel number 7 */
DECL|kFTM_ClearOnMatch|enumerator|kFTM_ClearOnMatch = ((1U << FTM_CnSC_MSA_SHIFT) | (2U << FTM_CnSC_ELSA_SHIFT)), /*!< Clear output */
DECL|kFTM_CntMax|enumerator|kFTM_CntMax = (1U << 8), /*!< Use in up-down count mode only, reload when counter reaches the maximum value */
DECL|kFTM_CntMin|enumerator|kFTM_CntMin = (1U << 9), /*!< Use in up-down count mode only, reload when counter reaches the minimum value */
DECL|kFTM_CombinedPwm|enumerator|kFTM_CombinedPwm /*!< Combined PWM */
DECL|kFTM_Continuous|enumerator|kFTM_Continuous = (1U << FTM_CnSC_MSA_SHIFT) /*!< Continuous capture mode */
DECL|kFTM_Deadtime_Prescale_16|enumerator|kFTM_Deadtime_Prescale_16 /*!< Divide by 16 */
DECL|kFTM_Deadtime_Prescale_1|enumerator|kFTM_Deadtime_Prescale_1 = 1U, /*!< Divide by 1 */
DECL|kFTM_Deadtime_Prescale_4|enumerator|kFTM_Deadtime_Prescale_4, /*!< Divide by 4 */
DECL|kFTM_EdgeAlignedPwm|enumerator|kFTM_EdgeAlignedPwm = 0U, /*!< Edge-aligned PWM */
DECL|kFTM_ExternalClock|enumerator|kFTM_ExternalClock /*!< External clock */
DECL|kFTM_FallingEdge|enumerator|kFTM_FallingEdge = (2U << FTM_CnSC_ELSA_SHIFT), /*!< Capture on falling edge only*/
DECL|kFTM_FaultFlag|enumerator|kFTM_FaultFlag = (1U << 8), /*!< Fault Flag */
DECL|kFTM_FaultInterruptEnable|enumerator|kFTM_FaultInterruptEnable = (1U << 8), /*!< Fault interrupt */
DECL|kFTM_Fault_0|enumerator|kFTM_Fault_0 = 0U, /*!< FTM fault 0 input pin */
DECL|kFTM_Fault_1|enumerator|kFTM_Fault_1, /*!< FTM fault 1 input pin */
DECL|kFTM_Fault_2|enumerator|kFTM_Fault_2, /*!< FTM fault 2 input pin */
DECL|kFTM_Fault_3|enumerator|kFTM_Fault_3 /*!< FTM fault 3 input pin */
DECL|kFTM_Fault_AllChnlsAuto|enumerator|kFTM_Fault_AllChnlsAuto /*!< Enabled for all channels with automatic fault clearing */
DECL|kFTM_Fault_AllChnlsMan|enumerator|kFTM_Fault_AllChnlsMan, /*!< Enabled for all channels with manual fault clearing */
DECL|kFTM_Fault_Disable|enumerator|kFTM_Fault_Disable = 0U, /*!< Fault control is disabled for all channels */
DECL|kFTM_Fault_EvenChnls|enumerator|kFTM_Fault_EvenChnls, /*!< Enabled for even channels only(0,2,4,6) with manual fault clearing */
DECL|kFTM_FixedClock|enumerator|kFTM_FixedClock, /*!< Fixed frequency clock */
DECL|kFTM_HalfCycMatch|enumerator|kFTM_HalfCycMatch = (1U << 10) /*!< Available on certain SoC's, half cycle match reload point */
DECL|kFTM_HardwareTrigger_0|enumerator|kFTM_HardwareTrigger_0 = FTM_SYNC_TRIG0_MASK, /*!< Hardware trigger 0 causes PWM sync */
DECL|kFTM_HardwareTrigger_1|enumerator|kFTM_HardwareTrigger_1 = FTM_SYNC_TRIG1_MASK, /*!< Hardware trigger 1 causes PWM sync */
DECL|kFTM_HardwareTrigger_2|enumerator|kFTM_HardwareTrigger_2 = FTM_SYNC_TRIG2_MASK /*!< Hardware trigger 2 causes PWM sync */
DECL|kFTM_HighTrue|enumerator|kFTM_HighTrue /*!< High true pulses */
DECL|kFTM_InitTrigger|enumerator|kFTM_InitTrigger = (1U << 6), /*!< Generate Trigger when counter is updated with CNTIN */
DECL|kFTM_LowTrue|enumerator|kFTM_LowTrue, /*!< Low true pulses */
DECL|kFTM_NoOutputSignal|enumerator|kFTM_NoOutputSignal = (1U << FTM_CnSC_MSA_SHIFT), /*!< No channel output when counter reaches CnV */
DECL|kFTM_NoPwmSignal|enumerator|kFTM_NoPwmSignal = 0U, /*!< No PWM output on pin */
DECL|kFTM_OneShot|enumerator|kFTM_OneShot = 0U, /*!< One-shot capture mode */
DECL|kFTM_Prescale_Divide_128|enumerator|kFTM_Prescale_Divide_128 /*!< Divide by 128 */
DECL|kFTM_Prescale_Divide_16|enumerator|kFTM_Prescale_Divide_16, /*!< Divide by 16 */
DECL|kFTM_Prescale_Divide_1|enumerator|kFTM_Prescale_Divide_1 = 0U, /*!< Divide by 1 */
DECL|kFTM_Prescale_Divide_2|enumerator|kFTM_Prescale_Divide_2, /*!< Divide by 2 */
DECL|kFTM_Prescale_Divide_32|enumerator|kFTM_Prescale_Divide_32, /*!< Divide by 32 */
DECL|kFTM_Prescale_Divide_4|enumerator|kFTM_Prescale_Divide_4, /*!< Divide by 4 */
DECL|kFTM_Prescale_Divide_64|enumerator|kFTM_Prescale_Divide_64, /*!< Divide by 64 */
DECL|kFTM_Prescale_Divide_8|enumerator|kFTM_Prescale_Divide_8, /*!< Divide by 8 */
DECL|kFTM_QuadCountAndDir|enumerator|kFTM_QuadCountAndDir /*!< Count and direction encoding mode */
DECL|kFTM_QuadDecoderCountingIncreaseFlag|enumerator|kFTM_QuadDecoderCountingIncreaseFlag = FTM_QDCTRL_QUADIR_MASK, /*!< Counting direction is increasing (FTM counter
DECL|kFTM_QuadDecoderCountingOverflowOnTopFlag|enumerator|kFTM_QuadDecoderCountingOverflowOnTopFlag = FTM_QDCTRL_TOFDIR_MASK, /*!< Indicates if the TOF bit was set on the top
DECL|kFTM_QuadPhaseEncode|enumerator|kFTM_QuadPhaseEncode = 0U, /*!< Phase A and Phase B encoding mode */
DECL|kFTM_QuadPhaseInvert|enumerator|kFTM_QuadPhaseInvert /*!< Phase input signal is inverted */
DECL|kFTM_QuadPhaseNormal|enumerator|kFTM_QuadPhaseNormal = 0U, /*!< Phase input signal is not inverted */
DECL|kFTM_ReloadFlag|enumerator|kFTM_ReloadFlag = (1U << 11) /*!< Reload Flag; Available only on certain SoC's */
DECL|kFTM_ReloadInitTrigger|enumerator|kFTM_ReloadInitTrigger = (1U << 7) /*!< Available on certain SoC's, trigger on reload point */
DECL|kFTM_ReloadInterruptEnable|enumerator|kFTM_ReloadInterruptEnable = (1U << 10) /*!< Reload interrupt; Available only on certain SoC's */
DECL|kFTM_RiseAndFallEdge|enumerator|kFTM_RiseAndFallEdge = (3U << FTM_CnSC_ELSA_SHIFT) /*!< Capture on rising or falling edge */
DECL|kFTM_RisingEdge|enumerator|kFTM_RisingEdge = (1U << FTM_CnSC_ELSA_SHIFT), /*!< Capture on rising edge only*/
DECL|kFTM_SetOnMatch|enumerator|kFTM_SetOnMatch = ((1U << FTM_CnSC_MSA_SHIFT) | (3U << FTM_CnSC_ELSA_SHIFT)) /*!< Set output */
DECL|kFTM_SoftwareTrigger|enumerator|kFTM_SoftwareTrigger = FTM_SYNC_SWSYNC_MASK, /*!< Software triggers PWM sync */
DECL|kFTM_SystemClock|enumerator|kFTM_SystemClock = 1U, /*!< System clock selected */
DECL|kFTM_TimeOverflowFlag|enumerator|kFTM_TimeOverflowFlag = (1U << 9), /*!< Time overflow Flag */
DECL|kFTM_TimeOverflowInterruptEnable|enumerator|kFTM_TimeOverflowInterruptEnable = (1U << 9), /*!< Time overflow interrupt */
DECL|kFTM_ToggleOnMatch|enumerator|kFTM_ToggleOnMatch = ((1U << FTM_CnSC_MSA_SHIFT) | (1U << FTM_CnSC_ELSA_SHIFT)), /*!< Toggle output */
DECL|level|member|ftm_pwm_level_select_t level; /*!< PWM output active level select. */
DECL|mode|member|ftm_dual_edge_capture_mode_t mode; /*!< Dual Edge Capture mode */
DECL|nextChanEdgeMode|member|ftm_input_capture_edge_t nextChanEdgeMode; /*!< Input capture edge select for channel n+1 */
DECL|phaseFilterVal|member|uint32_t phaseFilterVal; /*!< Filter value, used only if phase filter is enabled */
DECL|phasePolarity|member|ftm_phase_polarity_t phasePolarity; /*!< Phase polarity */
DECL|prescale|member|ftm_clock_prescale_t prescale; /*!< FTM clock prescale value */
DECL|pwmSyncMode|member|uint32_t pwmSyncMode; /*!< Synchronization methods to use to update buffered registers; Multiple
DECL|reloadPoints|member|uint32_t reloadPoints; /*!< FTM reload points; When using this, the PWM
DECL|useFaultFilter|member|bool useFaultFilter; /*!< True: Use the filtered fault signal;
DECL|useGlobalTimeBase|member|bool useGlobalTimeBase; /*!< True: Use of an external global time base is enabled;
