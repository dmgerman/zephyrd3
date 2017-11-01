DECL|FSL_LPI2C_DRIVER_VERSION|macro|FSL_LPI2C_DRIVER_VERSION
DECL|LPI2C_MasterClearStatusFlags|function|static inline void LPI2C_MasterClearStatusFlags(LPI2C_Type *base, uint32_t statusMask)
DECL|LPI2C_MasterDisableInterrupts|function|static inline void LPI2C_MasterDisableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
DECL|LPI2C_MasterEnableDMA|function|static inline void LPI2C_MasterEnableDMA(LPI2C_Type *base, bool enableTx, bool enableRx)
DECL|LPI2C_MasterEnableInterrupts|function|static inline void LPI2C_MasterEnableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
DECL|LPI2C_MasterEnable|function|static inline void LPI2C_MasterEnable(LPI2C_Type *base, bool enable)
DECL|LPI2C_MasterGetBusIdleState|function|static inline bool LPI2C_MasterGetBusIdleState(LPI2C_Type *base)
DECL|LPI2C_MasterGetEnabledInterrupts|function|static inline uint32_t LPI2C_MasterGetEnabledInterrupts(LPI2C_Type *base)
DECL|LPI2C_MasterGetFifoCounts|function|static inline void LPI2C_MasterGetFifoCounts(LPI2C_Type *base, size_t *rxCount, size_t *txCount)
DECL|LPI2C_MasterGetRxFifoAddress|function|static inline uint32_t LPI2C_MasterGetRxFifoAddress(LPI2C_Type *base)
DECL|LPI2C_MasterGetStatusFlags|function|static inline uint32_t LPI2C_MasterGetStatusFlags(LPI2C_Type *base)
DECL|LPI2C_MasterGetTxFifoAddress|function|static inline uint32_t LPI2C_MasterGetTxFifoAddress(LPI2C_Type *base)
DECL|LPI2C_MasterRepeatedStart|function|static inline status_t LPI2C_MasterRepeatedStart(LPI2C_Type *base, uint8_t address, lpi2c_direction_t dir)
DECL|LPI2C_MasterReset|function|static inline void LPI2C_MasterReset(LPI2C_Type *base)
DECL|LPI2C_MasterSetWatermarks|function|static inline void LPI2C_MasterSetWatermarks(LPI2C_Type *base, size_t txWords, size_t rxWords)
DECL|LPI2C_SlaveClearStatusFlags|function|static inline void LPI2C_SlaveClearStatusFlags(LPI2C_Type *base, uint32_t statusMask)
DECL|LPI2C_SlaveDisableInterrupts|function|static inline void LPI2C_SlaveDisableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
DECL|LPI2C_SlaveEnableDMA|function|static inline void LPI2C_SlaveEnableDMA(LPI2C_Type *base, bool enableAddressValid, bool enableRx, bool enableTx)
DECL|LPI2C_SlaveEnableInterrupts|function|static inline void LPI2C_SlaveEnableInterrupts(LPI2C_Type *base, uint32_t interruptMask)
DECL|LPI2C_SlaveEnable|function|static inline void LPI2C_SlaveEnable(LPI2C_Type *base, bool enable)
DECL|LPI2C_SlaveGetBusIdleState|function|static inline bool LPI2C_SlaveGetBusIdleState(LPI2C_Type *base)
DECL|LPI2C_SlaveGetEnabledInterrupts|function|static inline uint32_t LPI2C_SlaveGetEnabledInterrupts(LPI2C_Type *base)
DECL|LPI2C_SlaveGetReceivedAddress|function|static inline uint32_t LPI2C_SlaveGetReceivedAddress(LPI2C_Type *base)
DECL|LPI2C_SlaveGetStatusFlags|function|static inline uint32_t LPI2C_SlaveGetStatusFlags(LPI2C_Type *base)
DECL|LPI2C_SlaveReset|function|static inline void LPI2C_SlaveReset(LPI2C_Type *base)
DECL|LPI2C_SlaveTransmitAck|function|static inline void LPI2C_SlaveTransmitAck(LPI2C_Type *base, bool ackOrNack)
DECL|LPI2C_WAIT_TIMEOUT|macro|LPI2C_WAIT_TIMEOUT
DECL|_FSL_LPI2C_H_|macro|_FSL_LPI2C_H_
DECL|_lpi2c_data_match_config_mode|enum|typedef enum _lpi2c_data_match_config_mode
DECL|_lpi2c_direction|enum|typedef enum _lpi2c_direction
DECL|_lpi2c_host_request_polarity|enum|typedef enum _lpi2c_host_request_polarity
DECL|_lpi2c_host_request_source|enum|typedef enum _lpi2c_host_request_source
DECL|_lpi2c_master_config|struct|typedef struct _lpi2c_master_config
DECL|_lpi2c_master_flags|enum|enum _lpi2c_master_flags
DECL|_lpi2c_master_handle|struct|struct _lpi2c_master_handle
DECL|_lpi2c_master_pin_config|enum|typedef enum _lpi2c_master_pin_config
DECL|_lpi2c_master_transfer_flags|enum|enum _lpi2c_master_transfer_flags
DECL|_lpi2c_master_transfer|struct|struct _lpi2c_master_transfer
DECL|_lpi2c_match_config|struct|typedef struct _lpi2c_match_config
DECL|_lpi2c_slave_address_match|enum|typedef enum _lpi2c_slave_address_match
DECL|_lpi2c_slave_config|struct|typedef struct _lpi2c_slave_config
DECL|_lpi2c_slave_flags|enum|enum _lpi2c_slave_flags
DECL|_lpi2c_slave_handle|struct|struct _lpi2c_slave_handle
DECL|_lpi2c_slave_transfer_event|enum|typedef enum _lpi2c_slave_transfer_event
DECL|_lpi2c_slave_transfer|struct|typedef struct _lpi2c_slave_transfer
DECL|_lpi2c_status|enum|enum _lpi2c_status
DECL|address0|member|uint8_t address0; /*!< Slave's 7-bit address. */
DECL|address1|member|uint8_t address1; /*!< Alternate slave 7-bit address. */
DECL|addressMatchMode|member|lpi2c_slave_address_match_t addressMatchMode; /*!< Address matching options. */
DECL|baudRate_Hz|member|uint32_t baudRate_Hz; /*!< Desired baud rate in Hertz. */
DECL|buf|member|uint8_t *buf; /*!< Buffer pointer for current state. */
DECL|busIdleTimeout_ns|member|uint32_t busIdleTimeout_ns; /*!< Bus idle timeout in nanoseconds. Set to 0 to disable. */
DECL|callback|member|lpi2c_slave_transfer_callback_t callback; /*!< Callback function called at transfer event. */
DECL|clockHoldTime_ns|member|uint32_t clockHoldTime_ns; /*!< Width in nanoseconds of the clock hold time. */
DECL|commandBuffer|member|uint16_t commandBuffer[7]; /*!< LPI2C command sequence. */
DECL|completionCallback|member|lpi2c_master_transfer_callback_t completionCallback; /*!< Callback function pointer. */
DECL|completionStatus|member|status_t completionStatus; /*!< Success or error code describing how the transfer completed. Only applies for
DECL|dataSize|member|size_t dataSize; /*!< Number of bytes to transfer. */
DECL|dataSize|member|size_t dataSize; /*!< Transfer size */
DECL|dataValidDelay_ns|member|uint32_t dataValidDelay_ns; /*!< Width in nanoseconds of the data valid delay. */
DECL|data|member|uint8_t *data; /*!< Transfer buffer */
DECL|data|member|void *data; /*!< Pointer to data to transfer. */
DECL|debugEnable|member|bool debugEnable; /*!< Enable transfers to continue when halted in debug mode. */
DECL|direction|member|lpi2c_direction_t direction; /*!< Either #kLPI2C_Read or #kLPI2C_Write. */
DECL|enableAck|member|bool enableAck; /*!< Enables SCL clock stretching during slave-transmit address byte(s)
DECL|enableAddress|member|bool enableAddress; /*!< Enables SCL clock stretching when the address valid flag is asserted. */
DECL|enableDoze|member|bool enableDoze; /*!< Whether master is enabled in doze mode. */
DECL|enableGeneralCall|member|bool enableGeneralCall; /*!< Enable general call address matching. */
DECL|enableMaster|member|bool enableMaster; /*!< Whether to enable master mode. */
DECL|enableReceivedAddressRead|member|bool enableReceivedAddressRead; /*!< Enable reading the address received address as the first byte of data. */
DECL|enableRx|member|bool enableRx; /*!< Enables SCL clock stretching when receive data flag is set during
DECL|enableSlave|member|bool enableSlave; /*!< Enable slave mode. */
DECL|enableTx|member|bool enableTx; /*!< Enables SCL clock stretching when the transmit data flag is set
DECL|enable|member|bool enable; /*!< Enable host request. */
DECL|eventMask|member|uint32_t eventMask; /*!< Mask of enabled events. */
DECL|event|member|lpi2c_slave_transfer_event_t event; /*!< Reason the callback is being invoked. */
DECL|filterDozeEnable|member|bool filterDozeEnable; /*!< Enable digital glitch filter in doze mode. */
DECL|filterEnable|member|bool filterEnable; /*!< Enable digital glitch filter. */
DECL|flags|member|flags; /*!< Bit mask of options for the transfer. See enumeration #_lpi2c_master_transfer_flags for available
DECL|hostRequest|member|} hostRequest; /*!< Host request options. */
DECL|ignoreAck|member|bool ignoreAck; /*!< Continue transfers after a NACK is detected. */
DECL|ignoreAck|member|bool ignoreAck; /*!< Whether to ignore ACK/NACK. */
DECL|isBusy|member|bool isBusy; /*!< Whether transfer is busy. */
DECL|kLPI2C_1stWordAndM1EqualsM0AndM1|enumerator|kLPI2C_1stWordAndM1EqualsM0AndM1 =
DECL|kLPI2C_1stWordEqualsM0And2ndWordEqualsM1|enumerator|kLPI2C_1stWordEqualsM0And2ndWordEqualsM1 =
DECL|kLPI2C_1stWordEqualsM0OrM1|enumerator|kLPI2C_1stWordEqualsM0OrM1 = 0x2U, /*!< LPI2C Match Enabled and 1st data word equals MATCH0 OR MATCH1 */
DECL|kLPI2C_2PinOpenDrainWithSeparateSlave|enumerator|kLPI2C_2PinOpenDrainWithSeparateSlave =
DECL|kLPI2C_2PinOpenDrain|enumerator|kLPI2C_2PinOpenDrain = 0x0U, /*!< LPI2C Configured for 2-pin open drain mode */
DECL|kLPI2C_2PinOutputOnlyWithSeparateSlave|enumerator|kLPI2C_2PinOutputOnlyWithSeparateSlave =
DECL|kLPI2C_2PinOutputOnly|enumerator|kLPI2C_2PinOutputOnly = 0x1U, /*!< LPI2C Configured for 2-pin output only mode (ultra-fast mode) */
DECL|kLPI2C_2PinPushPullWithSeparateSlave|enumerator|kLPI2C_2PinPushPullWithSeparateSlave =
DECL|kLPI2C_2PinPushPull|enumerator|kLPI2C_2PinPushPull = 0x2U, /*!< LPI2C Configured for 2-pin push-pull mode */
DECL|kLPI2C_4PinPushPullWithInvertedOutput|enumerator|kLPI2C_4PinPushPullWithInvertedOutput = 0x7U /*!< LPI2C Configured for 4-pin push-pull mode(inverted outputs) */
DECL|kLPI2C_4PinPushPull|enumerator|kLPI2C_4PinPushPull = 0x3U, /*!< LPI2C Configured for 4-pin push-pull mode */
DECL|kLPI2C_AnyWordAndM1EqualsM0AndM1|enumerator|kLPI2C_AnyWordAndM1EqualsM0AndM1 =
DECL|kLPI2C_AnyWordEqualsM0AndNextWordEqualsM1|enumerator|kLPI2C_AnyWordEqualsM0AndNextWordEqualsM1 =
DECL|kLPI2C_AnyWordEqualsM0OrM1|enumerator|kLPI2C_AnyWordEqualsM0OrM1 = 0x3U, /*!< LPI2C Match Enabled and any data word equals MATCH0 OR MATCH1 */
DECL|kLPI2C_HostRequestExternalPin|enumerator|kLPI2C_HostRequestExternalPin = 0x0U, /*!< Select the LPI2C_HREQ pin as the host request input */
DECL|kLPI2C_HostRequestInputTrigger|enumerator|kLPI2C_HostRequestInputTrigger = 0x1U, /*!< Select the input trigger as the host request input */
DECL|kLPI2C_HostRequestPinActiveHigh|enumerator|kLPI2C_HostRequestPinActiveHigh = 0x1U /*!< Configure the LPI2C_HREQ pin active high */
DECL|kLPI2C_HostRequestPinActiveLow|enumerator|kLPI2C_HostRequestPinActiveLow = 0x0U, /*!< Configure the LPI2C_HREQ pin active low */
DECL|kLPI2C_MasterArbitrationLostFlag|enumerator|kLPI2C_MasterArbitrationLostFlag = LPI2C_MSR_ALF_MASK, /*!< Arbitration lost flag */
DECL|kLPI2C_MasterBusBusyFlag|enumerator|kLPI2C_MasterBusBusyFlag = LPI2C_MSR_BBF_MASK /*!< Bus busy flag */
DECL|kLPI2C_MasterBusyFlag|enumerator|kLPI2C_MasterBusyFlag = LPI2C_MSR_MBF_MASK, /*!< Master busy flag */
DECL|kLPI2C_MasterDataMatchFlag|enumerator|kLPI2C_MasterDataMatchFlag = LPI2C_MSR_DMF_MASK, /*!< Data match flag */
DECL|kLPI2C_MasterEndOfPacketFlag|enumerator|kLPI2C_MasterEndOfPacketFlag = LPI2C_MSR_EPF_MASK, /*!< End Packet flag */
DECL|kLPI2C_MasterFifoErrFlag|enumerator|kLPI2C_MasterFifoErrFlag = LPI2C_MSR_FEF_MASK, /*!< FIFO error flag */
DECL|kLPI2C_MasterNackDetectFlag|enumerator|kLPI2C_MasterNackDetectFlag = LPI2C_MSR_NDF_MASK, /*!< NACK detect flag */
DECL|kLPI2C_MasterPinLowTimeoutFlag|enumerator|kLPI2C_MasterPinLowTimeoutFlag = LPI2C_MSR_PLTF_MASK, /*!< Pin low timeout flag */
DECL|kLPI2C_MasterRxReadyFlag|enumerator|kLPI2C_MasterRxReadyFlag = LPI2C_MSR_RDF_MASK, /*!< Receive data flag */
DECL|kLPI2C_MasterStopDetectFlag|enumerator|kLPI2C_MasterStopDetectFlag = LPI2C_MSR_SDF_MASK, /*!< Stop detect flag */
DECL|kLPI2C_MasterTxReadyFlag|enumerator|kLPI2C_MasterTxReadyFlag = LPI2C_MSR_TDF_MASK, /*!< Transmit data flag */
DECL|kLPI2C_MatchAddress0OrAddress1|enumerator|kLPI2C_MatchAddress0OrAddress1 = 2U, /*!< Match either address 0 or address 1. */
DECL|kLPI2C_MatchAddress0ThroughAddress1|enumerator|kLPI2C_MatchAddress0ThroughAddress1 = 6U, /*!< Match a range of slave addresses from address 0 through address 1. */
DECL|kLPI2C_MatchAddress0|enumerator|kLPI2C_MatchAddress0 = 0U, /*!< Match only address 0. */
DECL|kLPI2C_MatchDisabled|enumerator|kLPI2C_MatchDisabled = 0x0U, /*!< LPI2C Match Disabled */
DECL|kLPI2C_Read|enumerator|kLPI2C_Read = 1U /*!< Master receive. */
DECL|kLPI2C_SlaveAddressMatch0Flag|enumerator|kLPI2C_SlaveAddressMatch0Flag = LPI2C_SSR_AM0F_MASK, /*!< Address match 0 flag */
DECL|kLPI2C_SlaveAddressMatch1Flag|enumerator|kLPI2C_SlaveAddressMatch1Flag = LPI2C_SSR_AM1F_MASK, /*!< Address match 1 flag */
DECL|kLPI2C_SlaveAddressMatchEvent|enumerator|kLPI2C_SlaveAddressMatchEvent = 0x01U, /*!< Received the slave address after a start or repeated start. */
DECL|kLPI2C_SlaveAddressValidFlag|enumerator|kLPI2C_SlaveAddressValidFlag = LPI2C_SSR_AVF_MASK, /*!< Address valid flag */
DECL|kLPI2C_SlaveAllEvents|enumerator|kLPI2C_SlaveAllEvents = kLPI2C_SlaveAddressMatchEvent | kLPI2C_SlaveTransmitEvent | kLPI2C_SlaveReceiveEvent |
DECL|kLPI2C_SlaveBitErrFlag|enumerator|kLPI2C_SlaveBitErrFlag = LPI2C_SSR_BEF_MASK, /*!< Bit error flag */
DECL|kLPI2C_SlaveBusBusyFlag|enumerator|kLPI2C_SlaveBusBusyFlag = LPI2C_SSR_BBF_MASK, /*!< Bus busy flag */
DECL|kLPI2C_SlaveBusyFlag|enumerator|kLPI2C_SlaveBusyFlag = LPI2C_SSR_SBF_MASK, /*!< Master busy flag */
DECL|kLPI2C_SlaveCompletionEvent|enumerator|kLPI2C_SlaveCompletionEvent = 0x20U, /*!< A stop was detected, completing the transfer. */
DECL|kLPI2C_SlaveFifoErrFlag|enumerator|kLPI2C_SlaveFifoErrFlag = LPI2C_SSR_FEF_MASK, /*!< FIFO error flag */
DECL|kLPI2C_SlaveGeneralCallFlag|enumerator|kLPI2C_SlaveGeneralCallFlag = LPI2C_SSR_GCF_MASK, /*!< General call flag */
DECL|kLPI2C_SlaveReceiveEvent|enumerator|kLPI2C_SlaveReceiveEvent = 0x04U, /*!< Callback is requested to provide a buffer in which to place received
DECL|kLPI2C_SlaveRepeatedStartDetectFlag|enumerator|kLPI2C_SlaveRepeatedStartDetectFlag = LPI2C_SSR_RSF_MASK, /*!< Repeated start detect flag */
DECL|kLPI2C_SlaveRepeatedStartEvent|enumerator|kLPI2C_SlaveRepeatedStartEvent = 0x10U, /*!< A repeated start was detected. */
DECL|kLPI2C_SlaveRxReadyFlag|enumerator|kLPI2C_SlaveRxReadyFlag = LPI2C_SSR_RDF_MASK, /*!< Receive data flag */
DECL|kLPI2C_SlaveStopDetectFlag|enumerator|kLPI2C_SlaveStopDetectFlag = LPI2C_SSR_SDF_MASK, /*!< Stop detect flag */
DECL|kLPI2C_SlaveTransmitAckEvent|enumerator|kLPI2C_SlaveTransmitAckEvent = 0x08U, /*!< Callback needs to either transmit an ACK or NACK. */
DECL|kLPI2C_SlaveTransmitAckFlag|enumerator|kLPI2C_SlaveTransmitAckFlag = LPI2C_SSR_TAF_MASK, /*!< Transmit ACK flag */
DECL|kLPI2C_SlaveTransmitEvent|enumerator|kLPI2C_SlaveTransmitEvent = 0x02U, /*!< Callback is requested to provide data to transmit
DECL|kLPI2C_SlaveTxReadyFlag|enumerator|kLPI2C_SlaveTxReadyFlag = LPI2C_SSR_TDF_MASK, /*!< Transmit data flag */
DECL|kLPI2C_TransferDefaultFlag|enumerator|kLPI2C_TransferDefaultFlag = 0x00U, /*!< Transfer starts with a start signal, stops with a stop signal. */
DECL|kLPI2C_TransferNoStartFlag|enumerator|kLPI2C_TransferNoStartFlag = 0x01U, /*!< Don't send a start condition, address, and sub address */
DECL|kLPI2C_TransferNoStopFlag|enumerator|kLPI2C_TransferNoStopFlag = 0x04U, /*!< Don't send a stop condition. */
DECL|kLPI2C_TransferRepeatedStartFlag|enumerator|kLPI2C_TransferRepeatedStartFlag = 0x02U, /*!< Send a repeated start condition */
DECL|kLPI2C_Write|enumerator|kLPI2C_Write = 0U, /*!< Master transmit. */
DECL|kStatus_LPI2C_ArbitrationLost|enumerator|kStatus_LPI2C_ArbitrationLost = MAKE_STATUS(kStatusGroup_LPI2C, 5), /*!< Arbitration lost error. */
DECL|kStatus_LPI2C_BitError|enumerator|kStatus_LPI2C_BitError = MAKE_STATUS(kStatusGroup_LPI2C, 4), /*!< Transferred bit was not seen on the bus. */
DECL|kStatus_LPI2C_Busy|enumerator|kStatus_LPI2C_Busy = MAKE_STATUS(kStatusGroup_LPI2C, 0), /*!< The master is already performing a transfer. */
DECL|kStatus_LPI2C_DmaRequestFail|enumerator|kStatus_LPI2C_DmaRequestFail = MAKE_STATUS(kStatusGroup_LPI2C, 8), /*!< DMA request failed. */
DECL|kStatus_LPI2C_FifoError|enumerator|kStatus_LPI2C_FifoError = MAKE_STATUS(kStatusGroup_LPI2C, 3), /*!< FIFO under run or overrun. */
DECL|kStatus_LPI2C_Idle|enumerator|kStatus_LPI2C_Idle = MAKE_STATUS(kStatusGroup_LPI2C, 1), /*!< The slave driver is idle. */
DECL|kStatus_LPI2C_Nak|enumerator|kStatus_LPI2C_Nak = MAKE_STATUS(kStatusGroup_LPI2C, 2), /*!< The slave device sent a NAK in response to a byte. */
DECL|kStatus_LPI2C_NoTransferInProgress|enumerator|kStatus_LPI2C_NoTransferInProgress =
DECL|kStatus_LPI2C_PinLowTimeout|enumerator|kStatus_LPI2C_PinLowTimeout =
DECL|kStatus_LPI2C_Timeout|enumerator|kStatus_LPI2C_Timeout = MAKE_STATUS(kStatusGroup_LPI2C, 9), /*!< Timeout poling status flags. */
DECL|lpi2c_data_match_config_mode_t|typedef|} lpi2c_data_match_config_mode_t;
DECL|lpi2c_data_match_config_t|typedef|} lpi2c_data_match_config_t;
DECL|lpi2c_direction_t|typedef|} lpi2c_direction_t;
DECL|lpi2c_host_request_polarity_t|typedef|} lpi2c_host_request_polarity_t;
DECL|lpi2c_host_request_source_t|typedef|} lpi2c_host_request_source_t;
DECL|lpi2c_master_config_t|typedef|} lpi2c_master_config_t;
DECL|lpi2c_master_handle_t|typedef|typedef struct _lpi2c_master_handle lpi2c_master_handle_t;
DECL|lpi2c_master_pin_config_t|typedef|} lpi2c_master_pin_config_t;
DECL|lpi2c_master_transfer_callback_t|typedef|typedef void (*lpi2c_master_transfer_callback_t)(LPI2C_Type *base,
DECL|lpi2c_master_transfer_t|typedef|typedef struct _lpi2c_master_transfer lpi2c_master_transfer_t;
DECL|lpi2c_slave_address_match_t|typedef|} lpi2c_slave_address_match_t;
DECL|lpi2c_slave_config_t|typedef|} lpi2c_slave_config_t;
DECL|lpi2c_slave_handle_t|typedef|typedef struct _lpi2c_slave_handle lpi2c_slave_handle_t;
DECL|lpi2c_slave_transfer_callback_t|typedef|typedef void (*lpi2c_slave_transfer_callback_t)(LPI2C_Type *base, lpi2c_slave_transfer_t *transfer, void *userData);
DECL|lpi2c_slave_transfer_event_t|typedef|} lpi2c_slave_transfer_event_t;
DECL|lpi2c_slave_transfer_t|typedef|} lpi2c_slave_transfer_t;
DECL|match0|member|uint32_t match0; /*!< Match value 0. */
DECL|match1|member|uint32_t match1; /*!< Match value 1. */
DECL|matchMode|member|lpi2c_data_match_config_mode_t matchMode; /*!< Data match configuration setting. */
DECL|pinConfig|member|lpi2c_master_pin_config_t pinConfig; /*!< The pin configuration option. */
DECL|pinLowTimeout_ns|member|uint32_t pinLowTimeout_ns; /*!< Pin low timeout in nanoseconds. Set to 0 to disable. */
DECL|polarity|member|lpi2c_host_request_polarity_t polarity; /*!< Host request pin polarity. */
DECL|receivedAddress|member|uint8_t receivedAddress; /*!< Matching address send by master. */
DECL|remainingBytes|member|uint16_t remainingBytes; /*!< Remaining byte count in current state. */
DECL|rxDataMatchOnly|member|bool rxDataMatchOnly; /*!< When set to true, received data is ignored until a successful match. */
DECL|sclGlitchFilterWidth_ns|member|uint32_t sclGlitchFilterWidth_ns; /*!< Width in nanoseconds of the digital filter on the SCL signal. */
DECL|sclGlitchFilterWidth_ns|member|uint8_t sclGlitchFilterWidth_ns; /*!< Width in nanoseconds of glitch filter on SCL pin. Set to 0 to disable. */
DECL|sclStall|member|} sclStall;
DECL|sdaGlitchFilterWidth_ns|member|uint32_t sdaGlitchFilterWidth_ns; /*!< Width in nanoseconds of the digital filter on the SDA signal. */
DECL|sdaGlitchFilterWidth_ns|member|uint8_t sdaGlitchFilterWidth_ns; /*!< Width in nanoseconds of glitch filter on SDA pin. Set to 0 to disable. */
DECL|slaveAddress|member|uint16_t slaveAddress; /*!< The 7-bit slave address. */
DECL|source|member|lpi2c_host_request_source_t source; /*!< Host request source. */
DECL|state|member|uint8_t state; /*!< Transfer state machine current state. */
DECL|subaddressSize|member|size_t subaddressSize; /*!< Length of sub address to send in bytes. Maximum size is 4 bytes. */
DECL|subaddress|member|uint32_t subaddress; /*!< Sub address. Transferred MSB first. */
DECL|transferredCount|member|size_t transferredCount; /*!< Number of bytes actually transferred since start or last repeated start. */
DECL|transferredCount|member|uint32_t transferredCount; /*!< Count of bytes transferred. */
DECL|transfer|member|lpi2c_master_transfer_t transfer; /*!< Copy of the current transfer info. */
DECL|transfer|member|lpi2c_slave_transfer_t transfer; /*!< LPI2C slave transfer copy. */
DECL|userData|member|void *userData; /*!< Application data passed to callback. */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback. */
DECL|wasTransmit|member|bool wasTransmit; /*!< Whether the last transfer was a transmit. */
