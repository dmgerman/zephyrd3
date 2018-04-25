DECL|HAL_HCD_STATE_BUSY|enumerator|HAL_HCD_STATE_BUSY = 0x03U,
DECL|HAL_HCD_STATE_ERROR|enumerator|HAL_HCD_STATE_ERROR = 0x02U,
DECL|HAL_HCD_STATE_READY|enumerator|HAL_HCD_STATE_READY = 0x01U,
DECL|HAL_HCD_STATE_RESET|enumerator|HAL_HCD_STATE_RESET = 0x00U,
DECL|HAL_HCD_STATE_TIMEOUT|enumerator|HAL_HCD_STATE_TIMEOUT = 0x04U
DECL|HCD_HCStateTypeDef|typedef|typedef USB_OTG_HCStateTypeDef HCD_HCStateTypeDef ;
DECL|HCD_HCTypeDef|typedef|typedef USB_OTG_HCTypeDef HCD_HCTypeDef ;
DECL|HCD_HandleTypeDef|typedef|} HCD_HandleTypeDef;
DECL|HCD_InitTypeDef|typedef|typedef USB_OTG_CfgTypeDef HCD_InitTypeDef;
DECL|HCD_PHY_EMBEDDED|macro|HCD_PHY_EMBEDDED
DECL|HCD_PHY_ULPI|macro|HCD_PHY_ULPI
DECL|HCD_SPEED_FULL|macro|HCD_SPEED_FULL
DECL|HCD_SPEED_HIGH|macro|HCD_SPEED_HIGH
DECL|HCD_SPEED_LOW|macro|HCD_SPEED_LOW
DECL|HCD_StateTypeDef|typedef|} HCD_StateTypeDef;
DECL|HCD_TypeDef|typedef|typedef USB_OTG_GlobalTypeDef HCD_TypeDef;
DECL|HCD_URBStateTypeDef|typedef|typedef USB_OTG_URBStateTypeDef HCD_URBStateTypeDef ;
DECL|IS_HCD_ALL_INSTANCE|macro|IS_HCD_ALL_INSTANCE
DECL|Init|member|HCD_InitTypeDef Init; /*!< HCD required parameters */
DECL|Instance|member|HCD_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< HCD peripheral status */
DECL|State|member|__IO HCD_StateTypeDef State; /*!< HCD communication state */
DECL|__HAL_HCD_CLEAR_FLAG|macro|__HAL_HCD_CLEAR_FLAG
DECL|__HAL_HCD_CLEAR_HC_INT|macro|__HAL_HCD_CLEAR_HC_INT
DECL|__HAL_HCD_DISABLE|macro|__HAL_HCD_DISABLE
DECL|__HAL_HCD_ENABLE|macro|__HAL_HCD_ENABLE
DECL|__HAL_HCD_GET_FLAG|macro|__HAL_HCD_GET_FLAG
DECL|__HAL_HCD_IS_INVALID_INTERRUPT|macro|__HAL_HCD_IS_INVALID_INTERRUPT
DECL|__HAL_HCD_MASK_ACK_HC_INT|macro|__HAL_HCD_MASK_ACK_HC_INT
DECL|__HAL_HCD_MASK_HALT_HC_INT|macro|__HAL_HCD_MASK_HALT_HC_INT
DECL|__HAL_HCD_UNMASK_ACK_HC_INT|macro|__HAL_HCD_UNMASK_ACK_HC_INT
DECL|__HAL_HCD_UNMASK_HALT_HC_INT|macro|__HAL_HCD_UNMASK_HALT_HC_INT
DECL|__STM32F2xx_HAL_HCD_H|macro|__STM32F2xx_HAL_HCD_H
DECL|hc|member|HCD_HCTypeDef hc[15U]; /*!< Host channels parameters */
DECL|pData|member|void *pData; /*!< Pointer Stack Handler */
