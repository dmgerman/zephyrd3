DECL|DSPI_MasterTransferAbortEDMA|function|void DSPI_MasterTransferAbortEDMA(SPI_Type *base, dspi_master_edma_handle_t *handle)
DECL|DSPI_MasterTransferCreateHandleEDMA|function|void DSPI_MasterTransferCreateHandleEDMA(SPI_Type *base, dspi_master_edma_handle_t *handle, dspi_master_edma_transfer_callback_t callback, void *userData, edma_handle_t *edmaRxRegToRxDataHandle,
DECL|DSPI_MasterTransferEDMA|function|status_t DSPI_MasterTransferEDMA(SPI_Type *base, dspi_master_edma_handle_t *handle, dspi_transfer_t *transfer)
DECL|DSPI_MasterTransferGetCountEDMA|function|status_t DSPI_MasterTransferGetCountEDMA(SPI_Type *base, dspi_master_edma_handle_t *handle, size_t *count)
DECL|DSPI_SlaveTransferAbortEDMA|function|void DSPI_SlaveTransferAbortEDMA(SPI_Type *base, dspi_slave_edma_handle_t *handle)
DECL|DSPI_SlaveTransferCreateHandleEDMA|function|void DSPI_SlaveTransferCreateHandleEDMA(SPI_Type *base, dspi_slave_edma_handle_t *handle, dspi_slave_edma_transfer_callback_t callback, void *userData, edma_handle_t *edmaRxRegToRxDataHandle,
DECL|DSPI_SlaveTransferEDMA|function|status_t DSPI_SlaveTransferEDMA(SPI_Type *base, dspi_slave_edma_handle_t *handle, dspi_transfer_t *transfer)
DECL|DSPI_SlaveTransferGetCountEDMA|function|status_t DSPI_SlaveTransferGetCountEDMA(SPI_Type *base, dspi_slave_edma_handle_t *handle, size_t *count)
DECL|EDMA_DspiMasterCallback|function|static void EDMA_DspiMasterCallback(edma_handle_t *edmaHandle, void *g_dspiEdmaPrivateHandle, bool transferDone, uint32_t tcds)
DECL|EDMA_DspiSlaveCallback|function|static void EDMA_DspiSlaveCallback(edma_handle_t *edmaHandle, void *g_dspiEdmaPrivateHandle, bool transferDone, uint32_t tcds)
DECL|_dspi_master_edma_private_handle|struct|typedef struct _dspi_master_edma_private_handle
DECL|_dspi_slave_edma_private_handle|struct|typedef struct _dspi_slave_edma_private_handle
DECL|base|member|SPI_Type *base; /*!< DSPI peripheral base address. */
DECL|base|member|SPI_Type *base; /*!< DSPI peripheral base address. */
DECL|dspi_master_edma_private_handle_t|typedef|} dspi_master_edma_private_handle_t;
DECL|dspi_slave_edma_private_handle_t|typedef|} dspi_slave_edma_private_handle_t;
DECL|handle|member|dspi_master_edma_handle_t *handle; /*!< dspi_master_edma_handle_t handle */
DECL|handle|member|dspi_slave_edma_handle_t *handle; /*!< dspi_master_edma_handle_t handle */
DECL|s_dspiMasterEdmaPrivateHandle|variable|s_dspiMasterEdmaPrivateHandle
DECL|s_dspiSlaveEdmaPrivateHandle|variable|s_dspiSlaveEdmaPrivateHandle
