DECL|FSL_LPUART_DRIVER_VERSION|macro|FSL_LPUART_DRIVER_VERSION
DECL|LPUART_EnableRxDMA|function|static inline void LPUART_EnableRxDMA(LPUART_Type *base, bool enable)
DECL|LPUART_EnableRx|function|static inline void LPUART_EnableRx(LPUART_Type *base, bool enable)
DECL|LPUART_EnableTxDMA|function|static inline void LPUART_EnableTxDMA(LPUART_Type *base, bool enable)
DECL|LPUART_EnableTx|function|static inline void LPUART_EnableTx(LPUART_Type *base, bool enable)
DECL|LPUART_GetDataRegisterAddress|function|static inline uint32_t LPUART_GetDataRegisterAddress(LPUART_Type *base)
DECL|LPUART_ReadByte|function|static inline uint8_t LPUART_ReadByte(LPUART_Type *base)
DECL|LPUART_SoftwareReset|function|static inline void LPUART_SoftwareReset(LPUART_Type *base)
DECL|LPUART_WriteByte|function|static inline void LPUART_WriteByte(LPUART_Type *base, uint8_t data)
DECL|_FSL_LPUART_H_|macro|_FSL_LPUART_H_
DECL|_lpuart_config|struct|typedef struct _lpuart_config
DECL|_lpuart_data_bits|enum|typedef enum _lpuart_data_bits
DECL|_lpuart_flags|enum|enum _lpuart_flags
DECL|_lpuart_handle|struct|struct _lpuart_handle
DECL|_lpuart_idle_config|enum|typedef enum _lpuart_idle_config
DECL|_lpuart_idle_type_select|enum|typedef enum _lpuart_idle_type_select
DECL|_lpuart_interrupt_enable|enum|enum _lpuart_interrupt_enable
DECL|_lpuart_parity_mode|enum|typedef enum _lpuart_parity_mode
DECL|_lpuart_status|enum|enum _lpuart_status
DECL|_lpuart_stop_bit_count|enum|typedef enum _lpuart_stop_bit_count
DECL|_lpuart_transfer|struct|typedef struct _lpuart_transfer
DECL|_lpuart_transmit_cts_config|enum|typedef enum _lpuart_transmit_cts_config
DECL|_lpuart_transmit_cts_source|enum|typedef enum _lpuart_transmit_cts_source
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< LPUART baud rate */
DECL|callback|member|lpuart_transfer_callback_t callback; /*!< Callback function. */
DECL|dataBitsCount|member|lpuart_data_bits_t dataBitsCount; /*!< Data bits count, eight (default), seven */
DECL|dataSize|member|size_t dataSize; /*!< The byte count to be transfer. */
DECL|data|member|uint8_t *data; /*!< The buffer of data to be transfer.*/
DECL|enableRxRTS|member|bool enableRxRTS; /*!< RX RTS enable */
DECL|enableRx|member|bool enableRx; /*!< Enable RX */
DECL|enableTxCTS|member|bool enableTxCTS; /*!< TX CTS enable */
DECL|enableTx|member|bool enableTx; /*!< Enable TX */
DECL|isMsb|member|bool isMsb; /*!< Data bits order, LSB (default), MSB */
DECL|isSevenDataBits|member|bool isSevenDataBits; /*!< Seven data bits flag. */
DECL|kLPUART_CtsSampleAtIdle|enumerator|kLPUART_CtsSampleAtIdle = 1U, /*!< CTS input is sampled when the transmitter is idle */
DECL|kLPUART_CtsSampleAtStart|enumerator|kLPUART_CtsSampleAtStart = 0U, /*!< CTS input is sampled at the start of each character. */
DECL|kLPUART_CtsSourceMatchResult|enumerator|kLPUART_CtsSourceMatchResult = 1U, /*!< CTS resource is the match result. */
DECL|kLPUART_CtsSourcePin|enumerator|kLPUART_CtsSourcePin = 0U, /*!< CTS resource is the LPUART_CTS pin. */
DECL|kLPUART_DataMatch1Flag|enumerator|kLPUART_DataMatch1Flag = LPUART_STAT_MA1F_MASK, /*!< The next character to be read from LPUART_DATA matches MA1*/
DECL|kLPUART_DataMatch2Flag|enumerator|kLPUART_DataMatch2Flag = LPUART_STAT_MA2F_MASK, /*!< The next character to be read from LPUART_DATA matches MA2*/
DECL|kLPUART_EightDataBits|enumerator|kLPUART_EightDataBits = 0x0U, /*!< Eight data bit */
DECL|kLPUART_FramingErrorFlag|enumerator|kLPUART_FramingErrorFlag =
DECL|kLPUART_FramingErrorInterruptEnable|enumerator|kLPUART_FramingErrorInterruptEnable = (LPUART_CTRL_FEIE_MASK), /*!< Framing error flag. */
DECL|kLPUART_IdleCharacter128|enumerator|kLPUART_IdleCharacter128 = 7U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter16|enumerator|kLPUART_IdleCharacter16 = 4U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter1|enumerator|kLPUART_IdleCharacter1 = 0U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter2|enumerator|kLPUART_IdleCharacter2 = 1U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter32|enumerator|kLPUART_IdleCharacter32 = 5U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter4|enumerator|kLPUART_IdleCharacter4 = 2U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter64|enumerator|kLPUART_IdleCharacter64 = 6U, /*!< the number of idle characters. */
DECL|kLPUART_IdleCharacter8|enumerator|kLPUART_IdleCharacter8 = 3U, /*!< the number of idle characters. */
DECL|kLPUART_IdleLineFlag|enumerator|kLPUART_IdleLineFlag = (LPUART_STAT_IDLE_MASK), /*!< Idle line detect flag, sets when idle line detected */
DECL|kLPUART_IdleLineInterruptEnable|enumerator|kLPUART_IdleLineInterruptEnable = (LPUART_CTRL_ILIE_MASK), /*!< Idle line. */
DECL|kLPUART_IdleTypeStartBit|enumerator|kLPUART_IdleTypeStartBit = 0U, /*!< Start counting after a valid start bit. */
DECL|kLPUART_IdleTypeStopBit|enumerator|kLPUART_IdleTypeStopBit = 1U, /*!< Start conuting after a stop bit. */
DECL|kLPUART_LinBreakFlag|enumerator|kLPUART_LinBreakFlag = (LPUART_STAT_LBKDIF_MASK), /*!< LIN break detect interrupt flag, sets when LIN break char
DECL|kLPUART_LinBreakInterruptEnable|enumerator|kLPUART_LinBreakInterruptEnable = (LPUART_BAUD_LBKDIE_MASK >> 8), /*!< LIN break detect. */
DECL|kLPUART_NoiseErrorFlag|enumerator|kLPUART_NoiseErrorFlag = (LPUART_STAT_NF_MASK), /*!< Receive takes 3 samples of each received bit. If any of these
DECL|kLPUART_NoiseErrorInRxDataRegFlag|enumerator|kLPUART_NoiseErrorInRxDataRegFlag =
DECL|kLPUART_NoiseErrorInterruptEnable|enumerator|kLPUART_NoiseErrorInterruptEnable = (LPUART_CTRL_NEIE_MASK), /*!< Noise error flag. */
DECL|kLPUART_OneStopBit|enumerator|kLPUART_OneStopBit = 0U, /*!< One stop bit */
DECL|kLPUART_ParityDisabled|enumerator|kLPUART_ParityDisabled = 0x0U, /*!< Parity disabled */
DECL|kLPUART_ParityErrorFlag|enumerator|kLPUART_ParityErrorFlag = (LPUART_STAT_PF_MASK), /*!< If parity enabled, sets upon parity error detection */
DECL|kLPUART_ParityErrorInRxDataRegFlag|enumerator|kLPUART_ParityErrorInRxDataRegFlag =
DECL|kLPUART_ParityErrorInterruptEnable|enumerator|kLPUART_ParityErrorInterruptEnable = (LPUART_CTRL_PEIE_MASK), /*!< Parity error flag. */
DECL|kLPUART_ParityEven|enumerator|kLPUART_ParityEven = 0x2U, /*!< Parity enabled, type even, bit setting: PE|PT = 10 */
DECL|kLPUART_ParityOdd|enumerator|kLPUART_ParityOdd = 0x3U, /*!< Parity enabled, type odd, bit setting: PE|PT = 11 */
DECL|kLPUART_RxActiveEdgeFlag|enumerator|kLPUART_RxActiveEdgeFlag =
DECL|kLPUART_RxActiveEdgeInterruptEnable|enumerator|kLPUART_RxActiveEdgeInterruptEnable = (LPUART_BAUD_RXEDGIE_MASK >> 8), /*!< Receive Active Edge. */
DECL|kLPUART_RxActiveFlag|enumerator|kLPUART_RxActiveFlag =
DECL|kLPUART_RxDataRegFullFlag|enumerator|kLPUART_RxDataRegFullFlag =
DECL|kLPUART_RxDataRegFullInterruptEnable|enumerator|kLPUART_RxDataRegFullInterruptEnable = (LPUART_CTRL_RIE_MASK), /*!< Receiver data register full. */
DECL|kLPUART_RxFifoEmptyFlag|enumerator|kLPUART_RxFifoEmptyFlag = (LPUART_FIFO_RXEMPT_MASK >> 16), /*!< RXEMPT bit, sets if receive buffer is empty */
DECL|kLPUART_RxFifoUnderflowFlag|enumerator|kLPUART_RxFifoUnderflowFlag =
DECL|kLPUART_RxFifoUnderflowInterruptEnable|enumerator|kLPUART_RxFifoUnderflowInterruptEnable = (LPUART_FIFO_RXUFE_MASK >> 8), /*!< Receive FIFO Underflow. */
DECL|kLPUART_RxOverrunFlag|enumerator|kLPUART_RxOverrunFlag = (LPUART_STAT_OR_MASK), /*!< Receive Overrun, sets when new data is received before data is
DECL|kLPUART_RxOverrunInterruptEnable|enumerator|kLPUART_RxOverrunInterruptEnable = (LPUART_CTRL_ORIE_MASK), /*!< Receiver Overrun. */
DECL|kLPUART_SevenDataBits|enumerator|kLPUART_SevenDataBits = 0x1U, /*!< Seven data bit */
DECL|kLPUART_TransmissionCompleteFlag|enumerator|kLPUART_TransmissionCompleteFlag =
DECL|kLPUART_TransmissionCompleteInterruptEnable|enumerator|kLPUART_TransmissionCompleteInterruptEnable = (LPUART_CTRL_TCIE_MASK), /*!< Transmission complete. */
DECL|kLPUART_TwoStopBit|enumerator|kLPUART_TwoStopBit = 1U, /*!< Two stop bits */
DECL|kLPUART_TxDataRegEmptyFlag|enumerator|kLPUART_TxDataRegEmptyFlag =
DECL|kLPUART_TxDataRegEmptyInterruptEnable|enumerator|kLPUART_TxDataRegEmptyInterruptEnable = (LPUART_CTRL_TIE_MASK), /*!< Transmit data register empty. */
DECL|kLPUART_TxFifoEmptyFlag|enumerator|kLPUART_TxFifoEmptyFlag = (LPUART_FIFO_TXEMPT_MASK >> 16), /*!< TXEMPT bit, sets if transmit buffer is empty */
DECL|kLPUART_TxFifoOverflowFlag|enumerator|kLPUART_TxFifoOverflowFlag =
DECL|kLPUART_TxFifoOverflowInterruptEnable|enumerator|kLPUART_TxFifoOverflowInterruptEnable = (LPUART_FIFO_TXOFE_MASK >> 8), /*!< Transmit FIFO Overflow. */
DECL|kStatus_LPUART_BaudrateNotSupport|enumerator|kStatus_LPUART_BaudrateNotSupport =
DECL|kStatus_LPUART_Error|enumerator|kStatus_LPUART_Error = MAKE_STATUS(kStatusGroup_LPUART, 7), /*!< Error happens on LPUART. */
DECL|kStatus_LPUART_FlagCannotClearManually|enumerator|kStatus_LPUART_FlagCannotClearManually = MAKE_STATUS(kStatusGroup_LPUART, 6), /*!< Some flag can't manually clear */
DECL|kStatus_LPUART_FramingError|enumerator|kStatus_LPUART_FramingError = MAKE_STATUS(kStatusGroup_LPUART, 11), /*!< LPUART framing error. */
DECL|kStatus_LPUART_IdleLineDetected|enumerator|kStatus_LPUART_IdleLineDetected = MAKE_STATUS(kStatusGroup_LPUART, 14), /*!< IDLE flag. */
DECL|kStatus_LPUART_NoiseError|enumerator|kStatus_LPUART_NoiseError = MAKE_STATUS(kStatusGroup_LPUART, 10), /*!< LPUART noise error. */
DECL|kStatus_LPUART_ParityError|enumerator|kStatus_LPUART_ParityError = MAKE_STATUS(kStatusGroup_LPUART, 12), /*!< LPUART parity error. */
DECL|kStatus_LPUART_RxBusy|enumerator|kStatus_LPUART_RxBusy = MAKE_STATUS(kStatusGroup_LPUART, 1), /*!< RX busy */
DECL|kStatus_LPUART_RxHardwareOverrun|enumerator|kStatus_LPUART_RxHardwareOverrun = MAKE_STATUS(kStatusGroup_LPUART, 9), /*!< LPUART RX receiver overrun. */
DECL|kStatus_LPUART_RxIdle|enumerator|kStatus_LPUART_RxIdle = MAKE_STATUS(kStatusGroup_LPUART, 3), /*!< LPUART receiver is idle. */
DECL|kStatus_LPUART_RxRingBufferOverrun|enumerator|kStatus_LPUART_RxRingBufferOverrun =
DECL|kStatus_LPUART_RxWatermarkTooLarge|enumerator|kStatus_LPUART_RxWatermarkTooLarge = MAKE_STATUS(kStatusGroup_LPUART, 5), /*!< RX FIFO watermark too large */
DECL|kStatus_LPUART_TxBusy|enumerator|kStatus_LPUART_TxBusy = MAKE_STATUS(kStatusGroup_LPUART, 0), /*!< TX busy */
DECL|kStatus_LPUART_TxIdle|enumerator|kStatus_LPUART_TxIdle = MAKE_STATUS(kStatusGroup_LPUART, 2), /*!< LPUART transmitter is idle. */
DECL|kStatus_LPUART_TxWatermarkTooLarge|enumerator|kStatus_LPUART_TxWatermarkTooLarge = MAKE_STATUS(kStatusGroup_LPUART, 4), /*!< TX FIFO watermark too large */
DECL|lpuart_config_t|typedef|} lpuart_config_t;
DECL|lpuart_data_bits_t|typedef|} lpuart_data_bits_t;
DECL|lpuart_handle_t|typedef|typedef struct _lpuart_handle lpuart_handle_t;
DECL|lpuart_idle_config_t|typedef|} lpuart_idle_config_t;
DECL|lpuart_idle_type_select_t|typedef|} lpuart_idle_type_select_t;
DECL|lpuart_parity_mode_t|typedef|} lpuart_parity_mode_t;
DECL|lpuart_stop_bit_count_t|typedef|} lpuart_stop_bit_count_t;
DECL|lpuart_transfer_callback_t|typedef|typedef void (*lpuart_transfer_callback_t)(LPUART_Type *base, lpuart_handle_t *handle, status_t status, void *userData);
DECL|lpuart_transfer_t|typedef|} lpuart_transfer_t;
DECL|lpuart_transmit_cts_config_t|typedef|} lpuart_transmit_cts_config_t;
DECL|lpuart_transmit_cts_source_t|typedef|} lpuart_transmit_cts_source_t;
DECL|parityMode|member|lpuart_parity_mode_t parityMode; /*!< Parity mode, disabled (default), even, odd */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDataSize|member|volatile size_t rxDataSize; /*!< Size of the remaining data to receive. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Address of remaining data to receive. */
DECL|rxFifoWatermark|member|uint8_t rxFifoWatermark; /*!< RX FIFO watermark */
DECL|rxIdleConfig|member|lpuart_idle_config_t rxIdleConfig; /*!< RX IDLE configuration. */
DECL|rxIdleType|member|lpuart_idle_type_select_t rxIdleType; /*!< RX IDLE type. */
DECL|rxRingBufferHead|member|volatile uint16_t rxRingBufferHead; /*!< Index for the driver to store received data into ring buffer. */
DECL|rxRingBufferSize|member|size_t rxRingBufferSize; /*!< Size of the ring buffer. */
DECL|rxRingBufferTail|member|volatile uint16_t rxRingBufferTail; /*!< Index for the user to get data from the ring buffer. */
DECL|rxRingBuffer|member|uint8_t *rxRingBuffer; /*!< Start address of the receiver ring buffer. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state. */
DECL|stopBitCount|member|lpuart_stop_bit_count_t stopBitCount; /*!< Number of stop bits, 1 stop bit (default) or 2 stop bits */
DECL|txCtsConfig|member|lpuart_transmit_cts_config_t txCtsConfig; /*!< TX CTS configure */
DECL|txCtsSource|member|lpuart_transmit_cts_source_t txCtsSource; /*!< TX CTS source */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDataSize|member|volatile size_t txDataSize; /*!< Size of the remaining data to send. */
DECL|txData|member|uint8_t *volatile txData; /*!< Address of remaining data to send. */
DECL|txFifoWatermark|member|uint8_t txFifoWatermark; /*!< TX FIFO watermark */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|userData|member|void *userData; /*!< LPUART callback function parameter.*/
