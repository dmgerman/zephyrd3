DECL|Counter|member|uint32_t Counter; /*!< Specifies the WWDG free-running downcounter value.
DECL|EWIMode|member|uint32_t EWIMode ; /*!< Specifies if WWDG Early Wakeup Interupt is enable or not.
DECL|EwiCallback|member|void (* EwiCallback)(struct __WWDG_HandleTypeDef *hwwdg); /*!< WWDG Early WakeUp Interrupt callback */
DECL|HAL_WWDG_CallbackIDTypeDef|typedef|}HAL_WWDG_CallbackIDTypeDef;
DECL|HAL_WWDG_EWI_CB_ID|enumerator|HAL_WWDG_EWI_CB_ID = 0x00u, /*!< WWDG EWI callback ID */
DECL|HAL_WWDG_MSPINIT_CB_ID|enumerator|HAL_WWDG_MSPINIT_CB_ID = 0x01u, /*!< WWDG MspInit callback ID */
DECL|IS_WWDG_COUNTER|macro|IS_WWDG_COUNTER
DECL|IS_WWDG_EWI_MODE|macro|IS_WWDG_EWI_MODE
DECL|IS_WWDG_PRESCALER|macro|IS_WWDG_PRESCALER
DECL|IS_WWDG_WINDOW|macro|IS_WWDG_WINDOW
DECL|Init|member|WWDG_InitTypeDef Init; /*!< WWDG required parameters */
DECL|Instance|member|WWDG_TypeDef *Instance; /*!< Register base address */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __WWDG_HandleTypeDef *hwwdg); /*!< WWDG Msp Init callback */
DECL|Prescaler|member|uint32_t Prescaler; /*!< Specifies the prescaler value of the WWDG.
DECL|WWDG_EWI_DISABLE|macro|WWDG_EWI_DISABLE
DECL|WWDG_EWI_ENABLE|macro|WWDG_EWI_ENABLE
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
DECL|__HAL_WWDG_ENABLE_IT|macro|__HAL_WWDG_ENABLE_IT
DECL|__HAL_WWDG_ENABLE|macro|__HAL_WWDG_ENABLE
DECL|__HAL_WWDG_GET_FLAG|macro|__HAL_WWDG_GET_FLAG
DECL|__HAL_WWDG_GET_IT_SOURCE|macro|__HAL_WWDG_GET_IT_SOURCE
DECL|__HAL_WWDG_GET_IT|macro|__HAL_WWDG_GET_IT
DECL|__STM32L4xx_HAL_WWDG_H|macro|__STM32L4xx_HAL_WWDG_H
DECL|__WWDG_HandleTypeDef|struct|typedef struct __WWDG_HandleTypeDef
DECL|pWWDG_CallbackTypeDef|typedef|typedef void (*pWWDG_CallbackTypeDef)(WWDG_HandleTypeDef * hppp); /*!< pointer to a WWDG common callback functions */
