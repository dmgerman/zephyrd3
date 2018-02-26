DECL|EDMA_LpspiMasterCallback|function|static void EDMA_LpspiMasterCallback(edma_handle_t *edmaHandle, void *g_lpspiEdmaPrivateHandle, bool transferDone, uint32_t tcds)
DECL|EDMA_LpspiSlaveCallback|function|static void EDMA_LpspiSlaveCallback(edma_handle_t *edmaHandle, void *g_lpspiEdmaPrivateHandle, bool transferDone, uint32_t tcds)
DECL|LPSPI_MasterTransferAbortEDMA|function|void LPSPI_MasterTransferAbortEDMA(LPSPI_Type *base, lpspi_master_edma_handle_t *handle)
DECL|LPSPI_MasterTransferCreateHandleEDMA|function|void LPSPI_MasterTransferCreateHandleEDMA(LPSPI_Type *base, lpspi_master_edma_handle_t *handle, lpspi_master_edma_transfer_callback_t callback, void *userData, edma_handle_t *edmaRxRegToRxDataHandle,
DECL|LPSPI_MasterTransferEDMA|function|status_t LPSPI_MasterTransferEDMA(LPSPI_Type *base, lpspi_master_edma_handle_t *handle, lpspi_transfer_t *transfer)
DECL|LPSPI_MasterTransferGetCountEDMA|function|status_t LPSPI_MasterTransferGetCountEDMA(LPSPI_Type *base, lpspi_master_edma_handle_t *handle, size_t *count)
DECL|LPSPI_SeparateEdmaReadData|function|static void LPSPI_SeparateEdmaReadData(uint8_t *rxData, uint32_t readData, uint32_t bytesEachRead, bool isByteSwap)
DECL|LPSPI_SlaveTransferAbortEDMA|function|void LPSPI_SlaveTransferAbortEDMA(LPSPI_Type *base, lpspi_slave_edma_handle_t *handle)
DECL|LPSPI_SlaveTransferCreateHandleEDMA|function|void LPSPI_SlaveTransferCreateHandleEDMA(LPSPI_Type *base, lpspi_slave_edma_handle_t *handle, lpspi_slave_edma_transfer_callback_t callback, void *userData, edma_handle_t *edmaRxRegToRxDataHandle,
DECL|LPSPI_SlaveTransferEDMA|function|status_t LPSPI_SlaveTransferEDMA(LPSPI_Type *base, lpspi_slave_edma_handle_t *handle, lpspi_transfer_t *transfer)
DECL|LPSPI_SlaveTransferGetCountEDMA|function|status_t LPSPI_SlaveTransferGetCountEDMA(LPSPI_Type *base, lpspi_slave_edma_handle_t *handle, size_t *count)
DECL|_lpspi_master_edma_private_handle|struct|typedef struct _lpspi_master_edma_private_handle
DECL|_lpspi_slave_edma_private_handle|struct|typedef struct _lpspi_slave_edma_private_handle
DECL|base|member|LPSPI_Type *base; /*!< LPSPI peripheral base address. */
DECL|base|member|LPSPI_Type *base; /*!< LPSPI peripheral base address. */
DECL|handle|member|lpspi_master_edma_handle_t *handle; /*!< lpspi_master_edma_handle_t handle */
DECL|handle|member|lpspi_slave_edma_handle_t *handle; /*!< lpspi_slave_edma_handle_t handle */
DECL|lpspi_master_edma_private_handle_t|typedef|} lpspi_master_edma_private_handle_t;
DECL|lpspi_slave_edma_private_handle_t|typedef|} lpspi_slave_edma_private_handle_t;
DECL|s_lpspiMasterEdmaPrivateHandle|variable|s_lpspiMasterEdmaPrivateHandle
DECL|s_lpspiSlaveEdmaPrivateHandle|variable|s_lpspiSlaveEdmaPrivateHandle
