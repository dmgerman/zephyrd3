DECL|CY_SCB_EZI2C_BAD_PARAM|enumerator|CY_SCB_EZI2C_BAD_PARAM = (CY_SCB_ID | CY_PDL_STATUS_ERROR | CY_SCB_EZI2C_ID | 1U),
DECL|CY_SCB_EZI2C_DEFAULT_TX|macro|CY_SCB_EZI2C_DEFAULT_TX
DECL|CY_SCB_EZI2C_FIFO_SIZE|macro|CY_SCB_EZI2C_FIFO_SIZE
DECL|CY_SCB_EZI2C_HALF_FIFO_SIZE|macro|CY_SCB_EZI2C_HALF_FIFO_SIZE
DECL|CY_SCB_EZI2C_H|macro|CY_SCB_EZI2C_H
DECL|CY_SCB_EZI2C_I2C_CTRL|macro|CY_SCB_EZI2C_I2C_CTRL
DECL|CY_SCB_EZI2C_IS_NUM_OF_ADDR_VALID|macro|CY_SCB_EZI2C_IS_NUM_OF_ADDR_VALID
DECL|CY_SCB_EZI2C_IS_SUB_ADDR_SIZE_VALID|macro|CY_SCB_EZI2C_IS_SUB_ADDR_SIZE_VALID
DECL|CY_SCB_EZI2C_ONE_ADDRESS_MASK|macro|CY_SCB_EZI2C_ONE_ADDRESS_MASK
DECL|CY_SCB_EZI2C_ONE_ADDRESS|enumerator|CY_SCB_EZI2C_ONE_ADDRESS, /**< Only one address */
DECL|CY_SCB_EZI2C_RX_CTRL|macro|CY_SCB_EZI2C_RX_CTRL
DECL|CY_SCB_EZI2C_SLAVE_INTR_ERROR|macro|CY_SCB_EZI2C_SLAVE_INTR_ERROR
DECL|CY_SCB_EZI2C_SLAVE_INTR_NO_ADDR|macro|CY_SCB_EZI2C_SLAVE_INTR_NO_ADDR
DECL|CY_SCB_EZI2C_SLAVE_INTR_NO_STOP|macro|CY_SCB_EZI2C_SLAVE_INTR_NO_STOP
DECL|CY_SCB_EZI2C_SLAVE_INTR|macro|CY_SCB_EZI2C_SLAVE_INTR
DECL|CY_SCB_EZI2C_STATE_ADDR|enumerator|CY_SCB_EZI2C_STATE_ADDR,
DECL|CY_SCB_EZI2C_STATE_IDLE|enumerator|CY_SCB_EZI2C_STATE_IDLE,
DECL|CY_SCB_EZI2C_STATE_RX_DATA0|enumerator|CY_SCB_EZI2C_STATE_RX_DATA0,
DECL|CY_SCB_EZI2C_STATE_RX_DATA1|enumerator|CY_SCB_EZI2C_STATE_RX_DATA1,
DECL|CY_SCB_EZI2C_STATE_RX_OFFSET_LSB|enumerator|CY_SCB_EZI2C_STATE_RX_OFFSET_LSB,
DECL|CY_SCB_EZI2C_STATE_RX_OFFSET_MSB|enumerator|CY_SCB_EZI2C_STATE_RX_OFFSET_MSB,
DECL|CY_SCB_EZI2C_STATE_TX_DATA|enumerator|CY_SCB_EZI2C_STATE_TX_DATA
DECL|CY_SCB_EZI2C_STATUS_BUSY|macro|CY_SCB_EZI2C_STATUS_BUSY
DECL|CY_SCB_EZI2C_STATUS_ERR|macro|CY_SCB_EZI2C_STATUS_ERR
DECL|CY_SCB_EZI2C_STATUS_READ1|macro|CY_SCB_EZI2C_STATUS_READ1
DECL|CY_SCB_EZI2C_STATUS_READ2|macro|CY_SCB_EZI2C_STATUS_READ2
DECL|CY_SCB_EZI2C_STATUS_WRITE1|macro|CY_SCB_EZI2C_STATUS_WRITE1
DECL|CY_SCB_EZI2C_STATUS_WRITE2|macro|CY_SCB_EZI2C_STATUS_WRITE2
DECL|CY_SCB_EZI2C_SUB_ADDR16_BITS|enumerator|CY_SCB_EZI2C_SUB_ADDR16_BITS /**< Sub-address is 16 bits */
DECL|CY_SCB_EZI2C_SUB_ADDR8_BITS|enumerator|CY_SCB_EZI2C_SUB_ADDR8_BITS, /**< Sub-address is 8 bits */
DECL|CY_SCB_EZI2C_SUCCESS|enumerator|CY_SCB_EZI2C_SUCCESS = 0U,
DECL|CY_SCB_EZI2C_TWO_ADDRESSES|enumerator|CY_SCB_EZI2C_TWO_ADDRESSES /**< Two addresses */
DECL|CY_SCB_EZI2C_TX_CTRL|macro|CY_SCB_EZI2C_TX_CTRL
DECL|Cy_SCB_EZI2C_Enable|function|__STATIC_INLINE void Cy_SCB_EZI2C_Enable(CySCB_Type *base)
DECL|addr1Active|member|bool addr1Active; /**< Defines whether the request is intended for the primary slave address */
DECL|address1|member|uint8_t address1; /**< The primary slave address (7-bits right justified) */
DECL|address2|member|uint8_t address2; /**< The secondary slave address (7-bits right justified) */
DECL|baseAddr1|member|uint32_t baseAddr1; /**< The valid base address for the primary slave address */
DECL|baseAddr2|member|uint32_t baseAddr2; /**< The valid base address for the secondary slave address */
DECL|buf1Size|member|uint32_t buf1Size; /**< The buffer size assigned to the primary slave address */
DECL|buf1rwBondary|member|uint32_t buf1rwBondary; /**< The Read/Write boundary within the buffer assigned to the primary slave address */
DECL|buf1|member|uint8_t *buf1; /**< The pointer to the buffer exposed on the request intended for the primary slave address */
DECL|buf2Size|member|uint32_t buf2Size; /**< The buffer size assigned to the secondary slave address */
DECL|buf2rwBondary|member|uint32_t buf2rwBondary; /**< The Read/Write boundary within the buffer assigned for the secondary slave address */
DECL|buf2|member|uint8_t *buf2; /**< The pointer to the buffer exposed on the request intended for the secondary slave address */
DECL|bufSize|member|uint32_t bufSize; /**< Specifies how many bytes are left in the current buffer */
DECL|curBuf|member|uint8_t *curBuf; /**< The pointer to the current location in the buffer (while it is accessed) */
DECL|cy_en_scb_ezi2c_num_of_addr_t|typedef|} cy_en_scb_ezi2c_num_of_addr_t;
DECL|cy_en_scb_ezi2c_state_t|typedef|} cy_en_scb_ezi2c_state_t;
DECL|cy_en_scb_ezi2c_status_t|typedef|} cy_en_scb_ezi2c_status_t;
DECL|cy_en_scb_ezi2c_sub_addr_size_t|typedef|} cy_en_scb_ezi2c_sub_addr_size_t;
DECL|cy_stc_scb_ezi2c_config_t|typedef|} cy_stc_scb_ezi2c_config_t;
DECL|cy_stc_scb_ezi2c_config|struct|typedef struct cy_stc_scb_ezi2c_config
DECL|cy_stc_scb_ezi2c_context_t|typedef|} cy_stc_scb_ezi2c_context_t;
DECL|cy_stc_scb_ezi2c_context|struct|typedef struct cy_stc_scb_ezi2c_context
DECL|enableWakeFromSleep|member|bool enableWakeFromSleep;
DECL|idx|member|uint32_t idx; /**< The index within the buffer during operation */
DECL|numberOfAddresses|member|cy_en_scb_ezi2c_num_of_addr_t numberOfAddresses;
DECL|slaveAddress1|member|uint8_t slaveAddress1;
DECL|slaveAddress2|member|uint8_t slaveAddress2;
DECL|state|member|volatile cy_en_scb_ezi2c_state_t state; /**< The driver state */
DECL|status|member|volatile uint32_t status; /**< The slave status */
DECL|subAddrSize|member|cy_en_scb_ezi2c_sub_addr_size_t subAddrSize; /**< The sub-address size */
DECL|subAddressSize|member|cy_en_scb_ezi2c_sub_addr_size_t subAddressSize;
