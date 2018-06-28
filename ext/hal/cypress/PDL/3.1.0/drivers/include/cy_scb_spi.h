DECL|CY_SCB_SPI_ACTIVE_HIGH|enumerator|CY_SCB_SPI_ACTIVE_HIGH = 1U, /**< Signal in question is active high */
DECL|CY_SCB_SPI_ACTIVE_LOW|enumerator|CY_SCB_SPI_ACTIVE_LOW = 0U, /**< Signal in question is active low */
DECL|CY_SCB_SPI_BAD_PARAM|enumerator|CY_SCB_SPI_BAD_PARAM = (CY_SCB_ID | CY_PDL_STATUS_ERROR | CY_SCB_SPI_ID | 1U),
DECL|CY_SCB_SPI_CPHA0_CPOL0|enumerator|CY_SCB_SPI_CPHA0_CPOL0 = 0U, /**< Clock is active low, data is changed on first edge */
DECL|CY_SCB_SPI_CPHA0_CPOL1|enumerator|CY_SCB_SPI_CPHA0_CPOL1 = 1U, /**< Clock is active high, data is changed on first edge */
DECL|CY_SCB_SPI_CPHA1_CPOL0|enumerator|CY_SCB_SPI_CPHA1_CPOL0 = 2U, /**< Clock is active low, data is changed on second edge */
DECL|CY_SCB_SPI_CPHA1_CPOL1|enumerator|CY_SCB_SPI_CPHA1_CPOL1 = 3U, /**< Clock is active high, data is changed on second edge */
DECL|CY_SCB_SPI_DEFAULT_TX|macro|CY_SCB_SPI_DEFAULT_TX
DECL|CY_SCB_SPI_GetSclkMode|function|__STATIC_INLINE uint32_t CY_SCB_SPI_GetSclkMode(cy_en_scb_spi_sub_mode_t subMode , cy_en_scb_spi_sclk_mode_t sclkMode)
DECL|CY_SCB_SPI_H|macro|CY_SCB_SPI_H
DECL|CY_SCB_SPI_INIT_KEY|macro|CY_SCB_SPI_INIT_KEY
DECL|CY_SCB_SPI_IS_BOTH_DATA_WIDTH_VALID|macro|CY_SCB_SPI_IS_BOTH_DATA_WIDTH_VALID
DECL|CY_SCB_SPI_IS_BUFFER_VALID|macro|CY_SCB_SPI_IS_BUFFER_VALID
DECL|CY_SCB_SPI_IS_DATA_WIDTH_VALID|macro|CY_SCB_SPI_IS_DATA_WIDTH_VALID
DECL|CY_SCB_SPI_IS_MODE_VALID|macro|CY_SCB_SPI_IS_MODE_VALID
DECL|CY_SCB_SPI_IS_OVERSAMPLE_VALID|macro|CY_SCB_SPI_IS_OVERSAMPLE_VALID
DECL|CY_SCB_SPI_IS_POLARITY_VALID|macro|CY_SCB_SPI_IS_POLARITY_VALID
DECL|CY_SCB_SPI_IS_SCLK_MODE_VALID|macro|CY_SCB_SPI_IS_SCLK_MODE_VALID
DECL|CY_SCB_SPI_IS_SLAVE_SEL_VALID|macro|CY_SCB_SPI_IS_SLAVE_SEL_VALID
DECL|CY_SCB_SPI_IS_SS_POLARITY_VALID|macro|CY_SCB_SPI_IS_SS_POLARITY_VALID
DECL|CY_SCB_SPI_IS_SUB_MODE_VALID|macro|CY_SCB_SPI_IS_SUB_MODE_VALID
DECL|CY_SCB_SPI_MASTER_DONE|macro|CY_SCB_SPI_MASTER_DONE
DECL|CY_SCB_SPI_MASTER_SLAVE_INTR_MASK|macro|CY_SCB_SPI_MASTER_SLAVE_INTR_MASK
DECL|CY_SCB_SPI_MASTER|enumerator|CY_SCB_SPI_MASTER, /**< Configures SCB for SPI Master operation */
DECL|CY_SCB_SPI_MOTOROLA|enumerator|CY_SCB_SPI_MOTOROLA = 0x0U,
DECL|CY_SCB_SPI_NATIONAL|enumerator|CY_SCB_SPI_NATIONAL = 0x02U,
DECL|CY_SCB_SPI_RX_FULL|macro|CY_SCB_SPI_RX_FULL
DECL|CY_SCB_SPI_RX_INTR_MASK|macro|CY_SCB_SPI_RX_INTR_MASK
DECL|CY_SCB_SPI_RX_NOT_EMPTY|macro|CY_SCB_SPI_RX_NOT_EMPTY
DECL|CY_SCB_SPI_RX_NO_DATA|macro|CY_SCB_SPI_RX_NO_DATA
DECL|CY_SCB_SPI_RX_OVERFLOW|macro|CY_SCB_SPI_RX_OVERFLOW
DECL|CY_SCB_SPI_RX_TRIGGER|macro|CY_SCB_SPI_RX_TRIGGER
DECL|CY_SCB_SPI_RX_UNDERFLOW|macro|CY_SCB_SPI_RX_UNDERFLOW
DECL|CY_SCB_SPI_SLAVE_ERR|macro|CY_SCB_SPI_SLAVE_ERR
DECL|CY_SCB_SPI_SLAVE_SELECT0|enumerator|CY_SCB_SPI_SLAVE_SELECT0 = 0U, /**< Master will use Slave Select 0 */
DECL|CY_SCB_SPI_SLAVE_SELECT1|enumerator|CY_SCB_SPI_SLAVE_SELECT1 = 1U, /**< Master will use Slave Select 1 */
DECL|CY_SCB_SPI_SLAVE_SELECT2|enumerator|CY_SCB_SPI_SLAVE_SELECT2 = 2U, /**< Master will use Slave Select 2 */
DECL|CY_SCB_SPI_SLAVE_SELECT3|enumerator|CY_SCB_SPI_SLAVE_SELECT3 = 3U, /**< Master will use Slave Select 3 */
DECL|CY_SCB_SPI_SLAVE_TRANSFER_ERR|macro|CY_SCB_SPI_SLAVE_TRANSFER_ERR
DECL|CY_SCB_SPI_SLAVE|enumerator|CY_SCB_SPI_SLAVE, /**< Configures SCB for SPI Slave operation */
DECL|CY_SCB_SPI_SUCCESS|enumerator|CY_SCB_SPI_SUCCESS = 0U,
DECL|CY_SCB_SPI_TI_COINCIDES|enumerator|CY_SCB_SPI_TI_COINCIDES = 0x01U,
DECL|CY_SCB_SPI_TI_PRECEDES|enumerator|CY_SCB_SPI_TI_PRECEDES = 0x05U,
DECL|CY_SCB_SPI_TRANSFER_ACTIVE|macro|CY_SCB_SPI_TRANSFER_ACTIVE
DECL|CY_SCB_SPI_TRANSFER_BUSY|enumerator|CY_SCB_SPI_TRANSFER_BUSY = (CY_SCB_ID | CY_PDL_STATUS_ERROR | CY_SCB_SPI_ID | 2U)
DECL|CY_SCB_SPI_TRANSFER_CMPLT_EVENT|macro|CY_SCB_SPI_TRANSFER_CMPLT_EVENT
DECL|CY_SCB_SPI_TRANSFER_ERR_EVENT|macro|CY_SCB_SPI_TRANSFER_ERR_EVENT
DECL|CY_SCB_SPI_TRANSFER_ERR|macro|CY_SCB_SPI_TRANSFER_ERR
DECL|CY_SCB_SPI_TRANSFER_IN_FIFO_EVENT|macro|CY_SCB_SPI_TRANSFER_IN_FIFO_EVENT
DECL|CY_SCB_SPI_TRANSFER_IN_FIFO|macro|CY_SCB_SPI_TRANSFER_IN_FIFO
DECL|CY_SCB_SPI_TRANSFER_OVERFLOW|macro|CY_SCB_SPI_TRANSFER_OVERFLOW
DECL|CY_SCB_SPI_TRANSFER_UNDERFLOW|macro|CY_SCB_SPI_TRANSFER_UNDERFLOW
DECL|CY_SCB_SPI_TX_EMPTY|macro|CY_SCB_SPI_TX_EMPTY
DECL|CY_SCB_SPI_TX_INTR_MASK|macro|CY_SCB_SPI_TX_INTR_MASK
DECL|CY_SCB_SPI_TX_NOT_FULL|macro|CY_SCB_SPI_TX_NOT_FULL
DECL|CY_SCB_SPI_TX_OVERFLOW|macro|CY_SCB_SPI_TX_OVERFLOW
DECL|CY_SCB_SPI_TX_TRIGGER|macro|CY_SCB_SPI_TX_TRIGGER
DECL|CY_SCB_SPI_TX_UNDERFLOW|macro|CY_SCB_SPI_TX_UNDERFLOW
DECL|Cy_SCB_SPI_ClearRxFifoStatus|function|__STATIC_INLINE void Cy_SCB_SPI_ClearRxFifoStatus(CySCB_Type *base, uint32_t clearMask)
DECL|Cy_SCB_SPI_ClearRxFifo|function|__STATIC_INLINE void Cy_SCB_SPI_ClearRxFifo(CySCB_Type *base)
DECL|Cy_SCB_SPI_ClearSlaveMasterStatus|function|__STATIC_INLINE void Cy_SCB_SPI_ClearSlaveMasterStatus(CySCB_Type *base, uint32_t clearMask)
DECL|Cy_SCB_SPI_ClearTxFifoStatus|function|__STATIC_INLINE void Cy_SCB_SPI_ClearTxFifoStatus(CySCB_Type *base, uint32_t clearMask)
DECL|Cy_SCB_SPI_ClearTxFifo|function|__STATIC_INLINE void Cy_SCB_SPI_ClearTxFifo(CySCB_Type *base)
DECL|Cy_SCB_SPI_Enable|function|__STATIC_INLINE void Cy_SCB_SPI_Enable(CySCB_Type *base)
DECL|Cy_SCB_SPI_GetNumInRxFifo|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_GetNumInRxFifo(CySCB_Type const *base)
DECL|Cy_SCB_SPI_GetNumInTxFifo|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_GetNumInTxFifo(CySCB_Type const *base)
DECL|Cy_SCB_SPI_GetRxFifoStatus|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_GetRxFifoStatus(CySCB_Type const *base)
DECL|Cy_SCB_SPI_GetSlaveMasterStatus|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_GetSlaveMasterStatus(CySCB_Type const *base)
DECL|Cy_SCB_SPI_GetTxFifoStatus|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_GetTxFifoStatus(CySCB_Type const *base)
DECL|Cy_SCB_SPI_IsBusBusy|function|__STATIC_INLINE bool Cy_SCB_SPI_IsBusBusy(CySCB_Type const *base)
DECL|Cy_SCB_SPI_IsTxComplete|function|__STATIC_INLINE bool Cy_SCB_SPI_IsTxComplete(CySCB_Type const *base)
DECL|Cy_SCB_SPI_ReadArray|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_ReadArray(CySCB_Type const *base, void *buffer, uint32_t size)
DECL|Cy_SCB_SPI_Read|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_Read(CySCB_Type const *base)
DECL|Cy_SCB_SPI_RegisterCallback|function|__STATIC_INLINE void Cy_SCB_SPI_RegisterCallback(CySCB_Type const *base, cy_cb_scb_spi_handle_events_t callback, cy_stc_scb_spi_context_t *context)
DECL|Cy_SCB_SPI_SetActiveSlaveSelectPolarity|function|__STATIC_INLINE void Cy_SCB_SPI_SetActiveSlaveSelectPolarity(CySCB_Type *base, cy_en_scb_spi_slave_select_t slaveSelect, cy_en_scb_spi_polarity_t polarity)
DECL|Cy_SCB_SPI_SetActiveSlaveSelect|function|__STATIC_INLINE void Cy_SCB_SPI_SetActiveSlaveSelect(CySCB_Type *base, cy_en_scb_spi_slave_select_t slaveSelect)
DECL|Cy_SCB_SPI_WriteArrayBlocking|function|__STATIC_INLINE void Cy_SCB_SPI_WriteArrayBlocking(CySCB_Type *base, void *buffer, uint32_t size)
DECL|Cy_SCB_SPI_WriteArray|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_WriteArray(CySCB_Type *base, void *buffer, uint32_t size)
DECL|Cy_SCB_SPI_Write|function|__STATIC_INLINE uint32_t Cy_SCB_SPI_Write(CySCB_Type *base, uint32_t data)
DECL|cbEvents|member|cy_cb_scb_spi_handle_events_t cbEvents;
DECL|cy_cb_scb_spi_handle_events_t|typedef|typedef void (* cy_cb_scb_spi_handle_events_t)(uint32_t event);
DECL|cy_en_scb_spi_mode_t|typedef|} cy_en_scb_spi_mode_t;
DECL|cy_en_scb_spi_polarity_t|typedef|} cy_en_scb_spi_polarity_t;
DECL|cy_en_scb_spi_sclk_mode_t|typedef|} cy_en_scb_spi_sclk_mode_t;
DECL|cy_en_scb_spi_slave_select_t|typedef|} cy_en_scb_spi_slave_select_t;
DECL|cy_en_scb_spi_status_t|typedef|} cy_en_scb_spi_status_t;
DECL|cy_en_scb_spi_sub_mode_t|typedef|} cy_en_scb_spi_sub_mode_t;
DECL|cy_stc_scb_spi_config_t|typedef|}cy_stc_scb_spi_config_t;
DECL|cy_stc_scb_spi_config|struct|typedef struct cy_stc_scb_spi_config
DECL|cy_stc_scb_spi_context_t|typedef|} cy_stc_scb_spi_context_t;
DECL|cy_stc_scb_spi_context|struct|typedef struct cy_stc_scb_spi_context
DECL|enableFreeRunSclk|member|bool enableFreeRunSclk;
DECL|enableInputFilter|member|bool enableInputFilter;
DECL|enableMisoLateSample|member|bool enableMisoLateSample;
DECL|enableMsbFirst|member|bool enableMsbFirst;
DECL|enableTransferSeperation|member|bool enableTransferSeperation;
DECL|enableWakeFromSleep|member|bool enableWakeFromSleep;
DECL|initKey|member|uint32_t initKey; /**< Tracks the context initialization */
DECL|masterSlaveIntEnableMask|member|uint32_t masterSlaveIntEnableMask;
DECL|oversample|member|uint32_t oversample;
DECL|rxBufIdx|member|uint32_t volatile rxBufIdx; /**< The current location in the receive buffer */
DECL|rxBufSize|member|uint32_t rxBufSize; /**< The receive buffer size */
DECL|rxBuf|member|void *rxBuf; /**< The pointer to the receive buffer */
DECL|rxDataWidth|member|uint32_t rxDataWidth;
DECL|rxFifoIntEnableMask|member|uint32_t rxFifoIntEnableMask;
DECL|rxFifoTriggerLevel|member|uint32_t rxFifoTriggerLevel;
DECL|sclkMode|member|cy_en_scb_spi_sclk_mode_t sclkMode;
DECL|spiMode|member|cy_en_scb_spi_mode_t spiMode;
DECL|ssPolarity|member|uint32_t ssPolarity;
DECL|status|member|uint32_t volatile status; /**< The receive status */
DECL|subMode|member|cy_en_scb_spi_sub_mode_t subMode;
DECL|txBufIdx|member|uint32_t volatile txBufIdx; /**< The current location in the transmit buffer */
DECL|txBufSize|member|uint32_t txBufSize; /**< The transmit buffer size */
DECL|txBuf|member|void *txBuf; /**< The pointer to the transmit buffer */
DECL|txDataWidth|member|uint32_t txDataWidth;
DECL|txFifoIntEnableMask|member|uint32_t txFifoIntEnableMask;
DECL|txFifoTriggerLevel|member|uint32_t txFifoTriggerLevel;
