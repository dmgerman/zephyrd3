DECL|FSL_FLEXIO_I2S_EDMA_DRIVER_VERSION|macro|FSL_FLEXIO_I2S_EDMA_DRIVER_VERSION
DECL|_FSL_FLEXIO_I2S_EDMA_H_|macro|_FSL_FLEXIO_I2S_EDMA_H_
DECL|_flexio_i2s_edma_handle|struct|struct _flexio_i2s_edma_handle
DECL|bytesPerFrame|member|uint8_t bytesPerFrame; /*!< Bytes in a frame */
DECL|callback|member|flexio_i2s_edma_callback_t callback; /*!< Callback for users while transfer finish or error occurred */
DECL|dmaHandle|member|edma_handle_t *dmaHandle; /*!< DMA handler for FlexIO I2S send */
DECL|flexio_i2s_edma_callback_t|typedef|typedef void (*flexio_i2s_edma_callback_t)(FLEXIO_I2S_Type *base,
DECL|flexio_i2s_edma_handle_t|typedef|typedef struct _flexio_i2s_edma_handle flexio_i2s_edma_handle_t;
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Index for driver to get the transfer data and size */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Index for user to queue transfer. */
DECL|queue|member|flexio_i2s_transfer_t queue[FLEXIO_I2S_XFER_QUEUE_SIZE]; /*!< Transfer queue storing queued transfer. */
DECL|state|member|uint32_t state; /*!< Internal state for FlexIO I2S eDMA transfer */
DECL|tcd|member|edma_tcd_t tcd[FLEXIO_I2S_XFER_QUEUE_SIZE + 1U]; /*!< TCD pool for eDMA transfer. */
DECL|transferSize|member|size_t transferSize[FLEXIO_I2S_XFER_QUEUE_SIZE]; /*!< Data bytes need to transfer */
DECL|userData|member|void *userData; /*!< User callback parameter */
