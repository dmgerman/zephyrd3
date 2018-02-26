DECL|SPI_SlaveTransferAbortDMA|function|static inline void SPI_SlaveTransferAbortDMA(SPI_Type *base, spi_dma_handle_t *handle)
DECL|SPI_SlaveTransferCreateHandleDMA|function|static inline status_t SPI_SlaveTransferCreateHandleDMA(SPI_Type *base, spi_dma_handle_t *handle, spi_dma_callback_t callback, void *userData, dma_handle_t *txHandle,
DECL|SPI_SlaveTransferDMA|function|static inline status_t SPI_SlaveTransferDMA(SPI_Type *base, spi_dma_handle_t *handle, spi_transfer_t *xfer)
DECL|SPI_SlaveTransferGetCountDMA|function|static inline status_t SPI_SlaveTransferGetCountDMA(SPI_Type *base, spi_dma_handle_t *handle, size_t *count)
DECL|_FSL_SPI_DMA_H_|macro|_FSL_SPI_DMA_H_
DECL|_spi_dma_handle|struct|struct _spi_dma_handle
DECL|bytesPerFrame|member|uint8_t bytesPerFrame; /*!< Bytes in a frame for SPI tranfer */
DECL|callback|member|spi_dma_callback_t callback; /*!< Callback for SPI DMA transfer */
DECL|rxHandle|member|dma_handle_t *rxHandle; /*!< DMA handler for SPI receive */
DECL|rxInProgress|member|volatile bool rxInProgress; /*!< Receive transfer finished */
DECL|spi_dma_callback_t|typedef|typedef void (*spi_dma_callback_t)(SPI_Type *base, spi_dma_handle_t *handle, status_t status, void *userData);
DECL|spi_dma_handle_t|typedef|typedef struct _spi_dma_handle spi_dma_handle_t;
DECL|state|member|uint32_t state; /*!< Internal state of SPI DMA transfer */
DECL|transferSize|member|size_t transferSize; /*!< Bytes need to be transfer */
DECL|txHandle|member|dma_handle_t *txHandle; /*!< DMA handler for SPI send */
DECL|txInProgress|member|volatile bool txInProgress; /*!< Send transfer finished */
DECL|userData|member|void *userData; /*!< User Data for SPI DMA callback */
