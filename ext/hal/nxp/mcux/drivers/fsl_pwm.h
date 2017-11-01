DECL|FSL_PWM_DRIVER_VERSION|macro|FSL_PWM_DRIVER_VERSION
DECL|PWM_OutputTriggerEnable|function|static inline void PWM_OutputTriggerEnable(PWM_Type *base, pwm_submodule_t subModule, pwm_value_register_t valueRegister, bool activate)
DECL|PWM_SUBMODULE_SWCONTROL_WIDTH|macro|PWM_SUBMODULE_SWCONTROL_WIDTH
DECL|PWM_SetPwmLdok|function|static inline void PWM_SetPwmLdok(PWM_Type *base, uint8_t subModulesToUpdate, bool value)
DECL|PWM_SetupSwCtrlOut|function|static inline void PWM_SetupSwCtrlOut(PWM_Type *base, pwm_submodule_t subModule, pwm_channels_t pwmChannel, bool value)
DECL|PWM_StartTimer|function|static inline void PWM_StartTimer(PWM_Type *base, uint8_t subModulesToStart)
DECL|PWM_StopTimer|function|static inline void PWM_StopTimer(PWM_Type *base, uint8_t subModulesToStop)
DECL|_FSL_PWM_H_|macro|_FSL_PWM_H_
DECL|_pwm_channels|enum|typedef enum _pwm_channels
DECL|_pwm_chnl_pair_operation|enum|typedef enum _pwm_chnl_pair_operation
DECL|_pwm_clock_prescale|enum|typedef enum _pwm_clock_prescale
DECL|_pwm_clock_source|enum|typedef enum _pwm_clock_source
DECL|_pwm_config|struct|typedef struct _pwm_config
DECL|_pwm_fault_clear|enum|typedef enum _pwm_fault_clear
DECL|_pwm_fault_input|enum|typedef enum _pwm_fault_input
DECL|_pwm_fault_param|struct|typedef struct _pwm_fault_param
DECL|_pwm_fault_recovery_mode|enum|typedef enum _pwm_fault_recovery_mode
DECL|_pwm_force_output_trigger|enum|typedef enum _pwm_force_output_trigger
DECL|_pwm_force_signal|enum|typedef enum _pwm_force_signal
DECL|_pwm_init_source|enum|typedef enum _pwm_init_source
DECL|_pwm_input_capture_edge|enum|typedef enum _pwm_input_capture_edge
DECL|_pwm_input_capture_param|struct|typedef struct _pwm_input_capture_param
DECL|_pwm_interrupt_enable|enum|typedef enum _pwm_interrupt_enable
DECL|_pwm_level_select|enum|typedef enum _pwm_level_select
DECL|_pwm_load_frequency|enum|typedef enum _pwm_load_frequency
DECL|_pwm_mode|enum|typedef enum _pwm_mode
DECL|_pwm_module_control|enum|typedef enum _pwm_module_control
DECL|_pwm_register_reload|enum|typedef enum _pwm_register_reload
DECL|_pwm_reload_source_select|enum|typedef enum _pwm_reload_source_select
DECL|_pwm_signal_param|struct|typedef struct _pwm_signal_param
DECL|_pwm_status_flags|enum|typedef enum _pwm_status_flags
DECL|_pwm_submodule|enum|typedef enum _pwm_submodule
DECL|_pwm_value_register|enum|typedef enum _pwm_value_register
DECL|captureInputSel|member|bool captureInputSel; /*!< true: Use the edge counter signal as source
DECL|clockSource|member|pwm_clock_source_t clockSource; /*!< Clock source for the counter */
DECL|deadtimeValue|member|uint16_t deadtimeValue; /*!< The deadtime value; only used if channel pair is operating in complementary mode */
DECL|dutyCyclePercent|member|uint8_t dutyCyclePercent; /*!< PWM pulse width, value should be between 0 to 100
DECL|edge0|member|pwm_input_capture_edge_t edge0; /*!< Specify which edge causes a capture for input circuitry 0 */
DECL|edge1|member|pwm_input_capture_edge_t edge1; /*!< Specify which edge causes a capture for input circuitry 1 */
DECL|edgeCompareValue|member|uint8_t edgeCompareValue; /*!< Compare value, used only if edge counter is used as source */
DECL|enableCombinationalPath|member|bool enableCombinationalPath; /*!< true: Combinational Path from fault input is enabled;
DECL|enableDebugMode|member|bool enableDebugMode; /*!< true: PWM continues to run in debug mode;
DECL|enableOneShotCapture|member|bool enableOneShotCapture; /*!< true: Use one-shot capture mode;
DECL|enableWait|member|bool enableWait; /*!< true: PWM continues to run in WAIT mode;
DECL|faultClearingMode|member|pwm_fault_clear_t faultClearingMode; /*!< Fault clearing mode to use */
DECL|faultFilterCount|member|uint8_t faultFilterCount; /*!< Fault filter count */
DECL|faultFilterPeriod|member|uint8_t faultFilterPeriod; /*!< Fault filter period;value of 0 will bypass the filter */
DECL|faultLevel|member|bool faultLevel; /*!< true: Logic 1 indicates fault;
DECL|fifoWatermark|member|uint8_t fifoWatermark; /*!< Watermark level for capture FIFO. The capture flags in
DECL|forceTrigger|member|pwm_force_output_trigger_t forceTrigger; /*!< Specify which signal will trigger a FORCE_OUT */
DECL|initializationControl|member|pwm_init_source_t initializationControl; /*!< Option to initialize the counter */
DECL|kPWM_Automatic|enumerator|kPWM_Automatic = 0U, /*!< Automatic fault clearing */
DECL|kPWM_BusClock|enumerator|kPWM_BusClock = 0U, /*!< The IPBus clock is used as the clock */
DECL|kPWM_CaptureA0Flag|enumerator|kPWM_CaptureA0Flag = (1U << 10), /*!< PWM capture A0 flag */
DECL|kPWM_CaptureA0InterruptEnable|enumerator|kPWM_CaptureA0InterruptEnable = (1U << 10), /*!< PWM capture A0 interrupt */
DECL|kPWM_CaptureA1Flag|enumerator|kPWM_CaptureA1Flag = (1U << 11), /*!< PWM capture A1 flag */
DECL|kPWM_CaptureA1InterruptEnable|enumerator|kPWM_CaptureA1InterruptEnable = (1U << 11), /*!< PWM capture A1 interrupt */
DECL|kPWM_CaptureB0Flag|enumerator|kPWM_CaptureB0Flag = (1U << 8), /*!< PWM capture B0 flag */
DECL|kPWM_CaptureB0InterruptEnable|enumerator|kPWM_CaptureB0InterruptEnable = (1U << 8), /*!< PWM capture B0 interrupt */
DECL|kPWM_CaptureB1Flag|enumerator|kPWM_CaptureB1Flag = (1U << 9), /*!< PWM capture B1 flag */
DECL|kPWM_CaptureB1InterruptEnable|enumerator|kPWM_CaptureB1InterruptEnable = (1U << 9), /*!< PWM capture B1 interrupt */
DECL|kPWM_CaptureX0Flag|enumerator|kPWM_CaptureX0Flag = (1U << 6), /*!< PWM capture X0 flag */
DECL|kPWM_CaptureX0InterruptEnable|enumerator|kPWM_CaptureX0InterruptEnable = (1U << 6), /*!< PWM capture X0 interrupt */
DECL|kPWM_CaptureX1Flag|enumerator|kPWM_CaptureX1Flag = (1U << 7), /*!< PWM capture X1 flag */
DECL|kPWM_CaptureX1InterruptEnable|enumerator|kPWM_CaptureX1InterruptEnable = (1U << 7), /*!< PWM capture X1 interrupt */
DECL|kPWM_CenterAligned|enumerator|kPWM_CenterAligned, /*!< Unsigned cente-aligned */
DECL|kPWM_CompareVal0Flag|enumerator|kPWM_CompareVal0Flag = (1U << 0), /*!< PWM VAL0 compare flag */
DECL|kPWM_CompareVal0InterruptEnable|enumerator|kPWM_CompareVal0InterruptEnable = (1U << 0), /*!< PWM VAL0 compare interrupt */
DECL|kPWM_CompareVal1Flag|enumerator|kPWM_CompareVal1Flag = (1U << 1), /*!< PWM VAL1 compare flag */
DECL|kPWM_CompareVal1InterruptEnable|enumerator|kPWM_CompareVal1InterruptEnable = (1U << 1), /*!< PWM VAL1 compare interrupt */
DECL|kPWM_CompareVal2Flag|enumerator|kPWM_CompareVal2Flag = (1U << 2), /*!< PWM VAL2 compare flag */
DECL|kPWM_CompareVal2InterruptEnable|enumerator|kPWM_CompareVal2InterruptEnable = (1U << 2), /*!< PWM VAL2 compare interrupt */
DECL|kPWM_CompareVal3Flag|enumerator|kPWM_CompareVal3Flag = (1U << 3), /*!< PWM VAL3 compare flag */
DECL|kPWM_CompareVal3InterruptEnable|enumerator|kPWM_CompareVal3InterruptEnable = (1U << 3), /*!< PWM VAL3 compare interrupt */
DECL|kPWM_CompareVal4Flag|enumerator|kPWM_CompareVal4Flag = (1U << 4), /*!< PWM VAL4 compare flag */
DECL|kPWM_CompareVal4InterruptEnable|enumerator|kPWM_CompareVal4InterruptEnable = (1U << 4), /*!< PWM VAL4 compare interrupt */
DECL|kPWM_CompareVal5Flag|enumerator|kPWM_CompareVal5Flag = (1U << 5), /*!< PWM VAL5 compare flag */
DECL|kPWM_CompareVal5InterruptEnable|enumerator|kPWM_CompareVal5InterruptEnable = (1U << 5), /*!< PWM VAL5 compare interrupt */
DECL|kPWM_ComplementaryPwmA|enumerator|kPWM_ComplementaryPwmA, /*!< PWM A & PWM B are complementary channels, PWM A generates the signal */
DECL|kPWM_ComplementaryPwmB|enumerator|kPWM_ComplementaryPwmB /*!< PWM A & PWM B are complementary channels, PWM B generates the signal */
DECL|kPWM_Control_Module_0|enumerator|kPWM_Control_Module_0 = (1U << 0), /*!< Control submodule 0's start/stop,buffer reload operation */
DECL|kPWM_Control_Module_1|enumerator|kPWM_Control_Module_1 = (1U << 1), /*!< Control submodule 1's start/stop,buffer reload operation */
DECL|kPWM_Control_Module_2|enumerator|kPWM_Control_Module_2 = (1U << 2), /*!< Control submodule 2's start/stop,buffer reload operation */
DECL|kPWM_Control_Module_3|enumerator|kPWM_Control_Module_3 = (1U << 3) /*!< Control submodule 3's start/stop,buffer reload operation */
DECL|kPWM_Disable|enumerator|kPWM_Disable = 0U, /*!< Disabled */
DECL|kPWM_EdgeAligned|enumerator|kPWM_EdgeAligned /*!< Unsigned edge-aligned */
DECL|kPWM_ExternalClock|enumerator|kPWM_ExternalClock, /*!< EXT_CLK is used as the clock */
DECL|kPWM_FallingEdge|enumerator|kPWM_FallingEdge, /*!< Capture on falling edge only */
DECL|kPWM_Fault0Flag|enumerator|kPWM_Fault0Flag = (1U << 16), /*!< PWM fault 0 flag */
DECL|kPWM_Fault0InterruptEnable|enumerator|kPWM_Fault0InterruptEnable = (1U << 16), /*!< PWM fault 0 interrupt */
DECL|kPWM_Fault1Flag|enumerator|kPWM_Fault1Flag = (1U << 17), /*!< PWM fault 1 flag */
DECL|kPWM_Fault1InterruptEnable|enumerator|kPWM_Fault1InterruptEnable = (1U << 17), /*!< PWM fault 1 interrupt */
DECL|kPWM_Fault2Flag|enumerator|kPWM_Fault2Flag = (1U << 18), /*!< PWM fault 2 flag */
DECL|kPWM_Fault2InterruptEnable|enumerator|kPWM_Fault2InterruptEnable = (1U << 18), /*!< PWM fault 2 interrupt */
DECL|kPWM_Fault3Flag|enumerator|kPWM_Fault3Flag = (1U << 19) /*!< PWM fault 3 flag */
DECL|kPWM_Fault3InterruptEnable|enumerator|kPWM_Fault3InterruptEnable = (1U << 19) /*!< PWM fault 3 interrupt */
DECL|kPWM_Fault_0|enumerator|kPWM_Fault_0 = 0U, /*!< Fault 0 input pin */
DECL|kPWM_Fault_1|enumerator|kPWM_Fault_1, /*!< Fault 1 input pin */
DECL|kPWM_Fault_2|enumerator|kPWM_Fault_2, /*!< Fault 2 input pin */
DECL|kPWM_Fault_3|enumerator|kPWM_Fault_3 /*!< Fault 3 input pin */
DECL|kPWM_Force_ExternalSync|enumerator|kPWM_Force_ExternalSync /*!< The external sync signal, EXT_SYNC, from outside the PWM module causes updates */
DECL|kPWM_Force_External|enumerator|kPWM_Force_External, /*!< The external force signal, EXT_FORCE, from outside the PWM module causes updates */
DECL|kPWM_Force_LocalReload|enumerator|kPWM_Force_LocalReload, /*!< The local reload signal from this submodule is used to force updates without regard to
DECL|kPWM_Force_LocalSync|enumerator|kPWM_Force_LocalSync, /*!< The local sync signal from this submodule is used to force updates */
DECL|kPWM_Force_Local|enumerator|kPWM_Force_Local = 0U, /*!< The local force signal, CTRL2[FORCE], from the submodule is used to force updates */
DECL|kPWM_Force_MasterReload|enumerator|kPWM_Force_MasterReload, /*!< The master reload signal from submodule 0 is used to force updates if LDOK is set */
DECL|kPWM_Force_MasterSync|enumerator|kPWM_Force_MasterSync, /*!< The master sync signal from submodule0 is used to force updates */
DECL|kPWM_Force_Master|enumerator|kPWM_Force_Master, /*!< The master force signal from submodule 0 is used to force updates */
DECL|kPWM_HighTrue|enumerator|kPWM_HighTrue = 0U, /*!< High level represents "on" or "active" state */
DECL|kPWM_Independent|enumerator|kPWM_Independent = 0U, /*!< PWM A & PWM B operate as 2 independent channels */
DECL|kPWM_Initialize_ExtSync|enumerator|kPWM_Initialize_ExtSync /*!< EXT_SYNC causes initialization */
DECL|kPWM_Initialize_LocalSync|enumerator|kPWM_Initialize_LocalSync = 0U, /*!< Local sync causes initialization */
DECL|kPWM_Initialize_MasterReload|enumerator|kPWM_Initialize_MasterReload, /*!< Master reload from submodule 0 causes initialization */
DECL|kPWM_Initialize_MasterSync|enumerator|kPWM_Initialize_MasterSync, /*!< Master sync from submodule 0 causes initialization */
DECL|kPWM_InvertedPwm|enumerator|kPWM_InvertedPwm, /*!< Inverted PWM signal is used by the deadtime logic.*/
DECL|kPWM_LoadEvery10Oportunity|enumerator|kPWM_LoadEvery10Oportunity, /*!< Every 10 PWM opportunities */
DECL|kPWM_LoadEvery11Oportunity|enumerator|kPWM_LoadEvery11Oportunity, /*!< Every 11 PWM opportunities */
DECL|kPWM_LoadEvery12Oportunity|enumerator|kPWM_LoadEvery12Oportunity, /*!< Every 12 PWM opportunities */
DECL|kPWM_LoadEvery13Oportunity|enumerator|kPWM_LoadEvery13Oportunity, /*!< Every 13 PWM opportunities */
DECL|kPWM_LoadEvery14Oportunity|enumerator|kPWM_LoadEvery14Oportunity, /*!< Every 14 PWM opportunities */
DECL|kPWM_LoadEvery15Oportunity|enumerator|kPWM_LoadEvery15Oportunity, /*!< Every 15 PWM opportunities */
DECL|kPWM_LoadEvery16Oportunity|enumerator|kPWM_LoadEvery16Oportunity /*!< Every 16 PWM opportunities */
DECL|kPWM_LoadEvery2Oportunity|enumerator|kPWM_LoadEvery2Oportunity, /*!< Every 2 PWM opportunities */
DECL|kPWM_LoadEvery3Oportunity|enumerator|kPWM_LoadEvery3Oportunity, /*!< Every 3 PWM opportunities */
DECL|kPWM_LoadEvery4Oportunity|enumerator|kPWM_LoadEvery4Oportunity, /*!< Every 4 PWM opportunities */
DECL|kPWM_LoadEvery5Oportunity|enumerator|kPWM_LoadEvery5Oportunity, /*!< Every 5 PWM opportunities */
DECL|kPWM_LoadEvery6Oportunity|enumerator|kPWM_LoadEvery6Oportunity, /*!< Every 6 PWM opportunities */
DECL|kPWM_LoadEvery7Oportunity|enumerator|kPWM_LoadEvery7Oportunity, /*!< Every 7 PWM opportunities */
DECL|kPWM_LoadEvery8Oportunity|enumerator|kPWM_LoadEvery8Oportunity, /*!< Every 8 PWM opportunities */
DECL|kPWM_LoadEvery9Oportunity|enumerator|kPWM_LoadEvery9Oportunity, /*!< Every 9 PWM opportunities */
DECL|kPWM_LoadEveryOportunity|enumerator|kPWM_LoadEveryOportunity = 0U, /*!< Every PWM opportunity */
DECL|kPWM_LocalReload|enumerator|kPWM_LocalReload = 0U, /*!< The local reload signal is used to reload registers */
DECL|kPWM_LowTrue|enumerator|kPWM_LowTrue /*!< Low level represents "on" or "active" state */
DECL|kPWM_ManualNormal|enumerator|kPWM_ManualNormal, /*!< Manual fault clearing with no fault safety mode */
DECL|kPWM_ManualSafety|enumerator|kPWM_ManualSafety /*!< Manual fault clearing with fault safety mode */
DECL|kPWM_MasterReload|enumerator|kPWM_MasterReload /*!< The master reload signal (from submodule 0) is used to reload */
DECL|kPWM_Module_0|enumerator|kPWM_Module_0 = 0U, /*!< Submodule 0 */
DECL|kPWM_Module_1|enumerator|kPWM_Module_1, /*!< Submodule 1 */
DECL|kPWM_Module_2|enumerator|kPWM_Module_2, /*!< Submodule 2 */
DECL|kPWM_Module_3|enumerator|kPWM_Module_3 /*!< Submodule 3 */
DECL|kPWM_NoRecovery|enumerator|kPWM_NoRecovery = 0U, /*!< PWM output will stay inactive */
DECL|kPWM_Prescale_Divide_128|enumerator|kPWM_Prescale_Divide_128 /*!< PWM clock frequency = fclk/128 */
DECL|kPWM_Prescale_Divide_16|enumerator|kPWM_Prescale_Divide_16, /*!< PWM clock frequency = fclk/16 */
DECL|kPWM_Prescale_Divide_1|enumerator|kPWM_Prescale_Divide_1 = 0U, /*!< PWM clock frequency = fclk/1 */
DECL|kPWM_Prescale_Divide_2|enumerator|kPWM_Prescale_Divide_2, /*!< PWM clock frequency = fclk/2 */
DECL|kPWM_Prescale_Divide_32|enumerator|kPWM_Prescale_Divide_32, /*!< PWM clock frequency = fclk/32 */
DECL|kPWM_Prescale_Divide_4|enumerator|kPWM_Prescale_Divide_4, /*!< PWM clock frequency = fclk/4 */
DECL|kPWM_Prescale_Divide_64|enumerator|kPWM_Prescale_Divide_64, /*!< PWM clock frequency = fclk/64 */
DECL|kPWM_Prescale_Divide_8|enumerator|kPWM_Prescale_Divide_8, /*!< PWM clock frequency = fclk/8 */
DECL|kPWM_PwmA|enumerator|kPWM_PwmA,
DECL|kPWM_PwmB|enumerator|kPWM_PwmB = 0U,
DECL|kPWM_PwmX|enumerator|kPWM_PwmX
DECL|kPWM_RecoverFullCycle|enumerator|kPWM_RecoverFullCycle, /*!< PWM output re-enabled at the first full cycle */
DECL|kPWM_RecoverHalfAndFullCycle|enumerator|kPWM_RecoverHalfAndFullCycle /*!< PWM output re-enabled at the first half or full cycle */
DECL|kPWM_RecoverHalfCycle|enumerator|kPWM_RecoverHalfCycle, /*!< PWM output re-enabled at the first half cycle */
DECL|kPWM_RegUpdatedFlag|enumerator|kPWM_RegUpdatedFlag = (1U << 14), /*!< PWM registers updated flag */
DECL|kPWM_ReloadErrorFlag|enumerator|kPWM_ReloadErrorFlag = (1U << 13), /*!< PWM reload error flag */
DECL|kPWM_ReloadErrorInterruptEnable|enumerator|kPWM_ReloadErrorInterruptEnable = (1U << 13), /*!< PWM reload error interrupt */
DECL|kPWM_ReloadFlag|enumerator|kPWM_ReloadFlag = (1U << 12), /*!< PWM reload flag */
DECL|kPWM_ReloadImmediate|enumerator|kPWM_ReloadImmediate = 0U, /*!< Buffered-registers get loaded with new values as soon as LDOK bit is set */
DECL|kPWM_ReloadInterruptEnable|enumerator|kPWM_ReloadInterruptEnable = (1U << 12), /*!< PWM reload interrupt */
DECL|kPWM_ReloadPwmFullCycle|enumerator|kPWM_ReloadPwmFullCycle, /*!< Registers loaded on a PWM full cycle */
DECL|kPWM_ReloadPwmHalfAndFullCycle|enumerator|kPWM_ReloadPwmHalfAndFullCycle /*!< Registers loaded on a PWM half & full cycle */
DECL|kPWM_ReloadPwmHalfCycle|enumerator|kPWM_ReloadPwmHalfCycle, /*!< Registers loaded on a PWM half cycle */
DECL|kPWM_RiseAndFallEdge|enumerator|kPWM_RiseAndFallEdge /*!< Capture on rising or falling edge */
DECL|kPWM_RisingEdge|enumerator|kPWM_RisingEdge, /*!< Capture on rising edge only */
DECL|kPWM_SignedCenterAligned|enumerator|kPWM_SignedCenterAligned = 0U, /*!< Signed center-aligned */
DECL|kPWM_SignedEdgeAligned|enumerator|kPWM_SignedEdgeAligned, /*!< Signed edge-aligned */
DECL|kPWM_SoftwareControl|enumerator|kPWM_SoftwareControl, /*!< Software controlled value is used by the deadtime logic. */
DECL|kPWM_Submodule0Clock|enumerator|kPWM_Submodule0Clock /*!< Clock of the submodule 0 (AUX_CLK) is used as the source clock */
DECL|kPWM_UseExternal|enumerator|kPWM_UseExternal /*!< PWM_EXTA signal is used by the deadtime logic. */
DECL|kPWM_UsePwm|enumerator|kPWM_UsePwm = 0U, /*!< Generated PWM signal is used by the deadtime logic.*/
DECL|kPWM_ValueRegister_0|enumerator|kPWM_ValueRegister_0 = 0U, /*!< PWM Value0 register */
DECL|kPWM_ValueRegister_1|enumerator|kPWM_ValueRegister_1, /*!< PWM Value1 register */
DECL|kPWM_ValueRegister_2|enumerator|kPWM_ValueRegister_2, /*!< PWM Value2 register */
DECL|kPWM_ValueRegister_3|enumerator|kPWM_ValueRegister_3, /*!< PWM Value3 register */
DECL|kPWM_ValueRegister_4|enumerator|kPWM_ValueRegister_4, /*!< PWM Value4 register */
DECL|kPWM_ValueRegister_5|enumerator|kPWM_ValueRegister_5 /*!< PWM Value5 register */
DECL|level|member|pwm_level_select_t level; /*!< PWM output active level select */
DECL|pairOperation|member|pwm_chnl_pair_operation_t pairOperation; /*!< Channel pair in indepedent or complementary mode */
DECL|prescale|member|pwm_clock_prescale_t prescale; /*!< Pre-scaler to divide down the clock */
DECL|pwmChannel|member|pwm_channels_t pwmChannel; /*!< PWM channel being configured; PWM A or PWM B */
DECL|pwm_channels_t|typedef|} pwm_channels_t;
DECL|pwm_chnl_pair_operation_t|typedef|} pwm_chnl_pair_operation_t;
DECL|pwm_clock_prescale_t|typedef|} pwm_clock_prescale_t;
DECL|pwm_clock_source_t|typedef|} pwm_clock_source_t;
DECL|pwm_config_t|typedef|} pwm_config_t;
DECL|pwm_fault_clear_t|typedef|} pwm_fault_clear_t;
DECL|pwm_fault_input_t|typedef|} pwm_fault_input_t;
DECL|pwm_fault_param_t|typedef|} pwm_fault_param_t;
DECL|pwm_fault_recovery_mode_t|typedef|} pwm_fault_recovery_mode_t;
DECL|pwm_force_output_trigger_t|typedef|} pwm_force_output_trigger_t;
DECL|pwm_force_signal_t|typedef|} pwm_force_signal_t;
DECL|pwm_init_source_t|typedef|} pwm_init_source_t;
DECL|pwm_input_capture_edge_t|typedef|} pwm_input_capture_edge_t;
DECL|pwm_input_capture_param_t|typedef|} pwm_input_capture_param_t;
DECL|pwm_interrupt_enable_t|typedef|} pwm_interrupt_enable_t;
DECL|pwm_level_select_t|typedef|} pwm_level_select_t;
DECL|pwm_load_frequency_t|typedef|} pwm_load_frequency_t;
DECL|pwm_mode_t|typedef|} pwm_mode_t;
DECL|pwm_module_control_t|typedef|} pwm_module_control_t;
DECL|pwm_register_reload_t|typedef|} pwm_register_reload_t;
DECL|pwm_reload_source_select_t|typedef|} pwm_reload_source_select_t;
DECL|pwm_signal_param_t|typedef|} pwm_signal_param_t;
DECL|pwm_status_flags_t|typedef|} pwm_status_flags_t;
DECL|pwm_submodule_t|typedef|} pwm_submodule_t;
DECL|pwm_value_register_t|typedef|} pwm_value_register_t;
DECL|recoverMode|member|pwm_fault_recovery_mode_t recoverMode; /*!< Specify when to re-enable the PWM output */
DECL|reloadFrequency|member|pwm_load_frequency_t reloadFrequency; /*!< Specifies when to reload, used when user's choice
DECL|reloadLogic|member|pwm_register_reload_t reloadLogic; /*!< PWM Reload logic setup */
DECL|reloadSelect|member|pwm_reload_source_select_t reloadSelect; /*!< Reload source select */
