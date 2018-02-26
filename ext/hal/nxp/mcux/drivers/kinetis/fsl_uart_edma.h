DECL|_FSL_UART_EDMA_H_|macro|_FSL_UART_EDMA_H_
DECL|_uart_edma_handle|struct|struct _uart_edma_handle
DECL|callback|member|uart_edma_transfer_callback_t callback; /*!< Callback function. */
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Size of the data to receive. */
DECL|rxEdmaHandle|member|edma_handle_t *rxEdmaHandle; /*!< The eDMA RX channel used. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Size of the data to send out. */
DECL|txEdmaHandle|member|edma_handle_t *txEdmaHandle; /*!< The eDMA TX channel used. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|uart_edma_handle_t|typedef|typedef struct _uart_edma_handle uart_edma_handle_t;
DECL|uart_edma_transfer_callback_t|typedef|typedef void (*uart_edma_transfer_callback_t)(UART_Type *base,
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
