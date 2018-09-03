DECL|FSL_LPI2C_EDMA_DRIVER_VERSION|macro|FSL_LPI2C_EDMA_DRIVER_VERSION
DECL|_FSL_LPI2C_EDMA_H_|macro|_FSL_LPI2C_EDMA_H_
DECL|_lpi2c_master_edma_handle|struct|struct _lpi2c_master_edma_handle
DECL|base|member|LPI2C_Type *base; /*!< LPI2C base pointer. */
DECL|commandBuffer|member|uint16_t commandBuffer[7]; /*!< LPI2C command sequence. */
DECL|completionCallback|member|lpi2c_master_edma_transfer_callback_t completionCallback; /*!< Callback function pointer. */
DECL|isBusy|member|bool isBusy; /*!< Transfer state machine current state. */
DECL|lpi2c_master_edma_handle_t|typedef|typedef struct _lpi2c_master_edma_handle lpi2c_master_edma_handle_t;
DECL|lpi2c_master_edma_transfer_callback_t|typedef|typedef void (*lpi2c_master_edma_transfer_callback_t)(LPI2C_Type *base,
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|rx|member|edma_handle_t *rx; /*!< Handle for receive DMA channel. */
DECL|tcds|member|edma_tcd_t tcds[2]; /*!< Software TCD. Two are allocated to provide enough room to align to 32-bytes. */
DECL|transfer|member|lpi2c_master_transfer_t transfer; /*!< Copy of the current transfer info. */
DECL|tx|member|edma_handle_t *tx; /*!< Handle for transmit DMA channel. */
DECL|userData|member|void *userData; /*!< Application data passed to callback. */
