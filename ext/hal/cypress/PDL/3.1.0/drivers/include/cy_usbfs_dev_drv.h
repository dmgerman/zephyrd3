DECL|CY_USBFS_DEV_DRV_ARBITER_INTR|macro|CY_USBFS_DEV_DRV_ARBITER_INTR
DECL|CY_USBFS_DEV_DRV_BAD_PARAM|enumerator|CY_USBFS_DEV_DRV_BAD_PARAM = (CY_USBFS_ID | CY_PDL_STATUS_ERROR | CY_USBFS_DEV_DRV_STATUS_CODE | 1U),
DECL|CY_USBFS_DEV_DRV_BUF_ALLOC_FAILED|enumerator|CY_USBFS_DEV_DRV_BUF_ALLOC_FAILED = (CY_USBFS_ID | CY_PDL_STATUS_ERROR | CY_USBFS_DEV_DRV_STATUS_CODE | 2U),
DECL|CY_USBFS_DEV_DRV_BUS_RESET_INTR|macro|CY_USBFS_DEV_DRV_BUS_RESET_INTR
DECL|CY_USBFS_DEV_DRV_DMA_CFG_FAILED|enumerator|CY_USBFS_DEV_DRV_DMA_CFG_FAILED = (CY_USBFS_ID | CY_PDL_STATUS_ERROR | CY_USBFS_DEV_DRV_STATUS_CODE | 3U),
DECL|CY_USBFS_DEV_DRV_EP0_INTR|macro|CY_USBFS_DEV_DRV_EP0_INTR
DECL|CY_USBFS_DEV_DRV_EP1_INTR|macro|CY_USBFS_DEV_DRV_EP1_INTR
DECL|CY_USBFS_DEV_DRV_EP1|enumerator|CY_USBFS_DEV_DRV_EP1 = 0U, /**< Callback hooked to Data Endpoint 1 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP2MASK|macro|CY_USBFS_DEV_DRV_EP2MASK
DECL|CY_USBFS_DEV_DRV_EP2PHY|macro|CY_USBFS_DEV_DRV_EP2PHY
DECL|CY_USBFS_DEV_DRV_EP2_INTR|macro|CY_USBFS_DEV_DRV_EP2_INTR
DECL|CY_USBFS_DEV_DRV_EP2|enumerator|CY_USBFS_DEV_DRV_EP2 = 1U, /**< Callback hooked to Data Endpoint 2 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP3_INTR|macro|CY_USBFS_DEV_DRV_EP3_INTR
DECL|CY_USBFS_DEV_DRV_EP3|enumerator|CY_USBFS_DEV_DRV_EP3 = 2U, /**< Callback hooked to Data Endpoint 3 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP4_INTR|macro|CY_USBFS_DEV_DRV_EP4_INTR
DECL|CY_USBFS_DEV_DRV_EP4|enumerator|CY_USBFS_DEV_DRV_EP4 = 3U, /**< Callback hooked to Data Endpoint 4 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP5_INTR|macro|CY_USBFS_DEV_DRV_EP5_INTR
DECL|CY_USBFS_DEV_DRV_EP5|enumerator|CY_USBFS_DEV_DRV_EP5 = 4U, /**< Callback hooked to Data Endpoint 5 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP6_INTR|macro|CY_USBFS_DEV_DRV_EP6_INTR
DECL|CY_USBFS_DEV_DRV_EP6|enumerator|CY_USBFS_DEV_DRV_EP6 = 5U, /**< Callback hooked to Data Endpoint 6 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP7_INTR|macro|CY_USBFS_DEV_DRV_EP7_INTR
DECL|CY_USBFS_DEV_DRV_EP7|enumerator|CY_USBFS_DEV_DRV_EP7 = 6U, /**< Callback hooked to Data Endpoint 7 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EP8_INTR|macro|CY_USBFS_DEV_DRV_EP8_INTR
DECL|CY_USBFS_DEV_DRV_EP8|enumerator|CY_USBFS_DEV_DRV_EP8 = 7U, /**< Callback hooked to Data Endpoint 8 completion interrupt */
DECL|CY_USBFS_DEV_DRV_EPADDR2EP|macro|CY_USBFS_DEV_DRV_EPADDR2EP
DECL|CY_USBFS_DEV_DRV_EPADDR2PHY|macro|CY_USBFS_DEV_DRV_EPADDR2PHY
DECL|CY_USBFS_DEV_DRV_EP_DMA_READ_TIMEOUT|enumerator|CY_USBFS_DEV_DRV_EP_DMA_READ_TIMEOUT = (CY_USBFS_ID | CY_PDL_STATUS_ERROR | CY_USBFS_DEV_DRV_STATUS_CODE | 5U),
DECL|CY_USBFS_DEV_DRV_EP_DYN_RECONFIG_TIMEOUT|enumerator|CY_USBFS_DEV_DRV_EP_DYN_RECONFIG_TIMEOUT = (CY_USBFS_ID | CY_PDL_STATUS_ERROR | CY_USBFS_DEV_DRV_STATUS_CODE | 4U),
DECL|CY_USBFS_DEV_DRV_EP_MANAGEMENT_CPU|enumerator|CY_USBFS_DEV_DRV_EP_MANAGEMENT_CPU = 0, /**< CPU */
DECL|CY_USBFS_DEV_DRV_EP_MANAGEMENT_DMA_AUTO|enumerator|CY_USBFS_DEV_DRV_EP_MANAGEMENT_DMA_AUTO = 2, /**< DMA auto trigger */
DECL|CY_USBFS_DEV_DRV_EP_MANAGEMENT_DMA|enumerator|CY_USBFS_DEV_DRV_EP_MANAGEMENT_DMA = 1, /**< DMA manual trigger */
DECL|CY_USBFS_DEV_DRV_FORCE_STATE_J|enumerator|CY_USBFS_DEV_DRV_FORCE_STATE_J = 0xA0U, /**< Force a J State onto the USB lines */
DECL|CY_USBFS_DEV_DRV_FORCE_STATE_K|enumerator|CY_USBFS_DEV_DRV_FORCE_STATE_K = 0x80U, /**< Force a K State onto the USB lines */
DECL|CY_USBFS_DEV_DRV_FORCE_STATE_NONE|enumerator|CY_USBFS_DEV_DRV_FORCE_STATE_NONE = 0x00U /**< Return bus to SIE control */
DECL|CY_USBFS_DEV_DRV_FORCE_STATE_SE0|enumerator|CY_USBFS_DEV_DRV_FORCE_STATE_SE0 = 0xC0U, /**< Force a Single Ended 0 onto the USB lines */
DECL|CY_USBFS_DEV_DRV_H|macro|CY_USBFS_DEV_DRV_H
DECL|CY_USBFS_DEV_DRV_IS_EP_DIR_IN|macro|CY_USBFS_DEV_DRV_IS_EP_DIR_IN
DECL|CY_USBFS_DEV_DRV_IS_EP_DIR_OUT|macro|CY_USBFS_DEV_DRV_IS_EP_DIR_OUT
DECL|CY_USBFS_DEV_DRV_IS_EP_VALID|macro|CY_USBFS_DEV_DRV_IS_EP_VALID
DECL|CY_USBFS_DEV_DRV_IS_MODE_VALID|macro|CY_USBFS_DEV_DRV_IS_MODE_VALID
DECL|CY_USBFS_DEV_DRV_LPM_INTR|macro|CY_USBFS_DEV_DRV_LPM_INTR
DECL|CY_USBFS_DEV_DRV_LPM_REQ_ACK|enumerator|CY_USBFS_DEV_DRV_LPM_REQ_ACK, /**< The next LPM request will be responded with ACK */
DECL|CY_USBFS_DEV_DRV_LPM_REQ_NACK|enumerator|CY_USBFS_DEV_DRV_LPM_REQ_NACK, /**< The next LPM request will be responded with NACK */
DECL|CY_USBFS_DEV_DRV_LPM_REQ_NYET|enumerator|CY_USBFS_DEV_DRV_LPM_REQ_NYET /**< The next LPM request will be responded with NYET */
DECL|CY_USBFS_DEV_DRV_LPM|enumerator|CY_USBFS_DEV_DRV_LPM = 9U, /**< Callback hooked to LPM request received interrupt */
DECL|CY_USBFS_DEV_DRV_SOF_INTR|macro|CY_USBFS_DEV_DRV_SOF_INTR
DECL|CY_USBFS_DEV_DRV_SOF|enumerator|CY_USBFS_DEV_DRV_SOF = 8U, /**< Callback hooked to SOF packet received interrupt */
DECL|CY_USBFS_DEV_DRV_STATUS_CODE|macro|CY_USBFS_DEV_DRV_STATUS_CODE
DECL|CY_USBFS_DEV_DRV_SUCCESS|enumerator|CY_USBFS_DEV_DRV_SUCCESS = 0U,
DECL|CY_USBFS_DEV_DRV_USE_16_BITS_DR|enumerator|CY_USBFS_DEV_DRV_USE_16_BITS_DR, /**< Use 16-bits registers to access data endpoints */
DECL|CY_USBFS_DEV_DRV_USE_8_BITS_DR|enumerator|CY_USBFS_DEV_DRV_USE_8_BITS_DR, /**< Use 8-bits registers to access data endpoints */
DECL|CY_USBFS_DEV_ENDPOINT_SAME_DATA_TOGGLE|macro|CY_USBFS_DEV_ENDPOINT_SAME_DATA_TOGGLE
DECL|CY_USBFS_DEV_ENDPOINT_TRANSFER_ERROR|macro|CY_USBFS_DEV_ENDPOINT_TRANSFER_ERROR
DECL|CY_USBFS_ID|macro|CY_USBFS_ID
DECL|CY_USBFS_MODE_POS|macro|CY_USBFS_MODE_POS
DECL|CY_USBFS_VERSION_MAJOR|macro|CY_USBFS_VERSION_MAJOR
DECL|CY_USBFS_VERSION_MINOR|macro|CY_USBFS_VERSION_MINOR
DECL|CY_USB_DEV_BUS_RESET|enumerator|CY_USB_DEV_BUS_RESET = 0U, /**< Callback hooked to bus reset interrupt */
DECL|CY_USB_DEV_EP0_IN|enumerator|CY_USB_DEV_EP0_IN = 2U, /**< Callback hooked to endpoint 0 IN packet interrupt */
DECL|CY_USB_DEV_EP0_OUT|enumerator|CY_USB_DEV_EP0_OUT = 3U, /**< Callback hooked to endpoint 0 OUT packet interrupt */
DECL|CY_USB_DEV_EP0_SETUP|enumerator|CY_USB_DEV_EP0_SETUP = 1U, /**< Callback hooked to endpoint 0 SETUP packet interrupt */
DECL|CY_USB_DEV_EP_COMPLETED|enumerator|CY_USB_DEV_EP_COMPLETED, /**< Transfer targeted to an endpoint is completed */
DECL|CY_USB_DEV_EP_DISABLED|enumerator|CY_USB_DEV_EP_DISABLED, /**< Endpoint is disabled (not used in this configuration) */
DECL|CY_USB_DEV_EP_IDLE|enumerator|CY_USB_DEV_EP_IDLE, /**< Endpoint is in idle state after configuration is set */
DECL|CY_USB_DEV_EP_IVALID|enumerator|CY_USB_DEV_EP_IVALID, /**< Endpoint does not supported by the hardware */
DECL|CY_USB_DEV_EP_PENDING|enumerator|CY_USB_DEV_EP_PENDING, /**< Transfer targeted to an endpoint is in progress */
DECL|CY_USB_DEV_EP_STALLED|enumerator|CY_USB_DEV_EP_STALLED, /**< Endpoint is stalled */
DECL|Cy_USBFS_Dev_Drv_AddEndpoint|function|__STATIC_INLINE cy_en_usbfs_dev_drv_status_t Cy_USBFS_Dev_Drv_AddEndpoint(USBFS_Type *base, cy_stc_usb_dev_ep_config_t const *config, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_CheckActivity|function|__STATIC_INLINE bool Cy_USBFS_Dev_Drv_CheckActivity(USBFS_Type *base)
DECL|Cy_USBFS_Dev_Drv_Ep0Stall|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_Ep0Stall(USBFS_Type *base, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_Force|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_Force(USBFS_Type *base, cy_en_usbfs_dev_drv_force_bus_state_t state)
DECL|Cy_USBFS_Dev_Drv_GetDevContext|function|__STATIC_INLINE void* Cy_USBFS_Dev_Drv_GetDevContext(cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_GetDeviceAddress|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetDeviceAddress(USBFS_Type *base)
DECL|Cy_USBFS_Dev_Drv_GetEndpointAckState|function|__STATIC_INLINE bool Cy_USBFS_Dev_Drv_GetEndpointAckState(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetEndpointCount|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetEndpointCount(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetEndpointStallState|function|__STATIC_INLINE cy_en_usb_dev_ep_state_t Cy_USBFS_Dev_Drv_GetEndpointStallState( USBFS_Type *base, uint32_t endpoint, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_GetEndpointState|function|__STATIC_INLINE cy_en_usb_dev_ep_state_t Cy_USBFS_Dev_Drv_GetEndpointState( USBFS_Type *base, uint32_t endpoint, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_GetInterruptCauseHi|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetInterruptCauseHi(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetInterruptCauseLo|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetInterruptCauseLo(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetInterruptCauseMed|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetInterruptCauseMed(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetInterruptsLevel|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetInterruptsLevel(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_LoadInEndpoint|function|__STATIC_INLINE cy_en_usbfs_dev_drv_status_t Cy_USBFS_Dev_Drv_LoadInEndpoint( USBFS_Type *base, uint32_t endpoint, const uint8_t buffer[], uint32_t size,
DECL|Cy_USBFS_Dev_Drv_Lpm_GetBeslValue|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_Lpm_GetBeslValue(USBFS_Type *base)
DECL|Cy_USBFS_Dev_Drv_Lpm_GetResponse|function|__STATIC_INLINE cy_en_usbfs_dev_drv_lpm_req_t Cy_USBFS_Dev_Drv_Lpm_GetResponse(USBFS_Type *base)
DECL|Cy_USBFS_Dev_Drv_Lpm_RemoteWakeUpAllowed|function|__STATIC_INLINE bool Cy_USBFS_Dev_Drv_Lpm_RemoteWakeUpAllowed(USBFS_Type *base)
DECL|Cy_USBFS_Dev_Drv_Lpm_SetResponse|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_Lpm_SetResponse(USBFS_Type *base, cy_en_usbfs_dev_drv_lpm_req_t response)
DECL|Cy_USBFS_Dev_Drv_OverwriteMemcpy|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_OverwriteMemcpy(USBFS_Type *base, uint32_t endpoint, cy_fn_usbfs_dev_drv_memcpy_ptr_t func, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_ReadOutEndpoint|function|__STATIC_INLINE cy_en_usbfs_dev_drv_status_t Cy_USBFS_Dev_Drv_ReadOutEndpoint( USBFS_Type *base, uint32_t endpoint, uint8_t buffer[], uint32_t size,
DECL|Cy_USBFS_Dev_Drv_RegisterEndpointCallback|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_RegisterEndpointCallback(USBFS_Type *base, uint32_t endpoint, cy_cb_usbfs_dev_drv_ep_callback_t callback, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_RegisterLpmCallback|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_RegisterLpmCallback(USBFS_Type *base, cy_cb_usbfs_dev_drv_callback_t callback, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_RegisterSofCallback|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_RegisterSofCallback(USBFS_Type *base, cy_cb_usbfs_dev_drv_callback_t callback, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_SetDevContext|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetDevContext(void *devContext, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_SetDeviceAddress|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetDeviceAddress(USBFS_Type *base, uint8_t address)
DECL|Cy_USBFS_Dev_Drv_SetInterruptsLevel|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetInterruptsLevel(USBFS_Type *base, uint32_t intrLevel)
DECL|USBFS_USBLPM_INTR_CAUSE_ARB_EP_INTR_Msk|macro|USBFS_USBLPM_INTR_CAUSE_ARB_EP_INTR_Msk
DECL|USBFS_USBLPM_INTR_CAUSE_BUS_RESET_INTR_Msk|macro|USBFS_USBLPM_INTR_CAUSE_BUS_RESET_INTR_Msk
DECL|USBFS_USBLPM_INTR_CAUSE_EP0_INTR_Msk|macro|USBFS_USBLPM_INTR_CAUSE_EP0_INTR_Msk
DECL|USBFS_USBLPM_INTR_CAUSE_EP1_INTR_Pos|macro|USBFS_USBLPM_INTR_CAUSE_EP1_INTR_Pos
DECL|USBFS_USBLPM_INTR_CAUSE_LPM_INTR_Msk|macro|USBFS_USBLPM_INTR_CAUSE_LPM_INTR_Msk
DECL|USBFS_USBLPM_INTR_CAUSE_SOF_INTR_Msk|macro|USBFS_USBLPM_INTR_CAUSE_SOF_INTR_Msk
DECL|addEndpoint|member|cy_fn_usbfs_dev_drv_add_ep_ptr_t addEndpoint;
DECL|address|member|uint8_t address; /**< Endpoint address (include direction bit) */
DECL|allocBuffer|member|bool allocBuffer; /**< Defines if buffer allocation is need for endpoint */
DECL|attributes|member|uint8_t attributes; /**< Endpoint attributes */
DECL|base|member|DW_Type *base; /**< Pointer to the DMA base */
DECL|base|member|DW_Type *base; /**< Pointer to the base */
DECL|bufSize|member|uint16_t bufSize; /**< Endpoint buffer size */
DECL|bufferSize|member|uint16_t bufferSize; /**< Endpoint buffer size (the biggest max packet size
DECL|buffer|member|uint8_t *buffer; /**< Pointer to the buffer */
DECL|busReset|member|cy_cb_usbfs_dev_drv_callback_t busReset;
DECL|cbEpComplete|member|cy_cb_usbfs_dev_drv_ep_callback_t cbEpComplete;
DECL|cbLpm|member|cy_cb_usbfs_dev_drv_callback_t cbLpm;
DECL|cbSof|member|cy_cb_usbfs_dev_drv_callback_t cbSof;
DECL|chNum|member|uint32_t chNum; /**< Channel number */
DECL|chNum|member|uint32_t chNum; /**< DMA Channel number */
DECL|curBufAddr|member|uint16_t curBufAddr;
DECL|cy_cb_usbfs_dev_drv_callback_t|typedef|typedef void (* cy_cb_usbfs_dev_drv_callback_t)(USBFS_Type *base,
DECL|cy_cb_usbfs_dev_drv_ep_callback_t|typedef|typedef void (* cy_cb_usbfs_dev_drv_ep_callback_t)(USBFS_Type *base,
DECL|cy_cb_usbfs_dev_drv_service_t|typedef|typedef void (* cy_cb_usbfs_dev_drv_service_t)(USBFS_Type *base,
DECL|cy_en_usb_dev_ep_state_t|typedef|} cy_en_usb_dev_ep_state_t;
DECL|cy_en_usb_dev_service_cb_t|typedef|} cy_en_usb_dev_service_cb_t;
DECL|cy_en_usbfs_dev_drv_cb_source_t|typedef|} cy_en_usbfs_dev_drv_cb_source_t;
DECL|cy_en_usbfs_dev_drv_ep_management_mode_t|typedef|} cy_en_usbfs_dev_drv_ep_management_mode_t;
DECL|cy_en_usbfs_dev_drv_force_bus_state_t|typedef|} cy_en_usbfs_dev_drv_force_bus_state_t;
DECL|cy_en_usbfs_dev_drv_lpm_req_t|typedef|} cy_en_usbfs_dev_drv_lpm_req_t;
DECL|cy_en_usbfs_dev_drv_status_t|typedef|} cy_en_usbfs_dev_drv_status_t;
DECL|cy_en_usbfs_dev_ep_access_t|typedef|} cy_en_usbfs_dev_ep_access_t;
DECL|cy_fn_usbfs_dev_drv_add_ep_ptr_t|typedef|typedef cy_en_usbfs_dev_drv_status_t (* cy_fn_usbfs_dev_drv_add_ep_ptr_t)
DECL|cy_fn_usbfs_dev_drv_load_ep_ptr_t|typedef|typedef cy_en_usbfs_dev_drv_status_t (* cy_fn_usbfs_dev_drv_load_ep_ptr_t)
DECL|cy_fn_usbfs_dev_drv_memcpy_ptr_t|typedef|typedef uint8_t * (* cy_fn_usbfs_dev_drv_memcpy_ptr_t)(uint8_t *dest,
DECL|cy_fn_usbfs_dev_drv_read_ep_ptr_t|typedef|typedef cy_en_usbfs_dev_drv_status_t (* cy_fn_usbfs_dev_drv_read_ep_ptr_t)
DECL|cy_stc_usb_dev_ep_config_t|typedef|} cy_stc_usb_dev_ep_config_t;
DECL|cy_stc_usbfs_dev_drv_config_t|typedef|} cy_stc_usbfs_dev_drv_config_t;
DECL|cy_stc_usbfs_dev_drv_config|struct|typedef struct cy_stc_usbfs_dev_drv_config
DECL|cy_stc_usbfs_dev_drv_context_t|typedef|} cy_stc_usbfs_dev_drv_context_t;
DECL|cy_stc_usbfs_dev_drv_context|struct|typedef struct cy_stc_usbfs_dev_drv_context
DECL|cy_stc_usbfs_dev_drv_dma_config_t|typedef|} cy_stc_usbfs_dev_drv_dma_config_t;
DECL|cy_stc_usbfs_dev_drv_endpoint_data_t|typedef|} cy_stc_usbfs_dev_drv_endpoint_data_t;
DECL|descr0|member|cy_stc_dma_descriptor_t *descr0; /**< Pointer to descriptor 0 */
DECL|descr0|member|cy_stc_dma_descriptor_t* descr0; /**< Pointer to the descriptor 0 */
DECL|descr1|member|cy_stc_dma_descriptor_t *descr1; /**< Pointer to descriptor 1 */
DECL|descr1|member|cy_stc_dma_descriptor_t* descr1; /**< Pointer to the descriptor 1 */
DECL|devConext|member|void *devConext;
DECL|dmaConfig|member|const cy_stc_usbfs_dev_drv_dma_config_t *dmaConfig[CY_USBFS_DEV_DRV_NUM_EPS_MAX];
DECL|enableEndpoint|member|bool enableEndpoint; /**< Defines if endpoint becomes active after configuration */
DECL|enableLmp|member|uint32_t enableLmp;
DECL|endpointAddr|member|uint8_t endpointAddr; /**< Endpoint address (number plus direction bit) */
DECL|ep0CntReg|member|uint32_t ep0CntReg; /**< Endpoint 0 Counter register */
DECL|ep0In|member|cy_cb_usbfs_dev_drv_callback_t ep0In;
DECL|ep0ModeReg|member|uint32_t ep0ModeReg; /**< Endpoint 0 Mode register */
DECL|ep0Out|member|cy_cb_usbfs_dev_drv_callback_t ep0Out;
DECL|ep0Setup|member|cy_cb_usbfs_dev_drv_callback_t ep0Setup;
DECL|epAccess|member|cy_en_usbfs_dev_ep_access_t epAccess;
DECL|epBufferSize|member|uint16_t epBufferSize;
DECL|epBuffer|member|uint8_t *epBuffer;
DECL|epPool|member|cy_stc_usbfs_dev_drv_endpoint_data_t epPool[CY_USBFS_DEV_DRV_NUM_EPS_MAX];
DECL|epSharedBufSize|member|uint16_t epSharedBufSize; /**< SRAM buffer size */
DECL|epSharedBuf|member|uint8_t *epSharedBuf;
DECL|intrLevelSel|member|uint32_t intrLevelSel;
DECL|isPending|member|bool isPending; /**< Save pending state before stall endpoint */
DECL|loadInEndpoint|member|cy_fn_usbfs_dev_drv_load_ep_ptr_t loadInEndpoint;
DECL|maxPacketSize|member|uint16_t maxPacketSize; /**< Endpoint max packet size */
DECL|mode|member|cy_en_usbfs_dev_drv_ep_management_mode_t mode;
DECL|mode|member|cy_en_usbfs_dev_drv_ep_management_mode_t mode;
DECL|outBufferSize|member|uint16_t outBufferSize; /**< OUT endpoint buffer size (the biggest max packet size
DECL|outTrigMux|member|uint32_t outTrigMux; /**< DMA out trigger mux */
DECL|outTrigMux|member|uint32_t outTrigMux; /**< Out trigger mux for DMA channel number */
DECL|preemptable|member|bool preemptable; /**< Specifies if the channel is preempt-able by another higher-priority channel */
DECL|priority|member|uint32_t priority; /**< Channel's priority */
DECL|readOutEndpoint|member|cy_fn_usbfs_dev_drv_read_ep_ptr_t readOutEndpoint;
DECL|sieMode|member|uint8_t sieMode; /**< SIE mode to arm endpoint on the bus */
DECL|state|member|volatile cy_en_usb_dev_ep_state_t state; /**< Endpoint state */
DECL|toggle|member|uint8_t toggle; /**< Toggle bit in SIE_EPX_CNT1 register */
DECL|useReg16|member|bool useReg16;
DECL|userMemcpy|member|cy_fn_usbfs_dev_drv_memcpy_ptr_t userMemcpy; /**< Pointer to user memcpy function */
