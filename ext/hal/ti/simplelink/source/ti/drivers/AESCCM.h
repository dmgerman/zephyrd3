DECL|AESCCM_CMD_RESERVED|macro|AESCCM_CMD_RESERVED
DECL|AESCCM_CallbackFxn|typedef|typedef void (*AESCCM_CallbackFxn) (AESCCM_Handle handle, CryptoKey *processedKey);
DECL|AESCCM_Config_|struct|typedef struct AESCCM_Config_ {
DECL|AESCCM_Config|typedef|} AESCCM_Config;
DECL|AESCCM_Handle|typedef|typedef struct AESCCM_Config_ *AESCCM_Handle;
DECL|AESCCM_MODE_DECRYPT|enumerator|AESCCM_MODE_DECRYPT = 2,
DECL|AESCCM_MODE_ENCRYPT|enumerator|AESCCM_MODE_ENCRYPT = 1,
DECL|AESCCM_Mode_|enum|typedef enum AESCCM_Mode_ {
DECL|AESCCM_Mode|typedef|} AESCCM_Mode;
DECL|AESCCM_Params_|struct|typedef struct AESCCM_Params_ {
DECL|AESCCM_Params|typedef|} AESCCM_Params;
DECL|AESCCM_RETURN_BEHAVIOR_BLOCKING|enumerator|AESCCM_RETURN_BEHAVIOR_BLOCKING = 2, /*!< The function call will block while CCM operation goes
DECL|AESCCM_RETURN_BEHAVIOR_CALLBACK|enumerator|AESCCM_RETURN_BEHAVIOR_CALLBACK = 1, /*!< The function call will return immediately while the
DECL|AESCCM_RETURN_BEHAVIOR_POLLING|enumerator|AESCCM_RETURN_BEHAVIOR_POLLING = 4, /*!< The function call will continuously poll a flag while CCM
DECL|AESCCM_ReturnBehavior_|enum|typedef enum AESCCM_ReturnBehavior_ {
DECL|AESCCM_ReturnBehavior|typedef|} AESCCM_ReturnBehavior;
DECL|AESCCM_STATUS_ERROR|macro|AESCCM_STATUS_ERROR
DECL|AESCCM_STATUS_MAC_INVALID|macro|AESCCM_STATUS_MAC_INVALID
DECL|AESCCM_STATUS_RESERVED|macro|AESCCM_STATUS_RESERVED
DECL|AESCCM_STATUS_RESOURCE_UNAVAILABLE|macro|AESCCM_STATUS_RESOURCE_UNAVAILABLE
DECL|AESCCM_STATUS_SUCCESS|macro|AESCCM_STATUS_SUCCESS
DECL|AESCCM_STATUS_UNDEFINEDCMD|macro|AESCCM_STATUS_UNDEFINEDCMD
DECL|callbackFxn|member|AESCCM_CallbackFxn callbackFxn; /*!< Callback function pointer */
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|hwAttrs|member|void const *hwAttrs;
DECL|nonceInternallyGenerated|member|bool nonceInternallyGenerated; /*!< When true, the nonce buffer passed into the AESCCM_setupEncrypt()
DECL|object|member|void *object;
DECL|returnBehavior|member|AESCCM_ReturnBehavior returnBehavior; /*!< Blocking, callback, or polling return behavior */
DECL|ti_drivers_AESCCM__include|macro|ti_drivers_AESCCM__include
DECL|timeout|member|uint32_t timeout;
