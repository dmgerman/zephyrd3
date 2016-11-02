DECL|HAL_SDRAM_STATE_BUSY|enumerator|HAL_SDRAM_STATE_BUSY = 0x02U, /*!< SDRAM internal process is ongoing */
DECL|HAL_SDRAM_STATE_ERROR|enumerator|HAL_SDRAM_STATE_ERROR = 0x03U, /*!< SDRAM error state */
DECL|HAL_SDRAM_STATE_PRECHARGED|enumerator|HAL_SDRAM_STATE_PRECHARGED = 0x05U /*!< SDRAM device precharged */
DECL|HAL_SDRAM_STATE_READY|enumerator|HAL_SDRAM_STATE_READY = 0x01U, /*!< SDRAM initialized and ready for use */
DECL|HAL_SDRAM_STATE_RESET|enumerator|HAL_SDRAM_STATE_RESET = 0x00U, /*!< SDRAM not yet initialized or disabled */
DECL|HAL_SDRAM_STATE_WRITE_PROTECTED|enumerator|HAL_SDRAM_STATE_WRITE_PROTECTED = 0x04U, /*!< SDRAM device write protected */
DECL|HAL_SDRAM_StateTypeDef|typedef|}HAL_SDRAM_StateTypeDef;
DECL|Init|member|FMC_SDRAM_InitTypeDef Init; /*!< SDRAM device configuration parameters */
DECL|Instance|member|FMC_SDRAM_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< SDRAM locking object */
DECL|SDRAM_HandleTypeDef|typedef|}SDRAM_HandleTypeDef;
DECL|State|member|__IO HAL_SDRAM_StateTypeDef State; /*!< SDRAM access state */
DECL|__HAL_SDRAM_RESET_HANDLE_STATE|macro|__HAL_SDRAM_RESET_HANDLE_STATE
DECL|__STM32F4xx_HAL_SDRAM_H|macro|__STM32F4xx_HAL_SDRAM_H
DECL|hdma|member|DMA_HandleTypeDef *hdma; /*!< Pointer DMA handler */
