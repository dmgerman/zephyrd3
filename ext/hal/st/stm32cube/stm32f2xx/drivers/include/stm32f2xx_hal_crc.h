DECL|CRC_HandleTypeDef|typedef|}CRC_HandleTypeDef;
DECL|HAL_CRC_STATE_BUSY|enumerator|HAL_CRC_STATE_BUSY = 0x02U, /*!< CRC internal process is ongoing */
DECL|HAL_CRC_STATE_ERROR|enumerator|HAL_CRC_STATE_ERROR = 0x04U /*!< CRC error state */
DECL|HAL_CRC_STATE_READY|enumerator|HAL_CRC_STATE_READY = 0x01U, /*!< CRC initialized and ready for use */
DECL|HAL_CRC_STATE_RESET|enumerator|HAL_CRC_STATE_RESET = 0x00U, /*!< CRC not yet initialized or disabled */
DECL|HAL_CRC_STATE_TIMEOUT|enumerator|HAL_CRC_STATE_TIMEOUT = 0x03U, /*!< CRC timeout state */
DECL|HAL_CRC_StateTypeDef|typedef|}HAL_CRC_StateTypeDef;
DECL|Instance|member|CRC_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< CRC locking object */
DECL|State|member|__IO HAL_CRC_StateTypeDef State; /*!< CRC communication state */
DECL|__HAL_CRC_DR_RESET|macro|__HAL_CRC_DR_RESET
DECL|__HAL_CRC_GET_IDR|macro|__HAL_CRC_GET_IDR
DECL|__HAL_CRC_RESET_HANDLE_STATE|macro|__HAL_CRC_RESET_HANDLE_STATE
DECL|__HAL_CRC_SET_IDR|macro|__HAL_CRC_SET_IDR
DECL|__STM32F2xx_HAL_CRC_H|macro|__STM32F2xx_HAL_CRC_H
