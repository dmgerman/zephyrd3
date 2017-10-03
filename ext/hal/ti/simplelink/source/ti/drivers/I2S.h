DECL|I2S_BufDesc_|struct|typedef struct I2S_BufDesc_ {
DECL|I2S_BufDesc|typedef|} I2S_BufDesc;
DECL|I2S_CMD_RESERVED|macro|I2S_CMD_RESERVED
DECL|I2S_Callback|typedef|typedef void (*I2S_Callback)(I2S_Handle handle, I2S_BufDesc *desc);
DECL|I2S_CloseFxn|typedef|typedef void (*I2S_CloseFxn) (I2S_Handle handle);
DECL|I2S_Config_|struct|typedef struct I2S_Config_ {
DECL|I2S_Config|typedef|} I2S_Config;
DECL|I2S_ControlFxn|typedef|typedef int_fast16_t (*I2S_ControlFxn)(I2S_Handle handle,
DECL|I2S_DataMode_|enum|typedef enum I2S_DataMode_ {
DECL|I2S_DataMode|typedef|} I2S_DataMode;
DECL|I2S_ERROR|macro|I2S_ERROR
DECL|I2S_FxnTable_|struct|typedef struct I2S_FxnTable_ {
DECL|I2S_FxnTable|typedef|} I2S_FxnTable;
DECL|I2S_Handle|typedef|typedef struct I2S_Config_ *I2S_Handle;
DECL|I2S_InitFxn|typedef|typedef void (*I2S_InitFxn)(I2S_Handle handle);
DECL|I2S_IssueFxn|typedef|typedef int_fast16_t (*I2S_IssueFxn)(I2S_Handle handle, I2S_BufDesc *desc);
DECL|I2S_MODE_CALLBACK|enumerator|I2S_MODE_CALLBACK,
DECL|I2S_MODE_ISSUERECLAIM|enumerator|I2S_MODE_ISSUERECLAIM
DECL|I2S_OPMODE_RX_ONLY|enumerator|I2S_OPMODE_RX_ONLY, /*!< Only Receive enabled */
DECL|I2S_OPMODE_TX_ONLY|enumerator|I2S_OPMODE_TX_ONLY, /*!< Only Transmit enabled */
DECL|I2S_OPMODE_TX_RX_SYNC|enumerator|I2S_OPMODE_TX_RX_SYNC /*!< Receive and Transmit are enabled in Sync */
DECL|I2S_OpMode_|enum|typedef enum I2S_OpMode_ {
DECL|I2S_OpMode|typedef|} I2S_OpMode;
DECL|I2S_OpenFxn|typedef|typedef I2S_Handle (*I2S_OpenFxn)(I2S_Handle handle, I2S_Params *params);
DECL|I2S_PINMODE_INACTIVE|enumerator|I2S_PINMODE_INACTIVE /*!< Pin in inactive mode */
DECL|I2S_PINMODE_RX|enumerator|I2S_PINMODE_RX, /*!< Operate the pin in Rx mode */
DECL|I2S_PINMODE_TX|enumerator|I2S_PINMODE_TX, /*!< Operate the pin in Tx mode */
DECL|I2S_Params_|struct|typedef struct I2S_Params_ {
DECL|I2S_Params|typedef|} I2S_Params;
DECL|I2S_PinMode_|enum|typedef enum I2S_PinMode_ {
DECL|I2S_PinMode|typedef|} I2S_PinMode;
DECL|I2S_ReclaimFxn|typedef|typedef size_t (*I2S_ReclaimFxn)(I2S_Handle handle, I2S_BufDesc **desc);
DECL|I2S_SERCONFIG_INACT_HIGH_LEVEL|enumerator|I2S_SERCONFIG_INACT_HIGH_LEVEL /*!< Inactive state to high */
DECL|I2S_SERCONFIG_INACT_LOW_LEVEL|enumerator|I2S_SERCONFIG_INACT_LOW_LEVEL, /*!< Inactive state to low */
DECL|I2S_SERCONFIG_INACT_TRI_STATE|enumerator|I2S_SERCONFIG_INACT_TRI_STATE, /*!< Inactive state to tristate */
DECL|I2S_STATUS_ERROR|macro|I2S_STATUS_ERROR
DECL|I2S_STATUS_RESERVED|macro|I2S_STATUS_RESERVED
DECL|I2S_STATUS_SUCCESS|macro|I2S_STATUS_SUCCESS
DECL|I2S_STATUS_UNDEFINEDCMD|macro|I2S_STATUS_UNDEFINEDCMD
DECL|I2S_SerInActiveConfig_|enum|typedef enum I2S_SerInActiveConfig_ {
DECL|I2S_SerInActiveConfig|typedef|} I2S_SerInActiveConfig;
DECL|I2S_WAIT_FOREVER|macro|I2S_WAIT_FOREVER
DECL|bitsPerSample|member|uint8_t bitsPerSample;
DECL|bufPtr|member|void *bufPtr;
DECL|bufSize|member|size_t bufSize;
DECL|closeFxn|member|I2S_CloseFxn closeFxn;
DECL|controlFxn|member|I2S_ControlFxn controlFxn;
DECL|customParams|member|void *customParams;
DECL|descArg|member|uintptr_t descArg;
DECL|fxnTablePtr|member|I2S_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|I2S_InitFxn initFxn;
DECL|numChannels|member|uint8_t numChannels;
DECL|object|member|void *object;
DECL|openFxn|member|I2S_OpenFxn openFxn;
DECL|operationMode|member|I2S_OpMode operationMode;
DECL|qElem|member|List_Elem qElem;
DECL|readCallback|member|I2S_Callback readCallback;
DECL|readIssueFxn|member|I2S_IssueFxn readIssueFxn;
DECL|readMode|member|I2S_DataMode readMode;
DECL|readReclaimFxn|member|I2S_ReclaimFxn readReclaimFxn;
DECL|readTimeout|member|uint32_t readTimeout;
DECL|samplingFrequency|member|uint32_t samplingFrequency;
DECL|slotLength|member|uint8_t slotLength;
DECL|ti_drivers_I2S__include|macro|ti_drivers_I2S__include
DECL|writeCallback|member|I2S_Callback writeCallback;
DECL|writeIssueFxn|member|I2S_IssueFxn writeIssueFxn;
DECL|writeMode|member|I2S_DataMode writeMode;
DECL|writeReclaimFxn|member|I2S_ReclaimFxn writeReclaimFxn;
DECL|writeTimeout|member|uint32_t writeTimeout;
