DECL|NVS_Attrs|struct|typedef struct NVS_Attrs {
DECL|NVS_Attrs|typedef|} NVS_Attrs;
DECL|NVS_CMD_RESERVED|macro|NVS_CMD_RESERVED
DECL|NVS_CloseFxn|typedef|typedef void (*NVS_CloseFxn) (NVS_Handle handle);
DECL|NVS_Config_|struct|typedef struct NVS_Config_ {
DECL|NVS_Config|typedef|} NVS_Config;
DECL|NVS_ControlFxn|typedef|typedef int_fast16_t (*NVS_ControlFxn) (NVS_Handle handle, uint_fast16_t cmd,
DECL|NVS_EraseFxn|typedef|typedef int_fast16_t (*NVS_EraseFxn) (NVS_Handle handle, size_t offset,
DECL|NVS_FxnTable|struct|typedef struct NVS_FxnTable {
DECL|NVS_FxnTable|typedef|} NVS_FxnTable;
DECL|NVS_GetAttrsFxn|typedef|typedef void (*NVS_GetAttrsFxn) (NVS_Handle handle, NVS_Attrs *attrs);
DECL|NVS_Handle|typedef|typedef struct NVS_Config_ *NVS_Handle;
DECL|NVS_InitFxn|typedef|typedef void (*NVS_InitFxn) (void);
DECL|NVS_LOCK_NO_WAIT|macro|NVS_LOCK_NO_WAIT
DECL|NVS_LOCK_WAIT_FOREVER|macro|NVS_LOCK_WAIT_FOREVER
DECL|NVS_LockFxn|typedef|typedef int_fast16_t (*NVS_LockFxn) (NVS_Handle handle, uint32_t timeout);
DECL|NVS_OpenFxn|typedef|typedef NVS_Handle (*NVS_OpenFxn) (uint_least8_t index, NVS_Params *params);
DECL|NVS_Params|struct|typedef struct NVS_Params {
DECL|NVS_Params|typedef|} NVS_Params;
DECL|NVS_REGION_NOT_ADDRESSABLE|macro|NVS_REGION_NOT_ADDRESSABLE
DECL|NVS_ReadFxn|typedef|typedef int_fast16_t (*NVS_ReadFxn) (NVS_Handle handle, size_t offset,
DECL|NVS_STATUS_ERROR|macro|NVS_STATUS_ERROR
DECL|NVS_STATUS_INV_ALIGNMENT|macro|NVS_STATUS_INV_ALIGNMENT
DECL|NVS_STATUS_INV_OFFSET|macro|NVS_STATUS_INV_OFFSET
DECL|NVS_STATUS_INV_SIZE|macro|NVS_STATUS_INV_SIZE
DECL|NVS_STATUS_INV_WRITE|macro|NVS_STATUS_INV_WRITE
DECL|NVS_STATUS_RESERVED|macro|NVS_STATUS_RESERVED
DECL|NVS_STATUS_SUCCESS|macro|NVS_STATUS_SUCCESS
DECL|NVS_STATUS_TIMEOUT|macro|NVS_STATUS_TIMEOUT
DECL|NVS_STATUS_UNDEFINEDCMD|macro|NVS_STATUS_UNDEFINEDCMD
DECL|NVS_UnlockFxn|typedef|typedef void (*NVS_UnlockFxn) (NVS_Handle handle);
DECL|NVS_WRITE_ERASE|macro|NVS_WRITE_ERASE
DECL|NVS_WRITE_POST_VERIFY|macro|NVS_WRITE_POST_VERIFY
DECL|NVS_WRITE_PRE_VERIFY|macro|NVS_WRITE_PRE_VERIFY
DECL|NVS_WriteFxn|typedef|typedef int_fast16_t (*NVS_WriteFxn) (NVS_Handle handle, size_t offset,
DECL|closeFxn|member|NVS_CloseFxn closeFxn;
DECL|controlFxn|member|NVS_ControlFxn controlFxn;
DECL|custom|member|void *custom; /*!< Custom argument used by driver implementation */
DECL|eraseFxn|member|NVS_EraseFxn eraseFxn;
DECL|fxnTablePtr|member|NVS_FxnTable const *fxnTablePtr;
DECL|getAttrsFxn|member|NVS_GetAttrsFxn getAttrsFxn;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|NVS_InitFxn initFxn;
DECL|lockFxn|member|NVS_LockFxn lockFxn;
DECL|object|member|void *object;
DECL|openFxn|member|NVS_OpenFxn openFxn;
DECL|readFxn|member|NVS_ReadFxn readFxn;
DECL|regionBase|member|void *regionBase; /*! Base address of flash region to manage */
DECL|regionSize|member|size_t regionSize; /*! Region size (in bytes) */
DECL|sectorSize|member|size_t sectorSize; /*! Erase sector size (in bytes) */
DECL|ti_drivers_NVS__include|macro|ti_drivers_NVS__include
DECL|unlockFxn|member|NVS_UnlockFxn unlockFxn;
DECL|writeFxn|member|NVS_WriteFxn writeFxn;
