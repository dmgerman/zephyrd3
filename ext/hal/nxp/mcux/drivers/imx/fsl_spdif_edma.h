DECL|_FSL_SPDIF_EDMA_H_|macro|_FSL_SPDIF_EDMA_H_
DECL|_spdif_edma_handle|struct|struct _spdif_edma_handle
DECL|_spdif_edma_transfer|struct|typedef struct _spdif_edma_transfer
DECL|callback|member|spdif_edma_callback_t callback; /*!< Callback for users while transfer finish or error occurs */
DECL|count|member|uint8_t count; /*!< The transfer data count in a DMA request */
DECL|dataSize|member|size_t dataSize; /*!< Transfer size. */
DECL|dmaLeftHandle|member|edma_handle_t *dmaLeftHandle; /*!< DMA handler for SPDIF left channel */
DECL|dmaRightHandle|member|edma_handle_t *dmaRightHandle; /*!< DMA handler for SPDIF right channel */
DECL|leftData|member|uint8_t *leftData; /*!< Data start address to transfer. */
DECL|leftTcd|member|edma_tcd_t leftTcd[SPDIF_XFER_QUEUE_SIZE + 1U]; /*!< TCD pool for eDMA transfer. */
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Index for driver to get the transfer data and size */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Index for user to queue transfer. */
DECL|rightData|member|uint8_t *rightData; /*!< Data start address to transfer. */
DECL|rightTcd|member|edma_tcd_t rightTcd[SPDIF_XFER_QUEUE_SIZE + 1U]; /*!< TCD pool for eDMA transfer. */
DECL|spdifQueue|member|spdif_edma_transfer_t spdifQueue[SPDIF_XFER_QUEUE_SIZE]; /*!< Transfer queue storing queued transfer. */
DECL|spdif_edma_callback_t|typedef|typedef void (*spdif_edma_callback_t)(SPDIF_Type *base, spdif_edma_handle_t *handle, status_t status, void *userData);
DECL|spdif_edma_handle_t|typedef|typedef struct _spdif_edma_handle spdif_edma_handle_t;
DECL|spdif_edma_transfer_t|typedef|} spdif_edma_transfer_t;
DECL|state|member|uint32_t state; /*!< Internal state for SPDIF eDMA transfer */
DECL|transferSize|member|size_t transferSize[SPDIF_XFER_QUEUE_SIZE]; /*!< Data bytes need to transfer, left and right are the same, so use
DECL|userData|member|void *userData; /*!< User callback parameter */
