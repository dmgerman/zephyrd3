DECL|FSL_LPSPI_EDMA_DRIVER_VERSION|macro|FSL_LPSPI_EDMA_DRIVER_VERSION
DECL|_FSL_LPSPI_EDMA_H_|macro|_FSL_LPSPI_EDMA_H_
DECL|_lpspi_master_edma_handle|struct|struct _lpspi_master_edma_handle
DECL|_lpspi_slave_edma_handle|struct|struct _lpspi_slave_edma_handle
DECL|bytesEachRead|member|volatile uint8_t bytesEachRead; /*!< Bytes for each read RDR. */
DECL|bytesEachRead|member|volatile uint8_t bytesEachRead; /*!< Bytes for each read RDR. */
DECL|bytesEachWrite|member|volatile uint8_t bytesEachWrite; /*!< Bytes for each write TDR. */
DECL|bytesEachWrite|member|volatile uint8_t bytesEachWrite; /*!< Bytes for each write TDR. */
DECL|bytesLastRead|member|volatile uint8_t bytesLastRead; /*!< Bytes for last read RDR. */
DECL|bytesLastRead|member|volatile uint8_t bytesLastRead; /*!< Bytes for last read RDR. */
DECL|callback|member|lpspi_master_edma_transfer_callback_t callback; /*!< Completion callback. */
DECL|callback|member|lpspi_slave_edma_transfer_callback_t callback; /*!< Completion callback. */
DECL|edmaRxRegToRxDataHandle|member|edma_handle_t *edmaRxRegToRxDataHandle; /*!<edma_handle_t handle point used for RxReg to RxData buff*/
DECL|edmaRxRegToRxDataHandle|member|edma_handle_t *edmaRxRegToRxDataHandle; /*!<edma_handle_t handle point used for RxReg to RxData buff*/
DECL|edmaTxDataToTxRegHandle|member|edma_handle_t *edmaTxDataToTxRegHandle; /*!<edma_handle_t handle point used for TxData to TxReg buff*/
DECL|edmaTxDataToTxRegHandle|member|edma_handle_t *edmaTxDataToTxRegHandle; /*!<edma_handle_t handle point used for TxData to TxReg*/
DECL|errorCount|member|uint32_t errorCount; /*!< Error count for slave transfer.*/
DECL|fifoSize|member|volatile uint8_t fifoSize; /*!< FIFO dataSize. */
DECL|fifoSize|member|volatile uint8_t fifoSize; /*!< FIFO dataSize. */
DECL|isByteSwap|member|volatile bool isByteSwap; /*!< A flag that whether should byte swap. */
DECL|isByteSwap|member|volatile bool isByteSwap; /*!< A flag that whether should byte swap. */
DECL|isPcsContinuous|member|volatile bool isPcsContinuous; /*!< Is PCS continuous in transfer. */
DECL|isThereExtraRxBytes|member|volatile uint8_t isThereExtraRxBytes; /*!< Is there extra RX byte. */
DECL|isThereExtraRxBytes|member|volatile uint8_t isThereExtraRxBytes; /*!< Is there extra RX byte. */
DECL|lpspiSoftwareTCD|member|edma_tcd_t lpspiSoftwareTCD[2]; /*!<SoftwareTCD, internal used*/
DECL|lpspiSoftwareTCD|member|edma_tcd_t lpspiSoftwareTCD[3]; /*!<SoftwareTCD, internal used*/
DECL|lpspi_master_edma_handle_t|typedef|typedef struct _lpspi_master_edma_handle lpspi_master_edma_handle_t;
DECL|lpspi_master_edma_transfer_callback_t|typedef|typedef void (*lpspi_master_edma_transfer_callback_t)(LPSPI_Type *base,
DECL|lpspi_slave_edma_handle_t|typedef|typedef struct _lpspi_slave_edma_handle lpspi_slave_edma_handle_t;
DECL|lpspi_slave_edma_transfer_callback_t|typedef|typedef void (*lpspi_slave_edma_transfer_callback_t)(LPSPI_Type *base,
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|readRegRemainingTimes|member|volatile uint32_t readRegRemainingTimes; /*!< Read RDR register remaining times. */
DECL|readRegRemainingTimes|member|volatile uint32_t readRegRemainingTimes; /*!< Read RDR register remaining times. */
DECL|rxBuffIfNull|member|uint32_t rxBuffIfNull; /*!< Used if there is not rxData for DMA purpose.*/
DECL|rxBuffIfNull|member|uint32_t rxBuffIfNull; /*!< Used if there is not rxData for DMA purpose.*/
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|rxRemainingByteCount|member|volatile size_t rxRemainingByteCount; /*!< Number of bytes remaining to receive.*/
DECL|rxRemainingByteCount|member|volatile size_t rxRemainingByteCount; /*!< Number of bytes remaining to receive.*/
DECL|rxWatermark|member|volatile uint8_t rxWatermark; /*!< Rx watermark. */
DECL|rxWatermark|member|volatile uint8_t rxWatermark; /*!< Rx watermark. */
DECL|state|member|volatile uint8_t state; /*!< LPSPI transfer state , _lpspi_transfer_state.*/
DECL|state|member|volatile uint8_t state; /*!< LPSPI transfer state.*/
DECL|totalByteCount|member|uint32_t totalByteCount; /*!< Number of transfer bytes*/
DECL|totalByteCount|member|uint32_t totalByteCount; /*!< Number of transfer bytes*/
DECL|transmitCommand|member|uint32_t transmitCommand; /*!< Used to write TCR for DMA purpose.*/
DECL|txBuffIfNull|member|uint32_t txBuffIfNull; /*!< Used if there is not txData for DMA purpose.*/
DECL|txBuffIfNull|member|uint32_t txBuffIfNull; /*!< Used if there is not txData for DMA purpose.*/
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txRemainingByteCount|member|volatile size_t txRemainingByteCount; /*!< Number of bytes remaining to send.*/
DECL|txRemainingByteCount|member|volatile size_t txRemainingByteCount; /*!< Number of bytes remaining to send.*/
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|writeRegRemainingTimes|member|volatile uint32_t writeRegRemainingTimes; /*!< Write TDR register remaining times. */
DECL|writeRegRemainingTimes|member|volatile uint32_t writeRegRemainingTimes; /*!< Write TDR register remaining times. */
