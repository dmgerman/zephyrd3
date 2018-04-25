DECL|AddressingMode|member|uint32_t AddressingMode; /*!< Specifies if 7-bit or 10-bit addressing mode is selected.
DECL|ClockSpeed|member|uint32_t ClockSpeed; /*!< Specifies the clock frequency.
DECL|Devaddress|member|__IO uint32_t Devaddress; /*!< I2C Target device address */
DECL|DualAddressMode|member|uint32_t DualAddressMode; /*!< Specifies if dual addressing mode is selected.
DECL|DutyCycle|member|uint32_t DutyCycle; /*!< Specifies the I2C fast mode duty cycle.
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< I2C Error code */
DECL|EventCount|member|__IO uint32_t EventCount; /*!< I2C Event counter */
DECL|GeneralCallMode|member|uint32_t GeneralCallMode; /*!< Specifies if general call mode is selected.
DECL|HAL_I2C_ERROR_AF|macro|HAL_I2C_ERROR_AF
DECL|HAL_I2C_ERROR_ARLO|macro|HAL_I2C_ERROR_ARLO
DECL|HAL_I2C_ERROR_BERR|macro|HAL_I2C_ERROR_BERR
DECL|HAL_I2C_ERROR_DMA|macro|HAL_I2C_ERROR_DMA
DECL|HAL_I2C_ERROR_NONE|macro|HAL_I2C_ERROR_NONE
DECL|HAL_I2C_ERROR_OVR|macro|HAL_I2C_ERROR_OVR
DECL|HAL_I2C_ERROR_TIMEOUT|macro|HAL_I2C_ERROR_TIMEOUT
DECL|HAL_I2C_MODE_MASTER|enumerator|HAL_I2C_MODE_MASTER = 0x10U, /*!< I2C communication is in Master Mode */
DECL|HAL_I2C_MODE_MEM|enumerator|HAL_I2C_MODE_MEM = 0x40U /*!< I2C communication is in Memory Mode */
DECL|HAL_I2C_MODE_NONE|enumerator|HAL_I2C_MODE_NONE = 0x00U, /*!< No I2C communication on going */
DECL|HAL_I2C_MODE_SLAVE|enumerator|HAL_I2C_MODE_SLAVE = 0x20U, /*!< I2C communication is in Slave Mode */
DECL|HAL_I2C_ModeTypeDef|typedef|}HAL_I2C_ModeTypeDef;
DECL|HAL_I2C_STATE_ABORT|enumerator|HAL_I2C_STATE_ABORT = 0x60U, /*!< Abort user request ongoing */
DECL|HAL_I2C_STATE_BUSY_RX_LISTEN|enumerator|HAL_I2C_STATE_BUSY_RX_LISTEN = 0x2AU, /*!< Address Listen Mode and Data Reception
DECL|HAL_I2C_STATE_BUSY_RX|enumerator|HAL_I2C_STATE_BUSY_RX = 0x22U, /*!< Data Reception process is ongoing */
DECL|HAL_I2C_STATE_BUSY_TX_LISTEN|enumerator|HAL_I2C_STATE_BUSY_TX_LISTEN = 0x29U, /*!< Address Listen Mode and Data Transmission
DECL|HAL_I2C_STATE_BUSY_TX|enumerator|HAL_I2C_STATE_BUSY_TX = 0x21U, /*!< Data Transmission process is ongoing */
DECL|HAL_I2C_STATE_BUSY|enumerator|HAL_I2C_STATE_BUSY = 0x24U, /*!< An internal process is ongoing */
DECL|HAL_I2C_STATE_ERROR|enumerator|HAL_I2C_STATE_ERROR = 0xE0U /*!< Error */
DECL|HAL_I2C_STATE_LISTEN|enumerator|HAL_I2C_STATE_LISTEN = 0x28U, /*!< Address Listen Mode is ongoing */
DECL|HAL_I2C_STATE_READY|enumerator|HAL_I2C_STATE_READY = 0x20U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_I2C_STATE_RESET|enumerator|HAL_I2C_STATE_RESET = 0x00U, /*!< Peripheral is not yet Initialized */
DECL|HAL_I2C_STATE_TIMEOUT|enumerator|HAL_I2C_STATE_TIMEOUT = 0xA0U, /*!< Timeout state */
DECL|HAL_I2C_StateTypeDef|typedef|}HAL_I2C_StateTypeDef;
DECL|I2C_10BIT_ADDRESS|macro|I2C_10BIT_ADDRESS
DECL|I2C_10BIT_HEADER_READ|macro|I2C_10BIT_HEADER_READ
DECL|I2C_10BIT_HEADER_WRITE|macro|I2C_10BIT_HEADER_WRITE
DECL|I2C_7BIT_ADD_READ|macro|I2C_7BIT_ADD_READ
DECL|I2C_7BIT_ADD_WRITE|macro|I2C_7BIT_ADD_WRITE
DECL|I2C_ADDRESSINGMODE_10BIT|macro|I2C_ADDRESSINGMODE_10BIT
DECL|I2C_ADDRESSINGMODE_7BIT|macro|I2C_ADDRESSINGMODE_7BIT
DECL|I2C_DIRECTION_RECEIVE|macro|I2C_DIRECTION_RECEIVE
DECL|I2C_DIRECTION_TRANSMIT|macro|I2C_DIRECTION_TRANSMIT
DECL|I2C_DUALADDRESS_DISABLE|macro|I2C_DUALADDRESS_DISABLE
DECL|I2C_DUALADDRESS_ENABLE|macro|I2C_DUALADDRESS_ENABLE
DECL|I2C_DUTYCYCLE_16_9|macro|I2C_DUTYCYCLE_16_9
DECL|I2C_DUTYCYCLE_2|macro|I2C_DUTYCYCLE_2
DECL|I2C_FIRST_AND_LAST_FRAME|macro|I2C_FIRST_AND_LAST_FRAME
DECL|I2C_FIRST_FRAME|macro|I2C_FIRST_FRAME
DECL|I2C_FLAG_ADD10|macro|I2C_FLAG_ADD10
DECL|I2C_FLAG_ADDR|macro|I2C_FLAG_ADDR
DECL|I2C_FLAG_AF|macro|I2C_FLAG_AF
DECL|I2C_FLAG_ARLO|macro|I2C_FLAG_ARLO
DECL|I2C_FLAG_BERR|macro|I2C_FLAG_BERR
DECL|I2C_FLAG_BTF|macro|I2C_FLAG_BTF
DECL|I2C_FLAG_BUSY|macro|I2C_FLAG_BUSY
DECL|I2C_FLAG_DUALF|macro|I2C_FLAG_DUALF
DECL|I2C_FLAG_GENCALL|macro|I2C_FLAG_GENCALL
DECL|I2C_FLAG_MASK|macro|I2C_FLAG_MASK
DECL|I2C_FLAG_MSL|macro|I2C_FLAG_MSL
DECL|I2C_FLAG_OVR|macro|I2C_FLAG_OVR
DECL|I2C_FLAG_PECERR|macro|I2C_FLAG_PECERR
DECL|I2C_FLAG_RXNE|macro|I2C_FLAG_RXNE
DECL|I2C_FLAG_SB|macro|I2C_FLAG_SB
DECL|I2C_FLAG_SMBALERT|macro|I2C_FLAG_SMBALERT
DECL|I2C_FLAG_SMBDEFAULT|macro|I2C_FLAG_SMBDEFAULT
DECL|I2C_FLAG_SMBHOST|macro|I2C_FLAG_SMBHOST
DECL|I2C_FLAG_STOPF|macro|I2C_FLAG_STOPF
DECL|I2C_FLAG_TIMEOUT|macro|I2C_FLAG_TIMEOUT
DECL|I2C_FLAG_TRA|macro|I2C_FLAG_TRA
DECL|I2C_FLAG_TXE|macro|I2C_FLAG_TXE
DECL|I2C_FREQRANGE|macro|I2C_FREQRANGE
DECL|I2C_GENERALCALL_DISABLE|macro|I2C_GENERALCALL_DISABLE
DECL|I2C_GENERALCALL_ENABLE|macro|I2C_GENERALCALL_ENABLE
DECL|I2C_HandleTypeDef|typedef|}I2C_HandleTypeDef;
DECL|I2C_IT_BUF|macro|I2C_IT_BUF
DECL|I2C_IT_ERR|macro|I2C_IT_ERR
DECL|I2C_IT_EVT|macro|I2C_IT_EVT
DECL|I2C_InitTypeDef|typedef|}I2C_InitTypeDef;
DECL|I2C_LAST_FRAME|macro|I2C_LAST_FRAME
DECL|I2C_MEMADD_SIZE_16BIT|macro|I2C_MEMADD_SIZE_16BIT
DECL|I2C_MEMADD_SIZE_8BIT|macro|I2C_MEMADD_SIZE_8BIT
DECL|I2C_MEM_ADD_LSB|macro|I2C_MEM_ADD_LSB
DECL|I2C_MEM_ADD_MSB|macro|I2C_MEM_ADD_MSB
DECL|I2C_NEXT_FRAME|macro|I2C_NEXT_FRAME
DECL|I2C_NOSTRETCH_DISABLE|macro|I2C_NOSTRETCH_DISABLE
DECL|I2C_NOSTRETCH_ENABLE|macro|I2C_NOSTRETCH_ENABLE
DECL|I2C_RISE_TIME|macro|I2C_RISE_TIME
DECL|I2C_SPEED_FAST|macro|I2C_SPEED_FAST
DECL|I2C_SPEED_STANDARD|macro|I2C_SPEED_STANDARD
DECL|I2C_SPEED|macro|I2C_SPEED
DECL|IS_I2C_ADDRESSING_MODE|macro|IS_I2C_ADDRESSING_MODE
DECL|IS_I2C_CLOCK_SPEED|macro|IS_I2C_CLOCK_SPEED
DECL|IS_I2C_DUAL_ADDRESS|macro|IS_I2C_DUAL_ADDRESS
DECL|IS_I2C_DUTY_CYCLE|macro|IS_I2C_DUTY_CYCLE
DECL|IS_I2C_GENERAL_CALL|macro|IS_I2C_GENERAL_CALL
DECL|IS_I2C_MEMADD_SIZE|macro|IS_I2C_MEMADD_SIZE
DECL|IS_I2C_NO_STRETCH|macro|IS_I2C_NO_STRETCH
DECL|IS_I2C_OWN_ADDRESS1|macro|IS_I2C_OWN_ADDRESS1
DECL|IS_I2C_OWN_ADDRESS2|macro|IS_I2C_OWN_ADDRESS2
DECL|IS_I2C_TRANSFER_OPTIONS_REQUEST|macro|IS_I2C_TRANSFER_OPTIONS_REQUEST
DECL|Init|member|I2C_InitTypeDef Init; /*!< I2C communication parameters */
DECL|Instance|member|I2C_TypeDef *Instance; /*!< I2C registers base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< I2C locking object */
DECL|MemaddSize|member|__IO uint32_t MemaddSize; /*!< I2C Target memory address size */
DECL|Memaddress|member|__IO uint32_t Memaddress; /*!< I2C Target memory address */
DECL|Mode|member|__IO HAL_I2C_ModeTypeDef Mode; /*!< I2C communication mode */
DECL|NoStretchMode|member|uint32_t NoStretchMode; /*!< Specifies if nostretch mode is selected.
DECL|OwnAddress1|member|uint32_t OwnAddress1; /*!< Specifies the first device own address.
DECL|OwnAddress2|member|uint32_t OwnAddress2; /*!< Specifies the second device own address if dual addressing mode is selected
DECL|PreviousState|member|__IO uint32_t PreviousState; /*!< I2C communication Previous state and mode
DECL|State|member|__IO HAL_I2C_StateTypeDef State; /*!< I2C communication state */
DECL|XferCount|member|__IO uint16_t XferCount; /*!< I2C transfer counter */
DECL|XferOptions|member|__IO uint32_t XferOptions; /*!< I2C transfer options */
DECL|XferSize|member|uint16_t XferSize; /*!< I2C transfer size */
DECL|__HAL_I2C_CLEAR_ADDRFLAG|macro|__HAL_I2C_CLEAR_ADDRFLAG
DECL|__HAL_I2C_CLEAR_FLAG|macro|__HAL_I2C_CLEAR_FLAG
DECL|__HAL_I2C_CLEAR_STOPFLAG|macro|__HAL_I2C_CLEAR_STOPFLAG
DECL|__HAL_I2C_DISABLE_IT|macro|__HAL_I2C_DISABLE_IT
DECL|__HAL_I2C_DISABLE|macro|__HAL_I2C_DISABLE
DECL|__HAL_I2C_ENABLE_IT|macro|__HAL_I2C_ENABLE_IT
DECL|__HAL_I2C_ENABLE|macro|__HAL_I2C_ENABLE
DECL|__HAL_I2C_GET_FLAG|macro|__HAL_I2C_GET_FLAG
DECL|__HAL_I2C_GET_IT_SOURCE|macro|__HAL_I2C_GET_IT_SOURCE
DECL|__HAL_I2C_RESET_HANDLE_STATE|macro|__HAL_I2C_RESET_HANDLE_STATE
DECL|__STM32F2xx_HAL_I2C_H|macro|__STM32F2xx_HAL_I2C_H
DECL|hdmarx|member|DMA_HandleTypeDef *hdmarx; /*!< I2C Rx DMA handle parameters */
DECL|hdmatx|member|DMA_HandleTypeDef *hdmatx; /*!< I2C Tx DMA handle parameters */
DECL|pBuffPtr|member|uint8_t *pBuffPtr; /*!< Pointer to I2C transfer buffer */
