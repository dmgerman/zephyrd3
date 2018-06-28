DECL|CY_SCB_UART_ACTIVE_HIGH|enumerator|CY_SCB_UART_ACTIVE_HIGH = 1U, /**< Signal is active high */
DECL|CY_SCB_UART_ACTIVE_LOW|enumerator|CY_SCB_UART_ACTIVE_LOW = 0U, /**< Signal is active low */
DECL|CY_SCB_UART_BAD_PARAM|enumerator|CY_SCB_UART_BAD_PARAM = (CY_SCB_ID | CY_PDL_STATUS_ERROR | CY_SCB_UART_ID | 1U),
DECL|CY_SCB_UART_H|macro|CY_SCB_UART_H
DECL|CY_SCB_UART_INIT_KEY|macro|CY_SCB_UART_INIT_KEY
DECL|CY_SCB_UART_IRDA_LP_OVS1536|macro|CY_SCB_UART_IRDA_LP_OVS1536
DECL|CY_SCB_UART_IRDA_LP_OVS16|macro|CY_SCB_UART_IRDA_LP_OVS16
DECL|CY_SCB_UART_IRDA_LP_OVS192|macro|CY_SCB_UART_IRDA_LP_OVS192
DECL|CY_SCB_UART_IRDA_LP_OVS32|macro|CY_SCB_UART_IRDA_LP_OVS32
DECL|CY_SCB_UART_IRDA_LP_OVS48|macro|CY_SCB_UART_IRDA_LP_OVS48
DECL|CY_SCB_UART_IRDA_LP_OVS768|macro|CY_SCB_UART_IRDA_LP_OVS768
DECL|CY_SCB_UART_IRDA_LP_OVS96|macro|CY_SCB_UART_IRDA_LP_OVS96
DECL|CY_SCB_UART_IRDA|enumerator|CY_SCB_UART_IRDA = 2U, /**< Configures the SCB for IrDA operation */
DECL|CY_SCB_UART_IS_ADDRESS_MASK_VALID|macro|CY_SCB_UART_IS_ADDRESS_MASK_VALID
DECL|CY_SCB_UART_IS_ADDRESS_VALID|macro|CY_SCB_UART_IS_ADDRESS_VALID
DECL|CY_SCB_UART_IS_DATA_WIDTH_VALID|macro|CY_SCB_UART_IS_DATA_WIDTH_VALID
DECL|CY_SCB_UART_IS_IRDA_LP_OVS_VALID|macro|CY_SCB_UART_IS_IRDA_LP_OVS_VALID
DECL|CY_SCB_UART_IS_MODE_VALID|macro|CY_SCB_UART_IS_MODE_VALID
DECL|CY_SCB_UART_IS_MUTLI_PROC_VALID|macro|CY_SCB_UART_IS_MUTLI_PROC_VALID
DECL|CY_SCB_UART_IS_OVERSAMPLE_VALID|macro|CY_SCB_UART_IS_OVERSAMPLE_VALID
DECL|CY_SCB_UART_IS_PARITY_VALID|macro|CY_SCB_UART_IS_PARITY_VALID
DECL|CY_SCB_UART_IS_POLARITY_VALID|macro|CY_SCB_UART_IS_POLARITY_VALID
DECL|CY_SCB_UART_IS_RX_BREAK_WIDTH_VALID|macro|CY_SCB_UART_IS_RX_BREAK_WIDTH_VALID
DECL|CY_SCB_UART_IS_STOP_BITS_VALID|macro|CY_SCB_UART_IS_STOP_BITS_VALID
DECL|CY_SCB_UART_IS_TX_BREAK_WIDTH_VALID|macro|CY_SCB_UART_IS_TX_BREAK_WIDTH_VALID
DECL|CY_SCB_UART_PARITY_EVEN|enumerator|CY_SCB_UART_PARITY_EVEN = 2U, /**< UART has even parity check */
DECL|CY_SCB_UART_PARITY_NONE|enumerator|CY_SCB_UART_PARITY_NONE = 0U, /**< UART has no parity check */
DECL|CY_SCB_UART_PARITY_ODD|enumerator|CY_SCB_UART_PARITY_ODD = 3U, /**< UART has odd parity check */
DECL|CY_SCB_UART_RB_FULL_EVENT|macro|CY_SCB_UART_RB_FULL_EVENT
DECL|CY_SCB_UART_RECEIVE_ACTIVE|macro|CY_SCB_UART_RECEIVE_ACTIVE
DECL|CY_SCB_UART_RECEIVE_BREAK_DETECT|macro|CY_SCB_UART_RECEIVE_BREAK_DETECT
DECL|CY_SCB_UART_RECEIVE_BUSY|enumerator|CY_SCB_UART_RECEIVE_BUSY = (CY_SCB_ID | CY_PDL_STATUS_ERROR | CY_SCB_UART_ID | 2U),
DECL|CY_SCB_UART_RECEIVE_DONE_EVENT|macro|CY_SCB_UART_RECEIVE_DONE_EVENT
DECL|CY_SCB_UART_RECEIVE_ERR_EVENT|macro|CY_SCB_UART_RECEIVE_ERR_EVENT
DECL|CY_SCB_UART_RECEIVE_ERR_FRAME|macro|CY_SCB_UART_RECEIVE_ERR_FRAME
DECL|CY_SCB_UART_RECEIVE_ERR_PARITY|macro|CY_SCB_UART_RECEIVE_ERR_PARITY
DECL|CY_SCB_UART_RECEIVE_ERR|macro|CY_SCB_UART_RECEIVE_ERR
DECL|CY_SCB_UART_RECEIVE_OVERFLOW|macro|CY_SCB_UART_RECEIVE_OVERFLOW
DECL|CY_SCB_UART_RX_BREAK_DETECT|macro|CY_SCB_UART_RX_BREAK_DETECT
DECL|CY_SCB_UART_RX_ERR_FRAME|macro|CY_SCB_UART_RX_ERR_FRAME
DECL|CY_SCB_UART_RX_ERR_PARITY|macro|CY_SCB_UART_RX_ERR_PARITY
DECL|CY_SCB_UART_RX_FULL|macro|CY_SCB_UART_RX_FULL
DECL|CY_SCB_UART_RX_INTR_MASK|macro|CY_SCB_UART_RX_INTR_MASK
DECL|CY_SCB_UART_RX_INTR|macro|CY_SCB_UART_RX_INTR
DECL|CY_SCB_UART_RX_NOT_EMPTY|macro|CY_SCB_UART_RX_NOT_EMPTY
DECL|CY_SCB_UART_RX_NO_DATA|macro|CY_SCB_UART_RX_NO_DATA
DECL|CY_SCB_UART_RX_OVERFLOW|macro|CY_SCB_UART_RX_OVERFLOW
DECL|CY_SCB_UART_RX_TRIGGER|macro|CY_SCB_UART_RX_TRIGGER
DECL|CY_SCB_UART_RX_UNDERFLOW|macro|CY_SCB_UART_RX_UNDERFLOW
DECL|CY_SCB_UART_SMARTCARD|enumerator|CY_SCB_UART_SMARTCARD = 1U, /**< Configures the SCB for SmartCard operation */
DECL|CY_SCB_UART_STANDARD|enumerator|CY_SCB_UART_STANDARD = 0U, /**< Configures the SCB for Standard UART operation */
DECL|CY_SCB_UART_STOP_BITS_1_5|enumerator|CY_SCB_UART_STOP_BITS_1_5 = 3U, /**< UART looks for 1.5 Stop Bits */
DECL|CY_SCB_UART_STOP_BITS_1|enumerator|CY_SCB_UART_STOP_BITS_1 = 2U, /**< UART looks for 1 Stop Bit */
DECL|CY_SCB_UART_STOP_BITS_2_5|enumerator|CY_SCB_UART_STOP_BITS_2_5 = 5U, /**< UART looks for 2.5 Stop Bits */
DECL|CY_SCB_UART_STOP_BITS_2|enumerator|CY_SCB_UART_STOP_BITS_2 = 4U, /**< UART looks for 2 Stop Bits */
DECL|CY_SCB_UART_STOP_BITS_3_5|enumerator|CY_SCB_UART_STOP_BITS_3_5 = 7U, /**< UART looks for 3.5 Stop Bits */
DECL|CY_SCB_UART_STOP_BITS_3|enumerator|CY_SCB_UART_STOP_BITS_3 = 6U, /**< UART looks for 3 Stop Bits */
DECL|CY_SCB_UART_STOP_BITS_4|enumerator|CY_SCB_UART_STOP_BITS_4 = 8U, /**< UART looks for 4 Stop Bits */
DECL|CY_SCB_UART_SUCCESS|enumerator|CY_SCB_UART_SUCCESS = 0U,
DECL|CY_SCB_UART_TRANSMIT_ACTIVE|macro|CY_SCB_UART_TRANSMIT_ACTIVE
DECL|CY_SCB_UART_TRANSMIT_ARB_LOST|macro|CY_SCB_UART_TRANSMIT_ARB_LOST
DECL|CY_SCB_UART_TRANSMIT_BUSY|enumerator|CY_SCB_UART_TRANSMIT_BUSY = (CY_SCB_ID | CY_PDL_STATUS_ERROR | CY_SCB_UART_ID | 3U)
DECL|CY_SCB_UART_TRANSMIT_DONE_EVENT|macro|CY_SCB_UART_TRANSMIT_DONE_EVENT
DECL|CY_SCB_UART_TRANSMIT_ERR_EVENT|macro|CY_SCB_UART_TRANSMIT_ERR_EVENT
DECL|CY_SCB_UART_TRANSMIT_ERR|macro|CY_SCB_UART_TRANSMIT_ERR
DECL|CY_SCB_UART_TRANSMIT_IN_FIFO_EVENT|macro|CY_SCB_UART_TRANSMIT_IN_FIFO_EVENT
DECL|CY_SCB_UART_TRANSMIT_IN_FIFO|macro|CY_SCB_UART_TRANSMIT_IN_FIFO
DECL|CY_SCB_UART_TRANSMIT_NACK|macro|CY_SCB_UART_TRANSMIT_NACK
DECL|CY_SCB_UART_TX_ARB_LOST|macro|CY_SCB_UART_TX_ARB_LOST
DECL|CY_SCB_UART_TX_DONE|macro|CY_SCB_UART_TX_DONE
DECL|CY_SCB_UART_TX_EMPTY|macro|CY_SCB_UART_TX_EMPTY
DECL|CY_SCB_UART_TX_INTR_MASK|macro|CY_SCB_UART_TX_INTR_MASK
DECL|CY_SCB_UART_TX_INTR|macro|CY_SCB_UART_TX_INTR
DECL|CY_SCB_UART_TX_NACK|macro|CY_SCB_UART_TX_NACK
DECL|CY_SCB_UART_TX_NOT_FULL|macro|CY_SCB_UART_TX_NOT_FULL
DECL|CY_SCB_UART_TX_OVERFLOW|macro|CY_SCB_UART_TX_OVERFLOW
DECL|CY_SCB_UART_TX_TRIGGER|macro|CY_SCB_UART_TX_TRIGGER
DECL|CY_SCB_UART_TX_UNDERFLOW|macro|CY_SCB_UART_TX_UNDERFLOW
DECL|Cy_SCB_UART_ClearRxFifoStatus|function|__STATIC_INLINE void Cy_SCB_UART_ClearRxFifoStatus(CySCB_Type *base, uint32_t clearMask)
DECL|Cy_SCB_UART_ClearRxFifo|function|__STATIC_INLINE void Cy_SCB_UART_ClearRxFifo(CySCB_Type *base)
DECL|Cy_SCB_UART_ClearTxFifoStatus|function|__STATIC_INLINE void Cy_SCB_UART_ClearTxFifoStatus(CySCB_Type *base, uint32_t clearMask)
DECL|Cy_SCB_UART_ClearTxFifo|function|__STATIC_INLINE void Cy_SCB_UART_ClearTxFifo(CySCB_Type *base)
DECL|Cy_SCB_UART_DisableCts|function|__STATIC_INLINE void Cy_SCB_UART_DisableCts(CySCB_Type *base)
DECL|Cy_SCB_UART_DisableSkipStart|function|__STATIC_INLINE void Cy_SCB_UART_DisableSkipStart(CySCB_Type *base)
DECL|Cy_SCB_UART_EnableCts|function|__STATIC_INLINE void Cy_SCB_UART_EnableCts(CySCB_Type *base)
DECL|Cy_SCB_UART_EnableSkipStart|function|__STATIC_INLINE void Cy_SCB_UART_EnableSkipStart(CySCB_Type *base)
DECL|Cy_SCB_UART_Enable|function|__STATIC_INLINE void Cy_SCB_UART_Enable(CySCB_Type *base)
DECL|Cy_SCB_UART_GetArrayBlocking|function|__STATIC_INLINE void Cy_SCB_UART_GetArrayBlocking(CySCB_Type const *base, void *buffer, uint32_t size)
DECL|Cy_SCB_UART_GetArray|function|__STATIC_INLINE uint32_t Cy_SCB_UART_GetArray(CySCB_Type const *base, void *buffer, uint32_t size)
DECL|Cy_SCB_UART_GetNumInRxFifo|function|__STATIC_INLINE uint32_t Cy_SCB_UART_GetNumInRxFifo(CySCB_Type const *base)
DECL|Cy_SCB_UART_GetNumInTxFifo|function|__STATIC_INLINE uint32_t Cy_SCB_UART_GetNumInTxFifo(CySCB_Type const *base)
DECL|Cy_SCB_UART_GetRtsFifoLevel|function|__STATIC_INLINE uint32_t Cy_SCB_UART_GetRtsFifoLevel(CySCB_Type const *base)
DECL|Cy_SCB_UART_GetRxFifoStatus|function|__STATIC_INLINE uint32_t Cy_SCB_UART_GetRxFifoStatus(CySCB_Type const *base)
DECL|Cy_SCB_UART_GetTxFifoStatus|function|__STATIC_INLINE uint32_t Cy_SCB_UART_GetTxFifoStatus(CySCB_Type const *base)
DECL|Cy_SCB_UART_Get|function|__STATIC_INLINE uint32_t Cy_SCB_UART_Get(CySCB_Type const *base)
DECL|Cy_SCB_UART_IsTxComplete|function|__STATIC_INLINE bool Cy_SCB_UART_IsTxComplete(CySCB_Type const *base)
DECL|Cy_SCB_UART_PutArrayBlocking|function|__STATIC_INLINE void Cy_SCB_UART_PutArrayBlocking(CySCB_Type *base, void *buffer, uint32_t size)
DECL|Cy_SCB_UART_PutArray|function|__STATIC_INLINE uint32_t Cy_SCB_UART_PutArray(CySCB_Type *base, void *buffer, uint32_t size)
DECL|Cy_SCB_UART_PutString|function|__STATIC_INLINE void Cy_SCB_UART_PutString(CySCB_Type *base, char_t const string[])
DECL|Cy_SCB_UART_Put|function|__STATIC_INLINE uint32_t Cy_SCB_UART_Put(CySCB_Type *base, uint32_t data)
DECL|Cy_SCB_UART_RegisterCallback|function|__STATIC_INLINE void Cy_SCB_UART_RegisterCallback(CySCB_Type const *base, cy_cb_scb_uart_handle_events_t callback, cy_stc_scb_uart_context_t *context)
DECL|Cy_SCB_UART_SetRtsFifoLevel|function|__STATIC_INLINE void Cy_SCB_UART_SetRtsFifoLevel(CySCB_Type *base, uint32_t level)
DECL|acceptAddrInFifo|member|bool acceptAddrInFifo;
DECL|breakWidth|member|uint32_t breakWidth;
DECL|cbEvents|member|cy_cb_scb_uart_handle_events_t cbEvents;
DECL|ctsPolarity|member|cy_en_scb_uart_polarity_t ctsPolarity;
DECL|cy_cb_scb_uart_handle_events_t|typedef|typedef void (* cy_cb_scb_uart_handle_events_t)(uint32_t event);
DECL|cy_en_scb_uart_mode_t|typedef|} cy_en_scb_uart_mode_t;
DECL|cy_en_scb_uart_parity_t|typedef|} cy_en_scb_uart_parity_t;
DECL|cy_en_scb_uart_polarity_t|typedef|} cy_en_scb_uart_polarity_t;
DECL|cy_en_scb_uart_status_t|typedef|} cy_en_scb_uart_status_t;
DECL|cy_en_scb_uart_stop_bits_t|typedef|} cy_en_scb_uart_stop_bits_t;
DECL|cy_stc_scb_uart_config_t|typedef|} cy_stc_scb_uart_config_t;
DECL|cy_stc_scb_uart_context_t|typedef|} cy_stc_scb_uart_context_t;
DECL|cy_stc_scb_uart_context|struct|typedef struct cy_stc_scb_uart_context
DECL|dataWidth|member|uint32_t dataWidth;
DECL|dropOnFrameError|member|bool dropOnFrameError;
DECL|dropOnParityError|member|bool dropOnParityError;
DECL|enableCts|member|bool enableCts;
DECL|enableInputFilter|member|bool enableInputFilter;
DECL|enableMsbFirst|member|bool enableMsbFirst;
DECL|enableMutliProcessorMode|member|bool enableMutliProcessorMode;
DECL|initKey|member|uint32_t initKey; /**< Tracks the context initialization */
DECL|irdaEnableLowPowerReceiver|member|bool irdaEnableLowPowerReceiver;
DECL|irdaInvertRx|member|bool irdaInvertRx;
DECL|oversample|member|uint32_t oversample;
DECL|parity|member|cy_en_scb_uart_parity_t parity;
DECL|receiverAddressMask|member|uint32_t receiverAddressMask;
DECL|receiverAddress|member|uint32_t receiverAddress;
DECL|rtsPolarity|member|cy_en_scb_uart_polarity_t rtsPolarity;
DECL|rtsRxFifoLevel|member|uint32_t rtsRxFifoLevel;
DECL|rxBufIdx|member|uint32_t volatile rxBufIdx; /**< The current location in the receive buffer */
DECL|rxBufSize|member|uint32_t rxBufSize; /**< The receive buffer size */
DECL|rxBuf|member|void *rxBuf; /**< The pointer to the receive buffer */
DECL|rxFifoIntEnableMask|member|uint32_t rxFifoIntEnableMask;
DECL|rxFifoTriggerLevel|member|uint32_t rxFifoTriggerLevel;
DECL|rxRingBufHead|member|uint32_t volatile rxRingBufHead; /**< The ring buffer head index */
DECL|rxRingBufSize|member|uint32_t rxRingBufSize; /**< The ring buffer size */
DECL|rxRingBufTail|member|uint32_t volatile rxRingBufTail; /**< The ring buffer tail index */
DECL|rxRingBuf|member|void *rxRingBuf; /**< The pointer to the ring buffer */
DECL|rxStatus|member|uint32_t volatile rxStatus; /**< The receive status */
DECL|smartCardRetryOnNack|member|bool smartCardRetryOnNack;
DECL|stc_scb_uart_config|struct|typedef struct stc_scb_uart_config
DECL|stopBits|member|cy_en_scb_uart_stop_bits_t stopBits;
DECL|txBufSize|member|uint32_t txBufSize; /**< The transmit buffer size */
DECL|txBuf|member|void *txBuf; /**< The pointer to the transmit buffer */
DECL|txFifoIntEnableMask|member|uint32_t txFifoIntEnableMask;
DECL|txFifoTriggerLevel|member|uint32_t txFifoTriggerLevel;
DECL|txLeftToTransmit|member|uint32_t volatile txLeftToTransmit; /**< The number of data elements left to be transmitted */
DECL|txStatus|member|uint32_t volatile txStatus; /**< The transmit status */
DECL|uartMode|member|cy_en_scb_uart_mode_t uartMode;
