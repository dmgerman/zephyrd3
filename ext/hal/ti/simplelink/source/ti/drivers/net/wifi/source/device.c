DECL|Cmd|member|SlDeviceMaskEventGetCommand_t Cmd;
DECL|Cmd|member|SlDeviceMaskEventSetCommand_t Cmd;
DECL|Cmd|member|SlDeviceSetGet_t Cmd;
DECL|Cmd|member|SlDeviceSetGet_t Cmd;
DECL|Cmd|member|SlDeviceStopCommand_t Cmd;
DECL|Cmd|member|SlDeviceUartSetModeCommand_t Cmd;
DECL|DeviceCB|variable|DeviceCB
DECL|RESET_REQUEST_STOP_TIMEOUT|macro|RESET_REQUEST_STOP_TIMEOUT
DECL|ResetRequestSessionNumber|member|_u32 ResetRequestSessionNumber; /* Special session number to be verified upon every reset request during provisioning */
DECL|Rsp|member|SlDeviceMaskEventGetResponse_t Rsp;
DECL|Rsp|member|SlDeviceSetGet_t Rsp;
DECL|Rsp|member|SlDeviceUartSetModeResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|SL_IF_OPEN_FLAGS|macro|SL_IF_OPEN_FLAGS
DECL|SL_IF_UART_REOPEN_FLAGS|macro|SL_IF_UART_REOPEN_FLAGS
DECL|StartResponseLUT|variable|StartResponseLUT
DECL|_SlDeviceCb_t|typedef|} _SlDeviceCb_t;
DECL|_SlDeviceEventHandler|function|_SlReturnVal_t _SlDeviceEventHandler(void* pEventInfo)
DECL|_SlDeviceGetCmdCtrl|variable|_SlDeviceGetCmdCtrl
DECL|_SlDeviceGetStartResponseConvert|function|static _i16 _SlDeviceGetStartResponseConvert(_i32 Status)
DECL|_SlDeviceHandleAsync_InitComplete|function|_SlReturnVal_t _SlDeviceHandleAsync_InitComplete(void *pVoidBuf)
DECL|_SlDeviceHandleAsync_Stop|function|void _SlDeviceHandleAsync_Stop(void *pVoidBuf)
DECL|_SlDeviceHandleResetRequestInternally|function|void _SlDeviceHandleResetRequestInternally(void)
DECL|_SlDeviceMsgGet_u|typedef|}_SlDeviceMsgGet_u;
DECL|_SlDeviceMsgSet_u|typedef|}_SlDeviceMsgSet_u;
DECL|_SlDeviceResetRequestInitCompletedCB|function|void _SlDeviceResetRequestInitCompletedCB(_u32 Status, SlDeviceInitInfo_t *DeviceInitInfo)
DECL|_SlDeviceSetCmdCtrl|variable|_SlDeviceSetCmdCtrl
DECL|_SlEventMaskGetCmdCtrl|variable|_SlEventMaskGetCmdCtrl
DECL|_SlEventMaskGetMsg_u|typedef|}_SlEventMaskGetMsg_u;
DECL|_SlEventMaskSetCmdCtrl|variable|_SlEventMaskSetCmdCtrl
DECL|_SlEventMaskSetMsg_u|typedef|}_SlEventMaskSetMsg_u;
DECL|_SlStopCmdCtrl|variable|_SlStopCmdCtrl
DECL|_SlStopMsg_u|typedef|}_SlStopMsg_u;
DECL|_SlUartSetModeCmdCtrl|variable|_SlUartSetModeCmdCtrl
DECL|_SlUartSetModeMsg_u|typedef|}_SlUartSetModeMsg_u;
DECL|pDevName|member|_i8 *pDevName; /* Holds the last opened interface parameters */
DECL|pIfHdl|member|const void *pIfHdl; /* Holds the last opened interface handle */
DECL|sl_DeviceEventMaskGet|function|_i16 sl_DeviceEventMaskGet(const _u8 EventClass,_u32 *pMask)
DECL|sl_DeviceEventMaskSet|function|_i16 sl_DeviceEventMaskSet(const _u8 EventClass ,const _u32 Mask)
DECL|sl_DeviceGet|function|_i16 sl_DeviceGet(const _u8 DeviceGetId, _u8 *pOption,_u16 *pConfigLen, _u8 *pValues)
DECL|sl_DeviceSet|function|_i16 sl_DeviceSet(const _u8 DeviceSetId ,const _u8 Option,const _u16 ConfigLen,const _u8 *pValues)
DECL|sl_DeviceUartSetMode|function|_i16 sl_DeviceUartSetMode(const SlDeviceUartIfParams_t *pUartParams)
DECL|sl_Start|function|_i16 sl_Start(const void* pIfHdl, _i8* pDevName, const P_INIT_CALLBACK pInitCallBack)
DECL|sl_Stop|function|_i16 sl_Stop(const _u16 Timeout)
DECL|sl_Task|function|void* sl_Task(void* pEntry)
