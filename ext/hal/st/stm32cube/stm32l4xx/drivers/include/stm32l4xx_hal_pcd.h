DECL|BCDCallback|member|void (* BCDCallback)(struct __PCD_HandleTypeDef *hpcd, PCD_BCD_MsgTypeDef msg); /*!< USB OTG PCD BCD callback */
DECL|BESL|member|uint32_t BESL;
DECL|ConnectCallback|member|void (* ConnectCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Connect callback */
DECL|DataInStageCallback|member|void (* DataInStageCallback)(struct __PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< USB OTG PCD Data IN Stage callback */
DECL|DataOutStageCallback|member|void (* DataOutStageCallback)(struct __PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< USB OTG PCD Data OUT Stage callback */
DECL|DisconnectCallback|member|void (* DisconnectCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Disconnect callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< PCD Error code */
DECL|HAL_PCD_CONNECT_CB_ID|enumerator|HAL_PCD_CONNECT_CB_ID = 0x06, /*!< USB PCD Connect callback ID */
DECL|HAL_PCD_CallbackIDTypeDef|typedef|} HAL_PCD_CallbackIDTypeDef;
DECL|HAL_PCD_DISCONNECT_CB_ID|enumerator|HAL_PCD_DISCONNECT_CB_ID = 0x07, /*!< USB PCD Disconnect callback ID */
DECL|HAL_PCD_ERROR_INVALID_CALLBACK|macro|HAL_PCD_ERROR_INVALID_CALLBACK
DECL|HAL_PCD_MSPDEINIT_CB_ID|enumerator|HAL_PCD_MSPDEINIT_CB_ID = 0x09 /*!< USB PCD MspDeInit callback ID */
DECL|HAL_PCD_MSPINIT_CB_ID|enumerator|HAL_PCD_MSPINIT_CB_ID = 0x08, /*!< USB PCD MspInit callback ID */
DECL|HAL_PCD_RESET_CB_ID|enumerator|HAL_PCD_RESET_CB_ID = 0x03, /*!< USB PCD Reset callback ID */
DECL|HAL_PCD_RESUME_CB_ID|enumerator|HAL_PCD_RESUME_CB_ID = 0x05, /*!< USB PCD Resume callback ID */
DECL|HAL_PCD_SETUPSTAGE_CB_ID|enumerator|HAL_PCD_SETUPSTAGE_CB_ID = 0x02, /*!< USB PCD Setup Stage callback ID */
DECL|HAL_PCD_SOF_CB_ID|enumerator|HAL_PCD_SOF_CB_ID = 0x01, /*!< USB PCD SOF callback ID */
DECL|HAL_PCD_STATE_BUSY|enumerator|HAL_PCD_STATE_BUSY = 0x03,
DECL|HAL_PCD_STATE_ERROR|enumerator|HAL_PCD_STATE_ERROR = 0x02,
DECL|HAL_PCD_STATE_READY|enumerator|HAL_PCD_STATE_READY = 0x01,
DECL|HAL_PCD_STATE_RESET|enumerator|HAL_PCD_STATE_RESET = 0x00,
DECL|HAL_PCD_STATE_TIMEOUT|enumerator|HAL_PCD_STATE_TIMEOUT = 0x04
DECL|HAL_PCD_SUSPEND_CB_ID|enumerator|HAL_PCD_SUSPEND_CB_ID = 0x04, /*!< USB PCD Suspend callback ID */
DECL|IN_ep|member|PCD_EPTypeDef IN_ep[16]; /*!< IN endpoint parameters */
DECL|ISOINIncompleteCallback|member|void (* ISOINIncompleteCallback)(struct __PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< USB OTG PCD ISO IN Incomplete callback */
DECL|ISOOUTIncompleteCallback|member|void (* ISOOUTIncompleteCallback)(struct __PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< USB OTG PCD ISO OUT Incomplete callback */
DECL|Init|member|PCD_InitTypeDef Init; /*!< PCD required parameters */
DECL|Instance|member|PCD_TypeDef *Instance; /*!< Register base address */
DECL|LL_EXTI_LINE_18|macro|LL_EXTI_LINE_18
DECL|LL_EXTI_LINE_18|macro|LL_EXTI_LINE_18
DECL|LL_EXTI_LINE_20|macro|LL_EXTI_LINE_20
DECL|LPMCallback|member|void (* LPMCallback)(struct __PCD_HandleTypeDef *hpcd, PCD_LPM_MsgTypeDef msg); /*!< USB OTG PCD LPM callback */
DECL|LPM_L0|enumerator|LPM_L0 = 0x00, /* on */
DECL|LPM_L1|enumerator|LPM_L1 = 0x01, /* LPM L1 sleep */
DECL|LPM_L2|enumerator|LPM_L2 = 0x02, /* suspend */
DECL|LPM_L3|enumerator|LPM_L3 = 0x03, /* off */
DECL|LPM_State|member|PCD_LPM_StateTypeDef LPM_State; /*!< LPM State */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< PCD peripheral status */
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Msp Init callback */
DECL|OUT_ep|member|PCD_EPTypeDef OUT_ep[16]; /*!< OUT endpoint parameters */
DECL|PCD_BCD_CHARGING_DOWNSTREAM_PORT|enumerator|PCD_BCD_CHARGING_DOWNSTREAM_PORT = 0xFC,
DECL|PCD_BCD_CONTACT_DETECTION|enumerator|PCD_BCD_CONTACT_DETECTION = 0xFE,
DECL|PCD_BCD_DEDICATED_CHARGING_PORT|enumerator|PCD_BCD_DEDICATED_CHARGING_PORT = 0xFB,
DECL|PCD_BCD_DISCOVERY_COMPLETED|enumerator|PCD_BCD_DISCOVERY_COMPLETED = 0x00,
DECL|PCD_BCD_ERROR|enumerator|PCD_BCD_ERROR = 0xFF,
DECL|PCD_BCD_MsgTypeDef|typedef|} PCD_BCD_MsgTypeDef;
DECL|PCD_BCD_STD_DOWNSTREAM_PORT|enumerator|PCD_BCD_STD_DOWNSTREAM_PORT = 0xFD,
DECL|PCD_CALC_BLK2|macro|PCD_CALC_BLK2
DECL|PCD_CALC_BLK32|macro|PCD_CALC_BLK32
DECL|PCD_CLEAR_EP_DBUF|macro|PCD_CLEAR_EP_DBUF
DECL|PCD_CLEAR_EP_KIND|macro|PCD_CLEAR_EP_KIND
DECL|PCD_CLEAR_OUT_STATUS|macro|PCD_CLEAR_OUT_STATUS
DECL|PCD_CLEAR_RX_DTOG|macro|PCD_CLEAR_RX_DTOG
DECL|PCD_CLEAR_RX_EP_CTR|macro|PCD_CLEAR_RX_EP_CTR
DECL|PCD_CLEAR_TX_DTOG|macro|PCD_CLEAR_TX_DTOG
DECL|PCD_CLEAR_TX_EP_CTR|macro|PCD_CLEAR_TX_EP_CTR
DECL|PCD_DBL_BUF|macro|PCD_DBL_BUF
DECL|PCD_ENDP0|macro|PCD_ENDP0
DECL|PCD_ENDP1|macro|PCD_ENDP1
DECL|PCD_ENDP2|macro|PCD_ENDP2
DECL|PCD_ENDP3|macro|PCD_ENDP3
DECL|PCD_ENDP4|macro|PCD_ENDP4
DECL|PCD_ENDP5|macro|PCD_ENDP5
DECL|PCD_ENDP6|macro|PCD_ENDP6
DECL|PCD_ENDP7|macro|PCD_ENDP7
DECL|PCD_EP0MPS_08|macro|PCD_EP0MPS_08
DECL|PCD_EP0MPS_16|macro|PCD_EP0MPS_16
DECL|PCD_EP0MPS_32|macro|PCD_EP0MPS_32
DECL|PCD_EP0MPS_64|macro|PCD_EP0MPS_64
DECL|PCD_EPTypeDef|typedef|typedef USB_EPTypeDef PCD_EPTypeDef;
DECL|PCD_EPTypeDef|typedef|typedef USB_OTG_EPTypeDef PCD_EPTypeDef;
DECL|PCD_EP_BUF0|enumerator|PCD_EP_BUF0,
DECL|PCD_EP_BUF1|enumerator|PCD_EP_BUF1
DECL|PCD_EP_BUF_NUM|typedef|} PCD_EP_BUF_NUM;
DECL|PCD_EP_DBUF_DIR|typedef|} PCD_EP_DBUF_DIR;
DECL|PCD_EP_DBUF_ERR|enumerator|PCD_EP_DBUF_ERR,
DECL|PCD_EP_DBUF_IN|enumerator|PCD_EP_DBUF_IN,
DECL|PCD_EP_DBUF_OUT|enumerator|PCD_EP_DBUF_OUT,
DECL|PCD_EP_NOBUF|enumerator|PCD_EP_NOBUF,
DECL|PCD_EP_RX_CNT|macro|PCD_EP_RX_CNT
DECL|PCD_EP_TX_CNT|macro|PCD_EP_TX_CNT
DECL|PCD_FreeUserBuffer|macro|PCD_FreeUserBuffer
DECL|PCD_GET_DB_DIR|macro|PCD_GET_DB_DIR
DECL|PCD_GET_ENDPOINT|macro|PCD_GET_ENDPOINT
DECL|PCD_GET_EPTYPE|macro|PCD_GET_EPTYPE
DECL|PCD_GET_EP_ADDRESS|macro|PCD_GET_EP_ADDRESS
DECL|PCD_GET_EP_DBUF0_ADDR|macro|PCD_GET_EP_DBUF0_ADDR
DECL|PCD_GET_EP_DBUF0_CNT|macro|PCD_GET_EP_DBUF0_CNT
DECL|PCD_GET_EP_DBUF1_ADDR|macro|PCD_GET_EP_DBUF1_ADDR
DECL|PCD_GET_EP_DBUF1_CNT|macro|PCD_GET_EP_DBUF1_CNT
DECL|PCD_GET_EP_RX_ADDRESS|macro|PCD_GET_EP_RX_ADDRESS
DECL|PCD_GET_EP_RX_CNT|macro|PCD_GET_EP_RX_CNT
DECL|PCD_GET_EP_RX_STALL_STATUS|macro|PCD_GET_EP_RX_STALL_STATUS
DECL|PCD_GET_EP_RX_STATUS|macro|PCD_GET_EP_RX_STATUS
DECL|PCD_GET_EP_TX_ADDRESS|macro|PCD_GET_EP_TX_ADDRESS
DECL|PCD_GET_EP_TX_CNT|macro|PCD_GET_EP_TX_CNT
DECL|PCD_GET_EP_TX_STALL_STATUS|macro|PCD_GET_EP_TX_STALL_STATUS
DECL|PCD_GET_EP_TX_STATUS|macro|PCD_GET_EP_TX_STATUS
DECL|PCD_HandleTypeDef|typedef|} PCD_HandleTypeDef;
DECL|PCD_InitTypeDef|typedef|typedef USB_CfgTypeDef PCD_InitTypeDef;
DECL|PCD_InitTypeDef|typedef|typedef USB_OTG_CfgTypeDef PCD_InitTypeDef;
DECL|PCD_LPM_L0_ACTIVE|enumerator|PCD_LPM_L0_ACTIVE = 0x00, /* on */
DECL|PCD_LPM_L1_ACTIVE|enumerator|PCD_LPM_L1_ACTIVE = 0x01, /* LPM L1 sleep */
DECL|PCD_LPM_MsgTypeDef|typedef|} PCD_LPM_MsgTypeDef;
DECL|PCD_LPM_StateTypeDef|typedef|} PCD_LPM_StateTypeDef;
DECL|PCD_PHY_EMBEDDED|macro|PCD_PHY_EMBEDDED
DECL|PCD_PHY_ULPI|macro|PCD_PHY_ULPI
DECL|PCD_PHY_UTMI|macro|PCD_PHY_UTMI
DECL|PCD_RX_DTOG|macro|PCD_RX_DTOG
DECL|PCD_SET_ENDPOINT|macro|PCD_SET_ENDPOINT
DECL|PCD_SET_EPTYPE|macro|PCD_SET_EPTYPE
DECL|PCD_SET_EP_ADDRESS|macro|PCD_SET_EP_ADDRESS
DECL|PCD_SET_EP_CNT_RX_REG|macro|PCD_SET_EP_CNT_RX_REG
DECL|PCD_SET_EP_DBUF0_ADDR|macro|PCD_SET_EP_DBUF0_ADDR
DECL|PCD_SET_EP_DBUF0_CNT|macro|PCD_SET_EP_DBUF0_CNT
DECL|PCD_SET_EP_DBUF1_ADDR|macro|PCD_SET_EP_DBUF1_ADDR
DECL|PCD_SET_EP_DBUF1_CNT|macro|PCD_SET_EP_DBUF1_CNT
DECL|PCD_SET_EP_DBUF_ADDR|macro|PCD_SET_EP_DBUF_ADDR
DECL|PCD_SET_EP_DBUF_CNT|macro|PCD_SET_EP_DBUF_CNT
DECL|PCD_SET_EP_DBUF|macro|PCD_SET_EP_DBUF
DECL|PCD_SET_EP_KIND|macro|PCD_SET_EP_KIND
DECL|PCD_SET_EP_RX_ADDRESS|macro|PCD_SET_EP_RX_ADDRESS
DECL|PCD_SET_EP_RX_CNT|macro|PCD_SET_EP_RX_CNT
DECL|PCD_SET_EP_RX_DBUF0_CNT|macro|PCD_SET_EP_RX_DBUF0_CNT
DECL|PCD_SET_EP_RX_STATUS|macro|PCD_SET_EP_RX_STATUS
DECL|PCD_SET_EP_RX_VALID|macro|PCD_SET_EP_RX_VALID
DECL|PCD_SET_EP_TXRX_STATUS|macro|PCD_SET_EP_TXRX_STATUS
DECL|PCD_SET_EP_TX_ADDRESS|macro|PCD_SET_EP_TX_ADDRESS
DECL|PCD_SET_EP_TX_CNT|macro|PCD_SET_EP_TX_CNT
DECL|PCD_SET_EP_TX_STATUS|macro|PCD_SET_EP_TX_STATUS
DECL|PCD_SET_EP_TX_VALID|macro|PCD_SET_EP_TX_VALID
DECL|PCD_SET_OUT_STATUS|macro|PCD_SET_OUT_STATUS
DECL|PCD_SNG_BUF|macro|PCD_SNG_BUF
DECL|PCD_SPEED_FULL|macro|PCD_SPEED_FULL
DECL|PCD_SPEED_HIGH_IN_FULL|macro|PCD_SPEED_HIGH_IN_FULL
DECL|PCD_SPEED_HIGH|macro|PCD_SPEED_HIGH
DECL|PCD_StateTypeDef|typedef|} PCD_StateTypeDef;
DECL|PCD_TX_DTOG|macro|PCD_TX_DTOG
DECL|PCD_TypeDef|typedef|typedef USB_OTG_GlobalTypeDef PCD_TypeDef;
DECL|PCD_TypeDef|typedef|typedef USB_TypeDef PCD_TypeDef;
DECL|ResetCallback|member|void (* ResetCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Reset callback */
DECL|ResumeCallback|member|void (* ResumeCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Resume callback */
DECL|SOFCallback|member|void (* SOFCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD SOF callback */
DECL|SetupStageCallback|member|void (* SetupStageCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Setup Stage callback */
DECL|Setup|member|uint32_t Setup[12]; /*!< Setup packet buffer */
DECL|State|member|__IO PCD_StateTypeDef State; /*!< PCD communication state */
DECL|SuspendCallback|member|void (* SuspendCallback)(struct __PCD_HandleTypeDef *hpcd); /*!< USB OTG PCD Suspend callback */
DECL|USBD_FS_TRDT_VALUE|macro|USBD_FS_TRDT_VALUE
DECL|USB_Address|member|__IO uint8_t USB_Address; /*!< USB Address */
DECL|USB_EP0StartXfer|macro|USB_EP0StartXfer
DECL|USB_OTG_FS_WAKEUP_EXTI_FALLING_EDGE|macro|USB_OTG_FS_WAKEUP_EXTI_FALLING_EDGE
DECL|USB_OTG_FS_WAKEUP_EXTI_LINE|macro|USB_OTG_FS_WAKEUP_EXTI_LINE
DECL|USB_OTG_FS_WAKEUP_EXTI_RISING_EDGE|macro|USB_OTG_FS_WAKEUP_EXTI_RISING_EDGE
DECL|USB_OTG_FS_WAKEUP_EXTI_RISING_FALLING_EDGE|macro|USB_OTG_FS_WAKEUP_EXTI_RISING_FALLING_EDGE
DECL|USB_WAKEUP_EXTI_LINE|macro|USB_WAKEUP_EXTI_LINE
DECL|__HAL_PCD_CLEAR_FLAG|macro|__HAL_PCD_CLEAR_FLAG
DECL|__HAL_PCD_CLEAR_FLAG|macro|__HAL_PCD_CLEAR_FLAG
DECL|__HAL_PCD_DISABLE|macro|__HAL_PCD_DISABLE
DECL|__HAL_PCD_DISABLE|macro|__HAL_PCD_DISABLE
DECL|__HAL_PCD_ENABLE|macro|__HAL_PCD_ENABLE
DECL|__HAL_PCD_ENABLE|macro|__HAL_PCD_ENABLE
DECL|__HAL_PCD_GATE_PHYCLOCK|macro|__HAL_PCD_GATE_PHYCLOCK
DECL|__HAL_PCD_GET_FLAG|macro|__HAL_PCD_GET_FLAG
DECL|__HAL_PCD_GET_FLAG|macro|__HAL_PCD_GET_FLAG
DECL|__HAL_PCD_IS_INVALID_INTERRUPT|macro|__HAL_PCD_IS_INVALID_INTERRUPT
DECL|__HAL_PCD_IS_PHY_SUSPENDED|macro|__HAL_PCD_IS_PHY_SUSPENDED
DECL|__HAL_PCD_UNGATE_PHYCLOCK|macro|__HAL_PCD_UNGATE_PHYCLOCK
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_CLEAR_FLAG|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_CLEAR_FLAG
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_DISABLE_IT|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_DISABLE_IT
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_IT|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_IT
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_EDGE|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_ENABLE_RISING_EDGE
DECL|__HAL_USB_OTG_FS_WAKEUP_EXTI_GET_FLAG|macro|__HAL_USB_OTG_FS_WAKEUP_EXTI_GET_FLAG
DECL|__HAL_USB_WAKEUP_EXTI_CLEAR_FLAG|macro|__HAL_USB_WAKEUP_EXTI_CLEAR_FLAG
DECL|__HAL_USB_WAKEUP_EXTI_DISABLE_IT|macro|__HAL_USB_WAKEUP_EXTI_DISABLE_IT
DECL|__HAL_USB_WAKEUP_EXTI_ENABLE_IT|macro|__HAL_USB_WAKEUP_EXTI_ENABLE_IT
DECL|__HAL_USB_WAKEUP_EXTI_ENABLE_RISING_EDGE|macro|__HAL_USB_WAKEUP_EXTI_ENABLE_RISING_EDGE
DECL|__HAL_USB_WAKEUP_EXTI_GET_FLAG|macro|__HAL_USB_WAKEUP_EXTI_GET_FLAG
DECL|__PCD_HandleTypeDef|struct|typedef struct __PCD_HandleTypeDef
DECL|__STM32L4xx_HAL_PCD_H|macro|__STM32L4xx_HAL_PCD_H
DECL|battery_charging_active|member|uint32_t battery_charging_active; /*!< Enable or disable Battery charging.
DECL|lpm_active|member|uint32_t lpm_active; /*!< Enable or disable the Link Power Management .
DECL|pData|member|void *pData; /*!< Pointer to upper stack Handler */
DECL|pPCD_BcdCallbackTypeDef|typedef|typedef void (*pPCD_BcdCallbackTypeDef)(PCD_HandleTypeDef *hpcd, PCD_BCD_MsgTypeDef msg); /*!< pointer to USB OTG PCD BCD callback */
DECL|pPCD_CallbackTypeDef|typedef|typedef void (*pPCD_CallbackTypeDef)(PCD_HandleTypeDef *hpcd); /*!< pointer to a common USB OTG PCD callback function */
DECL|pPCD_DataInStageCallbackTypeDef|typedef|typedef void (*pPCD_DataInStageCallbackTypeDef)(PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< pointer to USB OTG PCD Data IN Stage callback */
DECL|pPCD_DataOutStageCallbackTypeDef|typedef|typedef void (*pPCD_DataOutStageCallbackTypeDef)(PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< pointer to USB OTG PCD Data OUT Stage callback */
DECL|pPCD_IsoInIncpltCallbackTypeDef|typedef|typedef void (*pPCD_IsoInIncpltCallbackTypeDef)(PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< pointer to USB OTG PCD ISO IN Incomplete callback */
DECL|pPCD_IsoOutIncpltCallbackTypeDef|typedef|typedef void (*pPCD_IsoOutIncpltCallbackTypeDef)(PCD_HandleTypeDef *hpcd, uint8_t epnum); /*!< pointer to USB OTG PCD ISO OUT Incomplete callback */
DECL|pPCD_LpmCallbackTypeDef|typedef|typedef void (*pPCD_LpmCallbackTypeDef)(PCD_HandleTypeDef *hpcd, PCD_LPM_MsgTypeDef msg); /*!< pointer to USB OTG PCD LPM callback */
