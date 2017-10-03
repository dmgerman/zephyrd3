DECL|ADCBuf_CMD_RESERVED|macro|ADCBuf_CMD_RESERVED
DECL|ADCBuf_Callback|typedef|typedef void (*ADCBuf_Callback) (ADCBuf_Handle handle,
DECL|ADCBuf_CloseFxn|typedef|typedef void (*ADCBuf_CloseFxn) (ADCBuf_Handle handle);
DECL|ADCBuf_Config_|struct|typedef struct ADCBuf_Config_ {
DECL|ADCBuf_Config|typedef|} ADCBuf_Config;
DECL|ADCBuf_ControlFxn|typedef|typedef int_fast16_t (*ADCBuf_ControlFxn) (ADCBuf_Handle handle,
DECL|ADCBuf_Conversion_|struct|typedef struct ADCBuf_Conversion_ {
DECL|ADCBuf_Conversion|typedef|} ADCBuf_Conversion;
DECL|ADCBuf_ConvertCancelFxn|typedef|typedef int_fast16_t (*ADCBuf_ConvertCancelFxn)(ADCBuf_Handle handle);
DECL|ADCBuf_ConvertFxn|typedef|typedef int_fast16_t (*ADCBuf_ConvertFxn) (ADCBuf_Handle handle,
DECL|ADCBuf_FxnTable_|struct|typedef struct ADCBuf_FxnTable_ {
DECL|ADCBuf_FxnTable|typedef|} ADCBuf_FxnTable;
DECL|ADCBuf_GetResolutionFxn|typedef|typedef uint_fast8_t (*ADCBuf_GetResolutionFxn) (ADCBuf_Handle handle);
DECL|ADCBuf_Handle|typedef|typedef struct ADCBuf_Config_ *ADCBuf_Handle;
DECL|ADCBuf_InitFxn|typedef|typedef void (*ADCBuf_InitFxn) (ADCBuf_Handle handle);
DECL|ADCBuf_OpenFxn|typedef|typedef ADCBuf_Handle (*ADCBuf_OpenFxn) (ADCBuf_Handle handle,
DECL|ADCBuf_Params_|struct|typedef struct ADCBuf_Params_ {
DECL|ADCBuf_Params|typedef|} ADCBuf_Params;
DECL|ADCBuf_RECURRENCE_MODE_CONTINUOUS|enumerator|ADCBuf_RECURRENCE_MODE_CONTINUOUS
DECL|ADCBuf_RECURRENCE_MODE_ONE_SHOT|enumerator|ADCBuf_RECURRENCE_MODE_ONE_SHOT,
DECL|ADCBuf_RETURN_MODE_BLOCKING|enumerator|ADCBuf_RETURN_MODE_BLOCKING,
DECL|ADCBuf_RETURN_MODE_CALLBACK|enumerator|ADCBuf_RETURN_MODE_CALLBACK
DECL|ADCBuf_Recurrence_Mode_|enum|typedef enum ADCBuf_Recurrence_Mode_ {
DECL|ADCBuf_Recurrence_Mode|typedef|} ADCBuf_Recurrence_Mode;
DECL|ADCBuf_Return_Mode_|enum|typedef enum ADCBuf_Return_Mode_ {
DECL|ADCBuf_Return_Mode|typedef|} ADCBuf_Return_Mode;
DECL|ADCBuf_STATUS_ERROR|macro|ADCBuf_STATUS_ERROR
DECL|ADCBuf_STATUS_RESERVED|macro|ADCBuf_STATUS_RESERVED
DECL|ADCBuf_STATUS_SUCCESS|macro|ADCBuf_STATUS_SUCCESS
DECL|ADCBuf_STATUS_UNDEFINEDCMD|macro|ADCBuf_STATUS_UNDEFINEDCMD
DECL|ADCBuf_STATUS_UNSUPPORTED|macro|ADCBuf_STATUS_UNSUPPORTED
DECL|ADCBuf_adjustRawValuesFxn|typedef|typedef int_fast16_t (*ADCBuf_adjustRawValuesFxn)(ADCBuf_Handle handle,
DECL|ADCBuf_convertAdjustedToMicroVoltsFxn|typedef|typedef int_fast16_t (*ADCBuf_convertAdjustedToMicroVoltsFxn) (ADCBuf_Handle handle,
DECL|adcChannel|member|uint32_t adcChannel; /*!< Channel to perform the ADC conversion on. Mapping of channel to pin or internal signal is device specific. */
DECL|adjustRawValuesFxn|member|ADCBuf_adjustRawValuesFxn adjustRawValuesFxn;
DECL|arg|member|void *arg; /*!< Argument to be passed to the callback function in ::ADCBuf_RETURN_MODE_CALLBACK */
DECL|blockingTimeout|member|uint32_t blockingTimeout; /*!< Timeout for semaphore in ::ADCBuf_RETURN_MODE_BLOCKING */
DECL|callbackFxn|member|ADCBuf_Callback callbackFxn; /*!< Pointer to callback function */
DECL|closeFxn|member|ADCBuf_CloseFxn closeFxn;
DECL|controlFxn|member|ADCBuf_ControlFxn controlFxn;
DECL|convertAdjustedToMicroVoltsFxn|member|ADCBuf_convertAdjustedToMicroVoltsFxn convertAdjustedToMicroVoltsFxn;
DECL|convertCancelFxn|member|ADCBuf_ConvertCancelFxn convertCancelFxn;
DECL|convertFxn|member|ADCBuf_ConvertFxn convertFxn;
DECL|custom|member|void *custom; /*!< Pointer to a device specific extension of the ADCBuf_Params */
DECL|fxnTablePtr|member|const ADCBuf_FxnTable *fxnTablePtr;
DECL|getResolutionFxn|member|ADCBuf_GetResolutionFxn getResolutionFxn;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|ADCBuf_InitFxn initFxn;
DECL|object|member|void *object;
DECL|openFxn|member|ADCBuf_OpenFxn openFxn;
DECL|recurrenceMode|member|ADCBuf_Recurrence_Mode recurrenceMode; /*!< One-shot or continuous conversion */
DECL|returnMode|member|ADCBuf_Return_Mode returnMode; /*!< Return mode for all conversions */
DECL|sampleBufferTwo|member|void *sampleBufferTwo; /*!< A second buffer that is filled in ::ADCBuf_RECURRENCE_MODE_CONTINUOUS mode while
DECL|sampleBuffer|member|void *sampleBuffer; /*!< Buffer the results of the conversions are stored in */
DECL|samplesRequestedCount|member|uint16_t samplesRequestedCount; /*!< Number of samples to convert and return */
DECL|samplingFrequency|member|uint32_t samplingFrequency; /*!< The frequency at which the ADC will produce a sample */
DECL|ti_drivers_adcbuf__include|macro|ti_drivers_adcbuf__include
