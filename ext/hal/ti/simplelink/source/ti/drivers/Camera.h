DECL|CAMERA_CMD_RESERVED|macro|CAMERA_CMD_RESERVED
DECL|CAMERA_STATUS_ERROR|macro|CAMERA_STATUS_ERROR
DECL|CAMERA_STATUS_RESERVED|macro|CAMERA_STATUS_RESERVED
DECL|CAMERA_STATUS_SUCCESS|macro|CAMERA_STATUS_SUCCESS
DECL|CAMERA_STATUS_UNDEFINEDCMD|macro|CAMERA_STATUS_UNDEFINEDCMD
DECL|Camera_BYTE_ORDER_NORMAL|enumerator|Camera_BYTE_ORDER_NORMAL = 0,
DECL|Camera_BYTE_ORDER_SWAP|enumerator|Camera_BYTE_ORDER_SWAP
DECL|Camera_ByteOrder_|enum|typedef enum Camera_ByteOrder_ {
DECL|Camera_ByteOrder|typedef|} Camera_ByteOrder;
DECL|Camera_Callback|typedef|typedef void (*Camera_Callback) (Camera_Handle handle, void *buf,
DECL|Camera_CaptureFxn|typedef|typedef int_fast16_t (*Camera_CaptureFxn) (Camera_Handle handle, void *buffer,
DECL|Camera_CaptureMode_|enum|typedef enum Camera_CaptureMode_ {
DECL|Camera_CaptureMode|typedef|} Camera_CaptureMode;
DECL|Camera_CloseFxn|typedef|typedef void (*Camera_CloseFxn) (Camera_Handle handle);
DECL|Camera_Config_|struct|typedef struct Camera_Config_ {
DECL|Camera_Config|typedef|} Camera_Config;
DECL|Camera_ControlFxn|typedef|typedef int_fast16_t (*Camera_ControlFxn) (Camera_Handle handle,
DECL|Camera_FxnTable_|struct|typedef struct Camera_FxnTable_ {
DECL|Camera_FxnTable|typedef|} Camera_FxnTable;
DECL|Camera_HSYNC_POLARITY_HIGH|enumerator|Camera_HSYNC_POLARITY_HIGH = 0,
DECL|Camera_HSYNC_POLARITY_LOW|enumerator|Camera_HSYNC_POLARITY_LOW
DECL|Camera_HSyncPolarity_|enum|typedef enum Camera_HSyncPolarity_ {
DECL|Camera_HSyncPolarity|typedef|} Camera_HSyncPolarity;
DECL|Camera_Handle|typedef|typedef struct Camera_Config_ *Camera_Handle;
DECL|Camera_INTERFACE_SYNC_OFF|enumerator|Camera_INTERFACE_SYNC_OFF = 0,
DECL|Camera_INTERFACE_SYNC_ON|enumerator|Camera_INTERFACE_SYNC_ON
DECL|Camera_IfSynchoronisation_|enum|typedef enum Camera_IfSynchoronisation_ {
DECL|Camera_IfSynchoronisation|typedef|} Camera_IfSynchoronisation;
DECL|Camera_InitFxn|typedef|typedef void (*Camera_InitFxn) (Camera_Handle handle);
DECL|Camera_MODE_BLOCKING|enumerator|Camera_MODE_BLOCKING,
DECL|Camera_MODE_CALLBACK|enumerator|Camera_MODE_CALLBACK
DECL|Camera_OpenFxn|typedef|typedef Camera_Handle (*Camera_OpenFxn) (Camera_Handle handle,
DECL|Camera_PCLK_CONFIG_FALLING_EDGE|enumerator|Camera_PCLK_CONFIG_FALLING_EDGE
DECL|Camera_PCLK_CONFIG_RISING_EDGE|enumerator|Camera_PCLK_CONFIG_RISING_EDGE = 0,
DECL|Camera_Params_|struct|typedef struct Camera_Params_ {
DECL|Camera_Params|typedef|} Camera_Params;
DECL|Camera_PixelClkConfig_|enum|typedef enum Camera_PixelClkConfig_ {
DECL|Camera_PixelClkConfig|typedef|} Camera_PixelClkConfig;
DECL|Camera_START_CAPTURE_FRAME_START|enumerator|Camera_START_CAPTURE_FRAME_START
DECL|Camera_START_CAPTURE_IMMEDIATE|enumerator|Camera_START_CAPTURE_IMMEDIATE = 0,
DECL|Camera_STOP_CAPTURE_FRAME_END|enumerator|Camera_STOP_CAPTURE_FRAME_END
DECL|Camera_STOP_CAPTURE_IMMEDIATE|enumerator|Camera_STOP_CAPTURE_IMMEDIATE = 0,
DECL|Camera_StartCaptureConfig_|enum|typedef enum Camera_StartCaptureConfig_ {
DECL|Camera_StartCaptureConfig|typedef|} Camera_StartCaptureConfig;
DECL|Camera_StopCaptureConfig_|enum|typedef enum Camera_StopCaptureConfig_ {
DECL|Camera_StopCaptureConfig|typedef|} Camera_StopCaptureConfig;
DECL|Camera_VSYNC_POLARITY_HIGH|enumerator|Camera_VSYNC_POLARITY_HIGH = 0,
DECL|Camera_VSYNC_POLARITY_LOW|enumerator|Camera_VSYNC_POLARITY_LOW
DECL|Camera_VSyncPolarity_|enum|typedef enum Camera_VSyncPolarity_ {
DECL|Camera_VSyncPolarity|typedef|} Camera_VSyncPolarity;
DECL|Camera_WAIT_FOREVER|macro|Camera_WAIT_FOREVER
DECL|byteOrder|member|Camera_ByteOrder byteOrder;
DECL|captureCallback|member|Camera_Callback captureCallback;
DECL|captureFxn|member|Camera_CaptureFxn captureFxn;
DECL|captureMode|member|Camera_CaptureMode captureMode;
DECL|captureTimeout|member|uint32_t captureTimeout;
DECL|closeFxn|member|Camera_CloseFxn closeFxn;
DECL|controlFxn|member|Camera_ControlFxn controlFxn;
DECL|custom|member|void *custom;
DECL|fxnTablePtr|member|Camera_FxnTable const *fxnTablePtr;
DECL|hsyncPolarity|member|Camera_HSyncPolarity hsyncPolarity;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|initFxn|member|Camera_InitFxn initFxn;
DECL|interfaceSync|member|Camera_IfSynchoronisation interfaceSync;
DECL|object|member|void *object;
DECL|openFxn|member|Camera_OpenFxn openFxn;
DECL|outputClock|member|uint32_t outputClock;
DECL|pixelClkConfig|member|Camera_PixelClkConfig pixelClkConfig;
DECL|startConfig|member|Camera_StartCaptureConfig startConfig;
DECL|stopConfig|member|Camera_StopCaptureConfig stopConfig;
DECL|ti_drivers_Camera__include|macro|ti_drivers_Camera__include
DECL|vsyncPolarity|member|Camera_VSyncPolarity vsyncPolarity;
