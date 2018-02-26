DECL|FLEXIO_ClearShifterErrorFlags|function|static inline void FLEXIO_ClearShifterErrorFlags(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_ClearShifterStatusFlags|function|static inline void FLEXIO_ClearShifterStatusFlags(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_ClearTimerStatusFlags|function|static inline void FLEXIO_ClearTimerStatusFlags(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_DisableShifterErrorInterrupts|function|static inline void FLEXIO_DisableShifterErrorInterrupts(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_DisableShifterStatusInterrupts|function|static inline void FLEXIO_DisableShifterStatusInterrupts(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_DisableTimerStatusInterrupts|function|static inline void FLEXIO_DisableTimerStatusInterrupts(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_EnableShifterErrorInterrupts|function|static inline void FLEXIO_EnableShifterErrorInterrupts(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_EnableShifterStatusDMA|function|static inline void FLEXIO_EnableShifterStatusDMA(FLEXIO_Type *base, uint32_t mask, bool enable)
DECL|FLEXIO_EnableShifterStatusInterrupts|function|static inline void FLEXIO_EnableShifterStatusInterrupts(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_EnableTimerStatusInterrupts|function|static inline void FLEXIO_EnableTimerStatusInterrupts(FLEXIO_Type *base, uint32_t mask)
DECL|FLEXIO_Enable|function|static inline void FLEXIO_Enable(FLEXIO_Type *base, bool enable)
DECL|FLEXIO_GetShifterErrorFlags|function|static inline uint32_t FLEXIO_GetShifterErrorFlags(FLEXIO_Type *base)
DECL|FLEXIO_GetShifterState|function|static inline uint8_t FLEXIO_GetShifterState(FLEXIO_Type *base)
DECL|FLEXIO_GetShifterStatusFlags|function|static inline uint32_t FLEXIO_GetShifterStatusFlags(FLEXIO_Type *base)
DECL|FLEXIO_GetTimerStatusFlags|function|static inline uint32_t FLEXIO_GetTimerStatusFlags(FLEXIO_Type *base)
DECL|FLEXIO_ReadPinInput|function|static inline uint32_t FLEXIO_ReadPinInput(FLEXIO_Type *base)
DECL|FLEXIO_TIMER_TRIGGER_SEL_PININPUT|macro|FLEXIO_TIMER_TRIGGER_SEL_PININPUT
DECL|FLEXIO_TIMER_TRIGGER_SEL_SHIFTnSTAT|macro|FLEXIO_TIMER_TRIGGER_SEL_SHIFTnSTAT
DECL|FLEXIO_TIMER_TRIGGER_SEL_TIMn|macro|FLEXIO_TIMER_TRIGGER_SEL_TIMn
DECL|FSL_FLEXIO_DRIVER_VERSION|macro|FSL_FLEXIO_DRIVER_VERSION
DECL|_FSL_FLEXIO_H_|macro|_FSL_FLEXIO_H_
DECL|_flexio_config_|struct|typedef struct _flexio_config_
DECL|_flexio_pin_config|enum|typedef enum _flexio_pin_config
DECL|_flexio_pin_polarity|enum|typedef enum _flexio_pin_polarity
DECL|_flexio_shifter_buffer_type|enum|typedef enum _flexio_shifter_buffer_type
DECL|_flexio_shifter_config|struct|typedef struct _flexio_shifter_config
DECL|_flexio_shifter_input_source|enum|typedef enum _flexio_shifter_input_source
DECL|_flexio_shifter_mode|enum|typedef enum _flexio_shifter_mode
DECL|_flexio_shifter_start_bit|enum|typedef enum _flexio_shifter_start_bit
DECL|_flexio_shifter_stop_bit|enum|typedef enum _flexio_shifter_stop_bit
DECL|_flexio_shifter_timer_polarity|enum|typedef enum _flexio_shifter_timer_polarity
DECL|_flexio_timer_config|struct|typedef struct _flexio_timer_config
DECL|_flexio_timer_decrement_source|enum|typedef enum _flexio_timer_decrement_source
DECL|_flexio_timer_disable_condition|enum|typedef enum _flexio_timer_disable_condition
DECL|_flexio_timer_enable_condition|enum|typedef enum _flexio_timer_enable_condition
DECL|_flexio_timer_mode|enum|typedef enum _flexio_timer_mode
DECL|_flexio_timer_output|enum|typedef enum _flexio_timer_output
DECL|_flexio_timer_reset_condition|enum|typedef enum _flexio_timer_reset_condition
DECL|_flexio_timer_start_bit_condition|enum|typedef enum _flexio_timer_start_bit_condition
DECL|_flexio_timer_stop_bit_condition|enum|typedef enum _flexio_timer_stop_bit_condition
DECL|_flexio_timer_trigger_polarity|enum|typedef enum _flexio_timer_trigger_polarity
DECL|_flexio_timer_trigger_source|enum|typedef enum _flexio_timer_trigger_source
DECL|enableFastAccess|member|bool enableFastAccess; /*!< Enable/disable fast access to FlexIO registers, fast access requires
DECL|enableFlexio|member|bool enableFlexio; /*!< Enable/disable FlexIO module */
DECL|enableInDebug|member|bool enableInDebug; /*!< Enable/disable FlexIO operation in debug mode */
DECL|enableInDoze|member|bool enableInDoze; /*!< Enable/disable FlexIO operation in doze mode */
DECL|flexio_config_t|typedef|} flexio_config_t;
DECL|flexio_isr_t|typedef|typedef void (*flexio_isr_t)(void *base, void *handle);
DECL|flexio_pin_config_t|typedef|} flexio_pin_config_t;
DECL|flexio_pin_polarity_t|typedef|} flexio_pin_polarity_t;
DECL|flexio_shifter_buffer_type_t|typedef|} flexio_shifter_buffer_type_t;
DECL|flexio_shifter_config_t|typedef|} flexio_shifter_config_t;
DECL|flexio_shifter_input_source_t|typedef|} flexio_shifter_input_source_t;
DECL|flexio_shifter_mode_t|typedef|} flexio_shifter_mode_t;
DECL|flexio_shifter_start_bit_t|typedef|} flexio_shifter_start_bit_t;
DECL|flexio_shifter_stop_bit_t|typedef|} flexio_shifter_stop_bit_t;
DECL|flexio_shifter_timer_polarity_t|typedef|} flexio_shifter_timer_polarity_t;
DECL|flexio_timer_config_t|typedef|} flexio_timer_config_t;
DECL|flexio_timer_decrement_source_t|typedef|} flexio_timer_decrement_source_t;
DECL|flexio_timer_disable_condition_t|typedef|} flexio_timer_disable_condition_t;
DECL|flexio_timer_enable_condition_t|typedef|} flexio_timer_enable_condition_t;
DECL|flexio_timer_mode_t|typedef|} flexio_timer_mode_t;
DECL|flexio_timer_output_t|typedef|} flexio_timer_output_t;
DECL|flexio_timer_reset_condition_t|typedef|} flexio_timer_reset_condition_t;
DECL|flexio_timer_start_bit_condition_t|typedef|} flexio_timer_start_bit_condition_t;
DECL|flexio_timer_stop_bit_condition_t|typedef|} flexio_timer_stop_bit_condition_t;
DECL|flexio_timer_trigger_polarity_t|typedef|} flexio_timer_trigger_polarity_t;
DECL|flexio_timer_trigger_source_t|typedef|} flexio_timer_trigger_source_t;
DECL|inputSource|member|flexio_shifter_input_source_t inputSource; /*!< Selects the input source for the shifter. */
DECL|kFLEXIO_PinActiveHigh|enumerator|kFLEXIO_PinActiveHigh = 0x0U, /*!< Active high. */
DECL|kFLEXIO_PinActiveLow|enumerator|kFLEXIO_PinActiveLow = 0x1U, /*!< Active low. */
DECL|kFLEXIO_PinConfigBidirectionOutputData|enumerator|kFLEXIO_PinConfigBidirectionOutputData = 0x2U, /*!< Pin bidirectional output data. */
DECL|kFLEXIO_PinConfigOpenDrainOrBidirection|enumerator|kFLEXIO_PinConfigOpenDrainOrBidirection = 0x1U, /*!< Pin open drain or bidirectional output enable. */
DECL|kFLEXIO_PinConfigOutputDisabled|enumerator|kFLEXIO_PinConfigOutputDisabled = 0x0U, /*!< Pin output disabled. */
DECL|kFLEXIO_PinConfigOutput|enumerator|kFLEXIO_PinConfigOutput = 0x3U, /*!< Pin output. */
DECL|kFLEXIO_ShifterBufferBitByteSwapped|enumerator|kFLEXIO_ShifterBufferBitByteSwapped = 0x3U, /*!< Shifter Buffer N Bit Swapped Register. */
DECL|kFLEXIO_ShifterBufferBitSwapped|enumerator|kFLEXIO_ShifterBufferBitSwapped = 0x1U, /*!< Shifter Buffer N Bit Byte Swapped Register. */
DECL|kFLEXIO_ShifterBufferByteSwapped|enumerator|kFLEXIO_ShifterBufferByteSwapped = 0x2U, /*!< Shifter Buffer N Byte Swapped Register. */
DECL|kFLEXIO_ShifterBufferHalfWordSwapped|enumerator|kFLEXIO_ShifterBufferHalfWordSwapped = 0x5U, /*!< Shifter Buffer N Half Word Swapped Register. */
DECL|kFLEXIO_ShifterBufferNibbleByteSwapped|enumerator|kFLEXIO_ShifterBufferNibbleByteSwapped = 0x4U, /*!< Shifter Buffer N Nibble Byte Swapped Register. */
DECL|kFLEXIO_ShifterBufferNibbleSwapped|enumerator|kFLEXIO_ShifterBufferNibbleSwapped = 0x6U, /*!< Shifter Buffer N Nibble Swapped Register. */
DECL|kFLEXIO_ShifterBuffer|enumerator|kFLEXIO_ShifterBuffer = 0x0U, /*!< Shifter Buffer N Register. */
DECL|kFLEXIO_ShifterDisabled|enumerator|kFLEXIO_ShifterDisabled = 0x0U, /*!< Shifter is disabled. */
DECL|kFLEXIO_ShifterInputFromNextShifterOutput|enumerator|kFLEXIO_ShifterInputFromNextShifterOutput = 0x1U, /*!< Shifter input from Shifter N+1. */
DECL|kFLEXIO_ShifterInputFromPin|enumerator|kFLEXIO_ShifterInputFromPin = 0x0U, /*!< Shifter input from pin. */
DECL|kFLEXIO_ShifterModeLogic|enumerator|kFLEXIO_ShifterModeLogic = 0x7U, /*!< SHIFTBUF contents are used for implementing
DECL|kFLEXIO_ShifterModeMatchContinuous|enumerator|kFLEXIO_ShifterModeMatchContinuous = 0x5U, /*!< Match continuous mode. */
DECL|kFLEXIO_ShifterModeMatchStore|enumerator|kFLEXIO_ShifterModeMatchStore = 0x4U, /*!< Match store mode. */
DECL|kFLEXIO_ShifterModeReceive|enumerator|kFLEXIO_ShifterModeReceive = 0x1U, /*!< Receive mode. */
DECL|kFLEXIO_ShifterModeState|enumerator|kFLEXIO_ShifterModeState = 0x6U, /*!< SHIFTBUF contents are used for storing
DECL|kFLEXIO_ShifterModeTransmit|enumerator|kFLEXIO_ShifterModeTransmit = 0x2U, /*!< Transmit mode. */
DECL|kFLEXIO_ShifterStartBitDisabledLoadDataOnEnable|enumerator|kFLEXIO_ShifterStartBitDisabledLoadDataOnEnable = 0x0U, /*!< Disable shifter start bit, transmitter loads
DECL|kFLEXIO_ShifterStartBitDisabledLoadDataOnShift|enumerator|kFLEXIO_ShifterStartBitDisabledLoadDataOnShift = 0x1U, /*!< Disable shifter start bit, transmitter loads
DECL|kFLEXIO_ShifterStartBitHigh|enumerator|kFLEXIO_ShifterStartBitHigh = 0x3U, /*!< Set shifter start bit to logic high level. */
DECL|kFLEXIO_ShifterStartBitLow|enumerator|kFLEXIO_ShifterStartBitLow = 0x2U, /*!< Set shifter start bit to logic low level. */
DECL|kFLEXIO_ShifterStopBitDisable|enumerator|kFLEXIO_ShifterStopBitDisable = 0x0U, /*!< Disable shifter stop bit. */
DECL|kFLEXIO_ShifterStopBitHigh|enumerator|kFLEXIO_ShifterStopBitHigh = 0x3U, /*!< Set shifter stop bit to logic high level. */
DECL|kFLEXIO_ShifterStopBitLow|enumerator|kFLEXIO_ShifterStopBitLow = 0x2U, /*!< Set shifter stop bit to logic low level. */
DECL|kFLEXIO_ShifterTimerPolarityOnNegitive|enumerator|kFLEXIO_ShifterTimerPolarityOnNegitive = 0x1U, /* Shift on negative edge of shift clock. */
DECL|kFLEXIO_ShifterTimerPolarityOnPositive|enumerator|kFLEXIO_ShifterTimerPolarityOnPositive = 0x0U, /* Shift on positive edge of shift clock. */
DECL|kFLEXIO_TimerDecSrcOnFlexIOClockShiftTimerOutput|enumerator|kFLEXIO_TimerDecSrcOnFlexIOClockShiftTimerOutput = 0x0U, /*!< Decrement counter on FlexIO clock, Shift clock
DECL|kFLEXIO_TimerDecSrcOnPinInputShiftPinInput|enumerator|kFLEXIO_TimerDecSrcOnPinInputShiftPinInput = 0x2U, /*!< Decrement counter on Pin input (both edges),
DECL|kFLEXIO_TimerDecSrcOnTriggerInputShiftTimerOutput|enumerator|kFLEXIO_TimerDecSrcOnTriggerInputShiftTimerOutput = 0x1U, /*!< Decrement counter on Trigger input (both edges),
DECL|kFLEXIO_TimerDecSrcOnTriggerInputShiftTriggerInput|enumerator|kFLEXIO_TimerDecSrcOnTriggerInputShiftTriggerInput = 0x3U, /*!< Decrement counter on Trigger input (both edges),
DECL|kFLEXIO_TimerDisableNever|enumerator|kFLEXIO_TimerDisableNever = 0x0U, /*!< Timer never disabled. */
DECL|kFLEXIO_TimerDisableOnPinBothEdgeTriggerHigh|enumerator|kFLEXIO_TimerDisableOnPinBothEdgeTriggerHigh = 0x5U, /*!< Timer disabled on Pin rising or falling edge provided
DECL|kFLEXIO_TimerDisableOnPinBothEdge|enumerator|kFLEXIO_TimerDisableOnPinBothEdge = 0x4U, /*!< Timer disabled on Pin rising or falling edge. */
DECL|kFLEXIO_TimerDisableOnPreTimerDisable|enumerator|kFLEXIO_TimerDisableOnPreTimerDisable = 0x1U, /*!< Timer disabled on Timer N-1 disable. */
DECL|kFLEXIO_TimerDisableOnTimerCompareTriggerLow|enumerator|kFLEXIO_TimerDisableOnTimerCompareTriggerLow = 0x3U, /*!< Timer disabled on Timer compare and Trigger Low. */
DECL|kFLEXIO_TimerDisableOnTimerCompare|enumerator|kFLEXIO_TimerDisableOnTimerCompare = 0x2U, /*!< Timer disabled on Timer compare. */
DECL|kFLEXIO_TimerDisableOnTriggerFallingEdge|enumerator|kFLEXIO_TimerDisableOnTriggerFallingEdge = 0x6U, /*!< Timer disabled on Trigger falling edge. */
DECL|kFLEXIO_TimerEnableOnPinRisingEdgeTriggerHigh|enumerator|kFLEXIO_TimerEnableOnPinRisingEdgeTriggerHigh = 0x5U, /*!< Timer enabled on Pin rising edge and Trigger high. */
DECL|kFLEXIO_TimerEnableOnPinRisingEdge|enumerator|kFLEXIO_TimerEnableOnPinRisingEdge = 0x4U, /*!< Timer enabled on Pin rising edge. */
DECL|kFLEXIO_TimerEnableOnPrevTimerEnable|enumerator|kFLEXIO_TimerEnableOnPrevTimerEnable = 0x1U, /*!< Timer enabled on Timer N-1 enable. */
DECL|kFLEXIO_TimerEnableOnTriggerBothEdge|enumerator|kFLEXIO_TimerEnableOnTriggerBothEdge = 0x7U, /*!< Timer enabled on Trigger rising or falling edge. */
DECL|kFLEXIO_TimerEnableOnTriggerHighPinHigh|enumerator|kFLEXIO_TimerEnableOnTriggerHighPinHigh = 0x3U, /*!< Timer enabled on Trigger high and Pin high. */
DECL|kFLEXIO_TimerEnableOnTriggerHigh|enumerator|kFLEXIO_TimerEnableOnTriggerHigh = 0x2U, /*!< Timer enabled on Trigger high. */
DECL|kFLEXIO_TimerEnableOnTriggerRisingEdge|enumerator|kFLEXIO_TimerEnableOnTriggerRisingEdge = 0x6U, /*!< Timer enabled on Trigger rising edge. */
DECL|kFLEXIO_TimerEnabledAlways|enumerator|kFLEXIO_TimerEnabledAlways = 0x0U, /*!< Timer always enabled. */
DECL|kFLEXIO_TimerModeDisabled|enumerator|kFLEXIO_TimerModeDisabled = 0x0U, /*!< Timer Disabled. */
DECL|kFLEXIO_TimerModeDual8BitBaudBit|enumerator|kFLEXIO_TimerModeDual8BitBaudBit = 0x1U, /*!< Dual 8-bit counters baud/bit mode. */
DECL|kFLEXIO_TimerModeDual8BitPWM|enumerator|kFLEXIO_TimerModeDual8BitPWM = 0x2U, /*!< Dual 8-bit counters PWM mode. */
DECL|kFLEXIO_TimerModeSingle16Bit|enumerator|kFLEXIO_TimerModeSingle16Bit = 0x3U, /*!< Single 16-bit counter mode. */
DECL|kFLEXIO_TimerOutputOneAffectedByReset|enumerator|kFLEXIO_TimerOutputOneAffectedByReset = 0x2U, /*!< Logic one when enabled and on timer reset. */
DECL|kFLEXIO_TimerOutputOneNotAffectedByReset|enumerator|kFLEXIO_TimerOutputOneNotAffectedByReset = 0x0U, /*!< Logic one when enabled and is not affected by timer
DECL|kFLEXIO_TimerOutputZeroAffectedByReset|enumerator|kFLEXIO_TimerOutputZeroAffectedByReset = 0x3U, /*!< Logic zero when enabled and on timer reset. */
DECL|kFLEXIO_TimerOutputZeroNotAffectedByReset|enumerator|kFLEXIO_TimerOutputZeroNotAffectedByReset = 0x1U, /*!< Logic zero when enabled and is not affected by timer
DECL|kFLEXIO_TimerResetNever|enumerator|kFLEXIO_TimerResetNever = 0x0U, /*!< Timer never reset. */
DECL|kFLEXIO_TimerResetOnTimerPinEqualToTimerOutput|enumerator|kFLEXIO_TimerResetOnTimerPinEqualToTimerOutput = 0x2U, /*!< Timer reset on Timer Pin equal to Timer Output. */
DECL|kFLEXIO_TimerResetOnTimerPinRisingEdge|enumerator|kFLEXIO_TimerResetOnTimerPinRisingEdge = 0x4U, /*!< Timer reset on Timer Pin rising edge. */
DECL|kFLEXIO_TimerResetOnTimerTriggerBothEdge|enumerator|kFLEXIO_TimerResetOnTimerTriggerBothEdge = 0x7U, /*!< Timer reset on Trigger rising or falling edge. */
DECL|kFLEXIO_TimerResetOnTimerTriggerEqualToTimerOutput|enumerator|kFLEXIO_TimerResetOnTimerTriggerEqualToTimerOutput = 0x3U, /*!< Timer reset on Timer Trigger equal to
DECL|kFLEXIO_TimerResetOnTimerTriggerRisingEdge|enumerator|kFLEXIO_TimerResetOnTimerTriggerRisingEdge = 0x6U, /*!< Timer reset on Trigger rising edge. */
DECL|kFLEXIO_TimerStartBitDisabled|enumerator|kFLEXIO_TimerStartBitDisabled = 0x0U, /*!< Start bit disabled. */
DECL|kFLEXIO_TimerStartBitEnabled|enumerator|kFLEXIO_TimerStartBitEnabled = 0x1U, /*!< Start bit enabled. */
DECL|kFLEXIO_TimerStopBitDisabled|enumerator|kFLEXIO_TimerStopBitDisabled = 0x0U, /*!< Stop bit disabled. */
DECL|kFLEXIO_TimerStopBitEnableOnTimerCompareDisable|enumerator|kFLEXIO_TimerStopBitEnableOnTimerCompareDisable = 0x3U, /*!< Stop bit is enabled on timer compare and timer
DECL|kFLEXIO_TimerStopBitEnableOnTimerCompare|enumerator|kFLEXIO_TimerStopBitEnableOnTimerCompare = 0x1U, /*!< Stop bit is enabled on timer compare. */
DECL|kFLEXIO_TimerStopBitEnableOnTimerDisable|enumerator|kFLEXIO_TimerStopBitEnableOnTimerDisable = 0x2U, /*!< Stop bit is enabled on timer disable. */
DECL|kFLEXIO_TimerTriggerPolarityActiveHigh|enumerator|kFLEXIO_TimerTriggerPolarityActiveHigh = 0x0U, /*!< Active high. */
DECL|kFLEXIO_TimerTriggerPolarityActiveLow|enumerator|kFLEXIO_TimerTriggerPolarityActiveLow = 0x1U, /*!< Active low. */
DECL|kFLEXIO_TimerTriggerSourceExternal|enumerator|kFLEXIO_TimerTriggerSourceExternal = 0x0U, /*!< External trigger selected. */
DECL|kFLEXIO_TimerTriggerSourceInternal|enumerator|kFLEXIO_TimerTriggerSourceInternal = 0x1U, /*!< Internal trigger selected. */
DECL|parallelWidth|member|uint32_t parallelWidth; /*!< Configures the parallel width when using parallel mode.*/
DECL|pinConfig|member|flexio_pin_config_t pinConfig; /*!< Shifter Pin Configuration. */
DECL|pinConfig|member|flexio_pin_config_t pinConfig; /*!< Timer Pin Configuration. */
DECL|pinPolarity|member|flexio_pin_polarity_t pinPolarity; /*!< Shifter Pin Polarity. */
DECL|pinPolarity|member|flexio_pin_polarity_t pinPolarity; /*!< Timer Pin Polarity. */
DECL|pinSelect|member|uint32_t pinSelect; /*!< Shifter Pin number Select. */
DECL|pinSelect|member|uint32_t pinSelect; /*!< Timer Pin number Select. */
DECL|shifterMode|member|flexio_shifter_mode_t shifterMode; /*!< Configures the mode of the Shifter. */
DECL|shifterStart|member|flexio_shifter_start_bit_t shifterStart; /*!< Shifter START bit. */
DECL|shifterStop|member|flexio_shifter_stop_bit_t shifterStop; /*!< Shifter STOP bit. */
DECL|timerCompare|member|uint32_t timerCompare; /*!< Value for Timer Compare N Register. */
DECL|timerDecrement|member|flexio_timer_decrement_source_t timerDecrement; /*!< Configures the source of the Timer decrement and the
DECL|timerDisable|member|flexio_timer_disable_condition_t timerDisable; /*!< Configures the condition that causes the Timer to be
DECL|timerEnable|member|flexio_timer_enable_condition_t timerEnable; /*!< Configures the condition that causes the Timer to be
DECL|timerMode|member|flexio_timer_mode_t timerMode; /*!< Timer work Mode. */
DECL|timerOutput|member|flexio_timer_output_t timerOutput; /*!< Configures the initial state of the Timer Output and
DECL|timerPolarity|member|flexio_shifter_timer_polarity_t timerPolarity; /*!< Timer Polarity. */
DECL|timerReset|member|flexio_timer_reset_condition_t timerReset; /*!< Configures the condition that causes the timer counter
DECL|timerSelect|member|uint32_t timerSelect; /*!< Selects which Timer is used for controlling the
DECL|timerStart|member|flexio_timer_start_bit_condition_t timerStart; /*!< Timer STRAT Bit generation. */
DECL|timerStop|member|flexio_timer_stop_bit_condition_t timerStop; /*!< Timer STOP Bit generation. */
DECL|triggerPolarity|member|flexio_timer_trigger_polarity_t triggerPolarity; /*!< Trigger Polarity. */
DECL|triggerSelect|member|uint32_t triggerSelect; /*!< The internal trigger selection number using MACROs. */
DECL|triggerSource|member|flexio_timer_trigger_source_t triggerSource; /*!< Trigger Source, internal (see 'trgsel') or external. */
