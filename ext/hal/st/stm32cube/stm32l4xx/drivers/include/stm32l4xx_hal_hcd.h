DECL|ConnectCallback|member|void (* ConnectCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD Connect callback */
DECL|DisconnectCallback|member|void (* DisconnectCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD Disconnect callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< HCD Error code */
DECL|HAL_HCD_CONNECT_CB_ID|enumerator|HAL_HCD_CONNECT_CB_ID = 0x02, /*!< USB HCD Connect callback ID */
DECL|HAL_HCD_CallbackIDTypeDef|typedef|} HAL_HCD_CallbackIDTypeDef;
DECL|HAL_HCD_DISCONNECT_CB_ID|enumerator|HAL_HCD_DISCONNECT_CB_ID = 0x03, /*!< USB HCD Disconnect callback ID */
DECL|HAL_HCD_ERROR_INVALID_CALLBACK|macro|HAL_HCD_ERROR_INVALID_CALLBACK
DECL|HAL_HCD_MSPDEINIT_CB_ID|enumerator|HAL_HCD_MSPDEINIT_CB_ID = 0x07 /*!< USB HCD MspDeInit callback ID */
DECL|HAL_HCD_MSPINIT_CB_ID|enumerator|HAL_HCD_MSPINIT_CB_ID = 0x06, /*!< USB HCD MspInit callback ID */
DECL|HAL_HCD_PORT_DISABLED_CB_ID|enumerator|HAL_HCD_PORT_DISABLED_CB_ID = 0x05, /*!< USB HCD Port Disable callback ID */
DECL|HAL_HCD_PORT_ENABLED_CB_ID|enumerator|HAL_HCD_PORT_ENABLED_CB_ID = 0x04, /*!< USB HCD Port Enable callback ID */
DECL|HAL_HCD_SOF_CB_ID|enumerator|HAL_HCD_SOF_CB_ID = 0x01, /*!< USB HCD SOF callback ID */
DECL|HAL_HCD_STATE_BUSY|enumerator|HAL_HCD_STATE_BUSY = 0x03,
DECL|HAL_HCD_STATE_ERROR|enumerator|HAL_HCD_STATE_ERROR = 0x02,
DECL|HAL_HCD_STATE_READY|enumerator|HAL_HCD_STATE_READY = 0x01,
DECL|HAL_HCD_STATE_RESET|enumerator|HAL_HCD_STATE_RESET = 0x00,
DECL|HAL_HCD_STATE_TIMEOUT|enumerator|HAL_HCD_STATE_TIMEOUT = 0x04
DECL|HCD_HCStateTypeDef|typedef|typedef USB_OTG_HCStateTypeDef HCD_HCStateTypeDef;
DECL|HCD_HCTypeDef|typedef|typedef USB_OTG_HCTypeDef HCD_HCTypeDef;
DECL|HCD_HandleTypeDef|typedef|} HCD_HandleTypeDef;
DECL|HCD_InitTypeDef|typedef|typedef USB_OTG_CfgTypeDef HCD_InitTypeDef;
DECL|HCD_PHY_EMBEDDED|macro|HCD_PHY_EMBEDDED
DECL|HCD_PHY_ULPI|macro|HCD_PHY_ULPI
DECL|HCD_SPEED_FULL|macro|HCD_SPEED_FULL
DECL|HCD_SPEED_HIGH|macro|HCD_SPEED_HIGH
DECL|HCD_SPEED_LOW|macro|HCD_SPEED_LOW
DECL|HCD_StateTypeDef|typedef|} HCD_StateTypeDef;
DECL|HCD_TypeDef|typedef|typedef USB_OTG_GlobalTypeDef HCD_TypeDef;
DECL|HCD_URBStateTypeDef|typedef|typedef USB_OTG_URBStateTypeDef HCD_URBStateTypeDef;
DECL|HC_NotifyURBChangeCallback|member|void (* HC_NotifyURBChangeCallback)(struct __HCD_HandleTypeDef *hhcd, uint8_t chnum,
DECL|Init|member|HCD_InitTypeDef Init; /*!< HCD required parameters */
DECL|Instance|member|HCD_TypeDef *Instance; /*!< Register base address */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< HCD peripheral status */
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD Msp Init callback */
DECL|PortDisabledCallback|member|void (* PortDisabledCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD Port Disable callback */
DECL|PortEnabledCallback|member|void (* PortEnabledCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD Port Enable callback */
DECL|SOFCallback|member|void (* SOFCallback)(struct __HCD_HandleTypeDef *hhcd); /*!< USB OTG HCD SOF callback */
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
DECL|__HCD_HandleTypeDef|struct|typedef struct __HCD_HandleTypeDef
DECL|__STM32L4xx_HAL_HCD_H|macro|__STM32L4xx_HAL_HCD_H
DECL|hc|member|HCD_HCTypeDef hc[16]; /*!< Host channels parameters */
DECL|pData|member|void *pData; /*!< Pointer Stack Handler */
DECL|pHCD_CallbackTypeDef|typedef|typedef void (*pHCD_CallbackTypeDef)(HCD_HandleTypeDef *hhcd); /*!< pointer to a common USB OTG HCD callback function */
DECL|pHCD_HC_NotifyURBChangeCallbackTypeDef|typedef|typedef void (*pHCD_HC_NotifyURBChangeCallbackTypeDef)(HCD_HandleTypeDef *hhcd,
