DECL|I2C_CFG_MASK|macro|I2C_CFG_MASK
DECL|I2C_DisableInterrupts|function|static inline void I2C_DisableInterrupts(I2C_Type *base, uint32_t interruptMask)
DECL|I2C_EnableInterrupts|function|static inline void I2C_EnableInterrupts(I2C_Type *base, uint32_t interruptMask)
DECL|I2C_GetEnabledInterrupts|function|static inline uint32_t I2C_GetEnabledInterrupts(I2C_Type *base)
DECL|I2C_GetStatusFlags|function|static inline uint32_t I2C_GetStatusFlags(I2C_Type *base)
DECL|I2C_MasterClearStatusFlags|function|static inline void I2C_MasterClearStatusFlags(I2C_Type *base, uint32_t statusMask)
DECL|I2C_MasterEnable|function|static inline void I2C_MasterEnable(I2C_Type *base, bool enable)
DECL|I2C_MasterGetBusIdleState|function|static inline bool I2C_MasterGetBusIdleState(I2C_Type *base)
DECL|I2C_MasterRepeatedStart|function|static inline status_t I2C_MasterRepeatedStart(I2C_Type *base, uint8_t address, i2c_direction_t direction)
DECL|I2C_MasterReset|function|static inline void I2C_MasterReset(I2C_Type *base)
DECL|I2C_STAT_MSTCODE_IDLE|macro|I2C_STAT_MSTCODE_IDLE
DECL|I2C_STAT_MSTCODE_NACKADR|macro|I2C_STAT_MSTCODE_NACKADR
DECL|I2C_STAT_MSTCODE_NACKDAT|macro|I2C_STAT_MSTCODE_NACKDAT
DECL|I2C_STAT_MSTCODE_RXREADY|macro|I2C_STAT_MSTCODE_RXREADY
DECL|I2C_STAT_MSTCODE_TXREADY|macro|I2C_STAT_MSTCODE_TXREADY
DECL|I2C_STAT_SLVST_ADDR|macro|I2C_STAT_SLVST_ADDR
DECL|I2C_STAT_SLVST_RX|macro|I2C_STAT_SLVST_RX
DECL|I2C_STAT_SLVST_TX|macro|I2C_STAT_SLVST_TX
DECL|I2C_SlaveClearStatusFlags|function|static inline void I2C_SlaveClearStatusFlags(I2C_Type *base, uint32_t statusMask)
DECL|I2C_SlaveEnable|function|static inline void I2C_SlaveEnable(I2C_Type *base, bool enable)
DECL|I2C_SlaveGetReceivedAddress|function|static inline uint32_t I2C_SlaveGetReceivedAddress(I2C_Type *base, volatile i2c_slave_transfer_t *transfer)
DECL|NXP_I2C_DRIVER_VERSION|macro|NXP_I2C_DRIVER_VERSION
DECL|_FSL_I2C_H_|macro|_FSL_I2C_H_
DECL|_i2c_direction|enum|typedef enum _i2c_direction
DECL|_i2c_master_config|struct|typedef struct _i2c_master_config
DECL|_i2c_master_flags|enum|enum _i2c_master_flags
DECL|_i2c_master_handle|struct|struct _i2c_master_handle
DECL|_i2c_master_transfer_flags|enum|enum _i2c_master_transfer_flags
DECL|_i2c_master_transfer|struct|struct _i2c_master_transfer
DECL|_i2c_slave_address_qual_mode|enum|typedef enum _i2c_slave_address_qual_mode
DECL|_i2c_slave_address_register|enum|typedef enum _i2c_slave_address_register
DECL|_i2c_slave_address|struct|typedef struct _i2c_slave_address
DECL|_i2c_slave_bus_speed|enum|typedef enum _i2c_slave_bus_speed
DECL|_i2c_slave_config|struct|typedef struct _i2c_slave_config
DECL|_i2c_slave_flags|enum|enum _i2c_slave_flags
DECL|_i2c_slave_fsm|enum|typedef enum _i2c_slave_fsm
DECL|_i2c_slave_handle|struct|struct _i2c_slave_handle
DECL|_i2c_slave_transfer_event|enum|typedef enum _i2c_slave_transfer_event
DECL|_i2c_slave_transfer|struct|typedef struct _i2c_slave_transfer
DECL|_i2c_status|enum|enum _i2c_status
DECL|_i2c_transfer_states|enum|enum _i2c_transfer_states
DECL|address0|member|i2c_slave_address_t address0; /*!< Slave's 7-bit address and disable. */
DECL|address1|member|i2c_slave_address_t address1; /*!< Alternate slave 7-bit address and disable. */
DECL|address2|member|i2c_slave_address_t address2; /*!< Alternate slave 7-bit address and disable. */
DECL|address3|member|i2c_slave_address_t address3; /*!< Alternate slave 7-bit address and disable. */
DECL|addressDisable|member|bool addressDisable; /*!< Slave address disable SADISABLE. */
DECL|address|member|uint8_t address; /*!< 7-bit Slave address SLVADR. */
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Desired baud rate in bits per second. */
DECL|buf|member|uint8_t *buf; /*!< Buffer pointer for current state. */
DECL|busSpeed|member|busSpeed; /*!< Slave bus speed mode. If the slave function stretches SCL to allow for software response, it must
DECL|callback|member|i2c_slave_transfer_callback_t callback; /*!< Callback function called at transfer event. */
DECL|completionCallback|member|i2c_master_transfer_callback_t completionCallback; /*!< Callback function pointer. */
DECL|completionStatus|member|status_t completionStatus; /*!< Success or error code describing how the transfer completed. Only applies for
DECL|dataSize|member|size_t dataSize; /*!< Number of bytes to transfer. */
DECL|data|member|void *data; /*!< Pointer to data to transfer. */
DECL|direction|member|i2c_direction_t direction; /*!< Either #kI2C_Read or #kI2C_Write. */
DECL|enableMaster|member|bool enableMaster; /*!< Whether to enable master mode. */
DECL|enableSlave|member|bool enableSlave; /*!< Enable slave mode. */
DECL|enableTimeout|member|bool enableTimeout; /*!< Enable internal timeout function. */
DECL|eventMask|member|uint32_t eventMask; /*!< Mask of enabled events. */
DECL|event|member|i2c_slave_transfer_event_t event; /*!< Reason the callback is being invoked. */
DECL|flags|member|uint32_t flags; /*!< Bit mask of options for the transfer. See enumeration #_i2c_master_transfer_flags for available
DECL|handle|member|i2c_slave_handle_t *handle; /*!< Pointer to handle that contains this transfer. */
DECL|i2c_direction_t|typedef|} i2c_direction_t;
DECL|i2c_master_config_t|typedef|} i2c_master_config_t;
DECL|i2c_master_handle_t|typedef|typedef struct _i2c_master_handle i2c_master_handle_t;
DECL|i2c_master_transfer_callback_t|typedef|typedef void (*i2c_master_transfer_callback_t)(I2C_Type *base,
DECL|i2c_master_transfer_t|typedef|typedef struct _i2c_master_transfer i2c_master_transfer_t;
DECL|i2c_slave_address_qual_mode_t|typedef|} i2c_slave_address_qual_mode_t;
DECL|i2c_slave_address_register_t|typedef|} i2c_slave_address_register_t;
DECL|i2c_slave_address_t|typedef|} i2c_slave_address_t;
DECL|i2c_slave_bus_speed_t|typedef|} i2c_slave_bus_speed_t;
DECL|i2c_slave_config_t|typedef|} i2c_slave_config_t;
DECL|i2c_slave_fsm_t|typedef|} i2c_slave_fsm_t;
DECL|i2c_slave_handle_t|typedef|typedef struct _i2c_slave_handle i2c_slave_handle_t;
DECL|i2c_slave_transfer_callback_t|typedef|typedef void (*i2c_slave_transfer_callback_t)(I2C_Type *base, volatile i2c_slave_transfer_t *transfer, void *userData);
DECL|i2c_slave_transfer_event_t|typedef|} i2c_slave_transfer_event_t;
DECL|i2c_slave_transfer_t|typedef|} i2c_slave_transfer_t;
DECL|isBusy|member|volatile bool isBusy; /*!< Whether transfer is busy. */
DECL|kI2C_MasterArbitrationLostFlag|enumerator|kI2C_MasterArbitrationLostFlag = I2C_STAT_MSTARBLOSS_MASK, /*!< The arbitration of the bus was lost. There was collision on the bus */
DECL|kI2C_MasterPendingFlag|enumerator|kI2C_MasterPendingFlag = I2C_STAT_MSTPENDING_MASK, /*!< The I2C module is waiting for software interaction. */
DECL|kI2C_MasterStartStopErrorFlag|enumerator|kI2C_MasterStartStopErrorFlag = I2C_STAT_MSTSTSTPERR_MASK /*!< There was an error during start or stop phase of the transaction. */
DECL|kI2C_QualModeExtend|enumerator|kI2C_QualModeExtend =
DECL|kI2C_QualModeMask|enumerator|kI2C_QualModeMask = 0U, /*!< The SLVQUAL0 field (qualAddress) is used as a logical mask for matching address0. */
DECL|kI2C_Read|enumerator|kI2C_Read = 1U /*!< Master receive. */
DECL|kI2C_SaveDeselected|enumerator|kI2C_SaveDeselected = I2C_STAT_SLVDESEL_MASK /*!< Indicates that slave was previously deselected (deselect event took place, w1c). */
DECL|kI2C_SlaveAddressMatchEvent|enumerator|kI2C_SlaveAddressMatchEvent = 0x01U, /*!< Received the slave address after a start or repeated start. */
DECL|kI2C_SlaveAddressRegister0|enumerator|kI2C_SlaveAddressRegister0 = 0U, /*!< Slave Address 0 register. */
DECL|kI2C_SlaveAddressRegister1|enumerator|kI2C_SlaveAddressRegister1 = 1U, /*!< Slave Address 1 register. */
DECL|kI2C_SlaveAddressRegister2|enumerator|kI2C_SlaveAddressRegister2 = 2U, /*!< Slave Address 2 register. */
DECL|kI2C_SlaveAddressRegister3|enumerator|kI2C_SlaveAddressRegister3 = 3U, /*!< Slave Address 3 register. */
DECL|kI2C_SlaveAllEvents|enumerator|kI2C_SlaveAllEvents = kI2C_SlaveAddressMatchEvent | kI2C_SlaveTransmitEvent | kI2C_SlaveReceiveEvent |
DECL|kI2C_SlaveCompletionEvent|enumerator|kI2C_SlaveCompletionEvent = 0x20U, /*!< All data in the active transfer have been consumed. */
DECL|kI2C_SlaveDeselectedEvent|enumerator|kI2C_SlaveDeselectedEvent =
DECL|kI2C_SlaveFastModePlus|enumerator|kI2C_SlaveFastModePlus = 2U,
DECL|kI2C_SlaveFastMode|enumerator|kI2C_SlaveFastMode = 1U,
DECL|kI2C_SlaveFsmAddressMatch|enumerator|kI2C_SlaveFsmAddressMatch = 0u,
DECL|kI2C_SlaveFsmReceive|enumerator|kI2C_SlaveFsmReceive = 2u,
DECL|kI2C_SlaveFsmTransmit|enumerator|kI2C_SlaveFsmTransmit = 3u,
DECL|kI2C_SlaveHsMode|enumerator|kI2C_SlaveHsMode = 3U,
DECL|kI2C_SlaveNotStretching|enumerator|kI2C_SlaveNotStretching = I2C_STAT_SLVNOTSTR_MASK, /*!< Indicates whether the slave is currently stretching clock (0 = yes, 1 = no). */
DECL|kI2C_SlavePendingFlag|enumerator|kI2C_SlavePendingFlag = I2C_STAT_SLVPENDING_MASK, /*!< The I2C module is waiting for software interaction. */
DECL|kI2C_SlaveReceiveEvent|enumerator|kI2C_SlaveReceiveEvent = 0x04U, /*!< Callback is requested to provide a buffer in which to place received
DECL|kI2C_SlaveSelected|enumerator|kI2C_SlaveSelected = I2C_STAT_SLVSEL_MASK, /*!< Indicates whether the slave is selected by an address match. */
DECL|kI2C_SlaveStandardMode|enumerator|kI2C_SlaveStandardMode = 0U,
DECL|kI2C_SlaveTransmitEvent|enumerator|kI2C_SlaveTransmitEvent = 0x02U, /*!< Callback is requested to provide data to transmit
DECL|kI2C_TransferDefaultFlag|enumerator|kI2C_TransferDefaultFlag = 0x00U, /*!< Transfer starts with a start signal, stops with a stop signal. */
DECL|kI2C_TransferNoStartFlag|enumerator|kI2C_TransferNoStartFlag = 0x01U, /*!< Don't send a start condition, address, and sub address */
DECL|kI2C_TransferNoStopFlag|enumerator|kI2C_TransferNoStopFlag = 0x04U, /*!< Don't send a stop condition. */
DECL|kI2C_TransferRepeatedStartFlag|enumerator|kI2C_TransferRepeatedStartFlag = 0x02U, /*!< Send a repeated start condition */
DECL|kI2C_Write|enumerator|kI2C_Write = 0U, /*!< Master transmit. */
DECL|kIdleState|enumerator|kIdleState = 0,
DECL|kReceiveDataState|enumerator|kReceiveDataState,
DECL|kReceiveLastDataState|enumerator|kReceiveLastDataState,
DECL|kStartState|enumerator|kStartState,
DECL|kStatus_I2C_ArbitrationLost|enumerator|kStatus_I2C_ArbitrationLost = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 5), /*!< Arbitration lost error. */
DECL|kStatus_I2C_BitError|enumerator|kStatus_I2C_BitError = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 4), /*!< Transferred bit was not seen on the bus. */
DECL|kStatus_I2C_Busy|enumerator|kStatus_I2C_Busy = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 0), /*!< The master is already performing a transfer. */
DECL|kStatus_I2C_DmaRequestFail|enumerator|kStatus_I2C_DmaRequestFail = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 7), /*!< DMA request failed. */
DECL|kStatus_I2C_Idle|enumerator|kStatus_I2C_Idle = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 1), /*!< The slave driver is idle. */
DECL|kStatus_I2C_InvalidParameter|enumerator|kStatus_I2C_InvalidParameter =
DECL|kStatus_I2C_Nak|enumerator|kStatus_I2C_Nak =
DECL|kStatus_I2C_NoTransferInProgress|enumerator|kStatus_I2C_NoTransferInProgress =
DECL|kStatus_I2C_StartStopError|enumerator|kStatus_I2C_StartStopError = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 8),
DECL|kStatus_I2C_UnexpectedState|enumerator|kStatus_I2C_UnexpectedState = MAKE_STATUS(kStatusGroup_FLEXCOMM_I2C, 9),
DECL|kStopState|enumerator|kStopState,
DECL|kTransmitDataState|enumerator|kTransmitDataState,
DECL|kTransmitSubaddrState|enumerator|kTransmitSubaddrState,
DECL|kWaitForCompletionState|enumerator|kWaitForCompletionState
DECL|qualAddress|member|uint8_t qualAddress; /*!< Slave address qualifier for address 0. */
DECL|qualMode|member|i2c_slave_address_qual_mode_t qualMode; /*!< Qualify mode for slave address 0. */
DECL|receivedAddress|member|uint8_t receivedAddress; /*!< Matching address send by master. 7-bits plus R/nW bit0 */
DECL|remainingBytes|member|uint32_t remainingBytes; /*!< Remaining byte count in current state. */
DECL|remainingSubaddr|member|uint32_t remainingSubaddr;
DECL|rxData|member|uint8_t *rxData; /*!< Transfer buffer for receive data */
DECL|rxSize|member|size_t rxSize; /*!< Transfer size */
DECL|slaveAddress|member|uint16_t slaveAddress; /*!< The 7-bit slave address. */
DECL|slaveFsm|member|volatile i2c_slave_fsm_t slaveFsm; /*!< slave transfer state machine. */
DECL|state|member|uint8_t state; /*!< Transfer state machine current state. */
DECL|subaddrBuf|member|uint8_t subaddrBuf[4];
DECL|subaddressSize|member|size_t subaddressSize; /*!< Length of sub address to send in bytes. Maximum size is 4 bytes. */
DECL|subaddress|member|uint32_t subaddress; /*!< Sub address. Transferred MSB first. */
DECL|transferCount|member|uint32_t transferCount; /*!< Indicates progress of the transfer */
DECL|transferredCount|member|size_t transferredCount; /*!< Number of bytes transferred during this transfer. */
DECL|transfer|member|i2c_master_transfer_t transfer; /*!< Copy of the current transfer info. */
DECL|transfer|member|volatile i2c_slave_transfer_t transfer; /*!< I2C slave transfer. */
DECL|txData|member|const uint8_t *txData; /*!< Transfer buffer for transmit data */
DECL|txSize|member|size_t txSize; /*!< Transfer size */
DECL|userData|member|void *userData; /*!< Application data passed to callback. */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback. */
