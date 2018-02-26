DECL|FSL_UART_DRIVER_VERSION|macro|FSL_UART_DRIVER_VERSION
DECL|UART_EnableRxDMA|function|static inline void UART_EnableRxDMA(UART_Type *base, bool enable)
DECL|UART_EnableRx|function|static inline void UART_EnableRx(UART_Type *base, bool enable)
DECL|UART_EnableTxDMA|function|static inline void UART_EnableTxDMA(UART_Type *base, bool enable)
DECL|UART_EnableTx|function|static inline void UART_EnableTx(UART_Type *base, bool enable)
DECL|UART_GetDataRegisterAddress|function|static inline uint32_t UART_GetDataRegisterAddress(UART_Type *base)
DECL|UART_ReadByte|function|static inline uint8_t UART_ReadByte(UART_Type *base)
DECL|UART_WriteByte|function|static inline void UART_WriteByte(UART_Type *base, uint8_t data)
DECL|_FSL_UART_H_|macro|_FSL_UART_H_
DECL|_uart_config|struct|typedef struct _uart_config
DECL|_uart_flags|enum|enum _uart_flags
DECL|_uart_handle|struct|struct _uart_handle
DECL|_uart_interrupt_enable|enum|enum _uart_interrupt_enable
DECL|_uart_parity_mode|enum|typedef enum _uart_parity_mode
DECL|_uart_status|enum|enum _uart_status
DECL|_uart_stop_bit_count|enum|typedef enum _uart_stop_bit_count
DECL|_uart_transfer|struct|typedef struct _uart_transfer
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< UART baud rate */
DECL|callback|member|uart_transfer_callback_t callback; /*!< Callback function. */
DECL|dataSize|member|size_t dataSize; /*!< The byte count to be transfer. */
DECL|data|member|uint8_t *data; /*!< The buffer of data to be transfer.*/
DECL|enableRx|member|bool enableRx; /*!< Enable RX */
DECL|enableTx|member|bool enableTx; /*!< Enable TX */
DECL|kStatus_UART_BaudrateNotSupport|enumerator|kStatus_UART_BaudrateNotSupport =
DECL|kStatus_UART_Error|enumerator|kStatus_UART_Error = MAKE_STATUS(kStatusGroup_UART, 7), /*!< Error happens on UART. */
DECL|kStatus_UART_FlagCannotClearManually|enumerator|kStatus_UART_FlagCannotClearManually =
DECL|kStatus_UART_FramingError|enumerator|kStatus_UART_FramingError = MAKE_STATUS(kStatusGroup_UART, 11), /*!< UART framing error. */
DECL|kStatus_UART_NoiseError|enumerator|kStatus_UART_NoiseError = MAKE_STATUS(kStatusGroup_UART, 10), /*!< UART noise error. */
DECL|kStatus_UART_ParityError|enumerator|kStatus_UART_ParityError = MAKE_STATUS(kStatusGroup_UART, 12), /*!< UART parity error. */
DECL|kStatus_UART_RxBusy|enumerator|kStatus_UART_RxBusy = MAKE_STATUS(kStatusGroup_UART, 1), /*!< Receiver is busy. */
DECL|kStatus_UART_RxHardwareOverrun|enumerator|kStatus_UART_RxHardwareOverrun = MAKE_STATUS(kStatusGroup_UART, 9), /*!< UART RX receiver overrun. */
DECL|kStatus_UART_RxIdle|enumerator|kStatus_UART_RxIdle = MAKE_STATUS(kStatusGroup_UART, 3), /*!< UART receiver is idle. */
DECL|kStatus_UART_RxRingBufferOverrun|enumerator|kStatus_UART_RxRingBufferOverrun = MAKE_STATUS(kStatusGroup_UART, 8), /*!< UART RX software ring buffer overrun. */
DECL|kStatus_UART_RxWatermarkTooLarge|enumerator|kStatus_UART_RxWatermarkTooLarge = MAKE_STATUS(kStatusGroup_UART, 5), /*!< RX FIFO watermark too large */
DECL|kStatus_UART_TxBusy|enumerator|kStatus_UART_TxBusy = MAKE_STATUS(kStatusGroup_UART, 0), /*!< Transmitter is busy. */
DECL|kStatus_UART_TxIdle|enumerator|kStatus_UART_TxIdle = MAKE_STATUS(kStatusGroup_UART, 2), /*!< UART transmitter is idle. */
DECL|kStatus_UART_TxWatermarkTooLarge|enumerator|kStatus_UART_TxWatermarkTooLarge = MAKE_STATUS(kStatusGroup_UART, 4), /*!< TX FIFO watermark too large */
DECL|kUART_AllInterruptsEnable|enumerator|kUART_AllInterruptsEnable =
DECL|kUART_FramingErrorFlag|enumerator|kUART_FramingErrorFlag = (UART_S1_FE_MASK), /*!< Frame error flag, sets if logic 0 was detected
DECL|kUART_FramingErrorInterruptEnable|enumerator|kUART_FramingErrorInterruptEnable = (UART_C3_FEIE_MASK << 16), /*!< Framing error flag interrupt. */
DECL|kUART_IdleLineFlag|enumerator|kUART_IdleLineFlag = (UART_S1_IDLE_MASK), /*!< Idle line detect flag. */
DECL|kUART_IdleLineInterruptEnable|enumerator|kUART_IdleLineInterruptEnable = (UART_C2_ILIE_MASK << 8), /*!< Idle line interrupt. */
DECL|kUART_LinBreakFlag|enumerator|kUART_LinBreakFlag =
DECL|kUART_LinBreakInterruptEnable|enumerator|kUART_LinBreakInterruptEnable = (UART_BDH_LBKDIE_MASK), /*!< LIN break detect interrupt. */
DECL|kUART_NoiseErrorFlag|enumerator|kUART_NoiseErrorFlag = (UART_S1_NF_MASK), /*!< RX takes 3 samples of each received bit.
DECL|kUART_NoiseErrorInRxDataRegFlag|enumerator|kUART_NoiseErrorInRxDataRegFlag = (UART_ED_NOISY_MASK << 16), /*!< Noisy bit, sets if noise detected. */
DECL|kUART_NoiseErrorInterruptEnable|enumerator|kUART_NoiseErrorInterruptEnable = (UART_C3_NEIE_MASK << 16), /*!< Noise error flag interrupt. */
DECL|kUART_OneStopBit|enumerator|kUART_OneStopBit = 0U, /*!< One stop bit */
DECL|kUART_ParityDisabled|enumerator|kUART_ParityDisabled = 0x0U, /*!< Parity disabled */
DECL|kUART_ParityErrorFlag|enumerator|kUART_ParityErrorFlag = (UART_S1_PF_MASK), /*!< If parity enabled, sets upon parity error detection */
DECL|kUART_ParityErrorInRxDataRegFlag|enumerator|kUART_ParityErrorInRxDataRegFlag = (UART_ED_PARITYE_MASK << 16), /*!< Paritye bit, sets if parity error detected. */
DECL|kUART_ParityErrorInterruptEnable|enumerator|kUART_ParityErrorInterruptEnable = (UART_C3_PEIE_MASK << 16), /*!< Parity error flag interrupt. */
DECL|kUART_ParityEven|enumerator|kUART_ParityEven = 0x2U, /*!< Parity enabled, type even, bit setting: PE|PT = 10 */
DECL|kUART_ParityOdd|enumerator|kUART_ParityOdd = 0x3U, /*!< Parity enabled, type odd, bit setting: PE|PT = 11 */
DECL|kUART_RxActiveEdgeFlag|enumerator|kUART_RxActiveEdgeFlag =
DECL|kUART_RxActiveEdgeInterruptEnable|enumerator|kUART_RxActiveEdgeInterruptEnable = (UART_BDH_RXEDGIE_MASK), /*!< RX active edge interrupt. */
DECL|kUART_RxActiveFlag|enumerator|kUART_RxActiveFlag =
DECL|kUART_RxDataRegFullFlag|enumerator|kUART_RxDataRegFullFlag = (UART_S1_RDRF_MASK), /*!< RX data register full flag. */
DECL|kUART_RxDataRegFullInterruptEnable|enumerator|kUART_RxDataRegFullInterruptEnable = (UART_C2_RIE_MASK << 8), /*!< Receiver data register full interrupt. */
DECL|kUART_RxFifoEmptyFlag|enumerator|kUART_RxFifoEmptyFlag = (UART_SFIFO_RXEMPT_MASK << 24), /*!< RXEMPT bit, sets if RX buffer is empty */
DECL|kUART_RxFifoOverflowFlag|enumerator|kUART_RxFifoOverflowFlag = (UART_SFIFO_RXOF_MASK << 24), /*!< RXOF bit, sets if receive buffer overflow */
DECL|kUART_RxFifoOverflowInterruptEnable|enumerator|kUART_RxFifoOverflowInterruptEnable = (UART_CFIFO_RXOFE_MASK << 24), /*!< RX FIFO overflow interrupt. */
DECL|kUART_RxFifoUnderflowFlag|enumerator|kUART_RxFifoUnderflowFlag = (UART_SFIFO_RXUF_MASK << 24), /*!< RXUF bit, sets if receive buffer underflow */
DECL|kUART_RxFifoUnderflowInterruptEnable|enumerator|kUART_RxFifoUnderflowInterruptEnable = (UART_CFIFO_RXUFE_MASK << 24), /*!< RX FIFO underflow interrupt. */
DECL|kUART_RxOverrunFlag|enumerator|kUART_RxOverrunFlag = (UART_S1_OR_MASK), /*!< RX overrun flag. */
DECL|kUART_RxOverrunInterruptEnable|enumerator|kUART_RxOverrunInterruptEnable = (UART_C3_ORIE_MASK << 16), /*!< Receiver overrun interrupt. */
DECL|kUART_TransmissionCompleteFlag|enumerator|kUART_TransmissionCompleteFlag = (UART_S1_TC_MASK), /*!< Transmission complete flag. */
DECL|kUART_TransmissionCompleteInterruptEnable|enumerator|kUART_TransmissionCompleteInterruptEnable = (UART_C2_TCIE_MASK << 8), /*!< Transmission complete interrupt. */
DECL|kUART_TwoStopBit|enumerator|kUART_TwoStopBit = 1U, /*!< Two stop bits */
DECL|kUART_TxDataRegEmptyFlag|enumerator|kUART_TxDataRegEmptyFlag = (UART_S1_TDRE_MASK), /*!< TX data register empty flag. */
DECL|kUART_TxDataRegEmptyInterruptEnable|enumerator|kUART_TxDataRegEmptyInterruptEnable = (UART_C2_TIE_MASK << 8), /*!< Transmit data register empty interrupt. */
DECL|kUART_TxFifoEmptyFlag|enumerator|kUART_TxFifoEmptyFlag = (UART_SFIFO_TXEMPT_MASK << 24), /*!< TXEMPT bit, sets if TX buffer is empty */
DECL|kUART_TxFifoOverflowFlag|enumerator|kUART_TxFifoOverflowFlag = (UART_SFIFO_TXOF_MASK << 24), /*!< TXOF bit, sets if TX buffer overflow occurred */
DECL|kUART_TxFifoOverflowInterruptEnable|enumerator|kUART_TxFifoOverflowInterruptEnable = (UART_CFIFO_TXOFE_MASK << 24), /*!< TX FIFO overflow interrupt. */
DECL|parityMode|member|uart_parity_mode_t parityMode; /*!< Parity mode, disabled (default), even, odd */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDataSize|member|volatile size_t rxDataSize; /*!< Size of the remaining data to receive. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Address of remaining data to receive. */
DECL|rxFifoWatermark|member|uint8_t rxFifoWatermark; /*!< RX FIFO watermark */
DECL|rxRingBufferHead|member|volatile uint16_t rxRingBufferHead; /*!< Index for the driver to store received data into ring buffer. */
DECL|rxRingBufferSize|member|size_t rxRingBufferSize; /*!< Size of the ring buffer. */
DECL|rxRingBufferTail|member|volatile uint16_t rxRingBufferTail; /*!< Index for the user to get data from the ring buffer. */
DECL|rxRingBuffer|member|uint8_t *rxRingBuffer; /*!< Start address of the receiver ring buffer. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|stopBitCount|member|uart_stop_bit_count_t stopBitCount; /*!< Number of stop bits, 1 stop bit (default) or 2 stop bits */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDataSize|member|volatile size_t txDataSize; /*!< Size of the remaining data to send. */
DECL|txData|member|uint8_t *volatile txData; /*!< Address of remaining data to send. */
DECL|txFifoWatermark|member|uint8_t txFifoWatermark; /*!< TX FIFO watermark */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|uart_config_t|typedef|} uart_config_t;
DECL|uart_handle_t|typedef|typedef struct _uart_handle uart_handle_t;
DECL|uart_parity_mode_t|typedef|} uart_parity_mode_t;
DECL|uart_stop_bit_count_t|typedef|} uart_stop_bit_count_t;
DECL|uart_transfer_callback_t|typedef|typedef void (*uart_transfer_callback_t)(UART_Type *base, uart_handle_t *handle, status_t status, void *userData);
DECL|uart_transfer_t|typedef|} uart_transfer_t;
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
