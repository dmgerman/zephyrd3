DECL|Counter|member|uint32_t Counter; /*!< Specifies the WWDG free-running downcounter value.
DECL|HAL_WWDG_STATE_BUSY|enumerator|HAL_WWDG_STATE_BUSY = 0x02, /*!< WWDG internal process is ongoing */
DECL|HAL_WWDG_STATE_ERROR|enumerator|HAL_WWDG_STATE_ERROR = 0x04 /*!< WWDG error state */
DECL|HAL_WWDG_STATE_READY|enumerator|HAL_WWDG_STATE_READY = 0x01, /*!< WWDG initialized and ready for use */
DECL|HAL_WWDG_STATE_RESET|enumerator|HAL_WWDG_STATE_RESET = 0x00, /*!< WWDG not yet initialized or disabled */
DECL|HAL_WWDG_STATE_TIMEOUT|enumerator|HAL_WWDG_STATE_TIMEOUT = 0x03, /*!< WWDG timeout state */
DECL|HAL_WWDG_StateTypeDef|typedef|}HAL_WWDG_StateTypeDef;
DECL|IS_WWDG_COUNTER|macro|IS_WWDG_COUNTER
DECL|IS_WWDG_PRESCALER|macro|IS_WWDG_PRESCALER
DECL|IS_WWDG_WINDOW|macro|IS_WWDG_WINDOW
DECL|Init|member|WWDG_InitTypeDef Init; /*!< WWDG required parameters */
DECL|Instance|member|WWDG_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< WWDG locking object */
DECL|Prescaler|member|uint32_t Prescaler; /*!< Specifies the prescaler value of the WWDG.
DECL|State|member|__IO HAL_WWDG_StateTypeDef State; /*!< WWDG communication state */
DECL|WWDG_FLAG_EWIF|macro|WWDG_FLAG_EWIF
DECL|WWDG_HandleTypeDef|typedef|} WWDG_HandleTypeDef;
DECL|WWDG_IT_EWI|macro|WWDG_IT_EWI
DECL|WWDG_InitTypeDef|typedef|} WWDG_InitTypeDef;
DECL|WWDG_PRESCALER_1|macro|WWDG_PRESCALER_1
DECL|WWDG_PRESCALER_2|macro|WWDG_PRESCALER_2
DECL|WWDG_PRESCALER_4|macro|WWDG_PRESCALER_4
DECL|WWDG_PRESCALER_8|macro|WWDG_PRESCALER_8
DECL|Window|member|uint32_t Window; /*!< Specifies the WWDG window value to be compared to the downcounter.
DECL|__HAL_WWDG_CLEAR_FLAG|macro|__HAL_WWDG_CLEAR_FLAG
DECL|__HAL_WWDG_CLEAR_IT|macro|__HAL_WWDG_CLEAR_IT
DECL|__HAL_WWDG_DISABLE_IT|macro|__HAL_WWDG_DISABLE_IT
DECL|__HAL_WWDG_DISABLE|macro|__HAL_WWDG_DISABLE
DECL|__HAL_WWDG_ENABLE_IT|macro|__HAL_WWDG_ENABLE_IT
DECL|__HAL_WWDG_ENABLE|macro|__HAL_WWDG_ENABLE
DECL|__HAL_WWDG_GET_FLAG|macro|__HAL_WWDG_GET_FLAG
DECL|__HAL_WWDG_GET_IT_SOURCE|macro|__HAL_WWDG_GET_IT_SOURCE
DECL|__HAL_WWDG_GET_IT|macro|__HAL_WWDG_GET_IT
DECL|__HAL_WWDG_RESET_HANDLE_STATE|macro|__HAL_WWDG_RESET_HANDLE_STATE
DECL|__STM32F0xx_HAL_WWDG_H|macro|__STM32F0xx_HAL_WWDG_H
