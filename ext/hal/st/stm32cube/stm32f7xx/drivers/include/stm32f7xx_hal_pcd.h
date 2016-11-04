DECL|BESL|member|uint32_t BESL;
DECL|HAL_PCD_STATE_BUSY|enumerator|HAL_PCD_STATE_BUSY = 0x03U,
DECL|HAL_PCD_STATE_ERROR|enumerator|HAL_PCD_STATE_ERROR = 0x02U,
DECL|HAL_PCD_STATE_READY|enumerator|HAL_PCD_STATE_READY = 0x01U,
DECL|HAL_PCD_STATE_RESET|enumerator|HAL_PCD_STATE_RESET = 0x00U,
DECL|HAL_PCD_STATE_TIMEOUT|enumerator|HAL_PCD_STATE_TIMEOUT = 0x04U
DECL|IN_ep|member|PCD_EPTypeDef IN_ep[15]; /*!< IN endpoint parameters */
DECL|IS_PCD_ALL_INSTANCE|macro|IS_PCD_ALL_INSTANCE
DECL|Init|member|PCD_InitTypeDef Init; /*!< PCD required parameters */
DECL|Instance|member|PCD_TypeDef *Instance; /*!< Register base address */
DECL|LPM_L0|enumerator|LPM_L0 = 0x00U, /* on */
DECL|LPM_L1|enumerator|LPM_L1 = 0x01U, /* LPM L1 sleep */
DECL|LPM_L2|enumerator|LPM_L2 = 0x02U, /* suspend */
DECL|LPM_L3|enumerator|LPM_L3 = 0x03U, /* off */
DECL|LPM_State|member|PCD_LPM_StateTypeDef LPM_State; /*!< LPM State */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< PCD peripheral status */
DECL|OUT_ep|member|PCD_EPTypeDef OUT_ep[15]; /*!< OUT endpoint parameters */
DECL|PCD_EPTypeDef|typedef|typedef USB_OTG_EPTypeDef PCD_EPTypeDef ;
DECL|PCD_HandleTypeDef|typedef|} PCD_HandleTypeDef;
DECL|PCD_InitTypeDef|typedef|typedef USB_OTG_CfgTypeDef PCD_InitTypeDef;
DECL|PCD_LPM_StateTypeDef|typedef|}PCD_LPM_StateTypeDef;
DECL|PCD_PHY_EMBEDDED|macro|PCD_PHY_EMBEDDED
DECL|PCD_PHY_ULPI|macro|PCD_PHY_ULPI
DECL|PCD_SPEED_FULL|macro|PCD_SPEED_FULL
DECL|PCD_SPEED_HIGH_IN_FULL|macro|PCD_SPEED_HIGH_IN_FULL
DECL|PCD_SPEED_HIGH|macro|PCD_SPEED_HIGH
DECL|PCD_StateTypeDef|typedef|} PCD_StateTypeDef;
DECL|PCD_TypeDef|typedef|typedef USB_OTG_GlobalTypeDef PCD_TypeDef;
DECL|Setup|member|uint32_t Setup[12]; /*!< Setup packet buffer */
DECL|State|member|__IO PCD_StateTypeDef State; /*!< PCD communication state */
DECL|USBD_FS_TRDT_VALUE|macro|USBD_FS_TRDT_VALUE
DECL|USBD_HS_TRDT_VALUE|macro|USBD_HS_TRDT_VALUE
DECL|USB_OTG_FS_WAKEUP_EXTI_FALLING_EDGE|macro|USB_OTG_FS_WAKEUP_EXTI_FALLING_EDGE
DECL|USB_OTG_FS_WAKEUP_EXTI_LINE|macro|USB_OTG_FS_WAKEUP_EXTI_LINE
DECL|USB_OTG_FS_WAKEUP_EXTI_RISING_EDGE|macro|USB_OTG_FS_WAKEUP_EXTI_RISING_EDGE
DECL|USB_OTG_FS_WAKEUP_EXTI_RISING_FALLING_EDGE|macro|USB_OTG_FS_WAKEUP_EXTI_RISING_FALLING_EDGE
DECL|USB_OTG_HS_WAKEUP_EXTI_FALLING_EDGE|macro|USB_OTG_HS_WAKEUP_EXTI_FALLING_EDGE
DECL|USB_OTG_HS_WAKEUP_EXTI_LINE|macro|USB_OTG_HS_WAKEUP_EXTI_LINE
DECL|USB_OTG_HS_WAKEUP_EXTI_RISING_EDGE|macro|USB_OTG_HS_WAKEUP_EXTI_RISING_EDGE
DECL|USB_OTG_HS_WAKEUP_EXTI_RISING_FALLING_EDGE|macro|USB_OTG_HS_WAKEUP_EXTI_RISING_FALLING_EDGE
DECL|__HAL_PCD_CLEAR_FLAG|macro|__HAL_PCD_CLEAR_FLAG
DECL|__HAL_PCD_DISABLE|macro|__HAL_PCD_DISABLE
DECL|__HAL_PCD_ENABLE|macro|__HAL_PCD_ENABLE
DECL|__HAL_PCD_GATE_PHYCLOCK|macro|__HAL_PCD_GATE_PHYCLOCK
DECL|__HAL_PCD_GET_FLAG|macro|__HAL_PCD_GET_FLAG
DECL|__HAL_PCD_IS_INVALID_INTERRUPT|macro|__HAL_PCD_IS_INVALID_INTERRUPT
DECL|__HAL_PCD_IS_PHY_SUSPENDED|macro|__HAL_PCD_IS_PHY_SUSPENDED
DECL|__HAL_PCD_UNGATE_PHYCLOCK|macro|__HAL_PCD_UNGATE_PHYCLOCK
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_CLEAR_FLAG|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_CLEAR_FLAG
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_DISABLE_IT|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_DISABLE_IT
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_FALLING_EDGE|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_FALLING_EDGE
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_IT|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_IT
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_EDGE|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_EDGE
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_FALLING_EDGE|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_FALLING_EDGE
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_GENERATE_SWIT|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_GENERATE_SWIT
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_GET_FLAG|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_GET_FLAG
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_CLEAR_FLAG|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_CLEAR_FLAG
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_DISABLE_IT|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_DISABLE_IT
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_FALLING_EDGE|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_FALLING_EDGE
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_IT|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_IT
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_RISING_EDGE|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_RISING_EDGE
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_RISING_FALLING_EDGE|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_ENABLE_RISING_FALLING_EDGE
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_GENERATE_SWIT|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_GENERATE_SWIT
DECL|__HAL_USB_OTG_HS_WAKEUP_EXTI_GET_FLAG|macro|__HAL_USB_OTG_HS_WAKEUP_EXTI_GET_FLAG
DECL|__STM32F7xx_HAL_PCD_H|macro|__STM32F7xx_HAL_PCD_H
DECL|lpm_active|member|uint32_t lpm_active; /*!< Enable or disable the Link Power Management .
DECL|pData|member|void *pData; /*!< Pointer to upper stack Handler */
