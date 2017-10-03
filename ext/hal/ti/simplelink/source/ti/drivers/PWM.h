DECL|PWM_CMD_RESERVED|macro|PWM_CMD_RESERVED
DECL|PWM_CloseFxn|typedef|typedef void (*PWM_CloseFxn) (PWM_Handle handle);
DECL|PWM_Config_|struct|typedef struct PWM_Config_ {
DECL|PWM_Config|typedef|} PWM_Config;
DECL|PWM_ControlFxn|typedef|typedef int_fast16_t (*PWM_ControlFxn) (PWM_Handle handle, uint_fast16_t cmd,
DECL|PWM_DUTY_COUNTS|enumerator|PWM_DUTY_COUNTS /* Duty in timer counts */
DECL|PWM_DUTY_FRACTION_MAX|macro|PWM_DUTY_FRACTION_MAX
DECL|PWM_DUTY_FRACTION|enumerator|PWM_DUTY_FRACTION, /* Duty as a fractional part of PWM_DUTY_FRACTION_MAX */
DECL|PWM_DUTY_US|enumerator|PWM_DUTY_US, /* Duty cycle in microseconds */
DECL|PWM_Duty_Units_|enum|typedef enum PWM_Duty_Units_ {
DECL|PWM_Duty_Units|typedef|} PWM_Duty_Units;
DECL|PWM_FxnTable_|struct|typedef struct PWM_FxnTable_ {
DECL|PWM_FxnTable|typedef|} PWM_FxnTable;
DECL|PWM_Handle|typedef|typedef struct PWM_Config_ *PWM_Handle;
DECL|PWM_IDLE_HIGH|enumerator|PWM_IDLE_HIGH = 1,
DECL|PWM_IDLE_LOW|enumerator|PWM_IDLE_LOW = 0,
DECL|PWM_IdleLevel_|enum|typedef enum PWM_IdleLevel_ {
DECL|PWM_IdleLevel|typedef|} PWM_IdleLevel;
DECL|PWM_InitFxn|typedef|typedef void (*PWM_InitFxn) (PWM_Handle handle);
DECL|PWM_OpenFxn|typedef|typedef PWM_Handle (*PWM_OpenFxn) (PWM_Handle handle, PWM_Params *params);
DECL|PWM_PERIOD_COUNTS|enumerator|PWM_PERIOD_COUNTS /* Period in timer counts */
DECL|PWM_PERIOD_HZ|enumerator|PWM_PERIOD_HZ, /* Period in (reciprocal) Hertz
DECL|PWM_PERIOD_US|enumerator|PWM_PERIOD_US, /* Period in microseconds */
DECL|PWM_Params_|struct|typedef struct PWM_Params_ {
DECL|PWM_Params|typedef|} PWM_Params;
DECL|PWM_Period_Units_|enum|typedef enum PWM_Period_Units_ {
DECL|PWM_Period_Units|typedef|} PWM_Period_Units;
DECL|PWM_STATUS_ERROR|macro|PWM_STATUS_ERROR
DECL|PWM_STATUS_INVALID_DUTY|macro|PWM_STATUS_INVALID_DUTY
DECL|PWM_STATUS_INVALID_PERIOD|macro|PWM_STATUS_INVALID_PERIOD
DECL|PWM_STATUS_RESERVED|macro|PWM_STATUS_RESERVED
DECL|PWM_STATUS_SUCCESS|macro|PWM_STATUS_SUCCESS
DECL|PWM_STATUS_UNDEFINEDCMD|macro|PWM_STATUS_UNDEFINEDCMD
DECL|PWM_SetDutyFxn|typedef|typedef int_fast16_t (*PWM_SetDutyFxn) (PWM_Handle handle,
DECL|PWM_SetPeriodFxn|typedef|typedef int_fast16_t (*PWM_SetPeriodFxn) (PWM_Handle handle,
DECL|PWM_StartFxn|typedef|typedef void (*PWM_StartFxn) (PWM_Handle handle);
DECL|PWM_StopFxn|typedef|typedef void (*PWM_StopFxn) (PWM_Handle handle);
DECL|closeFxn|member|PWM_CloseFxn closeFxn;
DECL|controlFxn|member|PWM_ControlFxn controlFxn;
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|dutyUnits|member|PWM_Duty_Units dutyUnits; /*!< Units in which the duty is specified */
DECL|dutyValue|member|uint32_t dutyValue; /*!< PWM initial duty */
DECL|fxnTablePtr|member|PWM_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|idleLevel|member|PWM_IdleLevel idleLevel; /*!< Pin output when PWM is stopped. */
DECL|initFxn|member|PWM_InitFxn initFxn;
DECL|object|member|void *object;
DECL|openFxn|member|PWM_OpenFxn openFxn;
DECL|periodUnits|member|PWM_Period_Units periodUnits; /*!< Units in which the period is specified */
DECL|periodValue|member|uint32_t periodValue; /*!< PWM initial period */
DECL|setDutyFxn|member|PWM_SetDutyFxn setDutyFxn;
DECL|setPeriodFxn|member|PWM_SetPeriodFxn setPeriodFxn;
DECL|startFxn|member|PWM_StartFxn startFxn;
DECL|stopFxn|member|PWM_StopFxn stopFxn;
DECL|ti_drivers_PWM__include|macro|ti_drivers_PWM__include
