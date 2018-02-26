DECL|_FSL_UART_DMA_H_|macro|_FSL_UART_DMA_H_
DECL|_uart_dma_handle|struct|struct _uart_dma_handle
DECL|base|member|UART_Type *base; /*!< UART peripheral base address. */
DECL|callback|member|uart_dma_transfer_callback_t callback; /*!< Callback function. */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxDmaHandle|member|dma_handle_t *rxDmaHandle; /*!< The DMA RX channel used. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txDmaHandle|member|dma_handle_t *txDmaHandle; /*!< The DMA TX channel used. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|uart_dma_handle_t|typedef|typedef struct _uart_dma_handle uart_dma_handle_t;
DECL|uart_dma_transfer_callback_t|typedef|typedef void (*uart_dma_transfer_callback_t)(UART_Type *base,
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
