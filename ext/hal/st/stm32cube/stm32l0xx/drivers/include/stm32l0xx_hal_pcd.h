DECL|BESL|member|uint32_t BESL;
DECL|DEP0CTL_MPS_16|macro|DEP0CTL_MPS_16
DECL|DEP0CTL_MPS_32|macro|DEP0CTL_MPS_32
DECL|DEP0CTL_MPS_64|macro|DEP0CTL_MPS_64
DECL|DEP0CTL_MPS_8|macro|DEP0CTL_MPS_8
DECL|HAL_PCD_STATE_BUSY|enumerator|HAL_PCD_STATE_BUSY = 0x03U,
DECL|HAL_PCD_STATE_ERROR|enumerator|HAL_PCD_STATE_ERROR = 0x02U,
DECL|HAL_PCD_STATE_READY|enumerator|HAL_PCD_STATE_READY = 0x01U,
DECL|HAL_PCD_STATE_RESET|enumerator|HAL_PCD_STATE_RESET = 0x00U,
DECL|HAL_PCD_STATE_TIMEOUT|enumerator|HAL_PCD_STATE_TIMEOUT = 0x04U
DECL|IN_ep|member|PCD_EPTypeDef IN_ep[8]; /*!< IN endpoint parameters */
DECL|IS_PCD_ALL_INSTANCE|macro|IS_PCD_ALL_INSTANCE
DECL|Init|member|PCD_InitTypeDef Init; /*!< PCD required parameters */
DECL|Instance|member|PCD_TypeDef *Instance; /*!< Register base address */
DECL|LPM_L0|enumerator|LPM_L0 = 0x00, /* on */
DECL|LPM_L1|enumerator|LPM_L1 = 0x01, /* LPM L1 sleep */
DECL|LPM_L2|enumerator|LPM_L2 = 0x02, /* suspend */
DECL|LPM_L3|enumerator|LPM_L3 = 0x03, /* off */
DECL|LPM_State|member|PCD_LPM_StateTypeDef LPM_State; /*!< LPM State */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< PCD peripheral status */
DECL|OUT_ep|member|PCD_EPTypeDef OUT_ep[8]; /*!< OUT endpoint parameters */
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
DECL|PCD_EPTypeDef|typedef|}PCD_EPTypeDef;
DECL|PCD_EP_BUF0|enumerator|PCD_EP_BUF0,
DECL|PCD_EP_BUF1|enumerator|PCD_EP_BUF1
DECL|PCD_EP_BUF_NUM|typedef|}PCD_EP_BUF_NUM;
DECL|PCD_EP_DBUF_DIR|typedef|}PCD_EP_DBUF_DIR;
DECL|PCD_EP_DBUF_ERR|enumerator|PCD_EP_DBUF_ERR,
DECL|PCD_EP_DBUF_IN|enumerator|PCD_EP_DBUF_IN,
DECL|PCD_EP_DBUF_OUT|enumerator|PCD_EP_DBUF_OUT,
DECL|PCD_EP_NOBUF|enumerator|PCD_EP_NOBUF,
DECL|PCD_EP_RX_ADDRESS|macro|PCD_EP_RX_ADDRESS
DECL|PCD_EP_RX_CNT|macro|PCD_EP_RX_CNT
DECL|PCD_EP_TX_ADDRESS|macro|PCD_EP_TX_ADDRESS
DECL|PCD_EP_TX_CNT|macro|PCD_EP_TX_CNT
DECL|PCD_EP_TYPE_BULK|macro|PCD_EP_TYPE_BULK
DECL|PCD_EP_TYPE_CTRL|macro|PCD_EP_TYPE_CTRL
DECL|PCD_EP_TYPE_INTR|macro|PCD_EP_TYPE_INTR
DECL|PCD_EP_TYPE_ISOC|macro|PCD_EP_TYPE_ISOC
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
DECL|PCD_InitTypeDef|typedef|}PCD_InitTypeDef;
DECL|PCD_LPM_StateTypeDef|typedef|}PCD_LPM_StateTypeDef;
DECL|PCD_PHY_EMBEDDED|macro|PCD_PHY_EMBEDDED
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
DECL|PCD_SPEED_HIGH|macro|PCD_SPEED_HIGH
DECL|PCD_StateTypeDef|typedef|} PCD_StateTypeDef;
DECL|PCD_TX_DTOG|macro|PCD_TX_DTOG
DECL|PCD_TypeDef|typedef|typedef USB_TypeDef PCD_TypeDef;
DECL|Setup|member|uint32_t Setup[12]; /*!< Setup packet buffer */
DECL|Sof_enable|member|uint32_t Sof_enable; /*!< Enable or disable the output of the SOF signal.
DECL|State|member|__IO PCD_StateTypeDef State; /*!< PCD communication state */
DECL|USB_Address|member|__IO uint8_t USB_Address; /*!< USB Address */
DECL|USB_WAKEUP_EXTI_LINE|macro|USB_WAKEUP_EXTI_LINE
DECL|__HAL_PCD_CLEAR_FLAG|macro|__HAL_PCD_CLEAR_FLAG
DECL|__HAL_PCD_GET_FLAG|macro|__HAL_PCD_GET_FLAG
DECL|__HAL_USB_EXTI_GENERATE_SWIT|macro|__HAL_USB_EXTI_GENERATE_SWIT
DECL|__HAL_USB_WAKEUP_EXTI_DISABLE_IT|macro|__HAL_USB_WAKEUP_EXTI_DISABLE_IT
DECL|__HAL_USB_WAKEUP_EXTI_ENABLE_IT|macro|__HAL_USB_WAKEUP_EXTI_ENABLE_IT
DECL|__STM32L0xx_HAL_PCD_H|macro|__STM32L0xx_HAL_PCD_H
DECL|battery_charging_active|member|uint32_t battery_charging_active; /*!< Enable or disable Battery charging.
DECL|battery_charging_enable|member|uint32_t battery_charging_enable; /*!< Enable or disable Battery charging.
DECL|dev_endpoints|member|uint32_t dev_endpoints; /*!< Device Endpoints number.
DECL|doublebuffer|member|uint8_t doublebuffer; /*!< Double buffer enable
DECL|ep0_mps|member|uint32_t ep0_mps; /*!< Set the Endpoint 0 Max Packet size.
DECL|is_in|member|uint8_t is_in; /*!< Endpoint direction
DECL|is_stall|member|uint8_t is_stall; /*!< Endpoint stall condition
DECL|low_power_enable|member|uint32_t low_power_enable; /*!< Enable or disable Low Power mode
DECL|lpm_active|member|uint32_t lpm_active; /*!< Enable or disable the Link Power Management .
DECL|lpm_enable|member|uint32_t lpm_enable; /*!< Enable or disable Link Power Management.
DECL|maxpacket|member|uint32_t maxpacket; /*!< Endpoint Max packet size
DECL|num|member|uint8_t num; /*!< Endpoint number
DECL|pData|member|void *pData; /*!< Pointer to upper stack Handler */
DECL|phy_itface|member|uint32_t phy_itface; /*!< Select the used PHY interface.
DECL|pmaaddr0|member|uint16_t pmaaddr0; /*!< PMA Address0
DECL|pmaaddr1|member|uint16_t pmaaddr1; /*!< PMA Address1
DECL|pmaadress|member|uint16_t pmaadress; /*!< PMA Address
DECL|speed|member|uint32_t speed; /*!< USB Core speed.
DECL|type|member|uint8_t type; /*!< Endpoint type
DECL|xfer_buff|member|uint8_t *xfer_buff; /*!< Pointer to transfer buffer */
DECL|xfer_count|member|uint32_t xfer_count; /*!< Partial transfer length in case of multi packet transfer */
DECL|xfer_len|member|uint32_t xfer_len; /*!< Current transfer length */
