DECL|FSL_USART_DRIVER_VERSION|macro|FSL_USART_DRIVER_VERSION
DECL|USART_ClearStatusFlags|function|static inline void USART_ClearStatusFlags(USART_Type *base, uint32_t mask)
DECL|USART_DisableInterrupts|function|static inline void USART_DisableInterrupts(USART_Type *base, uint32_t mask)
DECL|USART_EnableInterrupts|function|static inline void USART_EnableInterrupts(USART_Type *base, uint32_t mask)
DECL|USART_EnableRxDMA|function|static inline void USART_EnableRxDMA(USART_Type *base, bool enable)
DECL|USART_EnableTxDMA|function|static inline void USART_EnableTxDMA(USART_Type *base, bool enable)
DECL|USART_FIFOTRIG_RXLVL_GET|macro|USART_FIFOTRIG_RXLVL_GET
DECL|USART_FIFOTRIG_TXLVL_GET|macro|USART_FIFOTRIG_TXLVL_GET
DECL|USART_GetStatusFlags|function|static inline uint32_t USART_GetStatusFlags(USART_Type *base)
DECL|USART_ReadByte|function|static inline uint8_t USART_ReadByte(USART_Type *base)
DECL|USART_WriteByte|function|static inline void USART_WriteByte(USART_Type *base, uint8_t data)
DECL|_FSL_USART_H_|macro|_FSL_USART_H_
DECL|_usart_config|struct|typedef struct _usart_config
DECL|_usart_data_len|enum|typedef enum _usart_data_len
DECL|_usart_flags|enum|enum _usart_flags
DECL|_usart_handle|struct|struct _usart_handle
DECL|_usart_interrupt_enable|enum|enum _usart_interrupt_enable
DECL|_usart_parity_mode|enum|typedef enum _usart_parity_mode
DECL|_usart_rxfifo_watermark|enum|typedef enum _usart_rxfifo_watermark
DECL|_usart_status|enum|enum _usart_status
DECL|_usart_stop_bit_count|enum|typedef enum _usart_stop_bit_count
DECL|_usart_transfer|struct|typedef struct _usart_transfer
DECL|_usart_txfifo_watermark|enum|typedef enum _usart_txfifo_watermark
DECL|baudRate_Bps|member|uint32_t baudRate_Bps; /*!< USART baud rate */
DECL|bitCountPerChar|member|usart_data_len_t bitCountPerChar; /*!< Data length - 7 bit, 8 bit */
DECL|callback|member|usart_transfer_callback_t callback; /*!< Callback function. */
DECL|dataSize|member|size_t dataSize; /*!< The byte count to be transfer. */
DECL|data|member|uint8_t *data; /*!< The buffer of data to be transfer.*/
DECL|enableRx|member|bool enableRx; /*!< Enable RX */
DECL|enableTx|member|bool enableTx; /*!< Enable TX */
DECL|kStatus_USART_BaudrateNotSupport|enumerator|kStatus_USART_BaudrateNotSupport =
DECL|kStatus_USART_FramingError|enumerator|kStatus_USART_FramingError = MAKE_STATUS(kStatusGroup_LPC_USART, 11), /*!< USART framing error. */
DECL|kStatus_USART_NoiseError|enumerator|kStatus_USART_NoiseError = MAKE_STATUS(kStatusGroup_LPC_USART, 10), /*!< USART noise error. */
DECL|kStatus_USART_ParityError|enumerator|kStatus_USART_ParityError = MAKE_STATUS(kStatusGroup_LPC_USART, 12), /*!< USART parity error. */
DECL|kStatus_USART_RxBusy|enumerator|kStatus_USART_RxBusy = MAKE_STATUS(kStatusGroup_LPC_USART, 1), /*!< Receiver is busy. */
DECL|kStatus_USART_RxError|enumerator|kStatus_USART_RxError = MAKE_STATUS(kStatusGroup_LPC_USART, 9), /*!< Error happens on rxFIFO. */
DECL|kStatus_USART_RxIdle|enumerator|kStatus_USART_RxIdle = MAKE_STATUS(kStatusGroup_LPC_USART, 3), /*!< USART receiver is idle. */
DECL|kStatus_USART_RxRingBufferOverrun|enumerator|kStatus_USART_RxRingBufferOverrun = MAKE_STATUS(kStatusGroup_LPC_USART, 8), /*!< Error happens on rx ring buffer */
DECL|kStatus_USART_TxBusy|enumerator|kStatus_USART_TxBusy = MAKE_STATUS(kStatusGroup_LPC_USART, 0), /*!< Transmitter is busy. */
DECL|kStatus_USART_TxError|enumerator|kStatus_USART_TxError = MAKE_STATUS(kStatusGroup_LPC_USART, 7), /*!< Error happens on txFIFO. */
DECL|kStatus_USART_TxIdle|enumerator|kStatus_USART_TxIdle = MAKE_STATUS(kStatusGroup_LPC_USART, 2), /*!< USART transmitter is idle. */
DECL|kUSART_7BitsPerChar|enumerator|kUSART_7BitsPerChar = 0U, /*!< Seven bit mode */
DECL|kUSART_8BitsPerChar|enumerator|kUSART_8BitsPerChar = 1U, /*!< Eight bit mode */
DECL|kUSART_OneStopBit|enumerator|kUSART_OneStopBit = 0U, /*!< One stop bit */
DECL|kUSART_ParityDisabled|enumerator|kUSART_ParityDisabled = 0x0U, /*!< Parity disabled */
DECL|kUSART_ParityEven|enumerator|kUSART_ParityEven = 0x2U, /*!< Parity enabled, type even, bit setting: PE|PT = 10 */
DECL|kUSART_ParityOdd|enumerator|kUSART_ParityOdd = 0x3U, /*!< Parity enabled, type odd, bit setting: PE|PT = 11 */
DECL|kUSART_RxErrorInterruptEnable|enumerator|kUSART_RxErrorInterruptEnable = (USART_FIFOINTENSET_RXERR_MASK),
DECL|kUSART_RxError|enumerator|kUSART_RxError = (USART_FIFOSTAT_RXERR_MASK), /*!< RXERR bit, sets if RX buffer is error */
DECL|kUSART_RxFifo1|enumerator|kUSART_RxFifo1 = 0, /*!< USART rx watermark at 1 item */
DECL|kUSART_RxFifo2|enumerator|kUSART_RxFifo2 = 1, /*!< USART rx watermark at 2 items */
DECL|kUSART_RxFifo3|enumerator|kUSART_RxFifo3 = 2, /*!< USART rx watermark at 3 items */
DECL|kUSART_RxFifo4|enumerator|kUSART_RxFifo4 = 3, /*!< USART rx watermark at 4 items */
DECL|kUSART_RxFifo5|enumerator|kUSART_RxFifo5 = 4, /*!< USART rx watermark at 5 items */
DECL|kUSART_RxFifo6|enumerator|kUSART_RxFifo6 = 5, /*!< USART rx watermark at 6 items */
DECL|kUSART_RxFifo7|enumerator|kUSART_RxFifo7 = 6, /*!< USART rx watermark at 7 items */
DECL|kUSART_RxFifo8|enumerator|kUSART_RxFifo8 = 7, /*!< USART rx watermark at 8 items */
DECL|kUSART_RxFifoFullFlag|enumerator|kUSART_RxFifoFullFlag = (USART_FIFOSTAT_RXFULL_MASK), /*!< RXFULL bit, sets if RX buffer is full */
DECL|kUSART_RxFifoNotEmptyFlag|enumerator|kUSART_RxFifoNotEmptyFlag = (USART_FIFOSTAT_RXNOTEMPTY_MASK), /*!< RXNOEMPTY bit, sets if RX buffer is not empty */
DECL|kUSART_RxLevelInterruptEnable|enumerator|kUSART_RxLevelInterruptEnable = (USART_FIFOINTENSET_RXLVL_MASK),
DECL|kUSART_TwoStopBit|enumerator|kUSART_TwoStopBit = 1U, /*!< Two stop bits */
DECL|kUSART_TxErrorInterruptEnable|enumerator|kUSART_TxErrorInterruptEnable = (USART_FIFOINTENSET_TXERR_MASK),
DECL|kUSART_TxError|enumerator|kUSART_TxError = (USART_FIFOSTAT_TXERR_MASK), /*!< TEERR bit, sets if TX buffer is error */
DECL|kUSART_TxFifo0|enumerator|kUSART_TxFifo0 = 0, /*!< USART tx watermark is empty */
DECL|kUSART_TxFifo1|enumerator|kUSART_TxFifo1 = 1, /*!< USART tx watermark at 1 item */
DECL|kUSART_TxFifo2|enumerator|kUSART_TxFifo2 = 2, /*!< USART tx watermark at 2 items */
DECL|kUSART_TxFifo3|enumerator|kUSART_TxFifo3 = 3, /*!< USART tx watermark at 3 items */
DECL|kUSART_TxFifo4|enumerator|kUSART_TxFifo4 = 4, /*!< USART tx watermark at 4 items */
DECL|kUSART_TxFifo5|enumerator|kUSART_TxFifo5 = 5, /*!< USART tx watermark at 5 items */
DECL|kUSART_TxFifo6|enumerator|kUSART_TxFifo6 = 6, /*!< USART tx watermark at 6 items */
DECL|kUSART_TxFifo7|enumerator|kUSART_TxFifo7 = 7, /*!< USART tx watermark at 7 items */
DECL|kUSART_TxFifoEmptyFlag|enumerator|kUSART_TxFifoEmptyFlag = (USART_FIFOSTAT_TXEMPTY_MASK), /*!< TXEMPTY bit, sets if TX buffer is empty */
DECL|kUSART_TxFifoNotFullFlag|enumerator|kUSART_TxFifoNotFullFlag = (USART_FIFOSTAT_TXNOTFULL_MASK), /*!< TXNOTFULL bit, sets if TX buffer is not full */
DECL|kUSART_TxLevelInterruptEnable|enumerator|kUSART_TxLevelInterruptEnable = (USART_FIFOINTENSET_TXLVL_MASK),
DECL|loopback|member|bool loopback; /*!< Enable peripheral loopback */
DECL|parityMode|member|usart_parity_mode_t parityMode; /*!< Parity mode, disabled (default), even, odd */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDataSize|member|volatile size_t rxDataSize; /*!< Size of the remaining data to receive. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Address of remaining data to receive. */
DECL|rxRingBufferHead|member|volatile uint16_t rxRingBufferHead; /*!< Index for the driver to store received data into ring buffer. */
DECL|rxRingBufferSize|member|size_t rxRingBufferSize; /*!< Size of the ring buffer. */
DECL|rxRingBufferTail|member|volatile uint16_t rxRingBufferTail; /*!< Index for the user to get data from the ring buffer. */
DECL|rxRingBuffer|member|uint8_t *rxRingBuffer; /*!< Start address of the receiver ring buffer. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|rxWatermark|member|usart_rxfifo_watermark_t rxWatermark; /*!< rxFIFO watermark */
DECL|rxWatermark|member|usart_rxfifo_watermark_t rxWatermark; /*!< rxFIFO watermark */
DECL|stopBitCount|member|usart_stop_bit_count_t stopBitCount; /*!< Number of stop bits, 1 stop bit (default) or 2 stop bits */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDataSize|member|volatile size_t txDataSize; /*!< Size of the remaining data to send. */
DECL|txData|member|uint8_t *volatile txData; /*!< Address of remaining data to send. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|txWatermark|member|usart_txfifo_watermark_t txWatermark; /*!< txFIFO watermark */
DECL|txWatermark|member|usart_txfifo_watermark_t txWatermark; /*!< txFIFO watermark */
DECL|usart_config_t|typedef|} usart_config_t;
DECL|usart_data_len_t|typedef|} usart_data_len_t;
DECL|usart_handle_t|typedef|typedef struct _usart_handle usart_handle_t;
DECL|usart_parity_mode_t|typedef|} usart_parity_mode_t;
DECL|usart_rxfifo_watermark_t|typedef|} usart_rxfifo_watermark_t;
DECL|usart_stop_bit_count_t|typedef|} usart_stop_bit_count_t;
DECL|usart_transfer_callback_t|typedef|typedef void (*usart_transfer_callback_t)(USART_Type *base, usart_handle_t *handle, status_t status, void *userData);
DECL|usart_transfer_t|typedef|} usart_transfer_t;
DECL|usart_txfifo_watermark_t|typedef|} usart_txfifo_watermark_t;
DECL|userData|member|void *userData; /*!< USART callback function parameter.*/
