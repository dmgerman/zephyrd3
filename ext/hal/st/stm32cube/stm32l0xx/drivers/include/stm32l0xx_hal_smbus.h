DECL|AddressingMode|member|uint32_t AddressingMode; /*!< Specifies if 7-bit or 10-bit addressing mode for master is selected.
DECL|AnalogFilter|member|uint32_t AnalogFilter; /*!< Specifies if Analog Filter is enable or not.
DECL|DualAddressMode|member|uint32_t DualAddressMode; /*!< Specifies if dual addressing mode is selected.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< SMBUS Error code */
DECL|GeneralCallMode|member|uint32_t GeneralCallMode; /*!< Specifies if general call mode is selected.
DECL|HAL_SMBUS_ERROR_ACKF|macro|HAL_SMBUS_ERROR_ACKF
DECL|HAL_SMBUS_ERROR_ALERT|macro|HAL_SMBUS_ERROR_ALERT
DECL|HAL_SMBUS_ERROR_ARLO|macro|HAL_SMBUS_ERROR_ARLO
DECL|HAL_SMBUS_ERROR_BERR|macro|HAL_SMBUS_ERROR_BERR
DECL|HAL_SMBUS_ERROR_BUSTIMEOUT|macro|HAL_SMBUS_ERROR_BUSTIMEOUT
DECL|HAL_SMBUS_ERROR_HALTIMEOUT|macro|HAL_SMBUS_ERROR_HALTIMEOUT
DECL|HAL_SMBUS_ERROR_NONE|macro|HAL_SMBUS_ERROR_NONE
DECL|HAL_SMBUS_ERROR_OVR|macro|HAL_SMBUS_ERROR_OVR
DECL|HAL_SMBUS_ERROR_PECERR|macro|HAL_SMBUS_ERROR_PECERR
DECL|HAL_SMBUS_STATE_BUSY|macro|HAL_SMBUS_STATE_BUSY
DECL|HAL_SMBUS_STATE_ERROR|macro|HAL_SMBUS_STATE_ERROR
DECL|HAL_SMBUS_STATE_LISTEN|macro|HAL_SMBUS_STATE_LISTEN
DECL|HAL_SMBUS_STATE_MASTER_BUSY_RX|macro|HAL_SMBUS_STATE_MASTER_BUSY_RX
DECL|HAL_SMBUS_STATE_MASTER_BUSY_TX|macro|HAL_SMBUS_STATE_MASTER_BUSY_TX
DECL|HAL_SMBUS_STATE_READY|macro|HAL_SMBUS_STATE_READY
DECL|HAL_SMBUS_STATE_RESET|macro|HAL_SMBUS_STATE_RESET
DECL|HAL_SMBUS_STATE_SLAVE_BUSY_RX|macro|HAL_SMBUS_STATE_SLAVE_BUSY_RX
DECL|HAL_SMBUS_STATE_SLAVE_BUSY_TX|macro|HAL_SMBUS_STATE_SLAVE_BUSY_TX
DECL|HAL_SMBUS_STATE_TIMEOUT|macro|HAL_SMBUS_STATE_TIMEOUT
DECL|IS_SMBUS_ADDRESSING_MODE|macro|IS_SMBUS_ADDRESSING_MODE
DECL|IS_SMBUS_ANALOG_FILTER|macro|IS_SMBUS_ANALOG_FILTER
DECL|IS_SMBUS_DIGITAL_FILTER|macro|IS_SMBUS_DIGITAL_FILTER
DECL|IS_SMBUS_DUAL_ADDRESS|macro|IS_SMBUS_DUAL_ADDRESS
DECL|IS_SMBUS_GENERAL_CALL|macro|IS_SMBUS_GENERAL_CALL
DECL|IS_SMBUS_NO_STRETCH|macro|IS_SMBUS_NO_STRETCH
DECL|IS_SMBUS_OWN_ADDRESS1|macro|IS_SMBUS_OWN_ADDRESS1
DECL|IS_SMBUS_OWN_ADDRESS2_MASK|macro|IS_SMBUS_OWN_ADDRESS2_MASK
DECL|IS_SMBUS_OWN_ADDRESS2|macro|IS_SMBUS_OWN_ADDRESS2
DECL|IS_SMBUS_PEC|macro|IS_SMBUS_PEC
DECL|IS_SMBUS_PERIPHERAL_MODE|macro|IS_SMBUS_PERIPHERAL_MODE
DECL|IS_SMBUS_TRANSFER_MODE|macro|IS_SMBUS_TRANSFER_MODE
DECL|IS_SMBUS_TRANSFER_OPTIONS_REQUEST|macro|IS_SMBUS_TRANSFER_OPTIONS_REQUEST
DECL|IS_SMBUS_TRANSFER_OTHER_OPTIONS_REQUEST|macro|IS_SMBUS_TRANSFER_OTHER_OPTIONS_REQUEST
DECL|IS_SMBUS_TRANSFER_REQUEST|macro|IS_SMBUS_TRANSFER_REQUEST
DECL|Init|member|SMBUS_InitTypeDef Init; /*!< SMBUS communication parameters */
DECL|Instance|member|I2C_TypeDef *Instance; /*!< SMBUS registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< SMBUS locking object */
DECL|NoStretchMode|member|uint32_t NoStretchMode; /*!< Specifies if nostretch mode is selected.
DECL|OwnAddress1|member|uint32_t OwnAddress1; /*!< Specifies the first device own address.
DECL|OwnAddress2Masks|member|uint32_t OwnAddress2Masks; /*!< Specifies the acknoledge mask address second device own address if dual addressing mode is selected
DECL|OwnAddress2|member|uint32_t OwnAddress2; /*!< Specifies the second device own address if dual addressing mode is selected
DECL|PacketErrorCheckMode|member|uint32_t PacketErrorCheckMode; /*!< Specifies if Packet Error Check mode is selected.
DECL|PeripheralMode|member|uint32_t PeripheralMode; /*!< Specifies which mode of Periphal is selected.
DECL|PreviousState|member|__IO uint32_t PreviousState; /*!< SMBUS communication Previous state */
DECL|SMBUS_ADDRESSINGMODE_10BIT|macro|SMBUS_ADDRESSINGMODE_10BIT
DECL|SMBUS_ADDRESSINGMODE_7BIT|macro|SMBUS_ADDRESSINGMODE_7BIT
DECL|SMBUS_ANALOGFILTER_DISABLE|macro|SMBUS_ANALOGFILTER_DISABLE
DECL|SMBUS_ANALOGFILTER_ENABLE|macro|SMBUS_ANALOGFILTER_ENABLE
DECL|SMBUS_AUTOEND_MODE|macro|SMBUS_AUTOEND_MODE
DECL|SMBUS_CHECK_FLAG|macro|SMBUS_CHECK_FLAG
DECL|SMBUS_DUALADDRESS_DISABLE|macro|SMBUS_DUALADDRESS_DISABLE
DECL|SMBUS_DUALADDRESS_ENABLE|macro|SMBUS_DUALADDRESS_ENABLE
DECL|SMBUS_FIRST_AND_LAST_FRAME_NO_PEC|macro|SMBUS_FIRST_AND_LAST_FRAME_NO_PEC
DECL|SMBUS_FIRST_AND_LAST_FRAME_WITH_PEC|macro|SMBUS_FIRST_AND_LAST_FRAME_WITH_PEC
DECL|SMBUS_FIRST_FRAME|macro|SMBUS_FIRST_FRAME
DECL|SMBUS_FLAG_ADDR|macro|SMBUS_FLAG_ADDR
DECL|SMBUS_FLAG_AF|macro|SMBUS_FLAG_AF
DECL|SMBUS_FLAG_ALERT|macro|SMBUS_FLAG_ALERT
DECL|SMBUS_FLAG_ARLO|macro|SMBUS_FLAG_ARLO
DECL|SMBUS_FLAG_BERR|macro|SMBUS_FLAG_BERR
DECL|SMBUS_FLAG_BUSY|macro|SMBUS_FLAG_BUSY
DECL|SMBUS_FLAG_DIR|macro|SMBUS_FLAG_DIR
DECL|SMBUS_FLAG_MASK|macro|SMBUS_FLAG_MASK
DECL|SMBUS_FLAG_OVR|macro|SMBUS_FLAG_OVR
DECL|SMBUS_FLAG_PECERR|macro|SMBUS_FLAG_PECERR
DECL|SMBUS_FLAG_RXNE|macro|SMBUS_FLAG_RXNE
DECL|SMBUS_FLAG_STOPF|macro|SMBUS_FLAG_STOPF
DECL|SMBUS_FLAG_TCR|macro|SMBUS_FLAG_TCR
DECL|SMBUS_FLAG_TC|macro|SMBUS_FLAG_TC
DECL|SMBUS_FLAG_TIMEOUT|macro|SMBUS_FLAG_TIMEOUT
DECL|SMBUS_FLAG_TXE|macro|SMBUS_FLAG_TXE
DECL|SMBUS_FLAG_TXIS|macro|SMBUS_FLAG_TXIS
DECL|SMBUS_GENERALCALL_DISABLE|macro|SMBUS_GENERALCALL_DISABLE
DECL|SMBUS_GENERALCALL_ENABLE|macro|SMBUS_GENERALCALL_ENABLE
DECL|SMBUS_GENERATE_START_READ|macro|SMBUS_GENERATE_START_READ
DECL|SMBUS_GENERATE_START_WRITE|macro|SMBUS_GENERATE_START_WRITE
DECL|SMBUS_GENERATE_START|macro|SMBUS_GENERATE_START
DECL|SMBUS_GENERATE_STOP|macro|SMBUS_GENERATE_STOP
DECL|SMBUS_GET_ADDR_MATCH|macro|SMBUS_GET_ADDR_MATCH
DECL|SMBUS_GET_ALERT_ENABLED|macro|SMBUS_GET_ALERT_ENABLED
DECL|SMBUS_GET_DIR|macro|SMBUS_GET_DIR
DECL|SMBUS_GET_ISR_REG|macro|SMBUS_GET_ISR_REG
DECL|SMBUS_GET_PEC_MODE|macro|SMBUS_GET_PEC_MODE
DECL|SMBUS_GET_STOP_MODE|macro|SMBUS_GET_STOP_MODE
DECL|SMBUS_HandleTypeDef|typedef|} SMBUS_HandleTypeDef;
DECL|SMBUS_IT_ADDRI|macro|SMBUS_IT_ADDRI
DECL|SMBUS_IT_ADDR|macro|SMBUS_IT_ADDR
DECL|SMBUS_IT_ALERT|macro|SMBUS_IT_ALERT
DECL|SMBUS_IT_ERRI|macro|SMBUS_IT_ERRI
DECL|SMBUS_IT_NACKI|macro|SMBUS_IT_NACKI
DECL|SMBUS_IT_RXI|macro|SMBUS_IT_RXI
DECL|SMBUS_IT_RX|macro|SMBUS_IT_RX
DECL|SMBUS_IT_STOPI|macro|SMBUS_IT_STOPI
DECL|SMBUS_IT_TCI|macro|SMBUS_IT_TCI
DECL|SMBUS_IT_TXI|macro|SMBUS_IT_TXI
DECL|SMBUS_IT_TX|macro|SMBUS_IT_TX
DECL|SMBUS_InitTypeDef|typedef|} SMBUS_InitTypeDef;
DECL|SMBUS_LAST_FRAME_NO_PEC|macro|SMBUS_LAST_FRAME_NO_PEC
DECL|SMBUS_LAST_FRAME_WITH_PEC|macro|SMBUS_LAST_FRAME_WITH_PEC
DECL|SMBUS_NEXT_FRAME|macro|SMBUS_NEXT_FRAME
DECL|SMBUS_NOSTRETCH_DISABLE|macro|SMBUS_NOSTRETCH_DISABLE
DECL|SMBUS_NOSTRETCH_ENABLE|macro|SMBUS_NOSTRETCH_ENABLE
DECL|SMBUS_NO_STARTSTOP|macro|SMBUS_NO_STARTSTOP
DECL|SMBUS_OA2_MASK01|macro|SMBUS_OA2_MASK01
DECL|SMBUS_OA2_MASK02|macro|SMBUS_OA2_MASK02
DECL|SMBUS_OA2_MASK03|macro|SMBUS_OA2_MASK03
DECL|SMBUS_OA2_MASK04|macro|SMBUS_OA2_MASK04
DECL|SMBUS_OA2_MASK05|macro|SMBUS_OA2_MASK05
DECL|SMBUS_OA2_MASK06|macro|SMBUS_OA2_MASK06
DECL|SMBUS_OA2_MASK07|macro|SMBUS_OA2_MASK07
DECL|SMBUS_OA2_NOMASK|macro|SMBUS_OA2_NOMASK
DECL|SMBUS_OTHER_AND_LAST_FRAME_NO_PEC|macro|SMBUS_OTHER_AND_LAST_FRAME_NO_PEC
DECL|SMBUS_OTHER_AND_LAST_FRAME_WITH_PEC|macro|SMBUS_OTHER_AND_LAST_FRAME_WITH_PEC
DECL|SMBUS_OTHER_FRAME_NO_PEC|macro|SMBUS_OTHER_FRAME_NO_PEC
DECL|SMBUS_OTHER_FRAME_WITH_PEC|macro|SMBUS_OTHER_FRAME_WITH_PEC
DECL|SMBUS_PEC_DISABLE|macro|SMBUS_PEC_DISABLE
DECL|SMBUS_PEC_ENABLE|macro|SMBUS_PEC_ENABLE
DECL|SMBUS_PERIPHERAL_MODE_SMBUS_HOST|macro|SMBUS_PERIPHERAL_MODE_SMBUS_HOST
DECL|SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE_ARP|macro|SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE_ARP
DECL|SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE|macro|SMBUS_PERIPHERAL_MODE_SMBUS_SLAVE
DECL|SMBUS_RELOAD_MODE|macro|SMBUS_RELOAD_MODE
DECL|SMBUS_RESET_CR1|macro|SMBUS_RESET_CR1
DECL|SMBUS_RESET_CR2|macro|SMBUS_RESET_CR2
DECL|SMBUS_SENDPEC_MODE|macro|SMBUS_SENDPEC_MODE
DECL|SMBUS_SOFTEND_MODE|macro|SMBUS_SOFTEND_MODE
DECL|SMBusTimeout|member|uint32_t SMBusTimeout; /*!< Specifies the content of the 32 Bits SMBUS_TIMEOUT_register value.
DECL|State|member|__IO uint32_t State; /*!< SMBUS communication state */
DECL|Timing|member|uint32_t Timing; /*!< Specifies the SMBUS_TIMINGR_register value.
DECL|XferCount|member|__IO uint16_t XferCount; /*!< SMBUS transfer counter */
DECL|XferOptions|member|__IO uint32_t XferOptions; /*!< SMBUS transfer options */
DECL|XferSize|member|uint16_t XferSize; /*!< SMBUS transfer size */
DECL|__HAL_SMBUS_CLEAR_FLAG|macro|__HAL_SMBUS_CLEAR_FLAG
DECL|__HAL_SMBUS_DISABLE_IT|macro|__HAL_SMBUS_DISABLE_IT
DECL|__HAL_SMBUS_DISABLE|macro|__HAL_SMBUS_DISABLE
DECL|__HAL_SMBUS_ENABLE_IT|macro|__HAL_SMBUS_ENABLE_IT
DECL|__HAL_SMBUS_ENABLE|macro|__HAL_SMBUS_ENABLE
DECL|__HAL_SMBUS_GENERATE_NACK|macro|__HAL_SMBUS_GENERATE_NACK
DECL|__HAL_SMBUS_GET_FLAG|macro|__HAL_SMBUS_GET_FLAG
DECL|__HAL_SMBUS_GET_IT_SOURCE|macro|__HAL_SMBUS_GET_IT_SOURCE
DECL|__HAL_SMBUS_RESET_HANDLE_STATE|macro|__HAL_SMBUS_RESET_HANDLE_STATE
DECL|__STM32L0xx_HAL_SMBUS_H|macro|__STM32L0xx_HAL_SMBUS_H
DECL|pBuffPtr|member|uint8_t *pBuffPtr; /*!< Pointer to SMBUS transfer buffer */