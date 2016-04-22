DECL|_FSL_I2C_DMA_H_|macro|_FSL_I2C_DMA_H_
DECL|_i2c_master_edma_handle|struct|struct _i2c_master_edma_handle
DECL|completionCallback|member|completionCallback; /*!< Callback function called after edma transfer finished. */
DECL|dmaHandle|member|edma_handle_t *dmaHandle; /*!< The eDMA handler used. */
DECL|i2c_master_edma_handle_t|typedef|typedef struct _i2c_master_edma_handle i2c_master_edma_handle_t;
DECL|i2c_master_edma_transfer_callback_t|typedef|typedef void (*i2c_master_edma_transfer_callback_t)(I2C_Type *base,
DECL|state|member|uint8_t state; /*!< I2C master transfer status. */
DECL|transferSize|member|size_t transferSize; /*!< Total bytes to be transferred. */
DECL|transfer|member|i2c_master_transfer_t transfer; /*!< I2C master transfer struct. */
DECL|userData|member|void *userData; /*!< Callback parameter passed to callback function. */
