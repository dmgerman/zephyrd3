DECL|SPI_MasterTransferAbortDMA|function|void SPI_MasterTransferAbortDMA(SPI_Type *base, spi_dma_handle_t *handle)
DECL|SPI_MasterTransferCreateHandleDMA|function|void SPI_MasterTransferCreateHandleDMA(SPI_Type *base, spi_dma_handle_t *handle, spi_dma_callback_t callback, void *userData, dma_handle_t *txHandle,
DECL|SPI_MasterTransferDMA|function|status_t SPI_MasterTransferDMA(SPI_Type *base, spi_dma_handle_t *handle, spi_transfer_t *xfer)
DECL|SPI_MasterTransferGetCountDMA|function|status_t SPI_MasterTransferGetCountDMA(SPI_Type *base, spi_dma_handle_t *handle, size_t *count)
DECL|SPI_RxDMACallback|function|static void SPI_RxDMACallback(dma_handle_t *handle, void *userData)
DECL|SPI_TxDMACallback|function|static void SPI_TxDMACallback(dma_handle_t *handle, void *userData)
DECL|_spi_dma_private_handle|struct|typedef struct _spi_dma_private_handle
DECL|_spi_dma_states_t|enum|enum _spi_dma_states_t
DECL|base|member|SPI_Type *base;
DECL|handle|member|spi_dma_handle_t *handle;
DECL|kSPI_Busy|enumerator|kSPI_Busy /*!< SPI is busy tranferring data. */
DECL|kSPI_Idle|enumerator|kSPI_Idle = 0x0, /*!< SPI is idle state */
DECL|s_dmaPrivateHandle|variable|s_dmaPrivateHandle
DECL|s_dummyData|variable|s_dummyData
DECL|spi_dma_private_handle_t|typedef|} spi_dma_private_handle_t;
