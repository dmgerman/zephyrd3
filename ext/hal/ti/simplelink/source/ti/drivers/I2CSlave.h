DECL|I2CSLAVE_CMD_RESERVED|macro|I2CSLAVE_CMD_RESERVED
DECL|I2CSLAVE_ERROR|enumerator|I2CSLAVE_ERROR = 0xFF /*!< I2CSlave error has occurred, exit gracefully */
DECL|I2CSLAVE_IDLE_MODE|enumerator|I2CSLAVE_IDLE_MODE = 0, /*!< I2CSlave is not performing a transaction */
DECL|I2CSLAVE_MODE_BLOCKING|enumerator|I2CSLAVE_MODE_BLOCKING, /*!< I2CSlave read/write blocks execution*/
DECL|I2CSLAVE_MODE_CALLBACK|enumerator|I2CSLAVE_MODE_CALLBACK /*!< I2CSlave read/wrire queues transactions and
DECL|I2CSLAVE_READ_MODE|enumerator|I2CSLAVE_READ_MODE = 2, /*!< I2CSlave is currently performing read */
DECL|I2CSLAVE_START_MODE|enumerator|I2CSLAVE_START_MODE = 3, /*!< I2CSlave received a START from a master */
DECL|I2CSLAVE_STATUS_ERROR|macro|I2CSLAVE_STATUS_ERROR
DECL|I2CSLAVE_STATUS_RESERVED|macro|I2CSLAVE_STATUS_RESERVED
DECL|I2CSLAVE_STATUS_SUCCESS|macro|I2CSLAVE_STATUS_SUCCESS
DECL|I2CSLAVE_STATUS_UNDEFINEDCMD|macro|I2CSLAVE_STATUS_UNDEFINEDCMD
DECL|I2CSLAVE_WRITE_MODE|enumerator|I2CSLAVE_WRITE_MODE = 1, /*!< I2CSlave is currently performing write */
DECL|I2CSlave_CallbackFxn|typedef|typedef void (*I2CSlave_CallbackFxn)(I2CSlave_Handle handle, bool status);
DECL|I2CSlave_CloseFxn|typedef|typedef void (*I2CSlave_CloseFxn) (I2CSlave_Handle handle);
DECL|I2CSlave_Config_|struct|typedef struct I2CSlave_Config_ {
DECL|I2CSlave_Config|typedef|} I2CSlave_Config;
DECL|I2CSlave_ControlFxn|typedef|typedef int_fast16_t (*I2CSlave_ControlFxn) (I2CSlave_Handle handle,
DECL|I2CSlave_FxnTable_|struct|typedef struct I2CSlave_FxnTable_ {
DECL|I2CSlave_FxnTable|typedef|} I2CSlave_FxnTable;
DECL|I2CSlave_Handle|typedef|typedef struct I2CSlave_Config_ *I2CSlave_Handle;
DECL|I2CSlave_InitFxn|typedef|typedef void (*I2CSlave_InitFxn) (I2CSlave_Handle handle);
DECL|I2CSlave_Mode_|enum|typedef enum I2CSlave_Mode_ {
DECL|I2CSlave_Mode|typedef|} I2CSlave_Mode;
DECL|I2CSlave_OpenFxn|typedef|typedef I2CSlave_Handle (*I2CSlave_OpenFxn) (I2CSlave_Handle handle,
DECL|I2CSlave_Params_|struct|typedef struct I2CSlave_Params_ {
DECL|I2CSlave_Params|typedef|} I2CSlave_Params;
DECL|I2CSlave_ReadFxn|typedef|typedef bool (*I2CSlave_ReadFxn) (I2CSlave_Handle handle, void *buffer,
DECL|I2CSlave_TransferMode_|enum|typedef enum I2CSlave_TransferMode_ {
DECL|I2CSlave_TransferMode|typedef|} I2CSlave_TransferMode;
DECL|I2CSlave_WriteFxn|typedef|typedef bool (*I2CSlave_WriteFxn) (I2CSlave_Handle handle,
DECL|closeFxn|member|I2CSlave_CloseFxn closeFxn;
DECL|controlFxn|member|I2CSlave_ControlFxn controlFxn;
DECL|custom|member|void *custom;
DECL|fxnTablePtr|member|I2CSlave_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|I2CSlave_InitFxn initFxn;
DECL|object|member|void *object;
DECL|openFxn|member|I2CSlave_OpenFxn openFxn;
DECL|readFxn|member|I2CSlave_ReadFxn readFxn;
DECL|ti_drivers_I2CSLAVE__include|macro|ti_drivers_I2CSLAVE__include
DECL|transferCallbackFxn|member|I2CSlave_CallbackFxn transferCallbackFxn;
DECL|transferMode|member|I2CSlave_TransferMode transferMode;
DECL|writeFxn|member|I2CSlave_WriteFxn writeFxn;
