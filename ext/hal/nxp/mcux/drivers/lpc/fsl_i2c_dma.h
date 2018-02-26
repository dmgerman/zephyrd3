DECL|I2C_MAX_DMA_TRANSFER_COUNT|macro|I2C_MAX_DMA_TRANSFER_COUNT
DECL|_FSL_I2C_DMA_H_|macro|_FSL_I2C_DMA_H_
DECL|_i2c_master_dma_handle|struct|struct _i2c_master_dma_handle
DECL|buf|member|uint8_t *buf; /*!< Buffer pointer for current state. */
DECL|completionCallback|member|i2c_master_dma_transfer_callback_t completionCallback; /*!< Callback function called after dma transfer finished. */
DECL|dmaHandle|member|dma_handle_t *dmaHandle; /*!< The DMA handler used. */
DECL|i2c_master_dma_handle_t|typedef|typedef struct _i2c_master_dma_handle i2c_master_dma_handle_t;
DECL|i2c_master_dma_transfer_callback_t|typedef|typedef void (*i2c_master_dma_transfer_callback_t)(I2C_Type *base,
DECL|remainingBytesDMA|member|uint32_t remainingBytesDMA; /*!< Remaining byte count to be transferred using DMA. */
DECL|remainingSubaddr|member|uint32_t remainingSubaddr;
DECL|state|member|uint8_t state; /*!< Transfer state machine current state. */
DECL|subaddrBuf|member|uint8_t subaddrBuf[4];
DECL|transferCount|member|uint32_t transferCount; /*!< Indicates progress of the transfer */
DECL|transfer|member|i2c_master_transfer_t transfer; /*!< Copy of the current transfer info. */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback function. */
