DECL|Extended|member|FSMC_NORSRAM_EXTENDED_TypeDef *Extended; /*!< Extended mode register base address */
DECL|HAL_SRAM_STATE_BUSY|enumerator|HAL_SRAM_STATE_BUSY = 0x02U, /*!< SRAM internal process is ongoing */
DECL|HAL_SRAM_STATE_ERROR|enumerator|HAL_SRAM_STATE_ERROR = 0x03U, /*!< SRAM error state */
DECL|HAL_SRAM_STATE_PROTECTED|enumerator|HAL_SRAM_STATE_PROTECTED = 0x04U /*!< SRAM peripheral NORSRAM device write protected */
DECL|HAL_SRAM_STATE_READY|enumerator|HAL_SRAM_STATE_READY = 0x01U, /*!< SRAM initialized and ready for use */
DECL|HAL_SRAM_STATE_RESET|enumerator|HAL_SRAM_STATE_RESET = 0x00U, /*!< SRAM not yet initialized or disabled */
DECL|HAL_SRAM_StateTypeDef|typedef|}HAL_SRAM_StateTypeDef;
DECL|Init|member|FSMC_NORSRAM_InitTypeDef Init; /*!< SRAM device control configuration parameters */
DECL|Instance|member|FSMC_NORSRAM_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< SRAM locking object */
DECL|SRAM_HandleTypeDef|typedef|}SRAM_HandleTypeDef;
DECL|State|member|__IO HAL_SRAM_StateTypeDef State; /*!< SRAM device access state */
DECL|__HAL_SRAM_RESET_HANDLE_STATE|macro|__HAL_SRAM_RESET_HANDLE_STATE
DECL|__STM32F2xx_HAL_SRAM_H|macro|__STM32F2xx_HAL_SRAM_H
DECL|hdma|member|DMA_HandleTypeDef *hdma; /*!< Pointer DMA handler */
