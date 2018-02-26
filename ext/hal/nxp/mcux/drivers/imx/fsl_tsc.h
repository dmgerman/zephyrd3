DECL|FSL_TSC_DRIVER_VERSION|macro|FSL_TSC_DRIVER_VERSION
DECL|TSC_ClearInterruptStatusFlags|function|static inline void TSC_ClearInterruptStatusFlags(TSC_Type *base, uint32_t mask)
DECL|TSC_DebugClearSignalToADC|function|static inline void TSC_DebugClearSignalToADC(TSC_Type *base, bool enable)
DECL|TSC_DebugDisableHWClear|function|static inline void TSC_DebugDisableHWClear(TSC_Type *base, bool enable)
DECL|TSC_DisableInterruptSignals|function|static inline void TSC_DisableInterruptSignals(TSC_Type *base, uint32_t mask)
DECL|TSC_DisableInterrupts|function|static inline void TSC_DisableInterrupts(TSC_Type *base, uint32_t mask)
DECL|TSC_DropMeasure|function|static inline void TSC_DropMeasure(TSC_Type *base)
DECL|TSC_EnableDebugMode|function|static inline void TSC_EnableDebugMode(TSC_Type *base, bool enable)
DECL|TSC_EnableInterruptSignals|function|static inline void TSC_EnableInterruptSignals(TSC_Type *base, uint32_t mask)
DECL|TSC_EnableInterrupts|function|static inline void TSC_EnableInterrupts(TSC_Type *base, uint32_t mask)
DECL|TSC_GetADCStatusFlags|function|static inline uint32_t TSC_GetADCStatusFlags(TSC_Type *base)
DECL|TSC_GetInterruptStatusFlags|function|static inline uint32_t TSC_GetInterruptStatusFlags(TSC_Type *base)
DECL|TSC_GetStatusFlags|function|static inline uint32_t TSC_GetStatusFlags(TSC_Type *base)
DECL|TSC_ReturnToIdleStatus|function|static inline void TSC_ReturnToIdleStatus(TSC_Type *base)
DECL|TSC_SoftwareReset|function|static inline void TSC_SoftwareReset(TSC_Type *base)
DECL|TSC_StartMeasure|function|static inline void TSC_StartMeasure(TSC_Type *base)
DECL|TSC_StartSenseDetection|function|static inline void TSC_StartSenseDetection(TSC_Type *base)
DECL|_FSL_TSC_H_|macro|_FSL_TSC_H_
DECL|_tsc_adc_status_flag_mask|enum|enum _tsc_adc_status_flag_mask
DECL|_tsc_config|struct|typedef struct _tsc_config
DECL|_tsc_corrdinate_value_selection|enum|typedef enum _tsc_corrdinate_value_selection
DECL|_tsc_detection_mode|enum|typedef enum _tsc_detection_mode
DECL|_tsc_glitch_threshold|enum|typedef enum _tsc_glitch_threshold
DECL|_tsc_interrupt_mask|enum|enum _tsc_interrupt_mask
DECL|_tsc_interrupt_signal_mask|enum|enum _tsc_interrupt_signal_mask
DECL|_tsc_interrupt_status_flag_mask|enum|enum _tsc_interrupt_status_flag_mask
DECL|_tsc_port_mode|enum|typedef enum _tsc_port_mode
DECL|_tsc_port_source|enum|typedef enum _tsc_port_source
DECL|_tsc_state_machine|enum|typedef enum _tsc_state_machine
DECL|_tsc_status_flag_mask|enum|enum _tsc_status_flag_mask
DECL|_tsc_trigger_signal|enum|typedef enum _tsc_trigger_signal
DECL|detectionMode|member|tsc_detection_mode_t detectionMode; /*!< Select the detection mode. See "tsc_detection_mode_t". */
DECL|enableAutoMeasure|member|bool enableAutoMeasure; /*!< Enable the auto-measure. It indicates after detect touch, whether automatic start
DECL|kTSC_1stDetectState|enumerator|kTSC_1stDetectState = 2U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in 1st-detect state. */
DECL|kTSC_1stPreChargeState|enumerator|kTSC_1stPreChargeState = 1U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in 1st-Pre-charge state. */
DECL|kTSC_2ndDetectState|enumerator|kTSC_2ndDetectState = 6U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in 2nd-detect state. */
DECL|kTSC_2ndPreChargeState|enumerator|kTSC_2ndPreChargeState = 5U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in 2nd-Pre-charge state. */
DECL|kTSC_ADCCOCOSignalFlag|enumerator|kTSC_ADCCOCOSignalFlag =
DECL|kTSC_ADCConversionValueFlag|enumerator|kTSC_ADCConversionValueFlag =
DECL|kTSC_DetectFiveWireFlag|enumerator|kTSC_DetectFiveWireFlag = TSC_DEBUG_MODE2_DETECT_FIVE_WIRE_MASK, /*!< This flag is set if TSC receives a 5-wire
DECL|kTSC_DetectFourWireFlag|enumerator|kTSC_DetectFourWireFlag = TSC_DEBUG_MODE2_DETECT_FOUR_WIRE_MASK, /*!< This flag is set if TSC receives a 4-wire
DECL|kTSC_DetectInterruptEnable|enumerator|kTSC_DetectInterruptEnable =
DECL|kTSC_DetectSignalEnable|enumerator|kTSC_DetectSignalEnable =
DECL|kTSC_DetectSignalFlag|enumerator|kTSC_DetectSignalFlag = TSC_INT_STATUS_DETECT_MASK, /*!< This flag is set if controller receives a detect signal. */
DECL|kTSC_Detection4WireMode|enumerator|kTSC_Detection4WireMode = 0U, /*!< 4-Wire Detection Mode. */
DECL|kTSC_Detection5WireMode|enumerator|kTSC_Detection5WireMode = 1U, /*!< 5-Wire Detection Mode. */
DECL|kTSC_GlitchThresholdFlag|enumerator|kTSC_GlitchThresholdFlag = TSC_DEBUG_MODE2_DE_GLITCH_MASK, /*!< This field indicates glitch threshold.The threshold
DECL|kTSC_IdleSoftwareFlag|enumerator|kTSC_IdleSoftwareFlag =
DECL|kTSC_IdleSoftwareInterruptEnable|enumerator|kTSC_IdleSoftwareInterruptEnable =
DECL|kTSC_IdleSoftwareSignalEnable|enumerator|kTSC_IdleSoftwareSignalEnable = TSC_INT_SIG_EN_IDLE_SW_SIG_EN_MASK, /*!< Enable the interrupt signal when the
DECL|kTSC_IdleState|enumerator|kTSC_IdleState = 0U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in idle state. */
DECL|kTSC_IntermediateStateFlag|enumerator|kTSC_IntermediateStateFlag = TSC_DEBUG_MODE2_INTERMEDIATE_MASK, /*!< This flag is set if TSC is in intermediate
DECL|kTSC_MeasureInterruptEnable|enumerator|kTSC_MeasureInterruptEnable = TSC_INT_EN_MEASURE_INT_EN_MASK, /*!< Enable the interrupt after the touch detection
DECL|kTSC_MeasureSignalEnable|enumerator|kTSC_MeasureSignalEnable = TSC_INT_SIG_EN_MEASURE_SIG_EN_MASK, /*!< Enable the interrupt signal after the touch
DECL|kTSC_MeasureSignalFlag|enumerator|kTSC_MeasureSignalFlag =
DECL|kTSC_Port200k_PullUpMode|enumerator|kTSC_Port200k_PullUpMode = 1U << 2U, /*!< 200k-pull up mode. */
DECL|kTSC_PortOffMode|enumerator|kTSC_PortOffMode = 0U, /*!< Disable pull up/down mode. */
DECL|kTSC_PortPullDownMode|enumerator|kTSC_PortPullDownMode = 1U << 0U, /*!< Pull down mode. */
DECL|kTSC_PortPullUpMode|enumerator|kTSC_PortPullUpMode = 1U << 1U, /*!< Pull up mode. */
DECL|kTSC_StateMachineFlag|enumerator|kTSC_StateMachineFlag =
DECL|kTSC_TriggerToChannel0|enumerator|kTSC_TriggerToChannel0 = 1U << 0U, /*!< Trigger to ADC channel0. ADC_HC0 register will be used to conversion. */
DECL|kTSC_TriggerToChannel1|enumerator|kTSC_TriggerToChannel1 = 1U << 1U, /*!< Trigger to ADC channel1. ADC_HC1 register will be used to conversion. */
DECL|kTSC_TriggerToChannel2|enumerator|kTSC_TriggerToChannel2 = 1U << 2U, /*!< Trigger to ADC channel2. ADC_HC2 register will be used to conversion. */
DECL|kTSC_TriggerToChannel3|enumerator|kTSC_TriggerToChannel3 = 1U << 3U, /*!< Trigger to ADC channel3. ADC_HC3 register will be used to conversion. */
DECL|kTSC_TriggerToChannel4|enumerator|kTSC_TriggerToChannel4 = 1U << 4U, /*!< Trigger to ADC channel4. ADC_HC4 register will be used to conversion. */
DECL|kTSC_ValidSignalEnable|enumerator|kTSC_ValidSignalEnable =
DECL|kTSC_ValidSignalFlag|enumerator|kTSC_ValidSignalFlag =
DECL|kTSC_WiperPortSource|enumerator|kTSC_WiperPortSource = 0U, /*!< TSC controller wiper port. */
DECL|kTSC_XCoordinateValueSelection|enumerator|kTSC_XCoordinateValueSelection = 0U, /*!< X coordinate value is selected. */
DECL|kTSC_XMeasureState|enumerator|kTSC_XMeasureState = 3U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in x-measure state. */
DECL|kTSC_XnurPortSource|enumerator|kTSC_XnurPortSource = 3U, /*!< TSC controller xnur port. */
DECL|kTSC_XpulPortSource|enumerator|kTSC_XpulPortSource = 4U, /*!< TSC controller xpul port. */
DECL|kTSC_YCoordinateValueSelection|enumerator|kTSC_YCoordinateValueSelection = 1U, /*!< Y coordinate value is selected. */
DECL|kTSC_YMeasureState|enumerator|kTSC_YMeasureState = 4U << TSC_DEBUG_MODE2_STATE_MACHINE_SHIFT, /*!< Controller is in y-measure state. */
DECL|kTSC_YnlrPortSource|enumerator|kTSC_YnlrPortSource = 1U, /*!< TSC controller ynlr port. */
DECL|kTSC_YpllPortSource|enumerator|kTSC_YpllPortSource = 2U, /*!< TSC controller ypll port. */
DECL|kTSC_glitchThresholdALT0|enumerator|kTSC_glitchThresholdALT0 =
DECL|kTSC_glitchThresholdALT1|enumerator|kTSC_glitchThresholdALT1 =
DECL|kTSC_glitchThresholdALT2|enumerator|kTSC_glitchThresholdALT2 =
DECL|kTSC_glitchThresholdALT3|enumerator|kTSC_glitchThresholdALT3 =
DECL|measureDelayTime|member|uint32_t measureDelayTime; /*!< Set delay time(0U~0xFFFFFFU) to even potential distribution ready.It is a
DECL|prechargeTime|member|uint32_t prechargeTime; /*!< Set pre-charge time(1U~0xFFFFFFFFU) to make the upper layer of
DECL|tsc_config_t|typedef|} tsc_config_t;
DECL|tsc_corrdinate_value_selection_t|typedef|} tsc_corrdinate_value_selection_t;
DECL|tsc_detection_mode_t|typedef|} tsc_detection_mode_t;
DECL|tsc_glitch_threshold_t|typedef|} tsc_glitch_threshold_t;
DECL|tsc_port_mode_t|typedef|} tsc_port_mode_t;
DECL|tsc_port_source_t|typedef|} tsc_port_source_t;
DECL|tsc_state_machine_t|typedef|} tsc_state_machine_t;
DECL|tsc_trigger_signal_t|typedef|} tsc_trigger_signal_t;
