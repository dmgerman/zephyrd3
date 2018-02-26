DECL|FSL_GPT_DRIVER_VERSION|macro|FSL_GPT_DRIVER_VERSION
DECL|GPT_ClearStatusFlags|function|static inline void GPT_ClearStatusFlags(GPT_Type *base, gpt_status_flag_t flags)
DECL|GPT_DisableInterrupts|function|static inline void GPT_DisableInterrupts(GPT_Type *base, uint32_t mask)
DECL|GPT_EnableInterrupts|function|static inline void GPT_EnableInterrupts(GPT_Type *base, uint32_t mask)
DECL|GPT_ForceOutput|function|static inline void GPT_ForceOutput(GPT_Type *base, gpt_output_compare_channel_t channel)
DECL|GPT_GetClockDivider|function|static inline uint32_t GPT_GetClockDivider(GPT_Type *base)
DECL|GPT_GetClockSource|function|static inline gpt_clock_source_t GPT_GetClockSource(GPT_Type *base)
DECL|GPT_GetCurrentTimerCount|function|static inline uint32_t GPT_GetCurrentTimerCount(GPT_Type *base)
DECL|GPT_GetEnabledInterrupts|function|static inline uint32_t GPT_GetEnabledInterrupts(GPT_Type *base)
DECL|GPT_GetInputCaptureValue|function|static inline uint32_t GPT_GetInputCaptureValue(GPT_Type *base, gpt_input_capture_channel_t channel)
DECL|GPT_GetInputOperationMode|function|static inline gpt_input_operation_mode_t GPT_GetInputOperationMode(GPT_Type *base, gpt_input_capture_channel_t channel)
DECL|GPT_GetOscClockDivider|function|static inline uint32_t GPT_GetOscClockDivider(GPT_Type *base)
DECL|GPT_GetOutputCompareValue|function|static inline uint32_t GPT_GetOutputCompareValue(GPT_Type *base, gpt_output_compare_channel_t channel)
DECL|GPT_GetOutputOperationMode|function|static inline gpt_output_operation_mode_t GPT_GetOutputOperationMode(GPT_Type *base, gpt_output_compare_channel_t channel)
DECL|GPT_GetStatusFlags|function|static inline uint32_t GPT_GetStatusFlags(GPT_Type *base, gpt_status_flag_t flags)
DECL|GPT_SetClockDivider|function|static inline void GPT_SetClockDivider(GPT_Type *base, uint32_t divider)
DECL|GPT_SetClockSource|function|static inline void GPT_SetClockSource(GPT_Type *base, gpt_clock_source_t source)
DECL|GPT_SetInputOperationMode|function|static inline void GPT_SetInputOperationMode(GPT_Type *base, gpt_input_capture_channel_t channel, gpt_input_operation_mode_t mode)
DECL|GPT_SetOscClockDivider|function|static inline void GPT_SetOscClockDivider(GPT_Type *base, uint32_t divider)
DECL|GPT_SetOutputCompareValue|function|static inline void GPT_SetOutputCompareValue(GPT_Type *base, gpt_output_compare_channel_t channel, uint32_t value)
DECL|GPT_SetOutputOperationMode|function|static inline void GPT_SetOutputOperationMode(GPT_Type *base, gpt_output_compare_channel_t channel, gpt_output_operation_mode_t mode)
DECL|GPT_SoftwareReset|function|static inline void GPT_SoftwareReset(GPT_Type *base)
DECL|GPT_StartTimer|function|static inline void GPT_StartTimer(GPT_Type *base)
DECL|GPT_StopTimer|function|static inline void GPT_StopTimer(GPT_Type *base)
DECL|_FSL_GPT_H_|macro|_FSL_GPT_H_
DECL|_gpt_clock_source|enum|typedef enum _gpt_clock_source
DECL|_gpt_init_config|struct|typedef struct _gpt_init_config
DECL|_gpt_input_capture_channel|enum|typedef enum _gpt_input_capture_channel
DECL|_gpt_input_operation_mode|enum|typedef enum _gpt_input_operation_mode
DECL|_gpt_interrupt_enable|enum|typedef enum _gpt_interrupt_enable
DECL|_gpt_output_compare_channel|enum|typedef enum _gpt_output_compare_channel
DECL|_gpt_output_operation_mode|enum|typedef enum _gpt_output_operation_mode
DECL|_gpt_status_flag|enum|typedef enum _gpt_status_flag
DECL|clockSource|member|gpt_clock_source_t clockSource; /*!< clock source for GPT module. */
DECL|divider|member|uint32_t divider; /*!< clock divider (prescaler+1) from clock source to counter. */
DECL|enableFreeRun|member|bool enableFreeRun; /*!< true: FreeRun mode, false: Restart mode. */
DECL|enableMode|member|bool enableMode; /*!< true: counter reset to 0 when enabled;
DECL|enableRunInDbg|member|bool enableRunInDbg; /*!< GPT enabled in debug mode. */
DECL|enableRunInDoze|member|bool enableRunInDoze; /*!< GPT enabled in doze mode. */
DECL|enableRunInStop|member|bool enableRunInStop; /*!< GPT enabled in stop mode. */
DECL|enableRunInWait|member|bool enableRunInWait; /*!< GPT enabled in wait mode. */
DECL|gpt_clock_source_t|typedef|} gpt_clock_source_t;
DECL|gpt_config_t|typedef|} gpt_config_t;
DECL|gpt_input_capture_channel_t|typedef|} gpt_input_capture_channel_t;
DECL|gpt_input_operation_mode_t|typedef|} gpt_input_operation_mode_t;
DECL|gpt_interrupt_enable_t|typedef|} gpt_interrupt_enable_t;
DECL|gpt_output_compare_channel_t|typedef|} gpt_output_compare_channel_t;
DECL|gpt_output_operation_mode_t|typedef|} gpt_output_operation_mode_t;
DECL|gpt_status_flag_t|typedef|} gpt_status_flag_t;
DECL|kGPT_ClockSource_Ext|enumerator|kGPT_ClockSource_Ext = 3U, /*!< GPT Clock Source from external pin.*/
DECL|kGPT_ClockSource_HighFreq|enumerator|kGPT_ClockSource_HighFreq = 2U, /*!< GPT Clock Source from High Frequency Reference Clock.*/
DECL|kGPT_ClockSource_LowFreq|enumerator|kGPT_ClockSource_LowFreq = 4U, /*!< GPT Clock Source from Low Frequency Reference Clock.*/
DECL|kGPT_ClockSource_Off|enumerator|kGPT_ClockSource_Off = 0U, /*!< GPT Clock Source Off.*/
DECL|kGPT_ClockSource_Osc|enumerator|kGPT_ClockSource_Osc = 5U, /*!< GPT Clock Source from Crystal oscillator.*/
DECL|kGPT_ClockSource_Periph|enumerator|kGPT_ClockSource_Periph = 1U, /*!< GPT Clock Source from Peripheral Clock.*/
DECL|kGPT_InputCapture1Flag|enumerator|kGPT_InputCapture1Flag = GPT_SR_IF1_MASK, /*!< Input Capture channel 1 event.*/
DECL|kGPT_InputCapture1InterruptEnable|enumerator|kGPT_InputCapture1InterruptEnable = GPT_IR_IF1IE_MASK, /*!< Input Capture Channel1 interrupt enable*/
DECL|kGPT_InputCapture2Flag|enumerator|kGPT_InputCapture2Flag = GPT_SR_IF2_MASK, /*!< Input Capture channel 2 event.*/
DECL|kGPT_InputCapture2InterruptEnable|enumerator|kGPT_InputCapture2InterruptEnable = GPT_IR_IF2IE_MASK, /*!< Input Capture Channel1 interrupt enable*/
DECL|kGPT_InputCapture_Channel1|enumerator|kGPT_InputCapture_Channel1 = 0U, /*!< GPT Input Capture Channel1.*/
DECL|kGPT_InputCapture_Channel2|enumerator|kGPT_InputCapture_Channel2 = 1U, /*!< GPT Input Capture Channel2.*/
DECL|kGPT_InputOperation_BothEdge|enumerator|kGPT_InputOperation_BothEdge = 3U, /*!< Capture on both edges of input pin.*/
DECL|kGPT_InputOperation_Disabled|enumerator|kGPT_InputOperation_Disabled = 0U, /*!< Don't capture.*/
DECL|kGPT_InputOperation_FallEdge|enumerator|kGPT_InputOperation_FallEdge = 2U, /*!< Capture on falling edge of input pin.*/
DECL|kGPT_InputOperation_RiseEdge|enumerator|kGPT_InputOperation_RiseEdge = 1U, /*!< Capture on rising edge of input pin.*/
DECL|kGPT_OutputCompare1Flag|enumerator|kGPT_OutputCompare1Flag = GPT_SR_OF1_MASK, /*!< Output compare channel 1 event.*/
DECL|kGPT_OutputCompare1InterruptEnable|enumerator|kGPT_OutputCompare1InterruptEnable = GPT_IR_OF1IE_MASK, /*!< Output Compare Channel1 interrupt enable*/
DECL|kGPT_OutputCompare2Flag|enumerator|kGPT_OutputCompare2Flag = GPT_SR_OF2_MASK, /*!< Output compare channel 2 event.*/
DECL|kGPT_OutputCompare2InterruptEnable|enumerator|kGPT_OutputCompare2InterruptEnable = GPT_IR_OF2IE_MASK, /*!< Output Compare Channel2 interrupt enable*/
DECL|kGPT_OutputCompare3Flag|enumerator|kGPT_OutputCompare3Flag = GPT_SR_OF3_MASK, /*!< Output compare channel 3 event.*/
DECL|kGPT_OutputCompare3InterruptEnable|enumerator|kGPT_OutputCompare3InterruptEnable = GPT_IR_OF3IE_MASK, /*!< Output Compare Channel3 interrupt enable*/
DECL|kGPT_OutputCompare_Channel1|enumerator|kGPT_OutputCompare_Channel1 = 0U, /*!< Output Compare Channel1.*/
DECL|kGPT_OutputCompare_Channel2|enumerator|kGPT_OutputCompare_Channel2 = 1U, /*!< Output Compare Channel2.*/
DECL|kGPT_OutputCompare_Channel3|enumerator|kGPT_OutputCompare_Channel3 = 2U, /*!< Output Compare Channel3.*/
DECL|kGPT_OutputOperation_Activelow|enumerator|kGPT_OutputOperation_Activelow = 4U, /*!< Generate a active low pulse on output pin.*/
DECL|kGPT_OutputOperation_Clear|enumerator|kGPT_OutputOperation_Clear = 2U, /*!< Set output pin low.*/
DECL|kGPT_OutputOperation_Disconnected|enumerator|kGPT_OutputOperation_Disconnected = 0U, /*!< Don't change output pin.*/
DECL|kGPT_OutputOperation_Set|enumerator|kGPT_OutputOperation_Set = 3U, /*!< Set output pin high.*/
DECL|kGPT_OutputOperation_Toggle|enumerator|kGPT_OutputOperation_Toggle = 1U, /*!< Toggle output pin.*/
DECL|kGPT_RollOverFlagInterruptEnable|enumerator|kGPT_RollOverFlagInterruptEnable = GPT_IR_ROVIE_MASK, /*!< Counter rolled over interrupt enable*/
DECL|kGPT_RollOverFlag|enumerator|kGPT_RollOverFlag = GPT_SR_ROV_MASK, /*!< Counter reaches maximum value and rolled over to 0 event.*/
