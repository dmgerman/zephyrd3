DECL|LTC_AES_DecryptCtrEDMA|macro|LTC_AES_DecryptCtrEDMA
DECL|LTC_AES_EncryptCtrEDMA|macro|LTC_AES_EncryptCtrEDMA
DECL|_FSL_LTC_EDMA_H_|macro|_FSL_LTC_EDMA_H_
DECL|_ltc_edma_handle|struct|struct _ltc_edma_handle
DECL|callback|member|ltc_edma_callback_t callback; /*!< Callback function. */
DECL|counterlast|member|*counterlast; /*!< Output cipher of last counter, for chained CTR calls. NULL can be passed if chained calls are
DECL|counter|member|uint8_t *counter; /*!< Input counter (updates on return)*/
DECL|inData|member|const uint8_t *inData; /*!< Input data. */
DECL|inputFifoEdmaHandle|member|edma_handle_t *inputFifoEdmaHandle; /*!< The eDMA TX channel used. */
DECL|keySize|member|uint32_t keySize; /*!< Size of the input key, in bytes. Must be 16, 24, or 32.*/
DECL|key|member|const uint8_t *key; /*!< Input key to use for forward AES cipher*/
DECL|lastSize|member|uint32_t lastSize; /*!< Last size.*/
DECL|ltc_edma_callback_t|typedef|typedef void (*ltc_edma_callback_t)(LTC_Type *base, ltc_edma_handle_t *handle, status_t status, void *userData);
DECL|ltc_edma_handle_t|typedef|typedef struct _ltc_edma_handle ltc_edma_handle_t;
DECL|ltc_edma_state_machine_t|typedef|typedef status_t (*ltc_edma_state_machine_t)(LTC_Type *base, ltc_edma_handle_t *handle);
DECL|modeReg|member|uint32_t modeReg; /*!< LTC mode register.*/
DECL|outData|member|uint8_t *outData; /*!< Output data. */
DECL|outputFifoEdmaHandle|member|edma_handle_t *outputFifoEdmaHandle; /*!< The eDMA RX channel used. */
DECL|size|member|uint32_t size; /*!< Size of input and output data in bytes.*/
DECL|state_machine|member|ltc_edma_state_machine_t state_machine; /*!< State machine. */
DECL|state|member|uint32_t state; /*!< Internal state. */
DECL|szLeft|member|uint32_t *szLeft; /*!< Output number of bytes in left unused in counterlast block. NULL can be passed if chained
DECL|userData|member|void *userData; /*!< LTC callback function parameter.*/
