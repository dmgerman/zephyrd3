DECL|I2C_InitTransferStateMachineDMA|function|static status_t I2C_InitTransferStateMachineDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferAbortDMA|function|void I2C_MasterTransferAbortDMA(I2C_Type *base, i2c_master_dma_handle_t *handle)
DECL|I2C_MasterTransferCallbackDMA|function|static void I2C_MasterTransferCallbackDMA(dma_handle_t *handle, void *userData)
DECL|I2C_MasterTransferCreateHandleDMA|function|void I2C_MasterTransferCreateHandleDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, i2c_master_dma_transfer_callback_t callback, void *userData, dma_handle_t *dmaHandle)
DECL|I2C_MasterTransferDMAHandleIRQ|function|void I2C_MasterTransferDMAHandleIRQ(I2C_Type *base, i2c_master_dma_handle_t *handle)
DECL|I2C_MasterTransferDMA|function|status_t I2C_MasterTransferDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferGetCountDMA|function|status_t I2C_MasterTransferGetCountDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, size_t *count)
DECL|I2C_RunDMATransfer|function|static void I2C_RunDMATransfer(I2C_Type *base, i2c_master_dma_handle_t *handle)
DECL|I2C_RunTransferStateMachineDMA|function|static status_t I2C_RunTransferStateMachineDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, bool *isDone)
DECL|_i2c_master_dma_private_handle|struct|typedef struct _i2c_master_dma_private_handle
DECL|base|member|I2C_Type *base;
DECL|handle|member|i2c_master_dma_handle_t *handle;
DECL|i2c_master_dma_private_handle_t|typedef|} i2c_master_dma_private_handle_t;
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
DECL|s_i2cIRQ|variable|s_i2cIRQ
