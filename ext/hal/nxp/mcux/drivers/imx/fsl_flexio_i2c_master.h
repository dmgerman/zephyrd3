DECL|FLEXIO_I2C_MasterEnable|function|static inline void FLEXIO_I2C_MasterEnable(FLEXIO_I2C_Type *base, bool enable)
DECL|FLEXIO_I2C_MasterReadByte|function|static inline uint8_t FLEXIO_I2C_MasterReadByte(FLEXIO_I2C_Type *base)
DECL|FLEXIO_I2C_MasterWriteByte|function|static inline void FLEXIO_I2C_MasterWriteByte(FLEXIO_I2C_Type *base, uint32_t data)
DECL|FLEXIO_I2C_Type|typedef|} FLEXIO_I2C_Type;
DECL|FSL_FLEXIO_I2C_MASTER_DRIVER_VERSION|macro|FSL_FLEXIO_I2C_MASTER_DRIVER_VERSION
DECL|SCLPinIndex|member|uint8_t SCLPinIndex; /*!< Pin select for I2C SCL. */
DECL|SDAPinIndex|member|uint8_t SDAPinIndex; /*!< Pin select for I2C SDA. */
DECL|_FSL_FLEXIO_I2C_MASTER_H_|macro|_FSL_FLEXIO_I2C_MASTER_H_
DECL|_flexio_i2c_direction|enum|typedef enum _flexio_i2c_direction
DECL|_flexio_i2c_master_config|struct|typedef struct _flexio_i2c_master_config
DECL|_flexio_i2c_master_handle|struct|struct _flexio_i2c_master_handle
DECL|_flexio_i2c_master_interrupt|enum|enum _flexio_i2c_master_interrupt
DECL|_flexio_i2c_master_status_flags|enum|enum _flexio_i2c_master_status_flags
DECL|_flexio_i2c_master_transfer|struct|typedef struct _flexio_i2c_master_transfer
DECL|_flexio_i2c_status|enum|enum _flexio_i2c_status
DECL|_flexio_i2c_type|struct|typedef struct _flexio_i2c_type
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Baud rate in Bps. */
DECL|completionCallback|member|flexio_i2c_master_transfer_callback_t completionCallback; /*!< Callback function called at transfer event. */
DECL|dataSize|member|volatile size_t dataSize; /*!< Transfer size. */
DECL|data|member|uint8_t volatile *data; /*!< Transfer buffer. */
DECL|direction|member|flexio_i2c_direction_t direction; /*!< Transfer direction, read or write. */
DECL|enableFastAccess|member|bool enableFastAccess; /*!< Enable/disable fast access to FlexIO registers, fast access requires
DECL|enableInDebug|member|bool enableInDebug; /*!< Enable/disable FlexIO operation in debug mode. */
DECL|enableInDoze|member|bool enableInDoze; /*!< Enable/disable FlexIO operation in doze mode. */
DECL|enableMaster|member|bool enableMaster; /*!< Enables the FlexIO I2C peripheral at initialization time. */
DECL|flags|member|uint32_t flags; /*!< Transfer flag which controls the transfer, reserved for FlexIO I2C. */
DECL|flexioBase|member|FLEXIO_Type *flexioBase; /*!< FlexIO base pointer. */
DECL|flexio_i2c_direction_t|typedef|} flexio_i2c_direction_t;
DECL|flexio_i2c_master_config_t|typedef|} flexio_i2c_master_config_t;
DECL|flexio_i2c_master_handle_t|typedef|typedef struct _flexio_i2c_master_handle flexio_i2c_master_handle_t;
DECL|flexio_i2c_master_transfer_callback_t|typedef|typedef void (*flexio_i2c_master_transfer_callback_t)(FLEXIO_I2C_Type *base,
DECL|flexio_i2c_master_transfer_t|typedef|} flexio_i2c_master_transfer_t;
DECL|kFLEXIO_I2C_Read|enumerator|kFLEXIO_I2C_Read = 0x1U, /*!< Master receive from slave. */
DECL|kFLEXIO_I2C_ReceiveNakFlag|enumerator|kFLEXIO_I2C_ReceiveNakFlag = 0x4U, /*!< Receive NAK flag. */
DECL|kFLEXIO_I2C_RxFullFlag|enumerator|kFLEXIO_I2C_RxFullFlag = 0x2U, /*!< Rx shifter full/Transfer complete flag. */
DECL|kFLEXIO_I2C_RxFullInterruptEnable|enumerator|kFLEXIO_I2C_RxFullInterruptEnable = 0x2U, /*!< Rx buffer full interrupt enable. */
DECL|kFLEXIO_I2C_TxEmptyFlag|enumerator|kFLEXIO_I2C_TxEmptyFlag = 0x1U, /*!< Tx shifter empty flag. */
DECL|kFLEXIO_I2C_TxEmptyInterruptEnable|enumerator|kFLEXIO_I2C_TxEmptyInterruptEnable = 0x1U, /*!< Tx buffer empty interrupt enable. */
DECL|kFLEXIO_I2C_Write|enumerator|kFLEXIO_I2C_Write = 0x0U, /*!< Master send to slave. */
DECL|kStatus_FLEXIO_I2C_Busy|enumerator|kStatus_FLEXIO_I2C_Busy = MAKE_STATUS(kStatusGroup_FLEXIO_I2C, 0), /*!< I2C is busy doing transfer. */
DECL|kStatus_FLEXIO_I2C_Idle|enumerator|kStatus_FLEXIO_I2C_Idle = MAKE_STATUS(kStatusGroup_FLEXIO_I2C, 1), /*!< I2C is busy doing transfer. */
DECL|kStatus_FLEXIO_I2C_Nak|enumerator|kStatus_FLEXIO_I2C_Nak = MAKE_STATUS(kStatusGroup_FLEXIO_I2C, 2), /*!< NAK received during transfer. */
DECL|shifterIndex|member|uint8_t shifterIndex[2]; /*!< Shifter index used in FlexIO I2C. */
DECL|slaveAddress|member|uint8_t slaveAddress; /*!< 7-bit slave address. */
DECL|state|member|uint8_t state; /*!< Transfer state maintained during transfer. */
DECL|subaddressSize|member|uint8_t subaddressSize; /*!< Size of command buffer. */
DECL|subaddress|member|uint32_t subaddress; /*!< Sub address. Transferred MSB first. */
DECL|timerIndex|member|uint8_t timerIndex[2]; /*!< Timer index used in FlexIO I2C. */
DECL|transferSize|member|size_t transferSize; /*!< Total bytes to be transferred. */
DECL|transfer|member|flexio_i2c_master_transfer_t transfer; /*!< FlexIO I2C master transfer copy. */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback function. */
