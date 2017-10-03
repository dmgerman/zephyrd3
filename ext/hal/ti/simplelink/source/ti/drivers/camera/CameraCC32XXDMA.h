DECL|CameraCC32XXDMA_DMA_TRANSFER_SIZE|macro|CameraCC32XXDMA_DMA_TRANSFER_SIZE
DECL|CameraCC32XXDMA_HWAttrs|struct|typedef struct CameraCC32XXDMA_HWAttrs {
DECL|CameraCC32XXDMA_HWAttrs|typedef|} CameraCC32XXDMA_HWAttrs;
DECL|CameraCC32XXDMA_Handle|typedef|} CameraCC32XXDMA_Object, *CameraCC32XXDMA_Handle;
DECL|CameraCC32XXDMA_Object|struct|typedef struct CameraCC32XXDMA_Object {
DECL|CameraCC32XXDMA_Object|typedef|} CameraCC32XXDMA_Object, *CameraCC32XXDMA_Handle;
DECL|baseAddr|member|uint32_t baseAddr;
DECL|bufferlength|member|size_t bufferlength; /* Input Buffer length*/
DECL|cameraDMA_PingPongMode|member|bool cameraDMA_PingPongMode; /* DMA ping pong mode */
DECL|cameraDMAxIntrRcvd|member|size_t cameraDMAxIntrRcvd; /* Number of DMA interrupts*/
DECL|captureBuf|member|void *captureBuf; /* Buffer data pointer */
DECL|captureCallback|member|Camera_Callback captureCallback; /* Pointer to capture callback */
DECL|captureSem|member|SemaphoreP_Handle captureSem;
DECL|captureTimeout|member|uint32_t captureTimeout; /* Timeout for capture semaphore */
DECL|channelIndex|member|unsigned long channelIndex;
DECL|frameLength|member|size_t frameLength; /* Captured frame length */
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|inUse|member|bool inUse; /* Camera in Use */
DECL|intNum|member|uint32_t intNum;
DECL|intPriority|member|uint32_t intPriority;
DECL|opened|member|bool opened; /* Has the obj been opened */
DECL|operationMode|member|Camera_CaptureMode operationMode; /* Mode of operation of Camera */
DECL|ti_drivers_Camera_CameraCC32XXDMA__include|macro|ti_drivers_Camera_CameraCC32XXDMA__include
