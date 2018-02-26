DECL|_FSL_USART_DMA_H_|macro|_FSL_USART_DMA_H_
DECL|_usart_dma_handle|struct|struct _usart_dma_handle
DECL|base|member|USART_Type *base; /*!< UART peripheral base address. */
DECL|callback|member|usart_dma_transfer_callback_t callback; /*!< Callback function. */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDmaHandle|member|dma_handle_t *rxDmaHandle; /*!< The DMA RX channel used. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDmaHandle|member|dma_handle_t *txDmaHandle; /*!< The DMA TX channel used. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|usart_dma_handle_t|typedef|typedef struct _usart_dma_handle usart_dma_handle_t;
DECL|usart_dma_transfer_callback_t|typedef|typedef void (*usart_dma_transfer_callback_t)(USART_Type *base,
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
