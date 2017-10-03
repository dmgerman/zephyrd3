DECL|I2C_100kHz|enumerator|I2C_100kHz = 0,
DECL|I2C_400kHz|enumerator|I2C_400kHz = 1
DECL|I2C_BitRate_|enum|typedef enum I2C_BitRate_ {
DECL|I2C_BitRate|typedef|} I2C_BitRate;
DECL|I2C_CMD_RESERVED|macro|I2C_CMD_RESERVED
DECL|I2C_CallbackFxn|typedef|typedef void (*I2C_CallbackFxn)(I2C_Handle handle, I2C_Transaction *transaction,
DECL|I2C_CancelFxn|typedef|typedef void (*I2C_CancelFxn) (I2C_Handle handle);
DECL|I2C_CloseFxn|typedef|typedef void (*I2C_CloseFxn) (I2C_Handle handle);
DECL|I2C_Config_|struct|typedef struct I2C_Config_ {
DECL|I2C_Config|typedef|} I2C_Config;
DECL|I2C_ControlFxn|typedef|typedef int_fast16_t (*I2C_ControlFxn) (I2C_Handle handle, uint_fast16_t cmd,
DECL|I2C_FxnTable_|struct|typedef struct I2C_FxnTable_ {
DECL|I2C_FxnTable|typedef|} I2C_FxnTable;
DECL|I2C_Handle|typedef|typedef struct I2C_Config_ *I2C_Handle;
DECL|I2C_InitFxn|typedef|typedef void (*I2C_InitFxn) (I2C_Handle handle);
DECL|I2C_MODE_BLOCKING|enumerator|I2C_MODE_BLOCKING, /*!< I2C_transfer() blocks execution */
DECL|I2C_MODE_CALLBACK|enumerator|I2C_MODE_CALLBACK /*!< I2C_transfer() does not block */
DECL|I2C_OpenFxn|typedef|typedef I2C_Handle (*I2C_OpenFxn) (I2C_Handle handle, I2C_Params *params);
DECL|I2C_Params_|struct|typedef struct I2C_Params_ {
DECL|I2C_Params|typedef|} I2C_Params;
DECL|I2C_STATUS_ERROR|macro|I2C_STATUS_ERROR
DECL|I2C_STATUS_RESERVED|macro|I2C_STATUS_RESERVED
DECL|I2C_STATUS_SUCCESS|macro|I2C_STATUS_SUCCESS
DECL|I2C_STATUS_UNDEFINEDCMD|macro|I2C_STATUS_UNDEFINEDCMD
DECL|I2C_Transaction_|struct|typedef struct I2C_Transaction_ {
DECL|I2C_Transaction|typedef|} I2C_Transaction;
DECL|I2C_TransferFxn|typedef|typedef bool (*I2C_TransferFxn) (I2C_Handle handle,
DECL|I2C_TransferMode_|enum|typedef enum I2C_TransferMode_ {
DECL|I2C_TransferMode|typedef|} I2C_TransferMode;
DECL|arg|member|void *arg; /*!< Argument to be passed to the callback function */
DECL|bitRate|member|I2C_BitRate bitRate; /*!< I2C bus bit rate */
DECL|cancelFxn|member|I2C_CancelFxn cancelFxn;
DECL|closeFxn|member|I2C_CloseFxn closeFxn;
DECL|controlFxn|member|I2C_ControlFxn controlFxn;
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|fxnTablePtr|member|I2C_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|I2C_InitFxn initFxn;
DECL|nextPtr|member|void *nextPtr; /*!< Used for queuing in I2C_MODE_CALLBACK mode */
DECL|object|member|void *object;
DECL|openFxn|member|I2C_OpenFxn openFxn;
DECL|readBuf|member|void *readBuf; /*!< Buffer to which data is to be read into */
DECL|readCount|member|size_t readCount; /*!< Number of bytes to be read from the slave */
DECL|slaveAddress|member|uint_least8_t slaveAddress; /*!< Address of the I2C slave peripheral */
DECL|ti_drivers_I2C__include|macro|ti_drivers_I2C__include
DECL|transferCallbackFxn|member|I2C_CallbackFxn transferCallbackFxn; /*!< Callback function pointer */
DECL|transferFxn|member|I2C_TransferFxn transferFxn;
DECL|transferMode|member|I2C_TransferMode transferMode; /*!< Blocking or Callback mode */
DECL|writeBuf|member|void *writeBuf; /*!< Buffer containing data to be written */
DECL|writeCount|member|size_t writeCount; /*!< Number of bytes to be written to the slave */
