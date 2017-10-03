DECL|SDSPI_CMD_RESERVED|macro|SDSPI_CMD_RESERVED
DECL|SDSPI_CloseFxn|typedef|typedef void (*SDSPI_CloseFxn) (SDSPI_Handle handle);
DECL|SDSPI_Config_|struct|typedef struct SDSPI_Config_ {
DECL|SDSPI_Config|typedef|} SDSPI_Config;
DECL|SDSPI_ControlFxn|typedef|typedef int_fast16_t (*SDSPI_ControlFxn) (SDSPI_Handle handle,
DECL|SDSPI_FxnTable_|struct|typedef struct SDSPI_FxnTable_ {
DECL|SDSPI_FxnTable|typedef|} SDSPI_FxnTable;
DECL|SDSPI_Handle|typedef|typedef struct SDSPI_Config_ *SDSPI_Handle;
DECL|SDSPI_InitFxn|typedef|typedef void (*SDSPI_InitFxn) (SDSPI_Handle handle);
DECL|SDSPI_OpenFxn|typedef|typedef SDSPI_Handle (*SDSPI_OpenFxn) (SDSPI_Handle handle,
DECL|SDSPI_Params_|struct|typedef struct SDSPI_Params_ {
DECL|SDSPI_Params|typedef|} SDSPI_Params;
DECL|SDSPI_STATUS_ERROR|macro|SDSPI_STATUS_ERROR
DECL|SDSPI_STATUS_RESERVED|macro|SDSPI_STATUS_RESERVED
DECL|SDSPI_STATUS_SUCCESS|macro|SDSPI_STATUS_SUCCESS
DECL|SDSPI_STATUS_UNDEFINEDCMD|macro|SDSPI_STATUS_UNDEFINEDCMD
DECL|bitRate|member|uint32_t bitRate; /*!< SPI bit rate in Hz */
DECL|closeFxn|member|SDSPI_CloseFxn closeFxn;
DECL|controlFxn|member|SDSPI_ControlFxn controlFxn;
DECL|custom|member|void *custom; /*!< Custom argument used by driver implementation */
DECL|fxnTablePtr|member|SDSPI_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|SDSPI_InitFxn initFxn;
DECL|object|member|void *object;
DECL|openFxn|member|SDSPI_OpenFxn openFxn;
DECL|ti_drivers_SDSPI__include|macro|ti_drivers_SDSPI__include
