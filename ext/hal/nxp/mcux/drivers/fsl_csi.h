DECL|CSI_CSICR18_INT_EN_MASK|macro|CSI_CSICR18_INT_EN_MASK
DECL|CSI_CSICR1_INT_EN_MASK|macro|CSI_CSICR1_INT_EN_MASK
DECL|CSI_CSICR3_INT_EN_MASK|macro|CSI_CSICR3_INT_EN_MASK
DECL|CSI_ClearStatusFlags|function|static inline void CSI_ClearStatusFlags(CSI_Type *base, uint32_t statusMask)
DECL|CSI_DRIVER_ACTUAL_QUEUE_SIZE|macro|CSI_DRIVER_ACTUAL_QUEUE_SIZE
DECL|CSI_DRIVER_QUEUE_SIZE|macro|CSI_DRIVER_QUEUE_SIZE
DECL|CSI_GetStatusFlags|function|static inline uint32_t CSI_GetStatusFlags(CSI_Type *base)
DECL|CSI_Start|function|static inline void CSI_Start(CSI_Type *base)
DECL|CSI_Stop|function|static inline void CSI_Stop(CSI_Type *base)
DECL|FSL_CSI_DRIVER_VERSION|macro|FSL_CSI_DRIVER_VERSION
DECL|_FSL_CSI_H_|macro|_FSL_CSI_H_
DECL|_csi_config|struct|typedef struct _csi_config
DECL|_csi_data_bus|enum|typedef enum _csi_data_bus
DECL|_csi_fifo|enum|typedef enum _csi_fifo
DECL|_csi_flags|enum|enum _csi_flags
DECL|_csi_handle|struct|struct _csi_handle
DECL|_csi_interrupt_enable|enum|enum _csi_interrupt_enable
DECL|_csi_polarity_flags|enum|enum _csi_polarity_flags
DECL|_csi_status|enum|enum _csi_status
DECL|_csi_work_mode|enum|typedef enum _csi_work_mode
DECL|activeBufferNum|member|volatile uint8_t activeBufferNum; /*!< How many frame buffers are in progres currently. */
DECL|bytesPerPixel|member|uint8_t bytesPerPixel; /*!< Bytes per pixel, valid values are:
DECL|callback|member|csi_transfer_callback_t callback; /*!< Callback function. */
DECL|csi_config_t|typedef|} csi_config_t;
DECL|csi_data_bus_t|typedef|} csi_data_bus_t;
DECL|csi_fifo_t|typedef|} csi_fifo_t;
DECL|csi_handle_t|typedef|typedef struct _csi_handle csi_handle_t;
DECL|csi_transfer_callback_t|typedef|typedef void (*csi_transfer_callback_t)(CSI_Type *base, csi_handle_t *handle, status_t status, void *userData);
DECL|csi_work_mode_t|typedef|} csi_work_mode_t;
DECL|dataBus|member|csi_data_bus_t dataBus; /*!< Data bus width. */
DECL|frameBufferQueue|member|uint32_t frameBufferQueue[CSI_DRIVER_ACTUAL_QUEUE_SIZE]; /*!< Frame buffer queue. */
DECL|height|member|uint16_t height; /*!< Lines of the input frame. */
DECL|kCSI_AhbResErrorFlag|enumerator|kCSI_AhbResErrorFlag = CSI_CSISR_HRESP_ERR_INT_MASK, /*!< Hresponse (AHB bus response) Error. */
DECL|kCSI_AhbResErrorInterruptEnable|enumerator|kCSI_AhbResErrorInterruptEnable = CSI_CSICR3_HRESP_ERR_EN_MASK, /*!< AHB response Error interrupt enable. */
DECL|kCSI_AllFifo|enumerator|kCSI_AllFifo = 0x01 | 0x02, /*!< Both RXFIFO and STAT FIFO. */
DECL|kCSI_BaseAddrChangeErrorFlag|enumerator|kCSI_BaseAddrChangeErrorFlag = CSI_CSISR_BASEADDR_CHHANGE_ERROR_MASK, /*!< The DMA output buffer base address
DECL|kCSI_BaseAddrChangeErrorInterruptEnable|enumerator|kCSI_BaseAddrChangeErrorInterruptEnable = CSI_CSICR18_BASEADDR_CHANGE_ERROR_IE_MASK << 6U, /*!< The DMA output buffer base address
DECL|kCSI_CCIR656ProgressiveMode|enumerator|kCSI_CCIR656ProgressiveMode = CSI_CSICR1_CCIR_EN(1U), /*!< CCIR656 progressive mode. */
DECL|kCSI_ChangeOfFieldFlag|enumerator|kCSI_ChangeOfFieldFlag = CSI_CSISR_COF_INT_MASK, /*!< Change of field. */
DECL|kCSI_ChangeOfFieldInterruptEnable|enumerator|kCSI_ChangeOfFieldInterruptEnable = CSI_CSICR1_COF_INT_EN_MASK, /*!< Change of field interrupt enable. */
DECL|kCSI_DataBus8Bit|enumerator|kCSI_DataBus8Bit, /*!< 8-bit data bus. */
DECL|kCSI_DataLatchOnFallingEdge|enumerator|kCSI_DataLatchOnFallingEdge = 0U, /*!< Pixel data latched at falling edge of pixel clock. */
DECL|kCSI_DataLatchOnRisingEdge|enumerator|kCSI_DataLatchOnRisingEdge = CSI_CSICR1_REDGE_MASK, /*!< Pixel data latched at rising edge of pixel clock. */
DECL|kCSI_EccErrorFlag|enumerator|kCSI_EccErrorFlag = CSI_CSISR_ECC_INT_MASK, /*!< ECC error detected. */
DECL|kCSI_EccErrorInterruptEnable|enumerator|kCSI_EccErrorInterruptEnable = CSI_CSICR3_ECC_INT_EN_MASK, /*!< ECC error detection interrupt enable. */
DECL|kCSI_EndOfFrameFlag|enumerator|kCSI_EndOfFrameFlag = CSI_CSISR_EOF_INT_MASK, /*!< End of frame (EOF) detected. */
DECL|kCSI_EndOfFrameInterruptEnable|enumerator|kCSI_EndOfFrameInterruptEnable = CSI_CSICR1_EOF_INT_EN_MASK, /*!< End of frame interrupt enable. */
DECL|kCSI_Field0DoneFlag|enumerator|kCSI_Field0DoneFlag = CSI_CSISR_DMA_FIELD0_DONE_MASK, /*!< Field 0 transfer done. */
DECL|kCSI_Field0DoneInterruptEnable|enumerator|kCSI_Field0DoneInterruptEnable = CSI_CSICR18_FIELD0_DONE_IE_MASK << 6U, /*!< Field 0 done interrupt enable. */
DECL|kCSI_Field0PresentFlag|enumerator|kCSI_Field0PresentFlag = CSI_CSISR_F1_INT_MASK, /*!< Field 0 present in CCIR mode. */
DECL|kCSI_Field1DoneFlag|enumerator|kCSI_Field1DoneFlag = CSI_CSISR_DMA_FIELD1_DONE_MASK, /*!< Field 1 transfer done. */
DECL|kCSI_Field1DoneInterruptEnable|enumerator|kCSI_Field1DoneInterruptEnable = CSI_CSICR18_DMA_FIELD1_DONE_IE_MASK << 6U, /*!< Field 1 done interrupt enable. */
DECL|kCSI_Field1PresentFlag|enumerator|kCSI_Field1PresentFlag = CSI_CSISR_F2_INT_MASK, /*!< Field 1 present in CCIR mode. */
DECL|kCSI_GatedClockMode|enumerator|kCSI_GatedClockMode = CSI_CSICR1_GCLK_MODE(1U), /*!< HSYNC, VSYNC, and PIXCLK signals are used. */
DECL|kCSI_HsyncActiveHigh|enumerator|kCSI_HsyncActiveHigh = CSI_CSICR1_HSYNC_POL_MASK, /*!< HSYNC is active high. */
DECL|kCSI_HsyncActiveLow|enumerator|kCSI_HsyncActiveLow = 0U, /*!< HSYNC is active low. */
DECL|kCSI_NonGatedClockMode|enumerator|kCSI_NonGatedClockMode = 0U, /*!< VSYNC, and PIXCLK signals are used. */
DECL|kCSI_RxBuffer0DmaDoneFlag|enumerator|kCSI_RxBuffer0DmaDoneFlag = CSI_CSISR_DMA_TSF_DONE_FB1_MASK, /*!< RX frame buffer 0 DMA transfer done. */
DECL|kCSI_RxBuffer0DmaDoneInterruptEnable|enumerator|kCSI_RxBuffer0DmaDoneInterruptEnable =
DECL|kCSI_RxBuffer1DmaDoneFlag|enumerator|kCSI_RxBuffer1DmaDoneFlag = CSI_CSISR_DMA_TSF_DONE_FB2_MASK, /*!< RX frame buffer 1 DMA transfer done. */
DECL|kCSI_RxBuffer1DmaDoneInterruptEnable|enumerator|kCSI_RxBuffer1DmaDoneInterruptEnable =
DECL|kCSI_RxFifoDataReadyFlag|enumerator|kCSI_RxFifoDataReadyFlag = CSI_CSISR_DRDY_MASK, /*!< RXFIFO data ready. */
DECL|kCSI_RxFifoFullFlag|enumerator|kCSI_RxFifoFullFlag = CSI_CSISR_RxFF_INT_MASK, /*!< RXFIFO full (Number of data reaches trigger level). */
DECL|kCSI_RxFifoFullInterruptEnable|enumerator|kCSI_RxFifoFullInterruptEnable = CSI_CSICR1_RXFF_INTEN_MASK, /*!< RXFIFO full interrupt enable. */
DECL|kCSI_RxFifoOverrunFlag|enumerator|kCSI_RxFifoOverrunFlag = CSI_CSISR_RF_OR_INT_MASK, /*!< RXFIFO overrun. */
DECL|kCSI_RxFifoOverrunInterruptEnable|enumerator|kCSI_RxFifoOverrunInterruptEnable = CSI_CSICR1_RF_OR_INTEN_MASK, /*!< RXFIFO overrun interrupt enable. */
DECL|kCSI_RxFifo|enumerator|kCSI_RxFifo = (1U << 0U), /*!< RXFIFO. */
DECL|kCSI_StartOfFrameFlag|enumerator|kCSI_StartOfFrameFlag = CSI_CSISR_SOF_INT_MASK, /*!< Start of frame (SOF) detected. */
DECL|kCSI_StartOfFrameInterruptEnable|enumerator|kCSI_StartOfFrameInterruptEnable = CSI_CSICR1_SOF_INTEN_MASK, /*!< Start of frame (SOF) interrupt enable. */
DECL|kCSI_StatFifoDmaDoneFlag|enumerator|kCSI_StatFifoDmaDoneFlag = CSI_CSISR_DMA_TSF_DONE_SFF_MASK, /*!< STAT FIFO DMA transfer done. */
DECL|kCSI_StatFifoDmaDoneInterruptEnable|enumerator|kCSI_StatFifoDmaDoneInterruptEnable =
DECL|kCSI_StatFifoFullFlag|enumerator|kCSI_StatFifoFullFlag = CSI_CSISR_STATFF_INT_MASK, /*!< STAT FIFO full (Reach trigger level). */
DECL|kCSI_StatFifoFullInterruptEnable|enumerator|kCSI_StatFifoFullInterruptEnable = CSI_CSICR1_STATFF_INTEN_MASK, /*!< STAT FIFO full interrupt enable. */
DECL|kCSI_StatFifoOverrunFlag|enumerator|kCSI_StatFifoOverrunFlag = CSI_CSISR_SF_OR_INT_MASK, /*!< STAT FIFO overrun. */
DECL|kCSI_StatFifoOverrunInterruptEnable|enumerator|kCSI_StatFifoOverrunInterruptEnable = CSI_CSICR1_SF_OR_INTEN_MASK, /*!< STAT FIFO overrun interrupt enable. */
DECL|kCSI_StatFifo|enumerator|kCSI_StatFifo = (1U << 1U), /*!< STAT FIFO. */
DECL|kCSI_VsyncActiveHigh|enumerator|kCSI_VsyncActiveHigh = 0U, /*!< VSYNC is active high. */
DECL|kCSI_VsyncActiveLow|enumerator|kCSI_VsyncActiveLow = CSI_CSICR1_SOF_POL_MASK, /*!< VSYNC is active low. */
DECL|kStatus_CSI_FrameDone|enumerator|kStatus_CSI_FrameDone = MAKE_STATUS(kStatusGroup_CSI, 3), /*!< New frame received and saved to queue. */
DECL|kStatus_CSI_NoEmptyBuffer|enumerator|kStatus_CSI_NoEmptyBuffer = MAKE_STATUS(kStatusGroup_CSI, 0), /*!< No empty frame buffer in queue to load to CSI. */
DECL|kStatus_CSI_NoFullBuffer|enumerator|kStatus_CSI_NoFullBuffer = MAKE_STATUS(kStatusGroup_CSI, 1), /*!< No full frame buffer in queue to read out. */
DECL|kStatus_CSI_QueueFull|enumerator|kStatus_CSI_QueueFull = MAKE_STATUS(kStatusGroup_CSI, 2), /*!< Queue is full, no room to save new empty buffer. */
DECL|linePitch_Bytes|member|uint16_t linePitch_Bytes; /*!< Frame buffer line pitch, must be 8-byte aligned. */
DECL|nextBufferIdx|member|volatile uint8_t nextBufferIdx; /*!< The CSI frame buffer index to use for next frame. */
DECL|polarityFlags|member|uint32_t polarityFlags; /*!< Timing signal polarity flags, OR'ed value of @ref _csi_polarity_flags. */
DECL|queueDrvReadIdx|member|volatile uint8_t queueDrvReadIdx; /*!< Driver gets empty frame buffer from this index. */
DECL|queueDrvWriteIdx|member|volatile uint8_t queueDrvWriteIdx; /*!< Driver puts the full-filled frame buffer to this index. */
DECL|queueUserReadIdx|member|volatile uint8_t queueUserReadIdx; /*!< Application gets full-filled frame buffer from this index. */
DECL|queueUserWriteIdx|member|volatile uint8_t queueUserWriteIdx; /*!< Application puts empty frame buffer to this index. */
DECL|transferOnGoing|member|volatile bool transferOnGoing; /*!< CSI is working and receiving incoming frames. */
DECL|transferStarted|member|volatile bool transferStarted; /*!< User has called @ref CSI_TransferStart to start frame receiving. */
DECL|useExtVsync|member|bool useExtVsync; /*!< In CCIR656 progressive mode, set true to use external VSYNC signal, set false
DECL|userData|member|void *userData; /*!< CSI callback function parameter.*/
DECL|width|member|uint16_t width; /*!< Pixels of the input frame. */
DECL|workMode|member|csi_work_mode_t workMode; /*!< CSI work mode. */
