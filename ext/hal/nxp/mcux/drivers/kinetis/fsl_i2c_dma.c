DECL|I2C_CheckAndClearError|function|static status_t I2C_CheckAndClearError(I2C_Type *base, uint32_t status)
DECL|I2C_InitTransferStateMachineDMA|function|static status_t I2C_InitTransferStateMachineDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferAbortDMA|function|void I2C_MasterTransferAbortDMA(I2C_Type *base, i2c_master_dma_handle_t *handle)
DECL|I2C_MasterTransferCallbackDMA|function|static void I2C_MasterTransferCallbackDMA(dma_handle_t *handle, void *userData)
DECL|I2C_MasterTransferCreateHandleDMA|function|void I2C_MasterTransferCreateHandleDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, i2c_master_dma_transfer_callback_t callback, void *userData, dma_handle_t *dmaHandle)
DECL|I2C_MasterTransferDMAConfig|function|static void I2C_MasterTransferDMAConfig(I2C_Type *base, i2c_master_dma_handle_t *handle)
DECL|I2C_MasterTransferDMA|function|status_t I2C_MasterTransferDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferGetCountDMA|function|status_t I2C_MasterTransferGetCountDMA(I2C_Type *base, i2c_master_dma_handle_t *handle, size_t *count)
DECL|_i2c_flag_constants|enum|enum _i2c_flag_constants
DECL|_i2c_master_dma_private_handle|struct|typedef struct _i2c_master_dma_private_handle
DECL|_i2c_master_dma_transfer_states|enum|enum _i2c_master_dma_transfer_states
DECL|base|member|I2C_Type *base;
DECL|handle|member|i2c_master_dma_handle_t *handle;
DECL|i2c_master_dma_private_handle_t|typedef|} i2c_master_dma_private_handle_t;
DECL|kClearFlags|enumerator|kClearFlags = kI2C_ArbitrationLostFlag | kI2C_IntPendingFlag | kI2C_StartDetectFlag | kI2C_StopDetectFlag,
DECL|kIdleState|enumerator|kIdleState = 0x0U, /*!< I2C bus idle. */
DECL|kTransferDataState|enumerator|kTransferDataState = 0x1U, /*!< 7-bit address check state. */
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
