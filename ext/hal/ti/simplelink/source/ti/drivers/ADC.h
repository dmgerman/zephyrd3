DECL|ADC_CMD_RESERVED|macro|ADC_CMD_RESERVED
DECL|ADC_CloseFxn|typedef|typedef void (*ADC_CloseFxn) (ADC_Handle handle);
DECL|ADC_Config_|struct|typedef struct ADC_Config_ {
DECL|ADC_Config|typedef|} ADC_Config;
DECL|ADC_ControlFxn|typedef|typedef int_fast16_t (*ADC_ControlFxn) (ADC_Handle handle, uint_fast16_t cmd,
DECL|ADC_ConvertFxn|typedef|typedef int_fast16_t (*ADC_ConvertFxn) (ADC_Handle handle, uint16_t *value);
DECL|ADC_ConvertToMicroVoltsFxn|typedef|typedef uint32_t (*ADC_ConvertToMicroVoltsFxn) (ADC_Handle handle,
DECL|ADC_FxnTable_|struct|typedef struct ADC_FxnTable_ {
DECL|ADC_FxnTable|typedef|} ADC_FxnTable;
DECL|ADC_Handle|typedef|typedef struct ADC_Config_ *ADC_Handle;
DECL|ADC_InitFxn|typedef|typedef void (*ADC_InitFxn) (ADC_Handle handle);
DECL|ADC_OpenFxn|typedef|typedef ADC_Handle (*ADC_OpenFxn) (ADC_Handle handle, ADC_Params *params);
DECL|ADC_Params_|struct|typedef struct ADC_Params_ {
DECL|ADC_Params|typedef|} ADC_Params;
DECL|ADC_STATUS_ERROR|macro|ADC_STATUS_ERROR
DECL|ADC_STATUS_RESERVED|macro|ADC_STATUS_RESERVED
DECL|ADC_STATUS_SUCCESS|macro|ADC_STATUS_SUCCESS
DECL|ADC_STATUS_UNDEFINEDCMD|macro|ADC_STATUS_UNDEFINEDCMD
DECL|ADC_convertRawToMicroVolts|macro|ADC_convertRawToMicroVolts
DECL|closeFxn|member|ADC_CloseFxn closeFxn;
DECL|controlFxn|member|ADC_ControlFxn controlFxn;
DECL|convertFxn|member|ADC_ConvertFxn convertFxn;
DECL|convertToMicroVolts|member|ADC_ConvertToMicroVoltsFxn convertToMicroVolts;
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|fxnTablePtr|member|ADC_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|ADC_InitFxn initFxn;
DECL|isProtected|member|bool isProtected; /*!< By default ADC uses a semaphore
DECL|object|member|void *object;
DECL|openFxn|member|ADC_OpenFxn openFxn;
DECL|ti_drivers_ADC__include|macro|ti_drivers_ADC__include
