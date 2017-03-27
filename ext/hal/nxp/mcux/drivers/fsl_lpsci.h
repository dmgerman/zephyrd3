DECL|FSL_LPSCI_DRIVER_VERSION|macro|FSL_LPSCI_DRIVER_VERSION
DECL|LPSCI_EnableRxDMA|function|static inline void LPSCI_EnableRxDMA(UART0_Type *base, bool enable)
DECL|LPSCI_EnableRx|function|static inline void LPSCI_EnableRx(UART0_Type *base, bool enable)
DECL|LPSCI_EnableTxDMA|function|static inline void LPSCI_EnableTxDMA(UART0_Type *base, bool enable)
DECL|LPSCI_EnableTx|function|static inline void LPSCI_EnableTx(UART0_Type *base, bool enable)
DECL|LPSCI_GetDataRegisterAddress|function|static inline uint32_t LPSCI_GetDataRegisterAddress(UART0_Type *base)
DECL|LPSCI_ReadByte|function|static inline uint8_t LPSCI_ReadByte(UART0_Type *base)
DECL|LPSCI_WriteByte|function|static inline void LPSCI_WriteByte(UART0_Type *base, uint8_t data)
DECL|_FSL_LPSCI_H_|macro|_FSL_LPSCI_H_
DECL|_lpsci_config|struct|typedef struct _lpsci_config
DECL|_lpsci_handle|struct|struct _lpsci_handle
DECL|_lpsci_interrupt_enable_t|enum|enum _lpsci_interrupt_enable_t
DECL|_lpsci_parity_mode|enum|typedef enum _lpsci_parity_mode
DECL|_lpsci_status_flag_t|enum|enum _lpsci_status_flag_t
DECL|_lpsci_status|enum|enum _lpsci_status
DECL|_lpsci_stop_bit_count|enum|typedef enum _lpsci_stop_bit_count
DECL|_lpsci_transfer|struct|typedef struct _lpsci_transfer
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< LPSCI baud rate */
DECL|callback|member|lpsci_transfer_callback_t callback; /*!< Callback function. */
DECL|dataSize|member|size_t dataSize; /*!< The byte count to be transfer. */
DECL|data|member|uint8_t *data; /*!< The buffer of data to be transfer.*/
DECL|enableRx|member|bool enableRx; /*!< Enable RX */
DECL|enableTx|member|bool enableTx; /*!< Enable TX */
DECL|kLPSCI_AllInterruptsEnable|enumerator|kLPSCI_AllInterruptsEnable = kLPSCI_RxActiveEdgeInterruptEnable | kLPSCI_TxDataRegEmptyInterruptEnable |
DECL|kLPSCI_FramingErrorFlag|enumerator|kLPSCI_FramingErrorFlag =
DECL|kLPSCI_FramingErrorInterruptEnable|enumerator|kLPSCI_FramingErrorInterruptEnable = (UART0_C3_FEIE_MASK << 16), /*!< Framing error flag interrupt. */
DECL|kLPSCI_IdleLineFlag|enumerator|kLPSCI_IdleLineFlag = (UART0_S1_IDLE_MASK), /*!< Idle line detect flag, sets when idle line detected */
DECL|kLPSCI_IdleLineInterruptEnable|enumerator|kLPSCI_IdleLineInterruptEnable = (UART0_C2_ILIE_MASK << 8), /*!< Idle line interrupt. */
DECL|kLPSCI_LinBreakFlag|enumerator|kLPSCI_LinBreakFlag =
DECL|kLPSCI_LinBreakInterruptEnable|enumerator|kLPSCI_LinBreakInterruptEnable = (UART0_BDH_LBKDIE_MASK), /*!< LIN break detect interrupt. */
DECL|kLPSCI_NoiseErrorFlag|enumerator|kLPSCI_NoiseErrorFlag = (UART0_S1_NF_MASK), /*!< Rx takes 3 samples of each received bit. If any of these samples
DECL|kLPSCI_NoiseErrorInRxDataRegFlag|enumerator|kLPSCI_NoiseErrorInRxDataRegFlag =
DECL|kLPSCI_NoiseErrorInterruptEnable|enumerator|kLPSCI_NoiseErrorInterruptEnable = (UART0_C3_NEIE_MASK << 16), /*!< Noise error flag interrupt. */
DECL|kLPSCI_OneStopBit|enumerator|kLPSCI_OneStopBit = 0U, /*!< One stop bit */
DECL|kLPSCI_ParityDisabled|enumerator|kLPSCI_ParityDisabled = 0x0U, /*!< Parity disabled */
DECL|kLPSCI_ParityErrorFlag|enumerator|kLPSCI_ParityErrorFlag = (UART0_S1_PF_MASK), /*!< If parity enabled, sets upon parity error detection */
DECL|kLPSCI_ParityErrorInRxDataRegFlag|enumerator|kLPSCI_ParityErrorInRxDataRegFlag =
DECL|kLPSCI_ParityErrorInterruptEnable|enumerator|kLPSCI_ParityErrorInterruptEnable = (UART0_C3_PEIE_MASK << 16), /*!< Parity error flag interrupt. */
DECL|kLPSCI_ParityEven|enumerator|kLPSCI_ParityEven = 0x2U, /*!< Parity enabled, type even, bit setting: PE|PT = 10 */
DECL|kLPSCI_ParityOdd|enumerator|kLPSCI_ParityOdd = 0x3U, /*!< Parity enabled, type odd, bit setting: PE|PT = 11 */
DECL|kLPSCI_RxActiveEdgeFlag|enumerator|kLPSCI_RxActiveEdgeFlag =
DECL|kLPSCI_RxActiveEdgeInterruptEnable|enumerator|kLPSCI_RxActiveEdgeInterruptEnable = (UART0_BDH_RXEDGIE_MASK), /*!< RX Active Edge interrupt. */
DECL|kLPSCI_RxActiveFlag|enumerator|kLPSCI_RxActiveFlag =
DECL|kLPSCI_RxDataRegFullFlag|enumerator|kLPSCI_RxDataRegFullFlag =
DECL|kLPSCI_RxDataRegFullInterruptEnable|enumerator|kLPSCI_RxDataRegFullInterruptEnable = (UART0_C2_RIE_MASK << 8), /*!< Receiver data register full interrupt. */
DECL|kLPSCI_RxOverrunFlag|enumerator|kLPSCI_RxOverrunFlag =
DECL|kLPSCI_RxOverrunInterruptEnable|enumerator|kLPSCI_RxOverrunInterruptEnable = (UART0_C3_ORIE_MASK << 16), /*!< Receiver Overrun interrupt. */
DECL|kLPSCI_TransmissionCompleteFlag|enumerator|kLPSCI_TransmissionCompleteFlag =
DECL|kLPSCI_TransmissionCompleteInterruptEnable|enumerator|kLPSCI_TransmissionCompleteInterruptEnable = (UART0_C2_TCIE_MASK << 8), /*!< Transmission complete interrupt. */
DECL|kLPSCI_TwoStopBit|enumerator|kLPSCI_TwoStopBit = 1U, /*!< Two stop bits */
DECL|kLPSCI_TxDataRegEmptyFlag|enumerator|kLPSCI_TxDataRegEmptyFlag = (UART0_S1_TDRE_MASK), /*!< Tx data register empty flag, sets when Tx buffer is empty */
DECL|kLPSCI_TxDataRegEmptyInterruptEnable|enumerator|kLPSCI_TxDataRegEmptyInterruptEnable = (UART0_C2_TIE_MASK << 8), /*!< Transmit data register empty interrupt. */
DECL|kStatus_LPSCI_BaudrateNotSupport|enumerator|kStatus_LPSCI_BaudrateNotSupport =
DECL|kStatus_LPSCI_Error|enumerator|kStatus_LPSCI_Error = MAKE_STATUS(kStatusGroup_LPSCI, 6), /*!< Error happens on LPSCI */
DECL|kStatus_LPSCI_FlagCannotClearManually|enumerator|kStatus_LPSCI_FlagCannotClearManually =
DECL|kStatus_LPSCI_FramingError|enumerator|kStatus_LPSCI_FramingError = MAKE_STATUS(kStatusGroup_LPSCI, 10), /*!< LPSCI framing error. */
DECL|kStatus_LPSCI_NoiseError|enumerator|kStatus_LPSCI_NoiseError = MAKE_STATUS(kStatusGroup_LPSCI, 9), /*!< LPSCI noise error. */
DECL|kStatus_LPSCI_ParityError|enumerator|kStatus_LPSCI_ParityError = MAKE_STATUS(kStatusGroup_LPSCI, 11), /*!< LPSCI parity error. */
DECL|kStatus_LPSCI_RxBusy|enumerator|kStatus_LPSCI_RxBusy = MAKE_STATUS(kStatusGroup_LPSCI, 1), /*!< Receiver is busy. */
DECL|kStatus_LPSCI_RxHardwareOverrun|enumerator|kStatus_LPSCI_RxHardwareOverrun = MAKE_STATUS(kStatusGroup_LPSCI, 8), /*!< LPSCI RX receiver overrun. */
DECL|kStatus_LPSCI_RxIdle|enumerator|kStatus_LPSCI_RxIdle = MAKE_STATUS(kStatusGroup_LPSCI, 3), /*!< Receiver is idle. */
DECL|kStatus_LPSCI_RxRingBufferOverrun|enumerator|kStatus_LPSCI_RxRingBufferOverrun =
DECL|kStatus_LPSCI_TxBusy|enumerator|kStatus_LPSCI_TxBusy = MAKE_STATUS(kStatusGroup_LPSCI, 0), /*!< Transmitter is busy. */
DECL|kStatus_LPSCI_TxIdle|enumerator|kStatus_LPSCI_TxIdle = MAKE_STATUS(kStatusGroup_LPSCI, 2), /*!< Transmitter is idle. */
DECL|lpsci_config_t|typedef|} lpsci_config_t;
DECL|lpsci_handle_t|typedef|typedef struct _lpsci_handle lpsci_handle_t;
DECL|lpsci_parity_mode_t|typedef|} lpsci_parity_mode_t;
DECL|lpsci_stop_bit_count_t|typedef|} lpsci_stop_bit_count_t;
DECL|lpsci_transfer_callback_t|typedef|typedef void (*lpsci_transfer_callback_t)(UART0_Type *base, lpsci_handle_t *handle, status_t status, void *userData);
DECL|lpsci_transfer_t|typedef|} lpsci_transfer_t;
DECL|parityMode|member|lpsci_parity_mode_t parityMode; /*!< Parity mode, disabled (default), even, odd */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDataSize|member|volatile size_t rxDataSize; /*!< Size of the remaining data to receive. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Address of remaining data to receive. */
DECL|rxRingBufferHead|member|volatile uint16_t rxRingBufferHead; /*!< Index for the driver to store received data into ring buffer. */
DECL|rxRingBufferSize|member|size_t rxRingBufferSize; /*!< Size of the ring buffer. */
DECL|rxRingBufferTail|member|volatile uint16_t rxRingBufferTail; /*!< Index for the user to get data from the ring buffer. */
DECL|rxRingBuffer|member|uint8_t *rxRingBuffer; /*!< Start address of the receiver ring buffer. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|stopBitCount|member|lpsci_stop_bit_count_t stopBitCount; /*!< Number of stop bits, 1 stop bit (default) or 2 stop bits */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDataSize|member|volatile size_t txDataSize; /*!< Size of the remaining data to send. */
DECL|txData|member|uint8_t *volatile txData; /*!< Address of remaining data to send. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|userData|member|void *userData; /*!< LPSCI callback function parameter.*/
