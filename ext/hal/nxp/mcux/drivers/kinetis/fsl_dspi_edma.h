DECL|_FSL_DSPI_EDMA_H_|macro|_FSL_DSPI_EDMA_H_
DECL|_dspi_master_edma_handle|struct|struct _dspi_master_edma_handle
DECL|_dspi_slave_edma_handle|struct|struct _dspi_slave_edma_handle
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< The desired number of bits per frame. */
DECL|bitsPerFrame|member|uint32_t bitsPerFrame; /*!< The desired number of bits per frame. */
DECL|callback|member|dspi_master_edma_transfer_callback_t callback; /*!< Completion callback. */
DECL|callback|member|dspi_slave_edma_transfer_callback_t callback; /*!< Completion callback. */
DECL|command|member|volatile uint32_t command; /*!< The desired data command. */
DECL|dspiSoftwareTCD|member|edma_tcd_t dspiSoftwareTCD[2]; /*!<SoftwareTCD , internal used*/
DECL|dspi_master_edma_handle_t|typedef|typedef struct _dspi_master_edma_handle dspi_master_edma_handle_t;
DECL|dspi_master_edma_transfer_callback_t|typedef|typedef void (*dspi_master_edma_transfer_callback_t)(SPI_Type *base,
DECL|dspi_slave_edma_handle_t|typedef|typedef struct _dspi_slave_edma_handle dspi_slave_edma_handle_t;
DECL|dspi_slave_edma_transfer_callback_t|typedef|typedef void (*dspi_slave_edma_transfer_callback_t)(SPI_Type *base,
DECL|edmaIntermediaryToTxRegHandle|member|edma_handle_t *edmaIntermediaryToTxRegHandle; /*!<edma_handle_t handle point used for Intermediary to TxReg*/
DECL|edmaRxRegToRxDataHandle|member|edma_handle_t *edmaRxRegToRxDataHandle; /*!<edma_handle_t handle point used for RxReg to RxData buff*/
DECL|edmaRxRegToRxDataHandle|member|edma_handle_t *edmaRxRegToRxDataHandle; /*!<edma_handle_t handle point used for RxReg to RxData buff*/
DECL|edmaTxDataToIntermediaryHandle|member|edma_handle_t *edmaTxDataToIntermediaryHandle; /*!<edma_handle_t handle point used for TxData to Intermediary*/
DECL|edmaTxDataToTxRegHandle|member|edma_handle_t *edmaTxDataToTxRegHandle; /*!<edma_handle_t handle point used for TxData to TxReg*/
DECL|fifoSize|member|uint8_t fifoSize; /*!< FIFO dataSize. */
DECL|isPcsActiveAfterTransfer|member|isPcsActiveAfterTransfer; /*!< Indicates whether the PCS signal keeps active after the last frame transfer.*/
DECL|lastCommand|member|volatile uint32_t lastCommand; /*!< The desired last data command. */
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|remainingReceiveByteCount|member|volatile size_t remainingReceiveByteCount; /*!< A number of bytes remaining to receive.*/
DECL|remainingReceiveByteCount|member|volatile size_t remainingReceiveByteCount; /*!< A number of bytes remaining to receive.*/
DECL|remainingSendByteCount|member|volatile size_t remainingSendByteCount; /*!< A number of bytes remaining to send.*/
DECL|remainingSendByteCount|member|volatile size_t remainingSendByteCount; /*!< A number of bytes remaining to send.*/
DECL|rxBuffIfNull|member|uint32_t rxBuffIfNull; /*!< Used if there is not rxData for DMA purpose.*/
DECL|rxBuffIfNull|member|uint32_t rxBuffIfNull; /*!< Used if there is not rxData for DMA purpose.*/
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|rxData|member|uint8_t *volatile rxData; /*!< Receive buffer. */
DECL|state|member|volatile uint8_t state; /*!< DSPI transfer state , _dspi_transfer_state.*/
DECL|state|member|volatile uint8_t state; /*!< DSPI transfer state.*/
DECL|totalByteCount|member|size_t totalByteCount; /*!< A number of transfer bytes*/
DECL|totalByteCount|member|size_t totalByteCount; /*!< A number of transfer bytes*/
DECL|txBuffIfNull|member|uint32_t txBuffIfNull; /*!< Used if there is not txData for DMA purpose.*/
DECL|txBuffIfNull|member|uint32_t txBuffIfNull; /*!< Used if there is not txData for DMA purpose.*/
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txData|member|uint8_t *volatile txData; /*!< Send buffer. */
DECL|txLastData|member|uint32_t txLastData; /*!< Used if there is an extra byte when 16bits per frame for DMA purpose.*/
DECL|userData|member|void *userData; /*!< Callback user data. */
DECL|userData|member|void *userData; /*!< Callback user data. */
