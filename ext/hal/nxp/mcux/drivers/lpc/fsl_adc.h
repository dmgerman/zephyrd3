DECL|ADC_ClearStatusFlags|function|static inline void ADC_ClearStatusFlags(ADC_Type *base, uint32_t mask)
DECL|ADC_DisableInterrupts|function|static inline void ADC_DisableInterrupts(ADC_Type *base, uint32_t mask)
DECL|ADC_DoSoftwareTriggerConvSeqA|function|static inline void ADC_DoSoftwareTriggerConvSeqA(ADC_Type *base)
DECL|ADC_DoSoftwareTriggerConvSeqB|function|static inline void ADC_DoSoftwareTriggerConvSeqB(ADC_Type *base)
DECL|ADC_EnableConvSeqABurstMode|function|static inline void ADC_EnableConvSeqABurstMode(ADC_Type *base, bool enable)
DECL|ADC_EnableConvSeqA|function|static inline void ADC_EnableConvSeqA(ADC_Type *base, bool enable)
DECL|ADC_EnableConvSeqBBurstMode|function|static inline void ADC_EnableConvSeqBBurstMode(ADC_Type *base, bool enable)
DECL|ADC_EnableConvSeqB|function|static inline void ADC_EnableConvSeqB(ADC_Type *base, bool enable)
DECL|ADC_EnableInterrupts|function|static inline void ADC_EnableInterrupts(ADC_Type *base, uint32_t mask)
DECL|ADC_EnableShresholdCompareInterrupt|function|static inline void ADC_EnableShresholdCompareInterrupt(ADC_Type *base, uint32_t channel, adc_threshold_interrupt_mode_t mode)
DECL|ADC_EnableTemperatureSensor|function|static inline void ADC_EnableTemperatureSensor(ADC_Type *base, bool enable)
DECL|ADC_GetStatusFlags|function|static inline uint32_t ADC_GetStatusFlags(ADC_Type *base)
DECL|ADC_SetChannelWithThresholdPair0|function|static inline void ADC_SetChannelWithThresholdPair0(ADC_Type *base, uint32_t channelMask)
DECL|ADC_SetChannelWithThresholdPair1|function|static inline void ADC_SetChannelWithThresholdPair1(ADC_Type *base, uint32_t channelMask)
DECL|ADC_SetConvSeqAHighPriority|function|static inline void ADC_SetConvSeqAHighPriority(ADC_Type *base)
DECL|ADC_SetConvSeqBHighPriority|function|static inline void ADC_SetConvSeqBHighPriority(ADC_Type *base)
DECL|ADC_SetThresholdPair0|function|static inline void ADC_SetThresholdPair0(ADC_Type *base, uint32_t lowValue, uint32_t highValue)
DECL|ADC_SetThresholdPair1|function|static inline void ADC_SetThresholdPair1(ADC_Type *base, uint32_t lowValue, uint32_t highValue)
DECL|LPC_ADC_DRIVER_VERSION|macro|LPC_ADC_DRIVER_VERSION
DECL|__FSL_ADC_H__|macro|__FSL_ADC_H__
DECL|_adc_clock_mode|enum|typedef enum _adc_clock_mode
DECL|_adc_config|struct|typedef struct _adc_config
DECL|_adc_conv_seq_config|struct|typedef struct _adc_conv_seq_config
DECL|_adc_interrupt_enable|enum|enum _adc_interrupt_enable
DECL|_adc_priority|enum|typedef enum _adc_priority
DECL|_adc_resolution|enum|typedef enum _adc_resolution
DECL|_adc_result_info|struct|typedef struct _adc_result_info
DECL|_adc_seq_interrupt_mode|enum|typedef enum _adc_seq_interrupt_mode
DECL|_adc_status_flags|enum|enum _adc_status_flags
DECL|_adc_threshold_compare_status|enum|typedef enum _adc_threshold_compare_status
DECL|_adc_threshold_crossing_status|enum|typedef enum _adc_threshold_crossing_status
DECL|_adc_threshold_interrupt_mode|enum|typedef enum _adc_threshold_interrupt_mode
DECL|_adc_trigger_polarity|enum|typedef enum _adc_trigger_polarity
DECL|adc_clock_mode_t|typedef|} adc_clock_mode_t;
DECL|adc_config_t|typedef|} adc_config_t;
DECL|adc_conv_seq_config_t|typedef|} adc_conv_seq_config_t;
DECL|adc_priority_t|typedef|} adc_priority_t;
DECL|adc_resolution_t|typedef|} adc_resolution_t;
DECL|adc_result_info_t|typedef|} adc_result_info_t;
DECL|adc_seq_interrupt_mode_t|typedef|} adc_seq_interrupt_mode_t;
DECL|adc_threshold_compare_status_t|typedef|} adc_threshold_compare_status_t;
DECL|adc_threshold_crossing_status_t|typedef|} adc_threshold_crossing_status_t;
DECL|adc_threshold_interrupt_mode_t|typedef|} adc_threshold_interrupt_mode_t;
DECL|adc_trigger_polarity_t|typedef|} adc_trigger_polarity_t;
DECL|channelMask|member|uint32_t channelMask; /*!< Selects which one or more of the ADC channels will be sampled and converted when this
DECL|channelNumber|member|uint32_t channelNumber; /*!< Keep the channel number for this conversion. */
DECL|clockDividerNumber|member|uint32_t clockDividerNumber; /*!< This field is only available when using kADC_ClockSynchronousMode for "clockMode"
DECL|clockMode|member|adc_clock_mode_t clockMode; /*!< Select the clock mode for ADC converter. */
DECL|enableBypassCalibration|member|bool enableBypassCalibration; /*!< By default, a calibration cycle must be performed each time the chip is
DECL|enableSingleStep|member|bool enableSingleStep; /*!< When enabling this feature, a trigger will launch a single conversion on the next
DECL|enableSyncBypass|member|bool enableSyncBypass; /*!< To enable this feature allows the hardware trigger input to bypass synchronization
DECL|interruptMode|member|adc_seq_interrupt_mode_t interruptMode; /*!< Select the interrpt/DMA trigger mode. */
DECL|kADC_ClockAsynchronousMode|enumerator|kADC_ClockAsynchronousMode = 1U, /*!< The ADC clock would be based on the SYSCON block's divider. */
DECL|kADC_ClockSynchronousMode|enumerator|kADC_ClockSynchronousMode =
DECL|kADC_ConvSeqAInterruptEnable|enumerator|kADC_ConvSeqAInterruptEnable = ADC_INTEN_SEQA_INTEN_MASK, /*!< Enable interrupt upon completion of each individual
DECL|kADC_ConvSeqAInterruptFlag|enumerator|kADC_ConvSeqAInterruptFlag = 1U << 28U, /*!< Sequence A interrupt/DMA trigger. */
DECL|kADC_ConvSeqBInterruptEnable|enumerator|kADC_ConvSeqBInterruptEnable = ADC_INTEN_SEQB_INTEN_MASK, /*!< Enable interrupt upon completion of each individual
DECL|kADC_ConvSeqBInterruptFlag|enumerator|kADC_ConvSeqBInterruptFlag = 1U << 29U, /*!< Sequence B interrupt/DMA trigger. */
DECL|kADC_GlobalOverrunFlagForSeqA|enumerator|kADC_GlobalOverrunFlagForSeqA = 1U << 24U, /*!< Mirror the glabal OVERRUN status flag for conversion sequence A. */
DECL|kADC_GlobalOverrunFlagForSeqB|enumerator|kADC_GlobalOverrunFlagForSeqB = 1U << 25U, /*!< Mirror the global OVERRUN status flag for conversion sequence B. */
DECL|kADC_InterruptForEachConversion|enumerator|kADC_InterruptForEachConversion = 0U, /*!< The sequence interrupt/DMA trigger will be set at the end of each
DECL|kADC_InterruptForEachSequence|enumerator|kADC_InterruptForEachSequence = 1U, /*!< The sequence interrupt/DMA trigger will be set when the entire set of
DECL|kADC_OverrunFlagForChn0|enumerator|kADC_OverrunFlagForChn0 =
DECL|kADC_OverrunFlagForChn10|enumerator|kADC_OverrunFlagForChn10 =
DECL|kADC_OverrunFlagForChn11|enumerator|kADC_OverrunFlagForChn11 =
DECL|kADC_OverrunFlagForChn1|enumerator|kADC_OverrunFlagForChn1 =
DECL|kADC_OverrunFlagForChn2|enumerator|kADC_OverrunFlagForChn2 =
DECL|kADC_OverrunFlagForChn3|enumerator|kADC_OverrunFlagForChn3 =
DECL|kADC_OverrunFlagForChn4|enumerator|kADC_OverrunFlagForChn4 =
DECL|kADC_OverrunFlagForChn5|enumerator|kADC_OverrunFlagForChn5 =
DECL|kADC_OverrunFlagForChn6|enumerator|kADC_OverrunFlagForChn6 =
DECL|kADC_OverrunFlagForChn7|enumerator|kADC_OverrunFlagForChn7 =
DECL|kADC_OverrunFlagForChn8|enumerator|kADC_OverrunFlagForChn8 =
DECL|kADC_OverrunFlagForChn9|enumerator|kADC_OverrunFlagForChn9 =
DECL|kADC_OverrunInterruptEnable|enumerator|kADC_OverrunInterruptEnable = ADC_INTEN_OVR_INTEN_MASK, /*!< Enable the detection of an overrun condition on any of
DECL|kADC_OverrunInterruptFlag|enumerator|kADC_OverrunInterruptFlag = 1U << 31U, /*!< Overrun interrupt flag. */
DECL|kADC_PriorityHigh|enumerator|kADC_PriorityHigh = 1U, /*!< This sequence would preempt other sequence even when is is started. */
DECL|kADC_PriorityLow|enumerator|kADC_PriorityLow = 0U, /*!< This sequence would be preempted when another sequence is started. */
DECL|kADC_Resolution10bit|enumerator|kADC_Resolution10bit = 2U, /*!< 10-bit resolution. */
DECL|kADC_Resolution12bit|enumerator|kADC_Resolution12bit = 3U, /*!< 12-bit resolution. */
DECL|kADC_Resolution6bit|enumerator|kADC_Resolution6bit = 0U, /*!< 6-bit resolution. */
DECL|kADC_Resolution8bit|enumerator|kADC_Resolution8bit = 1U, /*!< 8-bit resolution. */
DECL|kADC_ThresholdCompareAboveRange|enumerator|kADC_ThresholdCompareAboveRange = 2U, /*!< conversion value > HIGH threshold. */
DECL|kADC_ThresholdCompareBelowRange|enumerator|kADC_ThresholdCompareBelowRange = 1U, /*!< conversion value < LOW threshold. */
DECL|kADC_ThresholdCompareFlagOnChn0|enumerator|kADC_ThresholdCompareFlagOnChn0 = 1U << 0U, /*!< Threshold comparison event on Channel 0. */
DECL|kADC_ThresholdCompareFlagOnChn10|enumerator|kADC_ThresholdCompareFlagOnChn10 = 1U << 10U, /*!< Threshold comparison event on Channel 10. */
DECL|kADC_ThresholdCompareFlagOnChn11|enumerator|kADC_ThresholdCompareFlagOnChn11 = 1U << 11U, /*!< Threshold comparison event on Channel 11. */
DECL|kADC_ThresholdCompareFlagOnChn1|enumerator|kADC_ThresholdCompareFlagOnChn1 = 1U << 1U, /*!< Threshold comparison event on Channel 1. */
DECL|kADC_ThresholdCompareFlagOnChn2|enumerator|kADC_ThresholdCompareFlagOnChn2 = 1U << 2U, /*!< Threshold comparison event on Channel 2. */
DECL|kADC_ThresholdCompareFlagOnChn3|enumerator|kADC_ThresholdCompareFlagOnChn3 = 1U << 3U, /*!< Threshold comparison event on Channel 3. */
DECL|kADC_ThresholdCompareFlagOnChn4|enumerator|kADC_ThresholdCompareFlagOnChn4 = 1U << 4U, /*!< Threshold comparison event on Channel 4. */
DECL|kADC_ThresholdCompareFlagOnChn5|enumerator|kADC_ThresholdCompareFlagOnChn5 = 1U << 5U, /*!< Threshold comparison event on Channel 5. */
DECL|kADC_ThresholdCompareFlagOnChn6|enumerator|kADC_ThresholdCompareFlagOnChn6 = 1U << 6U, /*!< Threshold comparison event on Channel 6. */
DECL|kADC_ThresholdCompareFlagOnChn7|enumerator|kADC_ThresholdCompareFlagOnChn7 = 1U << 7U, /*!< Threshold comparison event on Channel 7. */
DECL|kADC_ThresholdCompareFlagOnChn8|enumerator|kADC_ThresholdCompareFlagOnChn8 = 1U << 8U, /*!< Threshold comparison event on Channel 8. */
DECL|kADC_ThresholdCompareFlagOnChn9|enumerator|kADC_ThresholdCompareFlagOnChn9 = 1U << 9U, /*!< Threshold comparison event on Channel 9. */
DECL|kADC_ThresholdCompareInRange|enumerator|kADC_ThresholdCompareInRange = 0U, /*!< LOW threshold <= conversion value <= HIGH threshold. */
DECL|kADC_ThresholdCompareInterruptFlag|enumerator|kADC_ThresholdCompareInterruptFlag = 1U << 30U, /*!< Threshold comparision interrupt flag. */
DECL|kADC_ThresholdCrossingDownward|enumerator|kADC_ThresholdCrossingDownward = 2U, /*!< Downward Threshold Crossing detected. */
DECL|kADC_ThresholdCrossingNoDetected|enumerator|kADC_ThresholdCrossingNoDetected = 0U, /*!< No threshold Crossing detected. */
DECL|kADC_ThresholdCrossingUpward|enumerator|kADC_ThresholdCrossingUpward = 3U, /*!< Upward Threshold Crossing Detected. */
DECL|kADC_ThresholdInterruptDisabled|enumerator|kADC_ThresholdInterruptDisabled = 0U, /*!< Threshold comparison interrupt is disabled. */
DECL|kADC_ThresholdInterruptOnCrossing|enumerator|kADC_ThresholdInterruptOnCrossing = 2U, /*!< Threshold comparison interrupt is enabled on crossing threshold. */
DECL|kADC_ThresholdInterruptOnOutside|enumerator|kADC_ThresholdInterruptOnOutside = 1U, /*!< Threshold comparison interrupt is enabled on outside threshold. */
DECL|kADC_TriggerPolarityNegativeEdge|enumerator|kADC_TriggerPolarityNegativeEdge = 0U, /*!< A negative edge launches the conversion sequence on the trigger(s). */
DECL|kADC_TriggerPolarityPositiveEdge|enumerator|kADC_TriggerPolarityPositiveEdge = 1U, /*!< A positive edge launches the conversion sequence on the trigger(s). */
DECL|overrunFlag|member|bool overrunFlag; /*!< Keep the status whether the conversion is overrun or not. */
DECL|resolution|member|adc_resolution_t resolution; /*!< Select the conversion bits. */
DECL|result|member|uint32_t result; /*!< Keey the conversion data value. */
DECL|sampleTimeNumber|member|uint32_t sampleTimeNumber; /*!< By default, with value as "0U", the sample period would be 2.5 ADC clocks. Then,
DECL|thresholdCompareStatus|member|adc_threshold_compare_status_t thresholdCompareStatus; /*!< Keep the threshold compare status. */
DECL|thresholdCorssingStatus|member|adc_threshold_crossing_status_t thresholdCorssingStatus; /*!< Keep the threshold crossing status. */
DECL|triggerMask|member|uint32_t triggerMask; /*!< Selects which one or more of the available hardware trigger sources will cause this
DECL|triggerPolarity|member|adc_trigger_polarity_t triggerPolarity; /*!< Select the trigger to lauch conversion sequence. */
