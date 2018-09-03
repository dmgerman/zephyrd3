DECL|FLEXIO_SPI_SlaveTransferAbortEDMA|function|static inline void FLEXIO_SPI_SlaveTransferAbortEDMA(FLEXIO_SPI_Type *base, flexio_spi_slave_edma_handle_t *handle)
DECL|FLEXIO_SPI_SlaveTransferCreateHandleEDMA|function|static inline void FLEXIO_SPI_SlaveTransferCreateHandleEDMA(FLEXIO_SPI_Type *base, flexio_spi_slave_edma_handle_t *handle, flexio_spi_slave_edma_transfer_callback_t callback, void *userData, edma_handle_t *txHandle,
DECL|FLEXIO_SPI_SlaveTransferGetCountEDMA|function|static inline status_t FLEXIO_SPI_SlaveTransferGetCountEDMA(FLEXIO_SPI_Type *base, flexio_spi_slave_edma_handle_t *handle, size_t *count)
DECL|FSL_FLEXIO_SPI_EDMA_DRIVER_VERSION|macro|FSL_FLEXIO_SPI_EDMA_DRIVER_VERSION
DECL|_FSL_FLEXIO_SPI_EDMA_H_|macro|_FSL_FLEXIO_SPI_EDMA_H_
DECL|_flexio_spi_master_edma_handle|struct|struct _flexio_spi_master_edma_handle
DECL|callback|member|flexio_spi_master_edma_transfer_callback_t callback; /*!< Callback for SPI DMA transfer */
DECL|flexio_spi_master_edma_handle_t|typedef|typedef struct _flexio_spi_master_edma_handle flexio_spi_master_edma_handle_t;
DECL|flexio_spi_master_edma_transfer_callback_t|typedef|typedef void (*flexio_spi_master_edma_transfer_callback_t)(FLEXIO_SPI_Type *base,
DECL|flexio_spi_slave_edma_handle_t|typedef|typedef flexio_spi_master_edma_handle_t flexio_spi_slave_edma_handle_t;
DECL|flexio_spi_slave_edma_transfer_callback_t|typedef|typedef void (*flexio_spi_slave_edma_transfer_callback_t)(FLEXIO_SPI_Type *base,
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|rxHandle|member|edma_handle_t *rxHandle; /*!< DMA handler for SPI receive */
DECL|rxInProgress|member|bool rxInProgress; /*!< Receive transfer in progress */
DECL|transferSize|member|size_t transferSize; /*!< Total bytes to be transferred. */
DECL|txHandle|member|edma_handle_t *txHandle; /*!< DMA handler for SPI send */
DECL|txInProgress|member|bool txInProgress; /*!< Send transfer in progress */
DECL|userData|member|void *userData; /*!< User Data for SPI DMA callback */
