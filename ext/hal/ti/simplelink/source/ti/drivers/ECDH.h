DECL|ECDH_CMD_RESERVED|macro|ECDH_CMD_RESERVED
DECL|ECDH_CallbackFxn|typedef|typedef void (*ECDH_CallbackFxn) (ECDH_Handle handle, int_fast16_t operationStatus);
DECL|ECDH_Config_|struct|typedef struct ECDH_Config_ {
DECL|ECDH_Config|typedef|} ECDH_Config;
DECL|ECDH_Handle|typedef|typedef struct ECDH_Config_ *ECDH_Handle;
DECL|ECDH_KDFFxn|typedef|typedef int_fast16_t (*ECDH_KDFFxn) (void *driverHandle, const uint8_t *seedEntropy, size_t seedEntropyLength, CryptoKey derivedKeys[], uint32_t derivedKeysCount);
DECL|ECDH_Params_|struct|typedef struct ECDH_Params_ {
DECL|ECDH_Params|typedef|} ECDH_Params;
DECL|ECDH_RETURN_BEHAVIOR_BLOCKING|enumerator|ECDH_RETURN_BEHAVIOR_BLOCKING = 2, /*!< The function call will block while ECC operation goes
DECL|ECDH_RETURN_BEHAVIOR_CALLBACK|enumerator|ECDH_RETURN_BEHAVIOR_CALLBACK = 1, /*!< The function call will return immediately while the
DECL|ECDH_RETURN_BEHAVIOR_POLLING|enumerator|ECDH_RETURN_BEHAVIOR_POLLING = 4, /*!< The function call will continuously poll a flag while ECC
DECL|ECDH_ReturnBehavior_|enum|typedef enum ECDH_ReturnBehavior_ {
DECL|ECDH_ReturnBehavior|typedef|} ECDH_ReturnBehavior;
DECL|ECDH_STATUS_ERROR|macro|ECDH_STATUS_ERROR
DECL|ECDH_STATUS_RESERVED|macro|ECDH_STATUS_RESERVED
DECL|ECDH_STATUS_RESOURCE_UNAVAILABLE|macro|ECDH_STATUS_RESOURCE_UNAVAILABLE
DECL|ECDH_STATUS_RESULT_POINT_AT_INFINITY|macro|ECDH_STATUS_RESULT_POINT_AT_INFINITY
DECL|ECDH_STATUS_RESULT_PRIVATE_KEY_LARGER_THAN_ORDER|macro|ECDH_STATUS_RESULT_PRIVATE_KEY_LARGER_THAN_ORDER
DECL|ECDH_STATUS_RESULT_PUBLIC_KEY_NOT_ON_CURVE|macro|ECDH_STATUS_RESULT_PUBLIC_KEY_NOT_ON_CURVE
DECL|ECDH_STATUS_SUCCESS|macro|ECDH_STATUS_SUCCESS
DECL|ECDH_STATUS_UNDEFINEDCMD|macro|ECDH_STATUS_UNDEFINEDCMD
DECL|callbackFxn|member|ECDH_CallbackFxn callbackFxn; /*!< Callback function pointer */
DECL|custom|member|void *custom; /*!< Custom argument used by driver
DECL|doNotValidateKeys|member|bool doNotValidateKeys; /*!< Whether or not to validate public and private keys in operations. */
DECL|hwAttrs|member|void const *hwAttrs;
DECL|object|member|void *object;
DECL|returnBehavior|member|ECDH_ReturnBehavior returnBehavior; /*!< Blocking, callback, or polling return behavior */
DECL|ti_drivers_ECDH__include|macro|ti_drivers_ECDH__include
DECL|timeout|member|uint32_t timeout;
