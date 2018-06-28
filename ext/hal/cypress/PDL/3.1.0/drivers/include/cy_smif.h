DECL|CY_SMIF_AES128_BYTES|macro|CY_SMIF_AES128_BYTES
DECL|CY_SMIF_ALIGNMENT_ERROR|macro|CY_SMIF_ALIGNMENT_ERROR
DECL|CY_SMIF_BAD_PARAM|enumerator|CY_SMIF_BAD_PARAM = CY_SMIF_ID |CY_PDL_STATUS_ERROR | 0x04U, /**< The SMIF API received the wrong parameter */
DECL|CY_SMIF_BLOCK_EVENT_VALID|macro|CY_SMIF_BLOCK_EVENT_VALID
DECL|CY_SMIF_BUS_ERROR|enumerator|CY_SMIF_BUS_ERROR = 0UL,
DECL|CY_SMIF_CACHE_BOTH|enumerator|CY_SMIF_CACHE_BOTH = 3U /**< The SMIF both caches */
DECL|CY_SMIF_CACHE_FAST|enumerator|CY_SMIF_CACHE_FAST = 2U, /**< The SMIF fast cache (in the clk_fast domain) see TRM for details */
DECL|CY_SMIF_CACHE_SLOW|enumerator|CY_SMIF_CACHE_SLOW = 1U, /**< The SMIF slow cache (in the clk_slow domain) see TRM for details */
DECL|CY_SMIF_CLOCK_SEL_VALID|macro|CY_SMIF_CLOCK_SEL_VALID
DECL|CY_SMIF_CMD_ERROR|enumerator|CY_SMIF_CMD_ERROR, /**< A TX CMD FIFO overflow. */
DECL|CY_SMIF_CMD_FIFO_DUMMY_COUNT_MODE|macro|CY_SMIF_CMD_FIFO_DUMMY_COUNT_MODE
DECL|CY_SMIF_CMD_FIFO_FULL|enumerator|CY_SMIF_CMD_FIFO_FULL = CY_SMIF_ID |CY_PDL_STATUS_ERROR | 0x01U, /**< The command is cancelled. The command FIFO is full. */
DECL|CY_SMIF_CMD_FIFO_RX_COUNT_MODE|macro|CY_SMIF_CMD_FIFO_RX_COUNT_MODE
DECL|CY_SMIF_CMD_FIFO_TX_COUNT_MODE|macro|CY_SMIF_CMD_FIFO_TX_COUNT_MODE
DECL|CY_SMIF_CMD_FIFO_TX_MODE|macro|CY_SMIF_CMD_FIFO_TX_MODE
DECL|CY_SMIF_CMD_FIFO_WR_DUMMY_Msk|macro|CY_SMIF_CMD_FIFO_WR_DUMMY_Msk
DECL|CY_SMIF_CMD_FIFO_WR_DUMMY_Pos|macro|CY_SMIF_CMD_FIFO_WR_DUMMY_Pos
DECL|CY_SMIF_CMD_FIFO_WR_LAST_BYTE_Msk|macro|CY_SMIF_CMD_FIFO_WR_LAST_BYTE_Msk
DECL|CY_SMIF_CMD_FIFO_WR_LAST_BYTE_Pos|macro|CY_SMIF_CMD_FIFO_WR_LAST_BYTE_Pos
DECL|CY_SMIF_CMD_FIFO_WR_MODE_Msk|macro|CY_SMIF_CMD_FIFO_WR_MODE_Msk
DECL|CY_SMIF_CMD_FIFO_WR_MODE_Pos|macro|CY_SMIF_CMD_FIFO_WR_MODE_Pos
DECL|CY_SMIF_CMD_FIFO_WR_RX_COUNT_Msk|macro|CY_SMIF_CMD_FIFO_WR_RX_COUNT_Msk
DECL|CY_SMIF_CMD_FIFO_WR_RX_COUNT_Pos|macro|CY_SMIF_CMD_FIFO_WR_RX_COUNT_Pos
DECL|CY_SMIF_CMD_FIFO_WR_SS_Msk|macro|CY_SMIF_CMD_FIFO_WR_SS_Msk
DECL|CY_SMIF_CMD_FIFO_WR_SS_Pos|macro|CY_SMIF_CMD_FIFO_WR_SS_Pos
DECL|CY_SMIF_CMD_FIFO_WR_TXDATA_Msk|macro|CY_SMIF_CMD_FIFO_WR_TXDATA_Msk
DECL|CY_SMIF_CMD_FIFO_WR_TXDATA_Pos|macro|CY_SMIF_CMD_FIFO_WR_TXDATA_Pos
DECL|CY_SMIF_CMD_FIFO_WR_TX_COUNT_Msk|macro|CY_SMIF_CMD_FIFO_WR_TX_COUNT_Msk
DECL|CY_SMIF_CMD_FIFO_WR_TX_COUNT_Pos|macro|CY_SMIF_CMD_FIFO_WR_TX_COUNT_Pos
DECL|CY_SMIF_CMD_FIFO_WR_WIDTH_Msk|macro|CY_SMIF_CMD_FIFO_WR_WIDTH_Msk
DECL|CY_SMIF_CMD_FIFO_WR_WIDTH_Pos|macro|CY_SMIF_CMD_FIFO_WR_WIDTH_Pos
DECL|CY_SMIF_CMD_PARAM_VALID|macro|CY_SMIF_CMD_PARAM_VALID
DECL|CY_SMIF_CRYPTO_ADDR_MASK|macro|CY_SMIF_CRYPTO_ADDR_MASK
DECL|CY_SMIF_CRYPTO_COMPLETED|macro|CY_SMIF_CRYPTO_COMPLETED
DECL|CY_SMIF_CRYPTO_FIRST_WORD|macro|CY_SMIF_CRYPTO_FIRST_WORD
DECL|CY_SMIF_CRYPTO_FOURTH_WORD|macro|CY_SMIF_CRYPTO_FOURTH_WORD
DECL|CY_SMIF_CRYPTO_SECOND_WORD|macro|CY_SMIF_CRYPTO_SECOND_WORD
DECL|CY_SMIF_CRYPTO_START|macro|CY_SMIF_CRYPTO_START
DECL|CY_SMIF_CRYPTO_THIRD_WORD|macro|CY_SMIF_CRYPTO_THIRD_WORD
DECL|CY_SMIF_CTL_REG_DEFAULT|macro|CY_SMIF_CTL_REG_DEFAULT
DECL|CY_SMIF_DATA_SEL0|enumerator|CY_SMIF_DATA_SEL0 = 0,
DECL|CY_SMIF_DATA_SEL1|enumerator|CY_SMIF_DATA_SEL1 = 1,
DECL|CY_SMIF_DATA_SEL2|enumerator|CY_SMIF_DATA_SEL2 = 2,
DECL|CY_SMIF_DATA_SEL3|enumerator|CY_SMIF_DATA_SEL3 = 3
DECL|CY_SMIF_DATA_SEL_VALID|macro|CY_SMIF_DATA_SEL_VALID
DECL|CY_SMIF_DESELECT_DELAY_VALID|macro|CY_SMIF_DESELECT_DELAY_VALID
DECL|CY_SMIF_DRV_VERSION_MAJOR|macro|CY_SMIF_DRV_VERSION_MAJOR
DECL|CY_SMIF_DRV_VERSION_MINOR|macro|CY_SMIF_DRV_VERSION_MINOR
DECL|CY_SMIF_EIGHT_BYTES|macro|CY_SMIF_EIGHT_BYTES
DECL|CY_SMIF_EXCEED_TIMEOUT|enumerator|CY_SMIF_EXCEED_TIMEOUT = CY_SMIF_ID |CY_PDL_STATUS_ERROR | 0x02U, /**< The SMIF operation timeout exceeded. */
DECL|CY_SMIF_FIVE_BYTES|macro|CY_SMIF_FIVE_BYTES
DECL|CY_SMIF_FOUR_BYTES|macro|CY_SMIF_FOUR_BYTES
DECL|CY_SMIF_H|macro|CY_SMIF_H
DECL|CY_SMIF_ID|macro|CY_SMIF_ID
DECL|CY_SMIF_MAX_DESELECT_DELAY|macro|CY_SMIF_MAX_DESELECT_DELAY
DECL|CY_SMIF_MAX_RX_TR_LEVEL|macro|CY_SMIF_MAX_RX_TR_LEVEL
DECL|CY_SMIF_MAX_TX_TR_LEVEL|macro|CY_SMIF_MAX_TX_TR_LEVEL
DECL|CY_SMIF_MEMORY|enumerator|CY_SMIF_MEMORY /**< XIP (eXecute In Place) mode. */
DECL|CY_SMIF_MODE_VALID|macro|CY_SMIF_MODE_VALID
DECL|CY_SMIF_NORMAL|enumerator|CY_SMIF_NORMAL, /**< Command mode (MMIO mode). */
DECL|CY_SMIF_NO_QE_BIT|enumerator|CY_SMIF_NO_QE_BIT = CY_SMIF_ID |CY_PDL_STATUS_ERROR | 0x03U,
DECL|CY_SMIF_NO_SFDP_SUPPORT|enumerator|CY_SMIF_NO_SFDP_SUPPORT = CY_SMIF_ID |CY_PDL_STATUS_ERROR | 0x05U, /**< The external memory does not support SFDP (JESD216B). */
DECL|CY_SMIF_ONE_BYTE|macro|CY_SMIF_ONE_BYTE
DECL|CY_SMIF_REC_BUSY|enumerator|CY_SMIF_REC_BUSY, /**< The data reception is in progress. */
DECL|CY_SMIF_REC_CMPLT|enumerator|CY_SMIF_REC_CMPLT, /**< The data reception is completed. */
DECL|CY_SMIF_RX_DATA_FIFO_LEVEL_TRIGGER|macro|CY_SMIF_RX_DATA_FIFO_LEVEL_TRIGGER
DECL|CY_SMIF_RX_DATA_FIFO_STATUS_RANGE|macro|CY_SMIF_RX_DATA_FIFO_STATUS_RANGE
DECL|CY_SMIF_RX_DATA_FIFO_UNDERFLOW|macro|CY_SMIF_RX_DATA_FIFO_UNDERFLOW
DECL|CY_SMIF_RX_ERROR|enumerator|CY_SMIF_RX_ERROR /**< An RX DATA FIFO underflow. */
DECL|CY_SMIF_SEL_FEEDBACK_CLK|enumerator|CY_SMIF_SEL_FEEDBACK_CLK = 2U, /**< The SMIF feedback clock */
DECL|CY_SMIF_SEL_INTERNAL_CLK|enumerator|CY_SMIF_SEL_INTERNAL_CLK = 0U, /**< The SMIF internal clock */
DECL|CY_SMIF_SEL_INV_FEEDBACK_CLK|enumerator|CY_SMIF_SEL_INV_FEEDBACK_CLK = 3U /**< The SMIF feedback inverted clock */
DECL|CY_SMIF_SEL_INV_INTERNAL_CLK|enumerator|CY_SMIF_SEL_INV_INTERNAL_CLK = 1U, /**< The SMIF internal inverted clock */
DECL|CY_SMIF_SEND_BUSY|enumerator|CY_SMIF_SEND_BUSY, /**< The data transmission is in progress. */
DECL|CY_SMIF_SEND_CMPLT|enumerator|CY_SMIF_SEND_CMPLT, /**< The data transmission is complete. */
DECL|CY_SMIF_SEVEN_BYTES|macro|CY_SMIF_SEVEN_BYTES
DECL|CY_SMIF_SFDP_FAIL_SS0_POS|macro|CY_SMIF_SFDP_FAIL_SS0_POS
DECL|CY_SMIF_SFDP_FAIL_SS1_POS|macro|CY_SMIF_SFDP_FAIL_SS1_POS
DECL|CY_SMIF_SFDP_FAIL_SS2_POS|macro|CY_SMIF_SFDP_FAIL_SS2_POS
DECL|CY_SMIF_SFDP_FAIL_SS3_POS|macro|CY_SMIF_SFDP_FAIL_SS3_POS
DECL|CY_SMIF_SFDP_FAIL|macro|CY_SMIF_SFDP_FAIL
DECL|CY_SMIF_SFDP_SS0_FAILED|enumerator|CY_SMIF_SFDP_SS0_FAILED = CY_SMIF_ID |CY_PDL_STATUS_ERROR |
DECL|CY_SMIF_SFDP_SS1_FAILED|enumerator|CY_SMIF_SFDP_SS1_FAILED = CY_SMIF_ID | CY_PDL_STATUS_ERROR |
DECL|CY_SMIF_SFDP_SS2_FAILED|enumerator|CY_SMIF_SFDP_SS2_FAILED = CY_SMIF_ID |CY_PDL_STATUS_ERROR |
DECL|CY_SMIF_SFDP_SS3_FAILED|enumerator|CY_SMIF_SFDP_SS3_FAILED = CY_SMIF_ID |CY_PDL_STATUS_ERROR |
DECL|CY_SMIF_SIX_BYTES|macro|CY_SMIF_SIX_BYTES
DECL|CY_SMIF_SLAVE_SELECT_0|enumerator|CY_SMIF_SLAVE_SELECT_0 = 1U, /**< The SMIF slave select 0 */
DECL|CY_SMIF_SLAVE_SELECT_1|enumerator|CY_SMIF_SLAVE_SELECT_1 = 2U, /**< The SMIF slave select 1 */
DECL|CY_SMIF_SLAVE_SELECT_2|enumerator|CY_SMIF_SLAVE_SELECT_2 = 4U, /**< The SMIF slave select 2 */
DECL|CY_SMIF_SLAVE_SELECT_3|enumerator|CY_SMIF_SLAVE_SELECT_3 = 8U /**< The SMIF slave select 3 */
DECL|CY_SMIF_SLAVE_SEL_VALID|macro|CY_SMIF_SLAVE_SEL_VALID
DECL|CY_SMIF_STARTED|enumerator|CY_SMIF_STARTED, /**< The SMIF started. */
DECL|CY_SMIF_SUCCESS|enumerator|CY_SMIF_SUCCESS = 0x00U, /**< Successful SMIF operation. */
DECL|CY_SMIF_THREE_BYTES|macro|CY_SMIF_THREE_BYTES
DECL|CY_SMIF_TWO_BYTES|macro|CY_SMIF_TWO_BYTES
DECL|CY_SMIF_TXFR_WIDTH_VALID|macro|CY_SMIF_TXFR_WIDTH_VALID
DECL|CY_SMIF_TX_CMD_FIFO_STATUS_RANGE|macro|CY_SMIF_TX_CMD_FIFO_STATUS_RANGE
DECL|CY_SMIF_TX_CMD_FIFO_WR_DUMMY_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_DUMMY_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_LAST_BYTE_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_LAST_BYTE_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_MODE_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_MODE_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_RX_COUNT_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_RX_COUNT_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_SS_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_SS_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_TXDATA_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_TXDATA_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_TX_COUNT_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_TX_COUNT_POS
DECL|CY_SMIF_TX_CMD_FIFO_WR_WIDTH_POS|macro|CY_SMIF_TX_CMD_FIFO_WR_WIDTH_POS
DECL|CY_SMIF_TX_COMMAND_FIFO_OVERFLOW|macro|CY_SMIF_TX_COMMAND_FIFO_OVERFLOW
DECL|CY_SMIF_TX_DATA_FIFO_LEVEL_TRIGGER|macro|CY_SMIF_TX_DATA_FIFO_LEVEL_TRIGGER
DECL|CY_SMIF_TX_DATA_FIFO_OVERFLOW|macro|CY_SMIF_TX_DATA_FIFO_OVERFLOW
DECL|CY_SMIF_TX_DATA_FIFO_STATUS_RANGE|macro|CY_SMIF_TX_DATA_FIFO_STATUS_RANGE
DECL|CY_SMIF_TX_ERROR|enumerator|CY_SMIF_TX_ERROR, /**< A TX DATA FIFO overflow. */
DECL|CY_SMIF_WAIT_1_UNIT|macro|CY_SMIF_WAIT_1_UNIT
DECL|CY_SMIF_WAIT_STATES|enumerator|CY_SMIF_WAIT_STATES = 1UL
DECL|CY_SMIF_WIDTH_DUAL|enumerator|CY_SMIF_WIDTH_DUAL = 1U, /**< Dual SPI mode. */
DECL|CY_SMIF_WIDTH_OCTAL|enumerator|CY_SMIF_WIDTH_OCTAL = 3U /**< Octal SPI mode. */
DECL|CY_SMIF_WIDTH_QUAD|enumerator|CY_SMIF_WIDTH_QUAD = 2U, /**< Quad SPI mode. */
DECL|CY_SMIF_WIDTH_SINGLE|enumerator|CY_SMIF_WIDTH_SINGLE = 0U, /**< Normal SPI mode. */
DECL|CY_SMIF_XIP_ERROR|enumerator|CY_SMIF_XIP_ERROR, /**< An XIP alignment error. */
DECL|Cy_SMIF_BusyCheck|function|__STATIC_INLINE bool Cy_SMIF_BusyCheck(SMIF_Type const *base)
DECL|Cy_SMIF_ClearInterrupt|function|__STATIC_INLINE void Cy_SMIF_ClearInterrupt(SMIF_Type *base, uint32_t interrupt)
DECL|Cy_SMIF_Disable|function|__STATIC_INLINE void Cy_SMIF_Disable(SMIF_Type *base)
DECL|Cy_SMIF_GetCmdFifoStatus|function|__STATIC_INLINE uint32_t Cy_SMIF_GetCmdFifoStatus(SMIF_Type const *base)
DECL|Cy_SMIF_GetDeviceBySlot|function|__STATIC_INLINE SMIF_DEVICE_Type volatile * Cy_SMIF_GetDeviceBySlot(SMIF_Type *base, cy_en_smif_slave_select_t slaveSelect)
DECL|Cy_SMIF_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_SMIF_GetInterruptMask(SMIF_Type const *base)
DECL|Cy_SMIF_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_SMIF_GetInterruptStatusMasked(SMIF_Type const *base)
DECL|Cy_SMIF_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_SMIF_GetInterruptStatus(SMIF_Type const *base)
DECL|Cy_SMIF_GetRxFifoStatus|function|__STATIC_INLINE uint32_t Cy_SMIF_GetRxFifoStatus(SMIF_Type const *base)
DECL|Cy_SMIF_GetTxFifoStatus|function|__STATIC_INLINE uint32_t Cy_SMIF_GetTxFifoStatus(SMIF_Type const *base)
DECL|Cy_SMIF_Interrupt|function|__STATIC_INLINE void Cy_SMIF_Interrupt(SMIF_Type *base, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_PackBytesArray|function|__STATIC_INLINE uint32_t Cy_SMIF_PackBytesArray(uint8_t const buff[], bool fourBytes)
DECL|Cy_SMIF_PopRxFifo|function|__STATIC_INLINE void Cy_SMIF_PopRxFifo(SMIF_Type *baseaddr, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_PushTxFifo|function|__STATIC_INLINE void Cy_SMIF_PushTxFifo(SMIF_Type *baseaddr, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_SetInterruptMask|function|__STATIC_INLINE void Cy_SMIF_SetInterruptMask(SMIF_Type *base, uint32_t interrupt)
DECL|Cy_SMIF_SetInterrupt|function|__STATIC_INLINE void Cy_SMIF_SetInterrupt(SMIF_Type *base, uint32_t interrupt)
DECL|Cy_SMIF_SetRxFifoTriggerLevel|function|__STATIC_INLINE void Cy_SMIF_SetRxFifoTriggerLevel(SMIF_Type *base, uint32_t level)
DECL|Cy_SMIF_SetTxFifoTriggerLevel|function|__STATIC_INLINE void Cy_SMIF_SetTxFifoTriggerLevel(SMIF_Type *base, uint32_t level)
DECL|Cy_SMIF_TimeoutRun|function|__STATIC_INLINE cy_en_smif_status_t Cy_SMIF_TimeoutRun(uint32_t *timeoutUnits)
DECL|Cy_SMIF_UnPackByteArray|function|__STATIC_INLINE void Cy_SMIF_UnPackByteArray(uint32_t inValue, uint8_t outBuff[], bool fourBytes)
DECL|blockEvent|member|uint32_t blockEvent; /**< Specifies what happens when there is a Read
DECL|cy_en_smif_cache_en_t|typedef|} cy_en_smif_cache_en_t;
DECL|cy_en_smif_clk_select_t|typedef|} cy_en_smif_clk_select_t;
DECL|cy_en_smif_data_select_t|typedef|} cy_en_smif_data_select_t;
DECL|cy_en_smif_error_event_t|typedef|} cy_en_smif_error_event_t;
DECL|cy_en_smif_mode_t|typedef|} cy_en_smif_mode_t;
DECL|cy_en_smif_slave_select_t|typedef|} cy_en_smif_slave_select_t;
DECL|cy_en_smif_status_t|typedef|} cy_en_smif_status_t;
DECL|cy_en_smif_txfr_status_t|typedef|} cy_en_smif_txfr_status_t;
DECL|cy_en_smif_txfr_width_t|typedef|} cy_en_smif_txfr_width_t;
DECL|cy_smif_event_cb_t|typedef|typedef void (*cy_smif_event_cb_t)(uint32_t event);
DECL|cy_stc_smif_config_t|typedef|} cy_stc_smif_config_t;
DECL|cy_stc_smif_context_t|typedef|} cy_stc_smif_context_t;
DECL|deselectDelay|member|uint32_t deselectDelay; /**< Specifies the minimum duration of SPI de-selection between SPI transfers:
DECL|mode|member|uint32_t mode; /**< Specifies the mode of operation \ref cy_en_smif_mode_t. */
DECL|rxBufferAddress|member|uint8_t volatile * volatile rxBufferAddress; /**< The pointer to the variable where the received data is stored */
DECL|rxBufferCounter|member|uint32_t volatile rxBufferCounter;
DECL|rxBufferSize|member|uint32_t rxBufferSize; /**< The size of the data to be received in bytes */
DECL|rxClockSel|member|uint32_t rxClockSel; /**< Specifies the clock source for the receiver
DECL|rxCmpltCb|member|cy_smif_event_cb_t volatile rxCmpltCb; /**< The user-defined callback executed at the completion of a reception */
DECL|timeout|member|uint32_t timeout;
DECL|transferStatus|member|uint32_t volatile transferStatus;
DECL|txBufferAddress|member|uint8_t volatile * volatile txBufferAddress; /**< The pointer to the data to transfer */
DECL|txBufferCounter|member|uint32_t volatile txBufferCounter;
DECL|txBufferSize|member|uint32_t txBufferSize; /**< The size of the data to transmit in bytes */
DECL|txCmpltCb|member|cy_smif_event_cb_t volatile txCmpltCb; /**< The user-defined callback executed at the completion of a transmission */
