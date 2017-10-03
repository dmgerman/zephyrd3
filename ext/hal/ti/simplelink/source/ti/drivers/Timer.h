DECL|TIMER_CMD_RESERVED|macro|TIMER_CMD_RESERVED
DECL|TIMER_CONTINUOUS_CB|macro|TIMER_CONTINUOUS_CB
DECL|TIMER_MODE_FREE_RUNNING|macro|TIMER_MODE_FREE_RUNNING
DECL|TIMER_ONESHOT_BLOCK|macro|TIMER_ONESHOT_BLOCK
DECL|TIMER_ONESHOT_CB|macro|TIMER_ONESHOT_CB
DECL|TIMER_PERIOD_COUNTS|macro|TIMER_PERIOD_COUNTS
DECL|TIMER_PERIOD_HZ|macro|TIMER_PERIOD_HZ
DECL|TIMER_PERIOD_US|macro|TIMER_PERIOD_US
DECL|TIMER_STATUS_ERROR|macro|TIMER_STATUS_ERROR
DECL|TIMER_STATUS_RESERVED|macro|TIMER_STATUS_RESERVED
DECL|TIMER_STATUS_SUCCESS|macro|TIMER_STATUS_SUCCESS
DECL|TIMER_STATUS_UNDEFINEDCMD|macro|TIMER_STATUS_UNDEFINEDCMD
DECL|Timer_CMD_RESERVED|macro|Timer_CMD_RESERVED
DECL|Timer_CONTINUOUS_CALLBACK|enumerator|Timer_CONTINUOUS_CALLBACK, /*!< User routine doesn't get blocked and
DECL|Timer_CallBackFxn|typedef|typedef void (*Timer_CallBackFxn)(Timer_Handle handle);
DECL|Timer_CloseFxn|typedef|typedef void (*Timer_CloseFxn)(Timer_Handle handle);
DECL|Timer_Config_|struct|typedef struct Timer_Config_ {
DECL|Timer_Config|typedef|} Timer_Config;
DECL|Timer_ControlFxn|typedef|typedef int_fast16_t (*Timer_ControlFxn)(Timer_Handle handle,
DECL|Timer_FREE_RUNNING|enumerator|Timer_FREE_RUNNING
DECL|Timer_FxnTable_|struct|typedef struct Timer_FxnTable_ {
DECL|Timer_FxnTable|typedef|} Timer_FxnTable;
DECL|Timer_GetCountFxn|typedef|typedef uint32_t (*Timer_GetCountFxn)(Timer_Handle handle);
DECL|Timer_Handle|typedef|typedef struct Timer_Config_ *Timer_Handle;
DECL|Timer_InitFxn|typedef|typedef void (*Timer_InitFxn)(Timer_Handle handle);
DECL|Timer_Mode_|enum|typedef enum Timer_Mode_ {
DECL|Timer_Mode|typedef|} Timer_Mode;
DECL|Timer_ONESHOT_BLOCKING|enumerator|Timer_ONESHOT_BLOCKING, /*!< User routine gets blocked until timer
DECL|Timer_ONESHOT_CALLBACK|enumerator|Timer_ONESHOT_CALLBACK, /*!< User routine doesn't get blocked and
DECL|Timer_OpenFxn|typedef|typedef Timer_Handle (*Timer_OpenFxn)(Timer_Handle handle,
DECL|Timer_PERIOD_COUNTS|enumerator|Timer_PERIOD_COUNTS /*!< Period specified in ticks or counts. Varies
DECL|Timer_PERIOD_HZ|enumerator|Timer_PERIOD_HZ, /*!< Period specified in hertz; interrupts per
DECL|Timer_PERIOD_US|enumerator|Timer_PERIOD_US, /*!< Period specified in micro seconds. */
DECL|Timer_Params_|struct|typedef struct Timer_Params_ {
DECL|Timer_Params|typedef|} Timer_Params;
DECL|Timer_PeriodUnits_|enum|typedef enum Timer_PeriodUnits_ {
DECL|Timer_PeriodUnits|typedef|} Timer_PeriodUnits;
DECL|Timer_Period_Units|macro|Timer_Period_Units
DECL|Timer_STATUS_ERROR|macro|Timer_STATUS_ERROR
DECL|Timer_STATUS_RESERVED|macro|Timer_STATUS_RESERVED
DECL|Timer_STATUS_SUCCESS|macro|Timer_STATUS_SUCCESS
DECL|Timer_STATUS_UNDEFINEDCMD|macro|Timer_STATUS_UNDEFINEDCMD
DECL|Timer_StartFxn|typedef|typedef int32_t (*Timer_StartFxn)(Timer_Handle handle);
DECL|Timer_StopFxn|typedef|typedef void (*Timer_StopFxn)(Timer_Handle handle);
DECL|closeFxn|member|Timer_CloseFxn closeFxn;
DECL|controlFxn|member|Timer_ControlFxn controlFxn;
DECL|fxnTablePtr|member|Timer_FxnTable const *fxnTablePtr;
DECL|getCountFxn|member|Timer_GetCountFxn getCountFxn;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|Timer_InitFxn initFxn;
DECL|object|member|void *object;
DECL|openFxn|member|Timer_OpenFxn openFxn;
DECL|periodUnits|member|Timer_PeriodUnits periodUnits;
DECL|period|member|uint32_t period;
DECL|startFxn|member|Timer_StartFxn startFxn;
DECL|stopFxn|member|Timer_StopFxn stopFxn;
DECL|ti_drivers_Timer__include|macro|ti_drivers_Timer__include
DECL|timerCallback|member|Timer_CallBackFxn timerCallback;
DECL|timerMode|member|Timer_Mode timerMode;
