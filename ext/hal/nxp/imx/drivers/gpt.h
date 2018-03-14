DECL|GPT_ClearStatusFlag|function|static inline void GPT_ClearStatusFlag(GPT_Type* base, uint32_t flags)
DECL|GPT_Disable|function|static inline void GPT_Disable(GPT_Type* base)
DECL|GPT_Enable|function|static inline void GPT_Enable(GPT_Type* base)
DECL|GPT_ForceOutput|function|static inline void GPT_ForceOutput(GPT_Type* base, uint32_t channel)
DECL|GPT_GetClockSource|function|static inline uint32_t GPT_GetClockSource(GPT_Type* base)
DECL|GPT_GetInputCaptureValue|function|static inline uint32_t GPT_GetInputCaptureValue(GPT_Type* base, uint32_t channel)
DECL|GPT_GetInputOperationMode|function|static inline uint32_t GPT_GetInputOperationMode(GPT_Type* base, uint32_t channel)
DECL|GPT_GetOscPrescaler|function|static inline uint32_t GPT_GetOscPrescaler(GPT_Type* base)
DECL|GPT_GetOutputCompareValue|function|static inline uint32_t GPT_GetOutputCompareValue(GPT_Type* base, uint32_t channel)
DECL|GPT_GetOutputOperationMode|function|static inline uint32_t GPT_GetOutputOperationMode(GPT_Type* base, uint32_t channel)
DECL|GPT_GetPrescaler|function|static inline uint32_t GPT_GetPrescaler(GPT_Type* base)
DECL|GPT_GetStatusFlag|function|static inline uint32_t GPT_GetStatusFlag(GPT_Type* base, uint32_t flags)
DECL|GPT_ReadCounter|function|static inline uint32_t GPT_ReadCounter(GPT_Type* base)
DECL|GPT_SetInputOperationMode|function|static inline void GPT_SetInputOperationMode(GPT_Type* base, uint32_t channel, uint32_t mode)
DECL|GPT_SetOscPrescaler|function|static inline void GPT_SetOscPrescaler(GPT_Type* base, uint32_t prescaler)
DECL|GPT_SetOutputCompareValue|function|static inline void GPT_SetOutputCompareValue(GPT_Type* base, uint32_t channel, uint32_t value)
DECL|GPT_SetOutputOperationMode|function|static inline void GPT_SetOutputOperationMode(GPT_Type* base, uint32_t channel, uint32_t mode)
DECL|GPT_SetPrescaler|function|static inline void GPT_SetPrescaler(GPT_Type* base, uint32_t prescaler)
DECL|GPT_SoftReset|function|static inline void GPT_SoftReset(GPT_Type* base)
DECL|__GPT_H__|macro|__GPT_H__
DECL|_gpt_clock_source|enum|enum _gpt_clock_source
DECL|_gpt_init_config|struct|typedef struct _gpt_init_config
DECL|_gpt_input_capture_channel|enum|enum _gpt_input_capture_channel
DECL|_gpt_input_operation_mode|enum|enum _gpt_input_operation_mode
DECL|_gpt_output_compare_channel|enum|enum _gpt_output_compare_channel
DECL|_gpt_output_operation_mode|enum|enum _gpt_output_operation_mode
DECL|_gpt_status_flag|enum|enum _gpt_status_flag
DECL|dbgEnable|member|bool dbgEnable; /*!< GPT enabled in debug mode. */
DECL|dozeEnable|member|bool dozeEnable; /*!< GPT enabled in doze mode. */
DECL|enableMode|member|bool enableMode; /*!< true: counter reset to 0 when enabled, false: counter retain its value when enabled. */
DECL|freeRun|member|bool freeRun; /*!< true: FreeRun mode, false: Restart mode. */
DECL|gptClockSourceLowFreq|enumerator|gptClockSourceLowFreq = 4U, /*!< Use 32 K clock.*/
DECL|gptClockSourceNone|enumerator|gptClockSourceNone = 0U, /*!< No source selected.*/
DECL|gptClockSourceOsc|enumerator|gptClockSourceOsc = 5U, /*!< Use 24 M OSC clock.*/
DECL|gptClockSourcePeriph|enumerator|gptClockSourcePeriph = 1U, /*!< Use peripheral module clock.*/
DECL|gptInputCaptureChannel1|enumerator|gptInputCaptureChannel1 = 0U, /*!< Input Capture Channel1.*/
DECL|gptInputCaptureChannel2|enumerator|gptInputCaptureChannel2 = 1U, /*!< Input Capture Channel2.*/
DECL|gptInputOperationBothEdge|enumerator|gptInputOperationBothEdge = 3U, /*!< Capture on both edges of input pin.*/
DECL|gptInputOperationDisabled|enumerator|gptInputOperationDisabled = 0U, /*!< Don't capture.*/
DECL|gptInputOperationFallEdge|enumerator|gptInputOperationFallEdge = 2U, /*!< Capture on falling edge of input pin.*/
DECL|gptInputOperationRiseEdge|enumerator|gptInputOperationRiseEdge = 1U, /*!< Capture on rising edge of input pin.*/
DECL|gptOutputCompareChannel1|enumerator|gptOutputCompareChannel1 = 0U, /*!< Output Compare Channel1.*/
DECL|gptOutputCompareChannel2|enumerator|gptOutputCompareChannel2 = 1U, /*!< Output Compare Channel2.*/
DECL|gptOutputCompareChannel3|enumerator|gptOutputCompareChannel3 = 2U, /*!< Output Compare Channel3.*/
DECL|gptOutputOperationActivelow|enumerator|gptOutputOperationActivelow = 4U, /*!< Generate a active low pulse on output pin.*/
DECL|gptOutputOperationClear|enumerator|gptOutputOperationClear = 2U, /*!< Set output pin low.*/
DECL|gptOutputOperationDisconnected|enumerator|gptOutputOperationDisconnected = 0U, /*!< Don't change output pin.*/
DECL|gptOutputOperationSet|enumerator|gptOutputOperationSet = 3U, /*!< Set output pin high.*/
DECL|gptOutputOperationToggle|enumerator|gptOutputOperationToggle = 1U, /*!< Toggle output pin.*/
DECL|gptStatusFlagInputCapture1|enumerator|gptStatusFlagInputCapture1 = 1U << 3, /*!< Capture channel 1 event.*/
DECL|gptStatusFlagInputCapture2|enumerator|gptStatusFlagInputCapture2 = 1U << 4, /*!< Capture channel 2 event.*/
DECL|gptStatusFlagOutputCompare1|enumerator|gptStatusFlagOutputCompare1 = 1U << 0, /*!< Output compare channel 1 event.*/
DECL|gptStatusFlagOutputCompare2|enumerator|gptStatusFlagOutputCompare2 = 1U << 1, /*!< Output compare channel 2 event.*/
DECL|gptStatusFlagOutputCompare3|enumerator|gptStatusFlagOutputCompare3 = 1U << 2, /*!< Output compare channel 3 event.*/
DECL|gptStatusFlagRollOver|enumerator|gptStatusFlagRollOver = 1U << 5, /*!< Counter reaches maximum value and rolled over to 0 event.*/
DECL|gpt_init_config_t|typedef|} gpt_init_config_t;
DECL|stopEnable|member|bool stopEnable; /*!< GPT enabled in stop mode. */
DECL|waitEnable|member|bool waitEnable; /*!< GPT enabled in wait mode. */
