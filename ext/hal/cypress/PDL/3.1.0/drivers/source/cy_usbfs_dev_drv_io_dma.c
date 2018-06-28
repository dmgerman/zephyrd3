DECL|AddEndpointRamBuffer|function|cy_en_usbfs_dev_drv_status_t AddEndpointRamBuffer(USBFS_Type *base, cy_stc_usb_dev_ep_config_t const *config, cy_stc_usbfs_dev_drv_context_t *context)
DECL|ChangeEndpointDirection|function|static cy_en_usbfs_dev_drv_status_t ChangeEndpointDirection(USBFS_Type *base, bool inDirection, uint32_t endpoint)
DECL|DMA_INVALID_CHANNEL|macro|DMA_INVALID_CHANNEL
DECL|DMA_NO_INCREMENT|macro|DMA_NO_INCREMENT
DECL|DMA_READ_REQUEST_ONE_TICK|macro|DMA_READ_REQUEST_ONE_TICK
DECL|DMA_READ_REQUEST_TIMEOUT|macro|DMA_READ_REQUEST_TIMEOUT
DECL|DMA_XLOOP_INCREMENT|macro|DMA_XLOOP_INCREMENT
DECL|DMA_YLOOP_INCREMENT|macro|DMA_YLOOP_INCREMENT
DECL|DYN_RECONFIG_ONE_TICK|macro|DYN_RECONFIG_ONE_TICK
DECL|DYN_RECONFIG_TIMEOUT|macro|DYN_RECONFIG_TIMEOUT
DECL|DmaDescr1DCfg|variable|DmaDescr1DCfg
DECL|DmaDescr2DCfg|variable|DmaDescr2DCfg
DECL|DmaDisable|function|void DmaDisable(cy_stc_usbfs_dev_drv_context_t *context)
DECL|DmaEndpointInit|function|cy_en_usbfs_dev_drv_status_t DmaEndpointInit(USBFS_Type *base, uint32_t endpointAddr, cy_stc_usbfs_dev_drv_context_t *context)
DECL|DmaInEndpointInit|function|static void DmaInEndpointInit(cy_stc_dma_descriptor_t* descr, cy_en_dma_data_size_t dataSize, void *dataReg)
DECL|DmaInit|function|cy_en_usbfs_dev_drv_status_t DmaInit(cy_stc_usbfs_dev_drv_config_t const *config, cy_stc_usbfs_dev_drv_context_t *context)
DECL|DmaOutEndpointInitComplete|function|static void DmaOutEndpointInitComplete(cy_stc_usbfs_dev_drv_endpoint_data_t *endpoint)
DECL|DmaOutEndpointInit|function|static void DmaOutEndpointInit(cy_stc_dma_descriptor_t* descr, cy_en_dma_data_size_t dataSize, void *dataReg)
DECL|DmaOutEndpointRestore|function|void DmaOutEndpointRestore(cy_stc_usbfs_dev_drv_endpoint_data_t *endpoint)
DECL|IN_ENDPOINT_ARB_INTR_SOURCES|macro|IN_ENDPOINT_ARB_INTR_SOURCES
DECL|LoadInEndpointDmaAuto|function|cy_en_usbfs_dev_drv_status_t LoadInEndpointDmaAuto(USBFS_Type *base, uint32_t endpoint, const uint8_t buffer[], uint32_t size, cy_stc_usbfs_dev_drv_context_t *context)
DECL|LoadInEndpointDma|function|cy_en_usbfs_dev_drv_status_t LoadInEndpointDma(USBFS_Type *base, uint32_t endpoint, const uint8_t buffer[], uint32_t size, cy_stc_usbfs_dev_drv_context_t *context)
DECL|OUT_ENDPOINT_ARB_INTR_SOURCES|macro|OUT_ENDPOINT_ARB_INTR_SOURCES
DECL|ReadOutEndpointDmaAuto|function|cy_en_usbfs_dev_drv_status_t ReadOutEndpointDmaAuto(USBFS_Type *base, uint32_t endpoint, uint8_t buffer[], uint32_t size, uint32_t *actSize,
DECL|ReadOutEndpointDma|function|cy_en_usbfs_dev_drv_status_t ReadOutEndpointDma(USBFS_Type *base, uint32_t endpoint, uint8_t buffer[], uint32_t size, uint32_t *actSize,
