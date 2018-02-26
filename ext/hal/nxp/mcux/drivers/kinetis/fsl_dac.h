DECL|DAC_DoSoftwareTriggerBuffer|function|static inline void DAC_DoSoftwareTriggerBuffer(DAC_Type *base)
DECL|DAC_EnableBufferDMA|function|static inline void DAC_EnableBufferDMA(DAC_Type *base, bool enable)
DECL|DAC_EnableBuffer|function|static inline void DAC_EnableBuffer(DAC_Type *base, bool enable)
DECL|DAC_Enable|function|static inline void DAC_Enable(DAC_Type *base, bool enable)
DECL|DAC_GetBufferReadPointer|function|static inline uint8_t DAC_GetBufferReadPointer(DAC_Type *base)
DECL|FSL_DAC_DRIVER_VERSION|macro|FSL_DAC_DRIVER_VERSION
DECL|_FSL_DAC_H_|macro|_FSL_DAC_H_
DECL|_dac_buffer_config|struct|typedef struct _dac_buffer_config
DECL|_dac_buffer_interrupt_enable|enum|enum _dac_buffer_interrupt_enable
DECL|_dac_buffer_status_flags|enum|enum _dac_buffer_status_flags
DECL|_dac_buffer_trigger_mode|enum|typedef enum _dac_buffer_trigger_mode
DECL|_dac_buffer_watermark|enum|typedef enum _dac_buffer_watermark
DECL|_dac_buffer_work_mode|enum|typedef enum _dac_buffer_work_mode
DECL|_dac_config|struct|typedef struct _dac_config
DECL|_dac_reference_voltage_source|enum|typedef enum _dac_reference_voltage_source
DECL|dac_buffer_config_t|typedef|} dac_buffer_config_t;
DECL|dac_buffer_trigger_mode_t|typedef|} dac_buffer_trigger_mode_t;
DECL|dac_buffer_watermark_t|typedef|} dac_buffer_watermark_t;
DECL|dac_buffer_work_mode_t|typedef|} dac_buffer_work_mode_t;
DECL|dac_config_t|typedef|} dac_config_t;
DECL|dac_reference_voltage_source_t|typedef|} dac_reference_voltage_source_t;
DECL|enableLowPowerMode|member|bool enableLowPowerMode; /*!< Enable the low-power mode. */
DECL|kDAC_BufferReadPointerBottomInterruptEnable|enumerator|kDAC_BufferReadPointerBottomInterruptEnable = DAC_C0_DACBBIEN_MASK, /*!< DAC Buffer Read Pointer Bottom Flag
DECL|kDAC_BufferReadPointerBottomPositionFlag|enumerator|kDAC_BufferReadPointerBottomPositionFlag = DAC_SR_DACBFRPBF_MASK, /*!< DAC Buffer Read Pointer Bottom Position
DECL|kDAC_BufferReadPointerTopInterruptEnable|enumerator|kDAC_BufferReadPointerTopInterruptEnable = DAC_C0_DACBTIEN_MASK, /*!< DAC Buffer Read Pointer Top Flag Interrupt
DECL|kDAC_BufferReadPointerTopPositionFlag|enumerator|kDAC_BufferReadPointerTopPositionFlag = DAC_SR_DACBFRPTF_MASK, /*!< DAC Buffer Read Pointer Top Position Flag. */
DECL|kDAC_BufferTriggerByHardwareMode|enumerator|kDAC_BufferTriggerByHardwareMode = 0U, /*!< The DAC hardware trigger is selected. */
DECL|kDAC_BufferTriggerBySoftwareMode|enumerator|kDAC_BufferTriggerBySoftwareMode = 1U, /*!< The DAC software trigger is selected. */
DECL|kDAC_BufferWatermark1Word|enumerator|kDAC_BufferWatermark1Word = 0U, /*!< 1 word away from the upper limit. */
DECL|kDAC_BufferWatermark2Word|enumerator|kDAC_BufferWatermark2Word = 1U, /*!< 2 words away from the upper limit. */
DECL|kDAC_BufferWatermark3Word|enumerator|kDAC_BufferWatermark3Word = 2U, /*!< 3 words away from the upper limit. */
DECL|kDAC_BufferWatermark4Word|enumerator|kDAC_BufferWatermark4Word = 3U, /*!< 4 words away from the upper limit. */
DECL|kDAC_BufferWatermarkFlag|enumerator|kDAC_BufferWatermarkFlag = DAC_SR_DACBFWMF_MASK, /*!< DAC Buffer Watermark Flag. */
DECL|kDAC_BufferWatermarkInterruptEnable|enumerator|kDAC_BufferWatermarkInterruptEnable = DAC_C0_DACBWIEN_MASK, /*!< DAC Buffer Watermark Interrupt Enable. */
DECL|kDAC_BufferWorkAsFIFOMode|enumerator|kDAC_BufferWorkAsFIFOMode, /*!< FIFO mode. */
DECL|kDAC_BufferWorkAsNormalMode|enumerator|kDAC_BufferWorkAsNormalMode = 0U, /*!< Normal mode. */
DECL|kDAC_BufferWorkAsOneTimeScanMode|enumerator|kDAC_BufferWorkAsOneTimeScanMode, /*!< One-Time Scan mode. */
DECL|kDAC_BufferWorkAsSwingMode|enumerator|kDAC_BufferWorkAsSwingMode, /*!< Swing mode. */
DECL|kDAC_ReferenceVoltageSourceVref1|enumerator|kDAC_ReferenceVoltageSourceVref1 = 0U, /*!< The DAC selects DACREF_1 as the reference voltage. */
DECL|kDAC_ReferenceVoltageSourceVref2|enumerator|kDAC_ReferenceVoltageSourceVref2 = 1U, /*!< The DAC selects DACREF_2 as the reference voltage. */
DECL|referenceVoltageSource|member|dac_reference_voltage_source_t referenceVoltageSource; /*!< Select the DAC reference voltage source. */
DECL|triggerMode|member|dac_buffer_trigger_mode_t triggerMode; /*!< Select the buffer's trigger mode. */
DECL|upperLimit|member|uint8_t upperLimit; /*!< Set the upper limit for the buffer index.
DECL|watermark|member|dac_buffer_watermark_t watermark; /*!< Select the buffer's watermark. */
DECL|workMode|member|dac_buffer_work_mode_t workMode; /*!< Select the buffer's work mode. */
