DECL|FLEXIO_UART_EnableRxDMA|function|static inline void FLEXIO_UART_EnableRxDMA(FLEXIO_UART_Type *base, bool enable)
DECL|FLEXIO_UART_EnableTxDMA|function|static inline void FLEXIO_UART_EnableTxDMA(FLEXIO_UART_Type *base, bool enable)
DECL|FLEXIO_UART_Enable|function|static inline void FLEXIO_UART_Enable(FLEXIO_UART_Type *base, bool enable)
DECL|FLEXIO_UART_GetRxDataRegisterAddress|function|static inline uint32_t FLEXIO_UART_GetRxDataRegisterAddress(FLEXIO_UART_Type *base)
DECL|FLEXIO_UART_GetTxDataRegisterAddress|function|static inline uint32_t FLEXIO_UART_GetTxDataRegisterAddress(FLEXIO_UART_Type *base)
DECL|FLEXIO_UART_ReadByte|function|static inline void FLEXIO_UART_ReadByte(FLEXIO_UART_Type *base, uint8_t *buffer)
DECL|FLEXIO_UART_Type|typedef|} FLEXIO_UART_Type;
DECL|FLEXIO_UART_WriteByte|function|static inline void FLEXIO_UART_WriteByte(FLEXIO_UART_Type *base, const uint8_t *buffer)
DECL|FSL_FLEXIO_UART_DRIVER_VERSION|macro|FSL_FLEXIO_UART_DRIVER_VERSION
DECL|RxPinIndex|member|uint8_t RxPinIndex; /*!< Pin select for UART_Rx. */
DECL|TxPinIndex|member|uint8_t TxPinIndex; /*!< Pin select for UART_Tx. */
DECL|_FSL_FLEXIO_UART_H_|macro|_FSL_FLEXIO_UART_H_
DECL|_flexio_uart_bit_count_per_char|enum|typedef enum _flexio_uart_bit_count_per_char
DECL|_flexio_uart_config|struct|typedef struct _flexio_uart_config
DECL|_flexio_uart_handle|struct|struct _flexio_uart_handle
DECL|_flexio_uart_interrupt_enable|enum|enum _flexio_uart_interrupt_enable
DECL|_flexio_uart_status_flags|enum|enum _flexio_uart_status_flags
DECL|_flexio_uart_status|enum|enum _flexio_uart_status
DECL|_flexio_uart_transfer|struct|typedef struct _flexio_uart_transfer
DECL|_flexio_uart_type|struct|typedef struct _flexio_uart_type
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< Baud rate in Bps. */
DECL|bitCountPerChar|member|flexio_uart_bit_count_per_char_t bitCountPerChar; /*!< number of bits, 7/8/9 -bit */
DECL|callback|member|flexio_uart_transfer_callback_t callback; /*!< Callback function. */
DECL|dataSize|member|size_t dataSize; /*!< Transfer size*/
DECL|data|member|uint8_t *data; /*!< Transfer buffer*/
DECL|enableFastAccess|member|bool enableFastAccess; /*!< Enable/disable fast access to FlexIO registers,
DECL|enableInDebug|member|bool enableInDebug; /*!< Enable/disable FlexIO operation in debug mode*/
DECL|enableInDoze|member|bool enableInDoze; /*!< Enable/disable FlexIO operation in doze mode*/
DECL|enableUart|member|bool enableUart; /*!< Enable/disable FlexIO UART TX & RX. */
DECL|flexioBase|member|FLEXIO_Type *flexioBase; /*!< FlexIO base pointer. */
DECL|flexio_uart_bit_count_per_char_t|typedef|} flexio_uart_bit_count_per_char_t;
DECL|flexio_uart_config_t|typedef|} flexio_uart_config_t;
DECL|flexio_uart_handle_t|typedef|typedef struct _flexio_uart_handle flexio_uart_handle_t;
DECL|flexio_uart_transfer_callback_t|typedef|typedef void (*flexio_uart_transfer_callback_t)(FLEXIO_UART_Type *base,
DECL|flexio_uart_transfer_t|typedef|} flexio_uart_transfer_t;
DECL|kFLEXIO_UART_7BitsPerChar|enumerator|kFLEXIO_UART_7BitsPerChar = 7U, /*!< 7-bit data characters */
DECL|kFLEXIO_UART_8BitsPerChar|enumerator|kFLEXIO_UART_8BitsPerChar = 8U, /*!< 8-bit data characters */
DECL|kFLEXIO_UART_9BitsPerChar|enumerator|kFLEXIO_UART_9BitsPerChar = 9U, /*!< 9-bit data characters */
DECL|kFLEXIO_UART_RxDataRegFullFlag|enumerator|kFLEXIO_UART_RxDataRegFullFlag = 0x2U, /*!< Receive buffer full flag. */
DECL|kFLEXIO_UART_RxDataRegFullInterruptEnable|enumerator|kFLEXIO_UART_RxDataRegFullInterruptEnable = 0x2U, /*!< Receive buffer full interrupt enable. */
DECL|kFLEXIO_UART_RxOverRunFlag|enumerator|kFLEXIO_UART_RxOverRunFlag = 0x4U, /*!< Receive buffer over run flag. */
DECL|kFLEXIO_UART_TxDataRegEmptyFlag|enumerator|kFLEXIO_UART_TxDataRegEmptyFlag = 0x1U, /*!< Transmit buffer empty flag. */
DECL|kFLEXIO_UART_TxDataRegEmptyInterruptEnable|enumerator|kFLEXIO_UART_TxDataRegEmptyInterruptEnable = 0x1U, /*!< Transmit buffer empty interrupt enable. */
DECL|kStatus_FLEXIO_UART_ERROR|enumerator|kStatus_FLEXIO_UART_ERROR = MAKE_STATUS(kStatusGroup_FLEXIO_UART, 4), /*!< ERROR happens on UART. */
DECL|kStatus_FLEXIO_UART_RxBusy|enumerator|kStatus_FLEXIO_UART_RxBusy = MAKE_STATUS(kStatusGroup_FLEXIO_UART, 1), /*!< Receiver is busy. */
DECL|kStatus_FLEXIO_UART_RxHardwareOverrun|enumerator|kStatus_FLEXIO_UART_RxHardwareOverrun = MAKE_STATUS(kStatusGroup_FLEXIO_UART, 6) /*!< UART RX receiver overrun. */
DECL|kStatus_FLEXIO_UART_RxIdle|enumerator|kStatus_FLEXIO_UART_RxIdle = MAKE_STATUS(kStatusGroup_FLEXIO_UART, 3), /*!< UART receiver is idle. */
DECL|kStatus_FLEXIO_UART_RxRingBufferOverrun|enumerator|kStatus_FLEXIO_UART_RxRingBufferOverrun =
DECL|kStatus_FLEXIO_UART_TxBusy|enumerator|kStatus_FLEXIO_UART_TxBusy = MAKE_STATUS(kStatusGroup_FLEXIO_UART, 0), /*!< Transmitter is busy. */
DECL|kStatus_FLEXIO_UART_TxIdle|enumerator|kStatus_FLEXIO_UART_TxIdle = MAKE_STATUS(kStatusGroup_FLEXIO_UART, 2), /*!< UART transmitter is idle. */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Total bytes to be received. */
DECL|rxDataSize|member|volatile size_t rxDataSize; /*!< Size of the remaining data to receive. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Address of remaining data to receive. */
DECL|rxRingBufferHead|member|volatile uint16_t rxRingBufferHead; /*!< Index for the driver to store received data into ring buffer. */
DECL|rxRingBufferSize|member|size_t rxRingBufferSize; /*!< Size of the ring buffer. */
DECL|rxRingBufferTail|member|volatile uint16_t rxRingBufferTail; /*!< Index for the user to get data from the ring buffer. */
DECL|rxRingBuffer|member|uint8_t *rxRingBuffer; /*!< Start address of the receiver ring buffer. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|shifterIndex|member|uint8_t shifterIndex[2]; /*!< Shifter index used in FlexIO UART. */
DECL|timerIndex|member|uint8_t timerIndex[2]; /*!< Timer index used in FlexIO UART. */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Total bytes to be sent. */
DECL|txDataSize|member|volatile size_t txDataSize; /*!< Size of the remaining data to send. */
DECL|txData|member|uint8_t *volatile txData; /*!< Address of remaining data to send. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
