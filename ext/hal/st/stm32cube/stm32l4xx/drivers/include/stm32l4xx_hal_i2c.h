DECL|AbortCpltCallback|member|void (* AbortCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Abort callback */
DECL|AddrCallback|member|void (* AddrCallback)(struct __I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode); /*!< I2C Slave Address Match callback */
DECL|AddrEventCount|member|__IO uint32_t AddrEventCount; /*!< I2C Address Event counter */
DECL|AddressingMode|member|uint32_t AddressingMode; /*!< Specifies if 7-bit or 10-bit addressing mode is selected.
DECL|DualAddressMode|member|uint32_t DualAddressMode; /*!< Specifies if dual addressing mode is selected.
DECL|ErrorCallback|member|void (* ErrorCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Error callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< I2C Error code */
DECL|GeneralCallMode|member|uint32_t GeneralCallMode; /*!< Specifies if general call mode is selected.
DECL|HAL_I2C_ABORT_CB_ID|enumerator|HAL_I2C_ABORT_CB_ID = 0x08U, /*!< I2C Abort callback ID */
DECL|HAL_I2C_CallbackIDTypeDef|typedef|} HAL_I2C_CallbackIDTypeDef;
DECL|HAL_I2C_ERROR_AF|macro|HAL_I2C_ERROR_AF
DECL|HAL_I2C_ERROR_ARLO|macro|HAL_I2C_ERROR_ARLO
DECL|HAL_I2C_ERROR_BERR|macro|HAL_I2C_ERROR_BERR
DECL|HAL_I2C_ERROR_CB_ID|enumerator|HAL_I2C_ERROR_CB_ID = 0x07U, /*!< I2C Error callback ID */
DECL|HAL_I2C_ERROR_DMA_PARAM|macro|HAL_I2C_ERROR_DMA_PARAM
DECL|HAL_I2C_ERROR_DMA|macro|HAL_I2C_ERROR_DMA
DECL|HAL_I2C_ERROR_INVALID_CALLBACK|macro|HAL_I2C_ERROR_INVALID_CALLBACK
DECL|HAL_I2C_ERROR_INVALID_PARAM|macro|HAL_I2C_ERROR_INVALID_PARAM
DECL|HAL_I2C_ERROR_NONE|macro|HAL_I2C_ERROR_NONE
DECL|HAL_I2C_ERROR_OVR|macro|HAL_I2C_ERROR_OVR
DECL|HAL_I2C_ERROR_SIZE|macro|HAL_I2C_ERROR_SIZE
DECL|HAL_I2C_ERROR_TIMEOUT|macro|HAL_I2C_ERROR_TIMEOUT
DECL|HAL_I2C_LISTEN_COMPLETE_CB_ID|enumerator|HAL_I2C_LISTEN_COMPLETE_CB_ID = 0x04U, /*!< I2C Listen Complete callback ID */
DECL|HAL_I2C_MASTER_RX_COMPLETE_CB_ID|enumerator|HAL_I2C_MASTER_RX_COMPLETE_CB_ID = 0x01U, /*!< I2C Master Rx Transfer completed callback ID */
DECL|HAL_I2C_MASTER_TX_COMPLETE_CB_ID|enumerator|HAL_I2C_MASTER_TX_COMPLETE_CB_ID = 0x00U, /*!< I2C Master Tx Transfer completed callback ID */
DECL|HAL_I2C_MEM_RX_COMPLETE_CB_ID|enumerator|HAL_I2C_MEM_RX_COMPLETE_CB_ID = 0x06U, /*!< I2C Memory Rx Transfer completed callback ID */
DECL|HAL_I2C_MEM_TX_COMPLETE_CB_ID|enumerator|HAL_I2C_MEM_TX_COMPLETE_CB_ID = 0x05U, /*!< I2C Memory Tx Transfer callback ID */
DECL|HAL_I2C_MODE_MASTER|enumerator|HAL_I2C_MODE_MASTER = 0x10U, /*!< I2C communication is in Master Mode */
DECL|HAL_I2C_MODE_MEM|enumerator|HAL_I2C_MODE_MEM = 0x40U /*!< I2C communication is in Memory Mode */
DECL|HAL_I2C_MODE_NONE|enumerator|HAL_I2C_MODE_NONE = 0x00U, /*!< No I2C communication on going */
DECL|HAL_I2C_MODE_SLAVE|enumerator|HAL_I2C_MODE_SLAVE = 0x20U, /*!< I2C communication is in Slave Mode */
DECL|HAL_I2C_MSPDEINIT_CB_ID|enumerator|HAL_I2C_MSPDEINIT_CB_ID = 0x0AU /*!< I2C Msp DeInit callback ID */
DECL|HAL_I2C_MSPINIT_CB_ID|enumerator|HAL_I2C_MSPINIT_CB_ID = 0x09U, /*!< I2C Msp Init callback ID */
DECL|HAL_I2C_ModeTypeDef|typedef|} HAL_I2C_ModeTypeDef;
DECL|HAL_I2C_SLAVE_RX_COMPLETE_CB_ID|enumerator|HAL_I2C_SLAVE_RX_COMPLETE_CB_ID = 0x03U, /*!< I2C Slave Rx Transfer completed callback ID */
DECL|HAL_I2C_SLAVE_TX_COMPLETE_CB_ID|enumerator|HAL_I2C_SLAVE_TX_COMPLETE_CB_ID = 0x02U, /*!< I2C Slave Tx Transfer completed callback ID */
DECL|HAL_I2C_STATE_ABORT|enumerator|HAL_I2C_STATE_ABORT = 0x60U, /*!< Abort user request ongoing */
DECL|HAL_I2C_STATE_BUSY_RX_LISTEN|enumerator|HAL_I2C_STATE_BUSY_RX_LISTEN = 0x2AU, /*!< Address Listen Mode and Data Reception
DECL|HAL_I2C_STATE_BUSY_RX|enumerator|HAL_I2C_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing */
DECL|HAL_I2C_STATE_BUSY_TX_LISTEN|enumerator|HAL_I2C_STATE_BUSY_TX_LISTEN = 0x29U, /*!< Address Listen Mode and Data Transmission
DECL|HAL_I2C_STATE_BUSY_TX|enumerator|HAL_I2C_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing */
DECL|HAL_I2C_STATE_BUSY|enumerator|HAL_I2C_STATE_BUSY = 0x24U, /*!< An internal process is ongoing */
DECL|HAL_I2C_STATE_ERROR|enumerator|HAL_I2C_STATE_ERROR = 0xE0U /*!< Error */
DECL|HAL_I2C_STATE_LISTEN|enumerator|HAL_I2C_STATE_LISTEN = 0x28U, /*!< Address Listen Mode is ongoing */
DECL|HAL_I2C_STATE_READY|enumerator|HAL_I2C_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_I2C_STATE_RESET|enumerator|HAL_I2C_STATE_RESET = 0x00U, /*!< Peripheral is not yet Initialized */
DECL|HAL_I2C_STATE_TIMEOUT|enumerator|HAL_I2C_STATE_TIMEOUT = 0xA0U, /*!< Timeout state */
DECL|HAL_I2C_StateTypeDef|typedef|} HAL_I2C_StateTypeDef;
DECL|I2C_ADDRESSINGMODE_10BIT|macro|I2C_ADDRESSINGMODE_10BIT
DECL|I2C_ADDRESSINGMODE_7BIT|macro|I2C_ADDRESSINGMODE_7BIT
DECL|I2C_AUTOEND_MODE|macro|I2C_AUTOEND_MODE
DECL|I2C_DIRECTION_RECEIVE|macro|I2C_DIRECTION_RECEIVE
DECL|I2C_DIRECTION_TRANSMIT|macro|I2C_DIRECTION_TRANSMIT
DECL|I2C_DUALADDRESS_DISABLE|macro|I2C_DUALADDRESS_DISABLE
DECL|I2C_DUALADDRESS_ENABLE|macro|I2C_DUALADDRESS_ENABLE
DECL|I2C_FIRST_AND_LAST_FRAME|macro|I2C_FIRST_AND_LAST_FRAME
DECL|I2C_FIRST_AND_NEXT_FRAME|macro|I2C_FIRST_AND_NEXT_FRAME
DECL|I2C_FIRST_FRAME|macro|I2C_FIRST_FRAME
DECL|I2C_FLAG_ADDR|macro|I2C_FLAG_ADDR
DECL|I2C_FLAG_AF|macro|I2C_FLAG_AF
DECL|I2C_FLAG_ALERT|macro|I2C_FLAG_ALERT
DECL|I2C_FLAG_ARLO|macro|I2C_FLAG_ARLO
DECL|I2C_FLAG_BERR|macro|I2C_FLAG_BERR
DECL|I2C_FLAG_BUSY|macro|I2C_FLAG_BUSY
DECL|I2C_FLAG_DIR|macro|I2C_FLAG_DIR
DECL|I2C_FLAG_OVR|macro|I2C_FLAG_OVR
DECL|I2C_FLAG_PECERR|macro|I2C_FLAG_PECERR
DECL|I2C_FLAG_RXNE|macro|I2C_FLAG_RXNE
DECL|I2C_FLAG_STOPF|macro|I2C_FLAG_STOPF
DECL|I2C_FLAG_TCR|macro|I2C_FLAG_TCR
DECL|I2C_FLAG_TC|macro|I2C_FLAG_TC
DECL|I2C_FLAG_TIMEOUT|macro|I2C_FLAG_TIMEOUT
DECL|I2C_FLAG_TXE|macro|I2C_FLAG_TXE
DECL|I2C_FLAG_TXIS|macro|I2C_FLAG_TXIS
DECL|I2C_GENERALCALL_DISABLE|macro|I2C_GENERALCALL_DISABLE
DECL|I2C_GENERALCALL_ENABLE|macro|I2C_GENERALCALL_ENABLE
DECL|I2C_GENERATE_START_READ|macro|I2C_GENERATE_START_READ
DECL|I2C_GENERATE_START_WRITE|macro|I2C_GENERATE_START_WRITE
DECL|I2C_GENERATE_START|macro|I2C_GENERATE_START
DECL|I2C_GENERATE_STOP|macro|I2C_GENERATE_STOP
DECL|I2C_GET_ADDR_MATCH|macro|I2C_GET_ADDR_MATCH
DECL|I2C_GET_DIR|macro|I2C_GET_DIR
DECL|I2C_GET_OWN_ADDRESS1|macro|I2C_GET_OWN_ADDRESS1
DECL|I2C_GET_OWN_ADDRESS2|macro|I2C_GET_OWN_ADDRESS2
DECL|I2C_GET_STOP_MODE|macro|I2C_GET_STOP_MODE
DECL|I2C_HandleTypeDef|typedef|} I2C_HandleTypeDef;
DECL|I2C_IT_ADDRI|macro|I2C_IT_ADDRI
DECL|I2C_IT_ERRI|macro|I2C_IT_ERRI
DECL|I2C_IT_NACKI|macro|I2C_IT_NACKI
DECL|I2C_IT_RXI|macro|I2C_IT_RXI
DECL|I2C_IT_STOPI|macro|I2C_IT_STOPI
DECL|I2C_IT_TCI|macro|I2C_IT_TCI
DECL|I2C_IT_TXI|macro|I2C_IT_TXI
DECL|I2C_InitTypeDef|typedef|} I2C_InitTypeDef;
DECL|I2C_LAST_FRAME_NO_STOP|macro|I2C_LAST_FRAME_NO_STOP
DECL|I2C_LAST_FRAME|macro|I2C_LAST_FRAME
DECL|I2C_MEMADD_SIZE_16BIT|macro|I2C_MEMADD_SIZE_16BIT
DECL|I2C_MEMADD_SIZE_8BIT|macro|I2C_MEMADD_SIZE_8BIT
DECL|I2C_MEM_ADD_LSB|macro|I2C_MEM_ADD_LSB
DECL|I2C_MEM_ADD_MSB|macro|I2C_MEM_ADD_MSB
DECL|I2C_NEXT_FRAME|macro|I2C_NEXT_FRAME
DECL|I2C_NOSTRETCH_DISABLE|macro|I2C_NOSTRETCH_DISABLE
DECL|I2C_NOSTRETCH_ENABLE|macro|I2C_NOSTRETCH_ENABLE
DECL|I2C_NO_STARTSTOP|macro|I2C_NO_STARTSTOP
DECL|I2C_OA2_MASK01|macro|I2C_OA2_MASK01
DECL|I2C_OA2_MASK02|macro|I2C_OA2_MASK02
DECL|I2C_OA2_MASK03|macro|I2C_OA2_MASK03
DECL|I2C_OA2_MASK04|macro|I2C_OA2_MASK04
DECL|I2C_OA2_MASK05|macro|I2C_OA2_MASK05
DECL|I2C_OA2_MASK06|macro|I2C_OA2_MASK06
DECL|I2C_OA2_MASK07|macro|I2C_OA2_MASK07
DECL|I2C_OA2_NOMASK|macro|I2C_OA2_NOMASK
DECL|I2C_OTHER_AND_LAST_FRAME|macro|I2C_OTHER_AND_LAST_FRAME
DECL|I2C_OTHER_FRAME|macro|I2C_OTHER_FRAME
DECL|I2C_RELOAD_MODE|macro|I2C_RELOAD_MODE
DECL|I2C_RESET_CR2|macro|I2C_RESET_CR2
DECL|I2C_SOFTEND_MODE|macro|I2C_SOFTEND_MODE
DECL|IS_I2C_ADDRESSING_MODE|macro|IS_I2C_ADDRESSING_MODE
DECL|IS_I2C_DUAL_ADDRESS|macro|IS_I2C_DUAL_ADDRESS
DECL|IS_I2C_GENERAL_CALL|macro|IS_I2C_GENERAL_CALL
DECL|IS_I2C_MEMADD_SIZE|macro|IS_I2C_MEMADD_SIZE
DECL|IS_I2C_NO_STRETCH|macro|IS_I2C_NO_STRETCH
DECL|IS_I2C_OWN_ADDRESS1|macro|IS_I2C_OWN_ADDRESS1
DECL|IS_I2C_OWN_ADDRESS2_MASK|macro|IS_I2C_OWN_ADDRESS2_MASK
DECL|IS_I2C_OWN_ADDRESS2|macro|IS_I2C_OWN_ADDRESS2
DECL|IS_I2C_TRANSFER_OPTIONS_REQUEST|macro|IS_I2C_TRANSFER_OPTIONS_REQUEST
DECL|IS_I2C_TRANSFER_OTHER_OPTIONS_REQUEST|macro|IS_I2C_TRANSFER_OTHER_OPTIONS_REQUEST
DECL|IS_TRANSFER_MODE|macro|IS_TRANSFER_MODE
DECL|IS_TRANSFER_REQUEST|macro|IS_TRANSFER_REQUEST
DECL|Init|member|I2C_InitTypeDef Init; /*!< I2C communication parameters */
DECL|Instance|member|I2C_TypeDef *Instance; /*!< I2C registers base address */
DECL|ListenCpltCallback|member|void (* ListenCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Listen Complete callback */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< I2C locking object */
DECL|MasterRxCpltCallback|member|void (* MasterRxCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Master Rx Transfer completed callback */
DECL|MasterTxCpltCallback|member|void (* MasterTxCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Master Tx Transfer completed callback */
DECL|MemRxCpltCallback|member|void (* MemRxCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Memory Rx Transfer completed callback */
DECL|MemTxCpltCallback|member|void (* MemTxCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Memory Tx Transfer completed callback */
DECL|Mode|member|__IO HAL_I2C_ModeTypeDef Mode; /*!< I2C communication mode */
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Msp Init callback */
DECL|NoStretchMode|member|uint32_t NoStretchMode; /*!< Specifies if nostretch mode is selected.
DECL|OwnAddress1|member|uint32_t OwnAddress1; /*!< Specifies the first device own address.
DECL|OwnAddress2Masks|member|uint32_t OwnAddress2Masks; /*!< Specifies the acknowledge mask address second device own address if dual addressing mode is selected
DECL|OwnAddress2|member|uint32_t OwnAddress2; /*!< Specifies the second device own address if dual addressing mode is selected
DECL|PreviousState|member|__IO uint32_t PreviousState; /*!< I2C communication Previous state */
DECL|STM32L4xx_HAL_I2C_H|macro|STM32L4xx_HAL_I2C_H
DECL|SlaveRxCpltCallback|member|void (* SlaveRxCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Slave Rx Transfer completed callback */
DECL|SlaveTxCpltCallback|member|void (* SlaveTxCpltCallback)(struct __I2C_HandleTypeDef *hi2c); /*!< I2C Slave Tx Transfer completed callback */
DECL|State|member|__IO HAL_I2C_StateTypeDef State; /*!< I2C communication state */
DECL|Timing|member|uint32_t Timing; /*!< Specifies the I2C_TIMINGR_register value.
DECL|XferCount|member|__IO uint16_t XferCount; /*!< I2C transfer counter */
DECL|XferISR|member|HAL_StatusTypeDef(*XferISR)(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources); /*!< I2C transfer IRQ handler function pointer */
DECL|XferOptions|member|__IO uint32_t XferOptions; /*!< I2C sequantial transfer options, this parameter can
DECL|XferSize|member|uint16_t XferSize; /*!< I2C transfer size */
DECL|__HAL_I2C_CLEAR_FLAG|macro|__HAL_I2C_CLEAR_FLAG
DECL|__HAL_I2C_DISABLE_IT|macro|__HAL_I2C_DISABLE_IT
DECL|__HAL_I2C_DISABLE|macro|__HAL_I2C_DISABLE
DECL|__HAL_I2C_ENABLE_IT|macro|__HAL_I2C_ENABLE_IT
DECL|__HAL_I2C_ENABLE|macro|__HAL_I2C_ENABLE
DECL|__HAL_I2C_GENERATE_NACK|macro|__HAL_I2C_GENERATE_NACK
DECL|__HAL_I2C_GET_FLAG|macro|__HAL_I2C_GET_FLAG
DECL|__HAL_I2C_GET_IT_SOURCE|macro|__HAL_I2C_GET_IT_SOURCE
DECL|__HAL_I2C_RESET_HANDLE_STATE|macro|__HAL_I2C_RESET_HANDLE_STATE
DECL|__HAL_I2C_RESET_HANDLE_STATE|macro|__HAL_I2C_RESET_HANDLE_STATE
DECL|__I2C_HandleTypeDef|struct|typedef struct __I2C_HandleTypeDef
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< I2C Rx DMA handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< I2C Tx DMA handle parameters */
DECL|pBuffPtr|member|uint8_t *pBuffPtr; /*!< Pointer to I2C transfer buffer */
DECL|pI2C_AddrCallbackTypeDef|typedef|typedef void (*pI2C_AddrCallbackTypeDef)(I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode); /*!< pointer to an I2C Address Match callback function */
DECL|pI2C_CallbackTypeDef|typedef|typedef void (*pI2C_CallbackTypeDef)(I2C_HandleTypeDef *hi2c); /*!< pointer to an I2C callback function */
