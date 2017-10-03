DECL|SD_CMD_RESERVED|macro|SD_CMD_RESERVED
DECL|SD_CardType_|enum|typedef enum SD_CardType_ {
DECL|SD_CardType|typedef|} SD_CardType;
DECL|SD_CloseFxn|typedef|typedef void (*SD_CloseFxn) (SD_Handle handle);
DECL|SD_Config_|struct|typedef struct SD_Config_ {
DECL|SD_Config|typedef|} SD_Config;
DECL|SD_ControlFxn|typedef|typedef int_fast16_t (*SD_ControlFxn) (SD_Handle handle,
DECL|SD_FxnTable_|struct|typedef struct SD_FxnTable_ {
DECL|SD_FxnTable|typedef|} SD_FxnTable;
DECL|SD_Handle|typedef|typedef struct SD_Config_ *SD_Handle;
DECL|SD_InitFxn|typedef|typedef void (*SD_InitFxn) (SD_Handle handle);
DECL|SD_InitializeFxn|typedef|typedef int_fast16_t (*SD_InitializeFxn) (SD_Handle handle);
DECL|SD_MMC|enumerator|SD_MMC = 1, /*!< Multi-media Memory Card (MMC) */
DECL|SD_NOCARD|enumerator|SD_NOCARD = 0, /*!< Unrecognized Card */
DECL|SD_OpenFxn|typedef|typedef SD_Handle (*SD_OpenFxn) (SD_Handle handle, SD_Params *params);
DECL|SD_Params_|struct|typedef struct SD_Params_ {
DECL|SD_Params|typedef|} SD_Params;
DECL|SD_ReadFxn|typedef|typedef int_fast16_t (*SD_ReadFxn) (SD_Handle handle, void *buf,
DECL|SD_SDHC|enumerator|SD_SDHC = 3 /*!< High Capacity SDCard (SDHC) */
DECL|SD_SDSC|enumerator|SD_SDSC = 2, /*!< Standard SDCard (SDSC) */
DECL|SD_STATUS_ERROR|macro|SD_STATUS_ERROR
DECL|SD_STATUS_RESERVED|macro|SD_STATUS_RESERVED
DECL|SD_STATUS_SUCCESS|macro|SD_STATUS_SUCCESS
DECL|SD_STATUS_UNDEFINEDCMD|macro|SD_STATUS_UNDEFINEDCMD
DECL|SD_WriteFxn|typedef|typedef int_fast16_t (*SD_WriteFxn) (SD_Handle handle, const void *buf,
DECL|SD_getNumSectorsFxn|typedef|typedef uint_fast32_t (*SD_getNumSectorsFxn) (SD_Handle handle);
DECL|SD_getSectorSizeFxn|typedef|typedef uint_fast32_t (*SD_getSectorSizeFxn) (SD_Handle handle);
DECL|closeFxn|member|SD_CloseFxn closeFxn;
DECL|controlFxn|member|SD_ControlFxn controlFxn;
DECL|custom|member|void *custom; /*!< Custom argument used by driver implementation */
DECL|fxnTablePtr|member|SD_FxnTable const *fxnTablePtr;
DECL|getNumSectorsFxn|member|SD_getNumSectorsFxn getNumSectorsFxn;
DECL|getSectorSizeFxn|member|SD_getSectorSizeFxn getSectorSizeFxn;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|SD_InitFxn initFxn;
DECL|initializeFxn|member|SD_InitializeFxn initializeFxn;
DECL|object|member|void *object;
DECL|openFxn|member|SD_OpenFxn openFxn;
DECL|readFxn|member|SD_ReadFxn readFxn;
DECL|ti_drivers_SD__include|macro|ti_drivers_SD__include
DECL|writeFxn|member|SD_WriteFxn writeFxn;
