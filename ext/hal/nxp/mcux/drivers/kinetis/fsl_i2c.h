DECL|FSL_I2C_DRIVER_VERSION|macro|FSL_I2C_DRIVER_VERSION
DECL|I2C_EnableDMA|function|static inline void I2C_EnableDMA(I2C_Type *base, bool enable)
DECL|I2C_Enable|function|static inline void I2C_Enable(I2C_Type *base, bool enable)
DECL|I2C_GetDataRegAddr|function|static inline uint32_t I2C_GetDataRegAddr(I2C_Type *base)
DECL|I2C_HAS_STOP_DETECT|macro|I2C_HAS_STOP_DETECT
DECL|I2C_MasterClearStatusFlags|function|static inline void I2C_MasterClearStatusFlags(I2C_Type *base, uint32_t statusMask)
DECL|I2C_SlaveClearStatusFlags|function|static inline void I2C_SlaveClearStatusFlags(I2C_Type *base, uint32_t statusMask)
DECL|I2C_SlaveGetStatusFlags|function|static inline uint32_t I2C_SlaveGetStatusFlags(I2C_Type *base)
DECL|_FSL_I2C_H_|macro|_FSL_I2C_H_
DECL|_i2c_direction|enum|typedef enum _i2c_direction
DECL|_i2c_flags|enum|enum _i2c_flags
DECL|_i2c_interrupt_enable|enum|enum _i2c_interrupt_enable
DECL|_i2c_master_config|struct|typedef struct _i2c_master_config
DECL|_i2c_master_handle|struct|struct _i2c_master_handle
DECL|_i2c_master_transfer_flags|enum|enum _i2c_master_transfer_flags
DECL|_i2c_master_transfer|struct|typedef struct _i2c_master_transfer
DECL|_i2c_slave_address_mode|enum|typedef enum _i2c_slave_address_mode
DECL|_i2c_slave_config|struct|typedef struct _i2c_slave_config
DECL|_i2c_slave_handle|struct|struct _i2c_slave_handle
DECL|_i2c_slave_transfer_event|enum|typedef enum _i2c_slave_transfer_event
DECL|_i2c_slave_transfer|struct|typedef struct _i2c_slave_transfer
DECL|_i2c_status|enum|enum _i2c_status
DECL|addressingMode|member|addressingMode; /*!< An addressing mode configuration of i2c_slave_address_mode_config_t. */
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Baud rate configuration of I2C peripheral. */
DECL|callback|member|i2c_slave_transfer_callback_t callback; /*!< A callback function called at the transfer event. */
DECL|completionCallback|member|i2c_master_transfer_callback_t completionCallback; /*!< A callback function called when the transfer is finished. */
DECL|completionStatus|member|status_t completionStatus; /*!< Success or error code describing how the transfer completed. Only applies for
DECL|dataSize|member|volatile size_t dataSize; /*!< A transfer size. */
DECL|dataSize|member|volatile size_t dataSize; /*!< A transfer size. */
DECL|data|member|uint8_t *volatile data; /*!< A transfer buffer. */
DECL|data|member|uint8_t *volatile data; /*!< A transfer buffer. */
DECL|direction|member|i2c_direction_t direction; /*!< A transfer direction, read or write. */
DECL|enableBaudRateCtl|member|bool enableBaudRateCtl; /*!< Enables/disables independent slave baud rate on SCL in very fast I2C modes. */
DECL|enableDoubleBuffering|member|bool enableDoubleBuffering; /*!< Controls a double buffer enable; notice that
DECL|enableDoubleBuffering|member|bool enableDoubleBuffering; /*!< Controls double buffer enable; notice that
DECL|enableGeneralCall|member|bool enableGeneralCall; /*!< Enables the general call addressing mode. */
DECL|enableMaster|member|bool enableMaster; /*!< Enables the I2C peripheral at initialization time. */
DECL|enableSlave|member|bool enableSlave; /*!< Enables the I2C peripheral at initialization time. */
DECL|enableStopHold|member|bool enableStopHold; /*!< Controls the stop hold enable. */
DECL|enableWakeUp|member|bool enableWakeUp; /*!< Enables/disables waking up MCU from low-power mode. */
DECL|eventMask|member|uint32_t eventMask; /*!< A mask of enabled events. */
DECL|event|member|i2c_slave_transfer_event_t event; /*!< A reason that the callback is invoked. */
DECL|flags|member|uint32_t flags; /*!< A transfer flag which controls the transfer. */
DECL|glitchFilterWidth|member|uint8_t glitchFilterWidth; /*!< Controls the width of the glitch. */
DECL|i2c_direction_t|typedef|} i2c_direction_t;
DECL|i2c_master_config_t|typedef|} i2c_master_config_t;
DECL|i2c_master_handle_t|typedef|typedef struct _i2c_master_handle i2c_master_handle_t;
DECL|i2c_master_transfer_callback_t|typedef|typedef void (*i2c_master_transfer_callback_t)(I2C_Type *base,
DECL|i2c_master_transfer_t|typedef|} i2c_master_transfer_t;
DECL|i2c_slave_address_mode_t|typedef|} i2c_slave_address_mode_t;
DECL|i2c_slave_config_t|typedef|} i2c_slave_config_t;
DECL|i2c_slave_handle_t|typedef|typedef struct _i2c_slave_handle i2c_slave_handle_t;
DECL|i2c_slave_transfer_callback_t|typedef|typedef void (*i2c_slave_transfer_callback_t)(I2C_Type *base, i2c_slave_transfer_t *xfer, void *userData);
DECL|i2c_slave_transfer_event_t|typedef|} i2c_slave_transfer_event_t;
DECL|i2c_slave_transfer_t|typedef|} i2c_slave_transfer_t;
DECL|isBusy|member|volatile bool isBusy; /*!< Indicates whether a transfer is busy. */
DECL|kI2C_Address7bit|enumerator|kI2C_Address7bit = 0x0U, /*!< 7-bit addressing mode. */
DECL|kI2C_AddressMatchFlag|enumerator|kI2C_AddressMatchFlag = I2C_S_IAAS_MASK, /*!< I2C address match flag. */
DECL|kI2C_ArbitrationLostFlag|enumerator|kI2C_ArbitrationLostFlag = I2C_S_ARBL_MASK, /*!< I2C arbitration lost flag. */
DECL|kI2C_BusBusyFlag|enumerator|kI2C_BusBusyFlag = I2C_S_BUSY_MASK, /*!< I2C bus busy flag. */
DECL|kI2C_GlobalInterruptEnable|enumerator|kI2C_GlobalInterruptEnable = I2C_C1_IICIE_MASK, /*!< I2C global interrupt. */
DECL|kI2C_IntPendingFlag|enumerator|kI2C_IntPendingFlag = I2C_S_IICIF_MASK, /*!< I2C interrupt pending flag. */
DECL|kI2C_RangeAddressMatchFlag|enumerator|kI2C_RangeAddressMatchFlag = I2C_S_RAM_MASK, /*!< I2C range address match flag. */
DECL|kI2C_RangeMatch|enumerator|kI2C_RangeMatch = 0X2U, /*!< Range address match addressing mode. */
DECL|kI2C_Read|enumerator|kI2C_Read = 0x1U, /*!< Master receives from the slave. */
DECL|kI2C_ReceiveNakFlag|enumerator|kI2C_ReceiveNakFlag = I2C_S_RXAK_MASK, /*!< I2C receive NAK flag. */
DECL|kI2C_SlaveAddressMatchEvent|enumerator|kI2C_SlaveAddressMatchEvent = 0x01U, /*!< Received the slave address after a start or repeated start. */
DECL|kI2C_SlaveAllEvents|enumerator|kI2C_SlaveAllEvents = kI2C_SlaveAddressMatchEvent | kI2C_SlaveTransmitEvent | kI2C_SlaveReceiveEvent |
DECL|kI2C_SlaveCompletionEvent|enumerator|kI2C_SlaveCompletionEvent = 0x20U, /*!< A stop was detected or finished transfer, completing the transfer. */
DECL|kI2C_SlaveGenaralcallEvent|enumerator|kI2C_SlaveGenaralcallEvent = 0x40U, /*!< Received the general call address after a start or repeated start. */
DECL|kI2C_SlaveReceiveEvent|enumerator|kI2C_SlaveReceiveEvent = 0x04U, /*!< A callback is requested to provide a buffer in which to place received
DECL|kI2C_SlaveStartEvent|enumerator|kI2C_SlaveStartEvent = 0x10U, /*!< A start/repeated start was detected. */
DECL|kI2C_SlaveTransmitAckEvent|enumerator|kI2C_SlaveTransmitAckEvent = 0x08U, /*!< A callback needs to either transmit an ACK or NACK. */
DECL|kI2C_SlaveTransmitEvent|enumerator|kI2C_SlaveTransmitEvent = 0x02U, /*!< A callback is requested to provide data to transmit
DECL|kI2C_StartDetectFlag|enumerator|kI2C_StartDetectFlag = I2C_FLT_STARTF_MASK << 8, /*!< I2C start detect flag. */
DECL|kI2C_StartStopDetectInterruptEnable|enumerator|kI2C_StartStopDetectInterruptEnable = I2C_FLT_SSIE_MASK, /*!< I2C start&stop detect interrupt. */
DECL|kI2C_StopDetectFlag|enumerator|kI2C_StopDetectFlag = I2C_FLT_STOPF_MASK << 8, /*!< I2C stop detect flag. */
DECL|kI2C_StopDetectInterruptEnable|enumerator|kI2C_StopDetectInterruptEnable = I2C_FLT_STOPIE_MASK, /*!< I2C stop detect interrupt. */
DECL|kI2C_TransferCompleteFlag|enumerator|kI2C_TransferCompleteFlag = I2C_S_TCF_MASK, /*!< I2C transfer complete flag. */
DECL|kI2C_TransferDefaultFlag|enumerator|kI2C_TransferDefaultFlag = 0x0U, /*!< A transfer starts with a start signal, stops with a stop signal. */
DECL|kI2C_TransferDirectionFlag|enumerator|kI2C_TransferDirectionFlag = I2C_S_SRW_MASK, /*!< I2C transfer direction flag. */
DECL|kI2C_TransferNoStartFlag|enumerator|kI2C_TransferNoStartFlag = 0x1U, /*!< A transfer starts without a start signal. */
DECL|kI2C_TransferNoStopFlag|enumerator|kI2C_TransferNoStopFlag = 0x4U, /*!< A transfer ends without a stop signal. */
DECL|kI2C_TransferRepeatedStartFlag|enumerator|kI2C_TransferRepeatedStartFlag = 0x2U, /*!< A transfer starts with a repeated start signal. */
DECL|kI2C_Write|enumerator|kI2C_Write = 0x0U, /*!< Master transmits to the slave. */
DECL|kStatus_I2C_Addr_Nak|enumerator|kStatus_I2C_Addr_Nak = MAKE_STATUS(kStatusGroup_I2C, 5), /*!< NAK received during the address probe. */
DECL|kStatus_I2C_ArbitrationLost|enumerator|kStatus_I2C_ArbitrationLost = MAKE_STATUS(kStatusGroup_I2C, 3), /*!< Arbitration lost during transfer. */
DECL|kStatus_I2C_Busy|enumerator|kStatus_I2C_Busy = MAKE_STATUS(kStatusGroup_I2C, 0), /*!< I2C is busy with current transfer. */
DECL|kStatus_I2C_Idle|enumerator|kStatus_I2C_Idle = MAKE_STATUS(kStatusGroup_I2C, 1), /*!< Bus is Idle. */
DECL|kStatus_I2C_Nak|enumerator|kStatus_I2C_Nak = MAKE_STATUS(kStatusGroup_I2C, 2), /*!< NAK received during transfer. */
DECL|kStatus_I2C_Timeout|enumerator|kStatus_I2C_Timeout = MAKE_STATUS(kStatusGroup_I2C, 4), /*!< Wait event timeout. */
DECL|sclStopHoldTime_ns|member|uint32_t sclStopHoldTime_ns; /*!< the delay from the rising edge of SCL (I2C clock) to the rising edge of SDA (I2C
DECL|slaveAddress|member|uint16_t slaveAddress; /*!< A slave address configuration. */
DECL|slaveAddress|member|uint8_t slaveAddress; /*!< 7-bit slave address. */
DECL|state|member|uint8_t state; /*!< A transfer state maintained during transfer. */
DECL|subaddressSize|member|uint8_t subaddressSize; /*!< A size of the command buffer. */
DECL|subaddress|member|uint32_t subaddress; /*!< A sub address. Transferred MSB first. */
DECL|transferSize|member|size_t transferSize; /*!< Total bytes to be transferred. */
DECL|transferredCount|member|size_t transferredCount; /*!< A number of bytes actually transferred since the start or since the last repeated
DECL|transfer|member|i2c_master_transfer_t transfer; /*!< I2C master transfer copy. */
DECL|transfer|member|i2c_slave_transfer_t transfer; /*!< I2C slave transfer copy. */
DECL|upperAddress|member|uint16_t upperAddress; /*!< A maximum boundary slave address used in a range matching mode. */
DECL|userData|member|void *userData; /*!< A callback parameter passed to the callback function. */
DECL|userData|member|void *userData; /*!< A callback parameter passed to the callback. */
