DECL|CSnPinIndex|member|uint8_t CSnPinIndex; /*!< Pin select for enable. */
DECL|FLEXIO_SPI_DUMMYDATA|macro|FLEXIO_SPI_DUMMYDATA
DECL|FLEXIO_SPI_Enable|function|static inline void FLEXIO_SPI_Enable(FLEXIO_SPI_Type *base, bool enable)
DECL|FLEXIO_SPI_GetRxDataRegisterAddress|function|static inline uint32_t FLEXIO_SPI_GetRxDataRegisterAddress(FLEXIO_SPI_Type *base, flexio_spi_shift_direction_t direction)
DECL|FLEXIO_SPI_GetTxDataRegisterAddress|function|static inline uint32_t FLEXIO_SPI_GetTxDataRegisterAddress(FLEXIO_SPI_Type *base, flexio_spi_shift_direction_t direction)
DECL|FLEXIO_SPI_ReadData|function|static inline uint16_t FLEXIO_SPI_ReadData(FLEXIO_SPI_Type *base, flexio_spi_shift_direction_t direction)
DECL|FLEXIO_SPI_SlaveTransferAbort|function|static inline void FLEXIO_SPI_SlaveTransferAbort(FLEXIO_SPI_Type *base, flexio_spi_slave_handle_t *handle)
DECL|FLEXIO_SPI_SlaveTransferGetCount|function|static inline status_t FLEXIO_SPI_SlaveTransferGetCount(FLEXIO_SPI_Type *base, flexio_spi_slave_handle_t *handle, size_t *count)
DECL|FLEXIO_SPI_Type|typedef|} FLEXIO_SPI_Type;
DECL|FLEXIO_SPI_WriteData|function|static inline void FLEXIO_SPI_WriteData(FLEXIO_SPI_Type *base, flexio_spi_shift_direction_t direction, uint16_t data)
DECL|FSL_FLEXIO_SPI_DRIVER_VERSION|macro|FSL_FLEXIO_SPI_DRIVER_VERSION
DECL|SCKPinIndex|member|uint8_t SCKPinIndex; /*!< Pin select for clock. */
DECL|SDIPinIndex|member|uint8_t SDIPinIndex; /*!< Pin select for data input. */
DECL|SDOPinIndex|member|uint8_t SDOPinIndex; /*!< Pin select for data output. */
DECL|_FSL_FLEXIO_SPI_H_|macro|_FSL_FLEXIO_SPI_H_
DECL|_flexio_spi_clock_phase|enum|typedef enum _flexio_spi_clock_phase
DECL|_flexio_spi_data_bitcount_mode|enum|typedef enum _flexio_spi_data_bitcount_mode
DECL|_flexio_spi_dma_enable|enum|enum _flexio_spi_dma_enable
DECL|_flexio_spi_interrupt_enable|enum|enum _flexio_spi_interrupt_enable
DECL|_flexio_spi_master_config|struct|typedef struct _flexio_spi_master_config
DECL|_flexio_spi_master_handle|struct|struct _flexio_spi_master_handle
DECL|_flexio_spi_shift_direction|enum|typedef enum _flexio_spi_shift_direction
DECL|_flexio_spi_slave_config|struct|typedef struct _flexio_spi_slave_config
DECL|_flexio_spi_status_flags|enum|enum _flexio_spi_status_flags
DECL|_flexio_spi_status|enum|enum _flexio_spi_status
DECL|_flexio_spi_transfer_flags|enum|enum _flexio_spi_transfer_flags
DECL|_flexio_spi_transfer|struct|typedef struct _flexio_spi_transfer
DECL|_flexio_spi_type|struct|typedef struct _flexio_spi_type
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Baud rate in Bps. */
DECL|bytePerFrame|member|uint8_t bytePerFrame; /*!< SPI mode, 2bytes or 1byte in a frame */
DECL|callback|member|flexio_spi_master_transfer_callback_t callback; /*!< FlexIO SPI callback. */
DECL|dataMode|member|flexio_spi_data_bitcount_mode_t dataMode; /*!< 8bit or 16bit mode. */
DECL|dataMode|member|flexio_spi_data_bitcount_mode_t dataMode; /*!< 8bit or 16bit mode. */
DECL|dataSize|member|size_t dataSize; /*!< Transfer bytes. */
DECL|direction|member|flexio_spi_shift_direction_t direction; /*!< Shift direction. */
DECL|enableFastAccess|member|bool enableFastAccess; /*!< Enable/disable fast access to FlexIO registers,
DECL|enableFastAccess|member|bool enableFastAccess; /*!< Enable/disable fast access to FlexIO registers,
DECL|enableInDebug|member|bool enableInDebug; /*!< Enable/disable FlexIO operation in debug mode. */
DECL|enableInDebug|member|bool enableInDebug; /*!< Enable/disable FlexIO operation in debug mode. */
DECL|enableInDoze|member|bool enableInDoze; /*!< Enable/disable FlexIO operation in doze mode. */
DECL|enableInDoze|member|bool enableInDoze; /*!< Enable/disable FlexIO operation in doze mode. */
DECL|enableMaster|member|bool enableMaster; /*!< Enable/disable FlexIO SPI master after configuration. */
DECL|enableSlave|member|bool enableSlave; /*!< Enable/disable FlexIO SPI slave after configuration. */
DECL|flags|member|uint8_t flags; /*!< FlexIO SPI control flag, MSB first or LSB first. */
DECL|flexioBase|member|FLEXIO_Type *flexioBase; /*!< FlexIO base pointer. */
DECL|flexio_spi_clock_phase_t|typedef|} flexio_spi_clock_phase_t;
DECL|flexio_spi_data_bitcount_mode_t|typedef|} flexio_spi_data_bitcount_mode_t;
DECL|flexio_spi_master_config_t|typedef|} flexio_spi_master_config_t;
DECL|flexio_spi_master_handle_t|typedef|typedef struct _flexio_spi_master_handle flexio_spi_master_handle_t;
DECL|flexio_spi_master_transfer_callback_t|typedef|typedef void (*flexio_spi_master_transfer_callback_t)(FLEXIO_SPI_Type *base,
DECL|flexio_spi_shift_direction_t|typedef|} flexio_spi_shift_direction_t;
DECL|flexio_spi_slave_config_t|typedef|} flexio_spi_slave_config_t;
DECL|flexio_spi_slave_handle_t|typedef|typedef flexio_spi_master_handle_t flexio_spi_slave_handle_t;
DECL|flexio_spi_slave_transfer_callback_t|typedef|typedef void (*flexio_spi_slave_transfer_callback_t)(FLEXIO_SPI_Type *base,
DECL|flexio_spi_transfer_t|typedef|} flexio_spi_transfer_t;
DECL|kFLEXIO_SPI_16BitMode|enumerator|kFLEXIO_SPI_16BitMode = 0x10U, /*!< 16-bit data transmission mode. */
DECL|kFLEXIO_SPI_16bitLsb|enumerator|kFLEXIO_SPI_16bitLsb = 0xaU, /*!< FlexIO SPI 16-bit LSB first */
DECL|kFLEXIO_SPI_16bitMsb|enumerator|kFLEXIO_SPI_16bitMsb = 0x9U, /*!< FlexIO SPI 16-bit MSB first */
DECL|kFLEXIO_SPI_8BitMode|enumerator|kFLEXIO_SPI_8BitMode = 0x08U, /*!< 8-bit data transmission mode. */
DECL|kFLEXIO_SPI_8bitLsb|enumerator|kFLEXIO_SPI_8bitLsb = 0x2U, /*!< FlexIO SPI 8-bit LSB first */
DECL|kFLEXIO_SPI_8bitMsb|enumerator|kFLEXIO_SPI_8bitMsb = 0x1U, /*!< FlexIO SPI 8-bit MSB first */
DECL|kFLEXIO_SPI_ClockPhaseFirstEdge|enumerator|kFLEXIO_SPI_ClockPhaseFirstEdge = 0x0U, /*!< First edge on SPSCK occurs at the middle of the first
DECL|kFLEXIO_SPI_ClockPhaseSecondEdge|enumerator|kFLEXIO_SPI_ClockPhaseSecondEdge = 0x1U, /*!< First edge on SPSCK occurs at the start of the
DECL|kFLEXIO_SPI_DmaAllEnable|enumerator|kFLEXIO_SPI_DmaAllEnable = 0x3U, /*!< All DMA request source*/
DECL|kFLEXIO_SPI_LsbFirst|enumerator|kFLEXIO_SPI_LsbFirst = 1, /*!< Data transfers start with least significant bit. */
DECL|kFLEXIO_SPI_MsbFirst|enumerator|kFLEXIO_SPI_MsbFirst = 0, /*!< Data transfers start with most significant bit. */
DECL|kFLEXIO_SPI_RxBufferFullFlag|enumerator|kFLEXIO_SPI_RxBufferFullFlag = 0x2U, /*!< Receive buffer full flag. */
DECL|kFLEXIO_SPI_RxDmaEnable|enumerator|kFLEXIO_SPI_RxDmaEnable = 0x2U, /*!< Rx DMA request source */
DECL|kFLEXIO_SPI_RxFullInterruptEnable|enumerator|kFLEXIO_SPI_RxFullInterruptEnable = 0x2U, /*!< Receive buffer full interrupt enable. */
DECL|kFLEXIO_SPI_TxBufferEmptyFlag|enumerator|kFLEXIO_SPI_TxBufferEmptyFlag = 0x1U, /*!< Transmit buffer empty flag. */
DECL|kFLEXIO_SPI_TxDmaEnable|enumerator|kFLEXIO_SPI_TxDmaEnable = 0x1U, /*!< Tx DMA request source */
DECL|kFLEXIO_SPI_TxEmptyInterruptEnable|enumerator|kFLEXIO_SPI_TxEmptyInterruptEnable = 0x1U, /*!< Transmit buffer empty interrupt enable. */
DECL|kStatus_FLEXIO_SPI_Busy|enumerator|kStatus_FLEXIO_SPI_Busy = MAKE_STATUS(kStatusGroup_FLEXIO_SPI, 1), /*!< FlexIO SPI is busy. */
DECL|kStatus_FLEXIO_SPI_Error|enumerator|kStatus_FLEXIO_SPI_Error = MAKE_STATUS(kStatusGroup_FLEXIO_SPI, 3), /*!< FlexIO SPI error. */
DECL|kStatus_FLEXIO_SPI_Idle|enumerator|kStatus_FLEXIO_SPI_Idle = MAKE_STATUS(kStatusGroup_FLEXIO_SPI, 2), /*!< SPI is idle */
DECL|phase|member|flexio_spi_clock_phase_t phase; /*!< Clock phase. */
DECL|phase|member|flexio_spi_clock_phase_t phase; /*!< Clock phase. */
DECL|rxData|member|uint8_t *rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *rxData; /*!< Receive buffer. */
DECL|rxRemainingBytes|member|volatile size_t rxRemainingBytes; /*!< Receive data remaining in bytes. */
DECL|shifterIndex|member|uint8_t shifterIndex[2]; /*!< Shifter index used in FlexIO SPI. */
DECL|state|member|volatile uint32_t state; /*!< FlexIO SPI internal state. */
DECL|timerIndex|member|uint8_t timerIndex[2]; /*!< Timer index used in FlexIO SPI. */
DECL|transferSize|member|size_t transferSize; /*!< Total bytes to be transferred. */
DECL|txData|member|uint8_t *txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *txData; /*!< Transfer buffer. */
DECL|txRemainingBytes|member|volatile size_t txRemainingBytes; /*!< Send data remaining in bytes. */
DECL|userData|member|void *userData; /*!< Callback parameter. */
