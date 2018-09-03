DECL|FSL_FLEXIO_UART_EDMA_DRIVER_VERSION|macro|FSL_FLEXIO_UART_EDMA_DRIVER_VERSION
DECL|_FSL_FLEXIO_UART_EDMA_H_|macro|_FSL_FLEXIO_UART_EDMA_H_
DECL|_flexio_uart_edma_handle|struct|struct _flexio_uart_edma_handle
DECL|callback|member|flexio_uart_edma_transfer_callback_t callback; /*!< Callback function. */
DECL|flexio_uart_edma_handle_t|typedef|typedef struct _flexio_uart_edma_handle flexio_uart_edma_handle_t;
DECL|flexio_uart_edma_transfer_callback_t|typedef|typedef void (*flexio_uart_edma_transfer_callback_t)(FLEXIO_UART_Type *base,
DECL|nbytes|member|uint8_t nbytes; /*!< eDMA minor byte transfer count initially configured. */
DECL|rxDataSizeAll|member|size_t rxDataSizeAll; /*!< Total bytes to be received. */
DECL|rxEdmaHandle|member|edma_handle_t *rxEdmaHandle; /*!< The eDMA RX channel used. */
DECL|rxState|member|volatile uint8_t rxState; /*!< RX transfer state */
DECL|txDataSizeAll|member|size_t txDataSizeAll; /*!< Total bytes to be sent. */
DECL|txEdmaHandle|member|edma_handle_t *txEdmaHandle; /*!< The eDMA TX channel used. */
DECL|txState|member|volatile uint8_t txState; /*!< TX transfer state. */
DECL|userData|member|void *userData; /*!< UART callback function parameter.*/
