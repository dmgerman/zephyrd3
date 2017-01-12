DECL|I2C_CheckAndClearError|function|static status_t I2C_CheckAndClearError(I2C_Type *base, uint32_t status)
DECL|I2C_InitTransferStateMachineEDMA|function|static status_t I2C_InitTransferStateMachineEDMA(I2C_Type *base, i2c_master_edma_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterCreateEDMAHandle|function|void I2C_MasterCreateEDMAHandle(I2C_Type *base, i2c_master_edma_handle_t *handle, i2c_master_edma_transfer_callback_t callback, void *userData, edma_handle_t *edmaHandle)
DECL|I2C_MasterTransferAbortEDMA|function|void I2C_MasterTransferAbortEDMA(I2C_Type *base, i2c_master_edma_handle_t *handle)
DECL|I2C_MasterTransferCallbackEDMA|function|static void I2C_MasterTransferCallbackEDMA(edma_handle_t *handle, void *userData, bool transferDone, uint32_t tcds)
DECL|I2C_MasterTransferEDMAConfig|function|static void I2C_MasterTransferEDMAConfig(I2C_Type *base, i2c_master_edma_handle_t *handle)
DECL|I2C_MasterTransferEDMA|function|status_t I2C_MasterTransferEDMA(I2C_Type *base, i2c_master_edma_handle_t *handle, i2c_master_transfer_t *xfer)
DECL|I2C_MasterTransferGetCountEDMA|function|status_t I2C_MasterTransferGetCountEDMA(I2C_Type *base, i2c_master_edma_handle_t *handle, size_t *count)
DECL|_i2c_flag_constants|enum|enum _i2c_flag_constants
DECL|_i2c_master_dma_transfer_states|enum|enum _i2c_master_dma_transfer_states
DECL|_i2c_master_edma_private_handle|struct|typedef struct _i2c_master_edma_private_handle
DECL|base|member|I2C_Type *base;
DECL|handle|member|i2c_master_edma_handle_t *handle;
DECL|i2c_master_edma_private_handle_t|typedef|} i2c_master_edma_private_handle_t;
DECL|kClearFlags|enumerator|kClearFlags = kI2C_ArbitrationLostFlag | kI2C_IntPendingFlag | kI2C_StartDetectFlag | kI2C_StopDetectFlag,
DECL|kIdleState|enumerator|kIdleState = 0x0U, /*!< I2C bus idle. */
DECL|kTransferDataState|enumerator|kTransferDataState = 0x1U, /*!< 7-bit address check state. */
DECL|s_edmaPrivateHandle|variable|s_edmaPrivateHandle
