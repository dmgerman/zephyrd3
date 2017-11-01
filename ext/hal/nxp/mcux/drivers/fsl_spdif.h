DECL|DPLLClkSource|member|uint8_t DPLLClkSource; /*!< SPDIF DPLL clock source, range from 0~15, meaning is chip-specific */
DECL|FSL_SPDIF_DRIVER_VERSION|macro|FSL_SPDIF_DRIVER_VERSION
DECL|SPDIF_ClearStatusFlags|function|static inline void SPDIF_ClearStatusFlags(SPDIF_Type *base, uint32_t mask)
DECL|SPDIF_DisableInterrupts|function|static inline void SPDIF_DisableInterrupts(SPDIF_Type *base, uint32_t mask)
DECL|SPDIF_EnableDMA|function|static inline void SPDIF_EnableDMA(SPDIF_Type *base, uint32_t mask, bool enable)
DECL|SPDIF_EnableInterrupts|function|static inline void SPDIF_EnableInterrupts(SPDIF_Type *base, uint32_t mask)
DECL|SPDIF_GetStatusFlag|function|static inline uint32_t SPDIF_GetStatusFlag(SPDIF_Type *base)
DECL|SPDIF_ReadChannelStatusHigh|function|static inline uint32_t SPDIF_ReadChannelStatusHigh(SPDIF_Type *base)
DECL|SPDIF_ReadChannelStatusLow|function|static inline uint32_t SPDIF_ReadChannelStatusLow(SPDIF_Type *base)
DECL|SPDIF_ReadLeftData|function|static inline uint32_t SPDIF_ReadLeftData(SPDIF_Type *base)
DECL|SPDIF_ReadQChannel|function|static inline uint32_t SPDIF_ReadQChannel(SPDIF_Type *base)
DECL|SPDIF_ReadRightData|function|static inline uint32_t SPDIF_ReadRightData(SPDIF_Type *base)
DECL|SPDIF_ReadUChannel|function|static inline uint32_t SPDIF_ReadUChannel(SPDIF_Type *base)
DECL|SPDIF_RxEnable|function|static inline void SPDIF_RxEnable(SPDIF_Type *base, bool enable)
DECL|SPDIF_RxFIFOReset|function|static inline void SPDIF_RxFIFOReset(SPDIF_Type *base)
DECL|SPDIF_RxGetLeftDataRegisterAddress|function|static inline uint32_t SPDIF_RxGetLeftDataRegisterAddress(SPDIF_Type *base)
DECL|SPDIF_RxGetRightDataRegisterAddress|function|static inline uint32_t SPDIF_RxGetRightDataRegisterAddress(SPDIF_Type *base)
DECL|SPDIF_TxFIFOReset|function|static inline void SPDIF_TxFIFOReset(SPDIF_Type *base)
DECL|SPDIF_TxGetLeftDataRegisterAddress|function|static inline uint32_t SPDIF_TxGetLeftDataRegisterAddress(SPDIF_Type *base)
DECL|SPDIF_TxGetRightDataRegisterAddress|function|static inline uint32_t SPDIF_TxGetRightDataRegisterAddress(SPDIF_Type *base)
DECL|SPDIF_WriteChannelStatusHigh|function|static inline void SPDIF_WriteChannelStatusHigh(SPDIF_Type *base, uint32_t data)
DECL|SPDIF_WriteChannelStatusLow|function|static inline void SPDIF_WriteChannelStatusLow(SPDIF_Type *base, uint32_t data)
DECL|SPDIF_WriteLeftData|function|static inline void SPDIF_WriteLeftData(SPDIF_Type *base, uint32_t data)
DECL|SPDIF_WriteRightData|function|static inline void SPDIF_WriteRightData(SPDIF_Type *base, uint32_t data)
DECL|SPDIF_XFER_QUEUE_SIZE|macro|SPDIF_XFER_QUEUE_SIZE
DECL|_FSL_SPDIF_H_|macro|_FSL_SPDIF_H_
DECL|_spdif_config|struct|typedef struct _spdif_config
DECL|_spdif_dma_enable_t|enum|enum _spdif_dma_enable_t
DECL|_spdif_gain_select|enum|typedef enum _spdif_gain_select
DECL|_spdif_handle|struct|struct _spdif_handle
DECL|_spdif_interrupt_enable_t|enum|enum _spdif_interrupt_enable_t
DECL|_spdif_rxfull_select|enum|typedef enum _spdif_rxfull_select
DECL|_spdif_status_t|enum|enum _spdif_status_t
DECL|_spdif_transfer|struct|typedef struct _spdif_transfer
DECL|_spdif_tx_source|enum|typedef enum _spdif_tx_source
DECL|_spdif_txempty_select|enum|typedef enum _spdif_txempty_select
DECL|_spdif_uchannel_source|enum|typedef enum _spdif_uchannel_source
DECL|_spdif_validity_config|enum|typedef enum _spdif_validity_config
DECL|callback|member|spdif_transfer_callback_t callback; /*!< Callback function called at transfer event*/
DECL|dataSize|member|size_t dataSize; /*!< Transfer size. */
DECL|data|member|uint8_t *data; /*!< Data start address to transfer. */
DECL|gain|member|spdif_gain_select_t gain; /*!< Rx receive clock measure gain parameter. */
DECL|isRxAutoSync|member|bool isRxAutoSync; /*!< If auto sync mechanism open */
DECL|isTxAutoSync|member|bool isTxAutoSync; /*!< If auto sync mechanism open */
DECL|kSPDIF_GAIN_12|enumerator|kSPDIF_GAIN_12, /*!< Gain select is 12 */
DECL|kSPDIF_GAIN_16|enumerator|kSPDIF_GAIN_16, /*!< Gain select is 16 */
DECL|kSPDIF_GAIN_24|enumerator|kSPDIF_GAIN_24 = 0x0U, /*!< Gain select is 24 */
DECL|kSPDIF_GAIN_3|enumerator|kSPDIF_GAIN_3, /*!< Gain select is 3 */
DECL|kSPDIF_GAIN_4|enumerator|kSPDIF_GAIN_4, /*!< Gain select is 4 */
DECL|kSPDIF_GAIN_6|enumerator|kSPDIF_GAIN_6, /*!< Gain select is 6 */
DECL|kSPDIF_GAIN_8|enumerator|kSPDIF_GAIN_8, /*!< Gain select is 8 */
DECL|kSPDIF_LockLoss|enumerator|kSPDIF_LockLoss = SPDIF_SIE_LOCKLOSS_MASK, /*!< SPDIF receiver loss of lock */
DECL|kSPDIF_NoUChannel|enumerator|kSPDIF_NoUChannel = 0x0U, /*!< No embedded U channel */
DECL|kSPDIF_QChannelReceiveRegisterFull|enumerator|kSPDIF_QChannelReceiveRegisterFull = SPDIF_SIE_QRXFUL_MASK, /*!< SPDIF Q channel receive reigster full */
DECL|kSPDIF_QChannelReceiveRegisterOverrun|enumerator|kSPDIF_QChannelReceiveRegisterOverrun = SPDIF_SIE_QRXOV_MASK, /*!< SPDIF Q channel receive register overrun */
DECL|kSPDIF_RxControlChannelChange|enumerator|kSPDIF_RxControlChannelChange = SPDIF_SIE_CNEW_MASK, /*!< SPDIF Rx control channel value changed */
DECL|kSPDIF_RxDMAEnable|enumerator|kSPDIF_RxDMAEnable = SPDIF_SCR_DMA_RX_EN_MASK, /*!< Rx FIFO full */
DECL|kSPDIF_RxDPLLLocked|enumerator|kSPDIF_RxDPLLLocked = SPDIF_SIE_LOCK_MASK, /*!< SPDIF DPLL locked */
DECL|kSPDIF_RxFIFOError|enumerator|kSPDIF_RxFIFOError = SPDIF_SIE_RXFIFOUNOV_MASK, /*!< SPDIF Rx FIFO underrun/overrun */
DECL|kSPDIF_RxFIFOFull|enumerator|kSPDIF_RxFIFOFull = SPDIF_SIE_RXFIFOFUL_MASK /*!< SPDIF Rx FIFO full */
DECL|kSPDIF_RxFIFOResync|enumerator|kSPDIF_RxFIFOResync = SPDIF_SIE_RXFIFORESYN_MASK, /*!< SPDIF Rx left and right FIFO resync */
DECL|kSPDIF_RxFull16Samples|enumerator|kSPDIF_RxFull16Samples, /*!< Rx full at least 16 sample in left and right FIFO*/
DECL|kSPDIF_RxFull1Sample|enumerator|kSPDIF_RxFull1Sample = 0x0u, /*!< Rx full at least 1 sample in left and right FIFO */
DECL|kSPDIF_RxFull4Samples|enumerator|kSPDIF_RxFull4Samples, /*!< Rx full at least 4 sample in left and right FIFO*/
DECL|kSPDIF_RxFull8Samples|enumerator|kSPDIF_RxFull8Samples, /*!< Rx full at least 8 sample in left and right FIFO*/
DECL|kSPDIF_RxIllegalSymbol|enumerator|kSPDIF_RxIllegalSymbol = SPDIF_SIE_SYMERR_MASK, /*!< SPDIF receiver found illegal symbol */
DECL|kSPDIF_RxParityBitError|enumerator|kSPDIF_RxParityBitError = SPDIF_SIE_BITERR_MASK, /*!< SPDIF receiver found parity bit error */
DECL|kSPDIF_TxDMAEnable|enumerator|kSPDIF_TxDMAEnable = SPDIF_SCR_DMA_TX_EN_MASK, /*!< Tx FIFO empty */
DECL|kSPDIF_TxEmpty0Sample|enumerator|kSPDIF_TxEmpty0Sample = 0x0u, /*!< Tx empty at most 0 sample in left and right FIFO */
DECL|kSPDIF_TxEmpty12Samples|enumerator|kSPDIF_TxEmpty12Samples, /*!< Tx empty at most 12 sample in left and right FIFO*/
DECL|kSPDIF_TxEmpty4Samples|enumerator|kSPDIF_TxEmpty4Samples, /*!< Tx empty at most 4 sample in left and right FIFO*/
DECL|kSPDIF_TxEmpty8Samples|enumerator|kSPDIF_TxEmpty8Samples, /*!< Tx empty at most 8 sample in left and right FIFO*/
DECL|kSPDIF_TxFIFOEmpty|enumerator|kSPDIF_TxFIFOEmpty = SPDIF_SIE_TXEM_MASK, /*!< SPDIF Tx FIFO empty */
DECL|kSPDIF_TxFIFOError|enumerator|kSPDIF_TxFIFOError = SPDIF_SIE_TXUNOV_MASK, /*!< Tx FIFO underrun or overrun */
DECL|kSPDIF_TxFIFOResync|enumerator|kSPDIF_TxFIFOResync = SPDIF_SIE_TXRESYN_MASK, /*!< Tx FIFO left and right channel resync */
DECL|kSPDIF_UChannelFromRx|enumerator|kSPDIF_UChannelFromRx = 0x1U, /*!< U channel from receiver, it is CD mode */
DECL|kSPDIF_UChannelFromTx|enumerator|kSPDIF_UChannelFromTx = 0x3U, /*!< U channel from on chip tx */
DECL|kSPDIF_UChannelReceiveRegisterFull|enumerator|kSPDIF_UChannelReceiveRegisterFull = SPDIF_SIE_URXFUL_MASK, /*!< SPDIF U channel revceive register full */
DECL|kSPDIF_UChannelReceiveRegisterOverrun|enumerator|kSPDIF_UChannelReceiveRegisterOverrun = SPDIF_SIE_URXOV_MASK, /*!< SPDIF U channel receive register overrun */
DECL|kSPDIF_UQChannelFrameError|enumerator|kSPDIF_UQChannelFrameError = SPDIF_SIE_UQERR_MASK, /*!< SPDIF U/Q channel frame error */
DECL|kSPDIF_UQChannelSync|enumerator|kSPDIF_UQChannelSync = SPDIF_SIE_UQSYNC_MASK, /*!< SPDIF U/Q channel sync found */
DECL|kSPDIF_ValidityFlagNoGood|enumerator|kSPDIF_ValidityFlagNoGood = SPDIF_SIE_VALNOGOOD_MASK, /*!< SPDIF validity flag no good */
DECL|kSPDIF_txFromReceiver|enumerator|kSPDIF_txFromReceiver = 0x1U, /*!< Tx data directly through SPDIF receiver */
DECL|kSPDIF_txNormal|enumerator|kSPDIF_txNormal = 0x5U, /*!< Normal operation, data from processor */
DECL|kSPDIF_validityFlagAlwaysClear|enumerator|kSPDIF_validityFlagAlwaysClear, /*!< Outgoing validity flags always clear */
DECL|kSPDIF_validityFlagAlwaysSet|enumerator|kSPDIF_validityFlagAlwaysSet = 0x0U, /*!< Outgoing validity flags always set */
DECL|kStatus_SPDIF_LockLoss|enumerator|kStatus_SPDIF_LockLoss = MAKE_STATUS(kStatusGroup_SPDIF, 13), /*!< SPDIF Rx PLL clock lock loss. */
DECL|kStatus_SPDIF_QChannelOverrun|enumerator|kStatus_SPDIF_QChannelOverrun = MAKE_STATUS(kStatusGroup_SPDIF, 8), /*!< SPDIF receive Q channel overrun. */
DECL|kStatus_SPDIF_QueueFull|enumerator|kStatus_SPDIF_QueueFull = MAKE_STATUS(kStatusGroup_SPDIF, 16) /*!< SPDIF queue full */
DECL|kStatus_SPDIF_RxCnew|enumerator|kStatus_SPDIF_RxCnew = MAKE_STATUS(kStatusGroup_SPDIF, 3), /*!< SPDIF Rx status channel value updated. */
DECL|kStatus_SPDIF_RxDPLLLocked|enumerator|kStatus_SPDIF_RxDPLLLocked = MAKE_STATUS(kStatusGroup_SPDIF, 0), /*!< SPDIF Rx PLL locked. */
DECL|kStatus_SPDIF_RxFIFOError|enumerator|kStatus_SPDIF_RxFIFOError = MAKE_STATUS(kStatusGroup_SPDIF, 11), /*!< SPDIF Rx FIFO error. */
DECL|kStatus_SPDIF_RxFIFOResync|enumerator|kStatus_SPDIF_RxFIFOResync = MAKE_STATUS(kStatusGroup_SPDIF, 12), /*!< SPDIF Rx left and right FIFO resync. */
DECL|kStatus_SPDIF_RxIdle|enumerator|kStatus_SPDIF_RxIdle = MAKE_STATUS(kStatusGroup_SPDIF, 15), /*!< SPDIF Rx is idle */
DECL|kStatus_SPDIF_RxIllegalSymbol|enumerator|kStatus_SPDIF_RxIllegalSymbol = MAKE_STATUS(kStatusGroup_SPDIF, 5), /*!< SPDIF Rx receive illegal symbol. */
DECL|kStatus_SPDIF_RxParityBitError|enumerator|kStatus_SPDIF_RxParityBitError = MAKE_STATUS(kStatusGroup_SPDIF, 6), /*!< SPDIF Rx parity bit error. */
DECL|kStatus_SPDIF_TxFIFOError|enumerator|kStatus_SPDIF_TxFIFOError = MAKE_STATUS(kStatusGroup_SPDIF, 1), /*!< SPDIF Tx FIFO error. */
DECL|kStatus_SPDIF_TxFIFOResync|enumerator|kStatus_SPDIF_TxFIFOResync = MAKE_STATUS(kStatusGroup_SPDIF, 2), /*!< SPDIF Tx left and right FIFO resync. */
DECL|kStatus_SPDIF_TxIdle|enumerator|kStatus_SPDIF_TxIdle = MAKE_STATUS(kStatusGroup_SPDIF, 14), /*!< SPDIF Tx is idle */
DECL|kStatus_SPDIF_UChannelOverrun|enumerator|kStatus_SPDIF_UChannelOverrun = MAKE_STATUS(kStatusGroup_SPDIF, 7), /*!< SPDIF receive U channel overrun. */
DECL|kStatus_SPDIF_UQChannelFrameError|enumerator|kStatus_SPDIF_UQChannelFrameError = MAKE_STATUS(kStatusGroup_SPDIF, 10), /*!< SPDIF U/Q channel frame error. */
DECL|kStatus_SPDIF_UQChannelSync|enumerator|kStatus_SPDIF_UQChannelSync = MAKE_STATUS(kStatusGroup_SPDIF, 9), /*!< SPDIF U/Q channel sync found. */
DECL|kStatus_SPDIF_ValidatyNoGood|enumerator|kStatus_SPDIF_ValidatyNoGood = MAKE_STATUS(kStatusGroup_SPDIF, 4), /*!< SPDIF validaty flag not good. */
DECL|qdata|member|uint8_t *qdata; /*!< Data buffer for Q channel */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Index for driver to get the transfer data and size */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Index for user to queue transfer */
DECL|rxFullSelect|member|spdif_rxfull_select_t rxFullSelect; /*!< SPDIF rx buffer full select */
DECL|spdifQueue|member|spdif_transfer_t spdifQueue[SPDIF_XFER_QUEUE_SIZE]; /*!< Transfer queue storing queued transfer */
DECL|spdif_config_t|typedef|} spdif_config_t;
DECL|spdif_gain_select_t|typedef|} spdif_gain_select_t;
DECL|spdif_handle_t|typedef|typedef struct _spdif_handle spdif_handle_t;
DECL|spdif_rxfull_select_t|typedef|} spdif_rxfull_select_t;
DECL|spdif_transfer_callback_t|typedef|typedef void (*spdif_transfer_callback_t)(SPDIF_Type *base, spdif_handle_t *handle, status_t status, void *userData);
DECL|spdif_transfer_t|typedef|} spdif_transfer_t;
DECL|spdif_tx_source_t|typedef|} spdif_tx_source_t;
DECL|spdif_txempty_select_t|typedef|} spdif_txempty_select_t;
DECL|spdif_uchannel_source_t|typedef|} spdif_uchannel_source_t;
DECL|spdif_validity_config_t|typedef|} spdif_validity_config_t;
DECL|state|member|uint32_t state; /*!< Transfer status */
DECL|transferSize|member|size_t transferSize[SPDIF_XFER_QUEUE_SIZE]; /*!< Data bytes need to transfer */
DECL|txClkSource|member|uint8_t txClkSource; /*!< SPDIF tx clock source, range from 0~7, meaning is chip-specific */
DECL|txFullSelect|member|spdif_txempty_select_t txFullSelect; /*!< SPDIF tx buffer empty select */
DECL|txSource|member|spdif_tx_source_t txSource; /*!< SPDIF tx data source */
DECL|uChannelSrc|member|spdif_uchannel_source_t uChannelSrc; /*!< U channel source */
DECL|udata|member|uint8_t *udata; /*!< Data buffer for C channel */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback function*/
DECL|validityConfig|member|spdif_validity_config_t validityConfig; /*!< Validity flag config */
DECL|watermark|member|uint8_t watermark; /*!< Watermark value */
