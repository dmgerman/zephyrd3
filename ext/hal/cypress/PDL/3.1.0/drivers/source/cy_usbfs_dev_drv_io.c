DECL|AddEndpointHwBuffer|function|cy_en_usbfs_dev_drv_status_t AddEndpointHwBuffer(USBFS_Type *base, cy_stc_usb_dev_ep_config_t const *config, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_ConfigureDeviceComplete|function|void Cy_USBFS_Dev_Drv_ConfigureDeviceComplete(USBFS_Type *base, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_ConfigureDevice|function|void Cy_USBFS_Dev_Drv_ConfigureDevice(USBFS_Type *base, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_EnableOutEndpoint|function|void Cy_USBFS_Dev_Drv_EnableOutEndpoint(USBFS_Type *base, uint32_t endpoint, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_RemoveEndpoint|function|cy_en_usbfs_dev_drv_status_t Cy_USBFS_Dev_Drv_RemoveEndpoint(USBFS_Type *base, uint32_t endpointAddr, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_StallEndpoint|function|cy_en_usbfs_dev_drv_status_t Cy_USBFS_Dev_Drv_StallEndpoint(USBFS_Type *base, uint32_t endpoint, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_UnConfigureDevice|function|void Cy_USBFS_Dev_Drv_UnConfigureDevice(USBFS_Type *base, cy_stc_usbfs_dev_drv_context_t *context)
DECL|Cy_USBFS_Dev_Drv_UnStallEndpoint|function|cy_en_usbfs_dev_drv_status_t Cy_USBFS_Dev_Drv_UnStallEndpoint(USBFS_Type *base, uint32_t endpoint, cy_stc_usbfs_dev_drv_context_t *context)
DECL|DMA_YLOOP_INCREMENT|macro|DMA_YLOOP_INCREMENT
DECL|DisableEndpoint|function|static void DisableEndpoint(USBFS_Type *base, uint32_t endpoint, cy_stc_usbfs_dev_drv_context_t *context)
DECL|ENDPOINTS_BUFFER_SIZE|macro|ENDPOINTS_BUFFER_SIZE
DECL|GetEndpointBuffer|function|cy_en_usbfs_dev_drv_status_t GetEndpointBuffer(uint32_t size, uint32_t *idx, cy_stc_usbfs_dev_drv_context_t *context)
DECL|LoadInEndpointCpu|function|cy_en_usbfs_dev_drv_status_t LoadInEndpointCpu(USBFS_Type *base, uint32_t endpoint, const uint8_t buffer[], uint32_t size, cy_stc_usbfs_dev_drv_context_t *context)
DECL|ReadOutEndpointCpu|function|cy_en_usbfs_dev_drv_status_t ReadOutEndpointCpu(USBFS_Type *base, uint32_t endpoint, uint8_t buffer[], uint32_t size, uint32_t *actSize,
