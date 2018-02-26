DECL|_FSL_DMIC_DMA_H_|macro|_FSL_DMIC_DMA_H_
DECL|_dmic_dma_handle|struct|struct _dmic_dma_handle
DECL|_dmic_transfer|struct|typedef struct _dmic_transfer
DECL|base|member|DMIC_Type *base; /*!< DMIC peripheral base address. */
DECL|callback|member|dmic_dma_transfer_callback_t callback; /*!< Callback function. */
DECL|dataSize|member|size_t dataSize; /*!< The byte count to be transfer. */
DECL|data|member|uint16_t *data; /*!< The buffer of data to be transfer.*/
DECL|dmic_dma_handle_t|typedef|typedef struct _dmic_dma_handle dmic_dma_handle_t;
DECL|dmic_dma_transfer_callback_t|typedef|typedef void (*dmic_dma_transfer_callback_t)(DMIC_Type *base,
DECL|dmic_transfer_t|typedef|} dmic_transfer_t;
DECL|rxDmaHandle|member|dma_handle_t *rxDmaHandle; /*!< The DMA RX channel used. */
DECL|state|member|volatile uint8_t state; /*!< Internal state of DMIC DMA transfer */
DECL|transferSize|member|size_t transferSize; /*!< Size of the data to receive. */
DECL|userData|member|void *userData; /*!< DMIC callback function parameter.*/
