DECL|_FSL_LPSCI_DMA_H_|macro|_FSL_LPSCI_DMA_H_
DECL|_lpsci_dma_handle|struct|struct _lpsci_dma_handle
DECL|base|member|UART0_Type *base; /*!< LPSCI peripheral base address. */
DECL|callback|member|lpsci_dma_transfer_callback_t callback; /*!< Callback function. */
DECL|lpsci_dma_handle_t|typedef|typedef struct _lpsci_dma_handle lpsci_dma_handle_t;
DECL|lpsci_dma_transfer_callback_t|typedef|typedef void (*lpsci_dma_transfer_callback_t)(UART0_Type *base,
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDmaHandle|member|dma_handle_t *rxDmaHandle; /*!< The DMA RX channel used. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDmaHandle|member|dma_handle_t *txDmaHandle; /*!< The DMA TX channel used. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
