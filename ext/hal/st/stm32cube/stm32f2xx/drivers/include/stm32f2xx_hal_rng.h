DECL|HAL_RNG_STATE_BUSY|enumerator|HAL_RNG_STATE_BUSY = 0x02U, /*!< RNG internal process is ongoing */
DECL|HAL_RNG_STATE_ERROR|enumerator|HAL_RNG_STATE_ERROR = 0x04U /*!< RNG error state */
DECL|HAL_RNG_STATE_READY|enumerator|HAL_RNG_STATE_READY = 0x01U, /*!< RNG initialized and ready for use */
DECL|HAL_RNG_STATE_RESET|enumerator|HAL_RNG_STATE_RESET = 0x00U, /*!< RNG not yet initialized or disabled */
DECL|HAL_RNG_STATE_TIMEOUT|enumerator|HAL_RNG_STATE_TIMEOUT = 0x03U, /*!< RNG timeout state */
DECL|HAL_RNG_StateTypeDef|typedef|}HAL_RNG_StateTypeDef;
DECL|IS_RNG_FLAG|macro|IS_RNG_FLAG
DECL|IS_RNG_IT|macro|IS_RNG_IT
DECL|Instance|member|RNG_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< RNG locking object */
DECL|RNG_FLAG_CECS|macro|RNG_FLAG_CECS
DECL|RNG_FLAG_DRDY|macro|RNG_FLAG_DRDY
DECL|RNG_FLAG_SECS|macro|RNG_FLAG_SECS
DECL|RNG_HandleTypeDef|typedef|}RNG_HandleTypeDef;
DECL|RNG_IT_CEI|macro|RNG_IT_CEI
DECL|RNG_IT_DRDY|macro|RNG_IT_DRDY
DECL|RNG_IT_SEI|macro|RNG_IT_SEI
DECL|RandomNumber|member|uint32_t RandomNumber; /*!< Last Generated RNG Data */
DECL|State|member|__IO HAL_RNG_StateTypeDef State; /*!< RNG communication state */
DECL|__HAL_RNG_CLEAR_FLAG|macro|__HAL_RNG_CLEAR_FLAG
DECL|__HAL_RNG_CLEAR_IT|macro|__HAL_RNG_CLEAR_IT
DECL|__HAL_RNG_DISABLE_IT|macro|__HAL_RNG_DISABLE_IT
DECL|__HAL_RNG_DISABLE|macro|__HAL_RNG_DISABLE
DECL|__HAL_RNG_ENABLE_IT|macro|__HAL_RNG_ENABLE_IT
DECL|__HAL_RNG_ENABLE|macro|__HAL_RNG_ENABLE
DECL|__HAL_RNG_GET_FLAG|macro|__HAL_RNG_GET_FLAG
DECL|__HAL_RNG_GET_IT|macro|__HAL_RNG_GET_IT
DECL|__HAL_RNG_RESET_HANDLE_STATE|macro|__HAL_RNG_RESET_HANDLE_STATE
DECL|__STM32F2xx_HAL_RNG_H|macro|__STM32F2xx_HAL_RNG_H
