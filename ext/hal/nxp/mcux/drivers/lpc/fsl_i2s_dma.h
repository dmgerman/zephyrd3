DECL|FSL_I2S_DMA_DRIVER_VERSION|macro|FSL_I2S_DMA_DRIVER_VERSION
DECL|_FSL_I2S_DMA_H_|macro|_FSL_I2S_DMA_H_
DECL|_i2s_dma_handle|struct|struct _i2s_dma_handle
DECL|completionCallback|member|i2s_dma_transfer_callback_t completionCallback; /*!< Callback function pointer */
DECL|dmaHandle|member|dma_handle_t *dmaHandle; /*!< DMA handle */
DECL|i2sQueue|member|volatile i2s_transfer_t i2sQueue[I2S_NUM_BUFFERS]; /*!< Transfer queue storing transfer buffers */
DECL|i2s_dma_handle_t|typedef|typedef struct _i2s_dma_handle i2s_dma_handle_t;
DECL|i2s_dma_transfer_callback_t|typedef|typedef void (*i2s_dma_transfer_callback_t)(I2S_Type *base,
DECL|queueDriver|member|volatile uint8_t queueDriver; /*!< Queue index of buffer actually used by the driver */
DECL|queueUser|member|volatile uint8_t queueUser; /*!< Queue index where user's next transfer will be stored */
DECL|state|member|uint32_t state; /*!< Internal state of I2S DMA transfer */
DECL|userData|member|void *userData; /*!< Application data passed to callback */
