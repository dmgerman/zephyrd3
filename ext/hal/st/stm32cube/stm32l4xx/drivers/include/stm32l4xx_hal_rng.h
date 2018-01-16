DECL|ClockErrorDetection|member|uint32_t ClockErrorDetection; /*!< Clock error detection */
DECL|HAL_RNG_STATE_BUSY|enumerator|HAL_RNG_STATE_BUSY = 0x02, /*!< RNG internal process is ongoing */
DECL|HAL_RNG_STATE_ERROR|enumerator|HAL_RNG_STATE_ERROR = 0x04 /*!< RNG error state */
DECL|HAL_RNG_STATE_READY|enumerator|HAL_RNG_STATE_READY = 0x01, /*!< RNG initialized and ready for use */
DECL|HAL_RNG_STATE_RESET|enumerator|HAL_RNG_STATE_RESET = 0x00, /*!< RNG not yet initialized or disabled */
DECL|HAL_RNG_STATE_TIMEOUT|enumerator|HAL_RNG_STATE_TIMEOUT = 0x03, /*!< RNG timeout state */
DECL|HAL_RNG_StateTypeDef|typedef|}HAL_RNG_StateTypeDef;
DECL|IS_RNG_CED|macro|IS_RNG_CED
DECL|Init|member|RNG_InitTypeDef Init; /*!< RNG configuration parameters */
DECL|Instance|member|RNG_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< RNG locking object */
DECL|RNG_CED_DISABLE|macro|RNG_CED_DISABLE
DECL|RNG_CED_ENABLE|macro|RNG_CED_ENABLE
DECL|RNG_FLAG_CECS|macro|RNG_FLAG_CECS
DECL|RNG_FLAG_DRDY|macro|RNG_FLAG_DRDY
DECL|RNG_FLAG_SECS|macro|RNG_FLAG_SECS
DECL|RNG_HandleTypeDef|typedef|}RNG_HandleTypeDef;
DECL|RNG_IT_CEI|macro|RNG_IT_CEI
DECL|RNG_IT_DRDY|macro|RNG_IT_DRDY
DECL|RNG_IT_SEI|macro|RNG_IT_SEI
DECL|RNG_InitTypeDef|typedef|}RNG_InitTypeDef;
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
DECL|__STM32L4xx_HAL_RNG_H|macro|__STM32L4xx_HAL_RNG_H
