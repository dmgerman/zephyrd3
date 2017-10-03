DECL|Watchdog_CMD_RESERVED|macro|Watchdog_CMD_RESERVED
DECL|Watchdog_Callback|typedef|typedef void (*Watchdog_Callback)(uintptr_t handle);
DECL|Watchdog_ClearFxn|typedef|typedef void (*Watchdog_ClearFxn) (Watchdog_Handle handle);
DECL|Watchdog_CloseFxn|typedef|typedef void (*Watchdog_CloseFxn) (Watchdog_Handle handle);
DECL|Watchdog_Config_|struct|typedef struct Watchdog_Config_ {
DECL|Watchdog_Config|typedef|} Watchdog_Config;
DECL|Watchdog_ControlFxn|typedef|typedef int_fast16_t (*Watchdog_ControlFxn) (Watchdog_Handle handle,
DECL|Watchdog_ConvertMsToTicksFxn|typedef|typedef uint32_t (*Watchdog_ConvertMsToTicksFxn) (Watchdog_Handle handle,
DECL|Watchdog_DEBUG_STALL_OFF|enumerator|Watchdog_DEBUG_STALL_OFF /*!< Watchdog will keep running at breakpoints */
DECL|Watchdog_DEBUG_STALL_ON|enumerator|Watchdog_DEBUG_STALL_ON, /*!< Watchdog will be stalled at breakpoints */
DECL|Watchdog_DebugMode_|enum|typedef enum Watchdog_DebugMode_ {
DECL|Watchdog_DebugMode|typedef|} Watchdog_DebugMode;
DECL|Watchdog_FxnTable_|struct|typedef struct Watchdog_FxnTable_ {
DECL|Watchdog_FxnTable|typedef|} Watchdog_FxnTable;
DECL|Watchdog_Handle|typedef|typedef struct Watchdog_Config_ *Watchdog_Handle;
DECL|Watchdog_InitFxn|typedef|typedef void (*Watchdog_InitFxn) (Watchdog_Handle handle);
DECL|Watchdog_OpenFxn|typedef|typedef Watchdog_Handle (*Watchdog_OpenFxn) (Watchdog_Handle handle,
DECL|Watchdog_Params_|struct|typedef struct Watchdog_Params_ {
DECL|Watchdog_Params|typedef|} Watchdog_Params;
DECL|Watchdog_RESET_OFF|enumerator|Watchdog_RESET_OFF, /*!< Timeouts generate interrupts only */
DECL|Watchdog_RESET_ON|enumerator|Watchdog_RESET_ON /*!< Generates reset after timeout */
DECL|Watchdog_ResetMode_|enum|typedef enum Watchdog_ResetMode_ {
DECL|Watchdog_ResetMode|typedef|} Watchdog_ResetMode;
DECL|Watchdog_STATUS_ERROR|macro|Watchdog_STATUS_ERROR
DECL|Watchdog_STATUS_RESERVED|macro|Watchdog_STATUS_RESERVED
DECL|Watchdog_STATUS_SUCCESS|macro|Watchdog_STATUS_SUCCESS
DECL|Watchdog_STATUS_UNDEFINEDCMD|macro|Watchdog_STATUS_UNDEFINEDCMD
DECL|Watchdog_STATUS_UNSUPPORTED|macro|Watchdog_STATUS_UNSUPPORTED
DECL|Watchdog_SetReloadFxn|typedef|typedef int_fast16_t (*Watchdog_SetReloadFxn)(Watchdog_Handle handle,
DECL|callbackFxn|member|Watchdog_Callback callbackFxn; /*!< Pointer to callback. Not supported
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|debugStallMode|member|Watchdog_DebugMode debugStallMode; /*!< Mode to stall WDT at breakpoints.
DECL|fxnTablePtr|member|Watchdog_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|object|member|void *object;
DECL|resetMode|member|Watchdog_ResetMode resetMode; /*!< Mode to enable resets.
DECL|ti_drivers_Watchdog__include|macro|ti_drivers_Watchdog__include
DECL|watchdogClear|member|Watchdog_ClearFxn watchdogClear;
DECL|watchdogClose|member|Watchdog_CloseFxn watchdogClose;
DECL|watchdogControl|member|Watchdog_ControlFxn watchdogControl;
DECL|watchdogConvertMsToTicks|member|Watchdog_ConvertMsToTicksFxn watchdogConvertMsToTicks;
DECL|watchdogInit|member|Watchdog_InitFxn watchdogInit;
DECL|watchdogOpen|member|Watchdog_OpenFxn watchdogOpen;
DECL|watchdogSetReload|member|Watchdog_SetReloadFxn watchdogSetReload;
