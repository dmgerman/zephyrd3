DECL|_FSL_SAI_EDMA_H_|macro|_FSL_SAI_EDMA_H_
DECL|_sai_edma_handle|struct|struct _sai_edma_handle
DECL|bytesPerFrame|member|uint8_t bytesPerFrame; /*!< Bytes in a frame */
DECL|callback|member|sai_edma_callback_t callback; /*!< Callback for users while transfer finish or error occurs */
DECL|channel|member|uint8_t channel; /*!< Which data channel */
DECL|count|member|uint8_t count; /*!< The transfer data count in a DMA request */
DECL|dmaHandle|member|edma_handle_t *dmaHandle; /*!< DMA handler for SAI send */
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Index for driver to get the transfer data and size */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Index for user to queue transfer. */
DECL|saiQueue|member|sai_transfer_t saiQueue[SAI_XFER_QUEUE_SIZE]; /*!< Transfer queue storing queued transfer. */
DECL|sai_edma_callback_t|typedef|typedef void (*sai_edma_callback_t)(I2S_Type *base, sai_edma_handle_t *handle, status_t status, void *userData);
DECL|sai_edma_handle_t|typedef|typedef struct _sai_edma_handle sai_edma_handle_t;
DECL|state|member|uint32_t state; /*!< Internal state for SAI eDMA transfer */
DECL|tcd|member|edma_tcd_t tcd[SAI_XFER_QUEUE_SIZE + 1U]; /*!< TCD pool for eDMA transfer. */
DECL|transferSize|member|size_t transferSize[SAI_XFER_QUEUE_SIZE]; /*!< Data bytes need to transfer */
DECL|userData|member|void *userData; /*!< User callback parameter */
