DECL|PrepareTxFIFO|function|static void PrepareTxFIFO(uint32_t *fifo, uint32_t count, uint32_t ctrl)
DECL|SPI_MasterTransferAbortDMA|function|void SPI_MasterTransferAbortDMA(SPI_Type *base, spi_dma_handle_t *handle)
DECL|SPI_MasterTransferCreateHandleDMA|function|status_t SPI_MasterTransferCreateHandleDMA(SPI_Type *base, spi_dma_handle_t *handle, spi_dma_callback_t callback, void *userData, dma_handle_t *txHandle,
DECL|SPI_MasterTransferDMA|function|status_t SPI_MasterTransferDMA(SPI_Type *base, spi_dma_handle_t *handle, spi_transfer_t *xfer)
DECL|SPI_MasterTransferGetCountDMA|function|status_t SPI_MasterTransferGetCountDMA(SPI_Type *base, spi_dma_handle_t *handle, size_t *count)
DECL|SPI_RxDMACallback|function|static void SPI_RxDMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t intmode)
DECL|SPI_SetupDummy|function|static void SPI_SetupDummy(uint32_t *dummy, spi_transfer_t *xfer, spi_config_t *spi_config_p)
DECL|SPI_TxDMACallback|function|static void SPI_TxDMACallback(dma_handle_t *handle, void *userData, bool transferDone, uint32_t intmode)
DECL|SpiConfigToFifoWR|function|static void SpiConfigToFifoWR(spi_config_t *config, uint32_t *fifowr)
DECL|XferToFifoWR|function|static void XferToFifoWR(spi_transfer_t *xfer, uint32_t *fifowr)
DECL|_spi_dma_private_handle|struct|typedef struct _spi_dma_private_handle
DECL|_spi_dma_states_t|enum|enum _spi_dma_states_t
DECL|_spi_dma_txdummy|struct|typedef struct _spi_dma_txdummy
DECL|base|member|SPI_Type *base;
DECL|handle|member|spi_dma_handle_t *handle;
DECL|kSPI_Busy|enumerator|kSPI_Busy /*!< SPI is busy tranferring data. */
DECL|kSPI_Idle|enumerator|kSPI_Idle = 0x0, /*!< SPI is idle state */
DECL|lastWord|member|uint32_t lastWord;
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
DECL|s_rxDummy|variable|s_rxDummy
DECL|s_rxDummy|variable|s_rxDummy
DECL|s_rxDummy|variable|s_rxDummy
DECL|s_spi_descriptor_table|variable|s_spi_descriptor_table
DECL|s_spi_descriptor_table|variable|s_spi_descriptor_table
DECL|s_spi_descriptor_table|variable|s_spi_descriptor_table
DECL|s_txDummy|variable|s_txDummy
DECL|s_txDummy|variable|s_txDummy
DECL|s_txDummy|variable|s_txDummy
DECL|spi_dma_private_handle_t|typedef|} spi_dma_private_handle_t;
DECL|spi_dma_txdummy_t|typedef|} spi_dma_txdummy_t;
DECL|word|member|uint32_t word;
