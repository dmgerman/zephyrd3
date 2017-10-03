DECL|CAPTURE_CMD_RESERVED|macro|CAPTURE_CMD_RESERVED
DECL|CAPTURE_MODE_ANY_EDGE|macro|CAPTURE_MODE_ANY_EDGE
DECL|CAPTURE_MODE_FALLING_FALLING|macro|CAPTURE_MODE_FALLING_FALLING
DECL|CAPTURE_MODE_RISING_RISING|macro|CAPTURE_MODE_RISING_RISING
DECL|CAPTURE_PERIOD_COUNTS|macro|CAPTURE_PERIOD_COUNTS
DECL|CAPTURE_PERIOD_HZ|macro|CAPTURE_PERIOD_HZ
DECL|CAPTURE_PERIOD_US|macro|CAPTURE_PERIOD_US
DECL|CAPTURE_STATUS_ERROR|macro|CAPTURE_STATUS_ERROR
DECL|CAPTURE_STATUS_RESERVED|macro|CAPTURE_STATUS_RESERVED
DECL|CAPTURE_STATUS_SUCCESS|macro|CAPTURE_STATUS_SUCCESS
DECL|CAPTURE_STATUS_UNDEFINEDCMD|macro|CAPTURE_STATUS_UNDEFINEDCMD
DECL|Capture_ANY_EDGE|enumerator|Capture_ANY_EDGE /*!< Capture is triggered on both rising and
DECL|Capture_CMD_RESERVED|macro|Capture_CMD_RESERVED
DECL|Capture_CallBackFxn|typedef|typedef void (*Capture_CallBackFxn)(Capture_Handle handle, uint32_t interval);
DECL|Capture_CloseFxn|typedef|typedef void (*Capture_CloseFxn)(Capture_Handle handle);
DECL|Capture_Config_|struct|typedef struct Capture_Config_ {
DECL|Capture_Config|typedef|} Capture_Config;
DECL|Capture_ControlFxn|typedef|typedef int_fast16_t (*Capture_ControlFxn)(Capture_Handle handle,
DECL|Capture_FALLING_EDGE|enumerator|Capture_FALLING_EDGE, /*!< Capture is triggered on falling edges. */
DECL|Capture_FxnTable_|struct|typedef struct Capture_FxnTable_ {
DECL|Capture_FxnTable|typedef|} Capture_FxnTable;
DECL|Capture_Handle|typedef|typedef struct Capture_Config_ *Capture_Handle;
DECL|Capture_InitFxn|typedef|typedef void (*Capture_InitFxn)(Capture_Handle handle);
DECL|Capture_Mode_|enum|typedef enum Capture_Mode_ {
DECL|Capture_Mode|typedef|} Capture_Mode;
DECL|Capture_OpenFxn|typedef|typedef Capture_Handle (*Capture_OpenFxn)(Capture_Handle handle,
DECL|Capture_PERIOD_COUNTS|enumerator|Capture_PERIOD_COUNTS /*!< Period specified in timer ticks. Varies
DECL|Capture_PERIOD_HZ|enumerator|Capture_PERIOD_HZ, /*!< Period specified in hertz; interrupts per
DECL|Capture_PERIOD_US|enumerator|Capture_PERIOD_US, /*!< Period specified in micro seconds. */
DECL|Capture_Params_|struct|typedef struct Capture_Params_ {
DECL|Capture_Params|typedef|} Capture_Params;
DECL|Capture_PeriodUnits_|enum|typedef enum Capture_PeriodUnits_ {
DECL|Capture_PeriodUnits|typedef|} Capture_PeriodUnits;
DECL|Capture_Period_Unit|macro|Capture_Period_Unit
DECL|Capture_RISING_EDGE|enumerator|Capture_RISING_EDGE, /*!< Capture is triggered on rising edges. */
DECL|Capture_STATUS_ERROR|macro|Capture_STATUS_ERROR
DECL|Capture_STATUS_RESERVED|macro|Capture_STATUS_RESERVED
DECL|Capture_STATUS_SUCCESS|macro|Capture_STATUS_SUCCESS
DECL|Capture_STATUS_UNDEFINEDCMD|macro|Capture_STATUS_UNDEFINEDCMD
DECL|Capture_StartFxn|typedef|typedef int32_t (*Capture_StartFxn)(Capture_Handle handle);
DECL|Capture_StopFxn|typedef|typedef void (*Capture_StopFxn)(Capture_Handle handle);
DECL|callbackFxn|member|Capture_CallBackFxn callbackFxn;
DECL|closeFxn|member|Capture_CloseFxn closeFxn;
DECL|controlFxn|member|Capture_ControlFxn controlFxn;
DECL|fxnTablePtr|member|Capture_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|Capture_InitFxn initFxn;
DECL|mode|member|Capture_Mode mode;
DECL|object|member|void *object;
DECL|openFxn|member|Capture_OpenFxn openFxn;
DECL|periodUnit|member|Capture_PeriodUnits periodUnit;
DECL|startFxn|member|Capture_StartFxn startFxn;
DECL|stopFxn|member|Capture_StopFxn stopFxn;
DECL|ti_drivers_Capture__include|macro|ti_drivers_Capture__include
