DECL|ACT_DATA_SIZE|macro|ACT_DATA_SIZE
DECL|API_IN_PROGRESS_UPDATE_DECREMENT|macro|API_IN_PROGRESS_UPDATE_DECREMENT
DECL|API_IN_PROGRESS_UPDATE_INCREMENT|macro|API_IN_PROGRESS_UPDATE_INCREMENT
DECL|API_IN_PROGRESS_UPDATE_NONE|macro|API_IN_PROGRESS_UPDATE_NONE
DECL|Align|member|_u32 Align;
DECL|AsyncRespBuf|member|_u8 AsyncRespBuf[SL_ASYNC_MAX_MSG_LEN];
DECL|BUF_SYNC_SPIM|macro|BUF_SYNC_SPIM
DECL|DriverCB|member|_SlDriverCb_t DriverCB;
DECL|GLOBAL_LOCK_FLAGS_NONE|macro|GLOBAL_LOCK_FLAGS_NONE
DECL|GLOBAL_LOCK_FLAGS_PROVISIONING_STOP_API|macro|GLOBAL_LOCK_FLAGS_PROVISIONING_STOP_API
DECL|GLOBAL_LOCK_FLAGS_STARTING_DEVICE|macro|GLOBAL_LOCK_FLAGS_STARTING_DEVICE
DECL|GLOBAL_LOCK_FLAGS_UPDATE_API_IN_PROGRESS|macro|GLOBAL_LOCK_FLAGS_UPDATE_API_IN_PROGRESS
DECL|GlobalLockObj|variable|GlobalLockObj
DECL|MATCH_WITH_SEQ_NUM|macro|MATCH_WITH_SEQ_NUM
DECL|MATCH_WOUT_SEQ_NUM|macro|MATCH_WOUT_SEQ_NUM
DECL|MULTI_SELECT_MASK|macro|MULTI_SELECT_MASK
DECL|MULTI_SELECT_MASK|macro|MULTI_SELECT_MASK
DECL|N2H_SYNC_PATTERN_MASK|macro|N2H_SYNC_PATTERN_MASK
DECL|N2H_SYNC_PATTERN_MATCH|macro|N2H_SYNC_PATTERN_MATCH
DECL|N2H_SYNC_PATTERN_SEQ_NUM_BITS|macro|N2H_SYNC_PATTERN_SEQ_NUM_BITS
DECL|N2H_SYNC_PATTERN_SEQ_NUM_EXISTS|macro|N2H_SYNC_PATTERN_SEQ_NUM_EXISTS
DECL|N2H_SYNC_SPIM_WITH_SEQ|macro|N2H_SYNC_SPIM_WITH_SEQ
DECL|N2H_SYNC_SPIM|macro|N2H_SYNC_SPIM
DECL|N2H_SYNC_SPI_BUGS_MASK|macro|N2H_SYNC_SPI_BUGS_MASK
DECL|OPCODE|macro|OPCODE
DECL|OpcodeKeyVal_t|typedef|} OpcodeKeyVal_t;
DECL|OpcodeTranslateTable|variable|OpcodeTranslateTable
DECL|RSP_PAYLOAD_LEN|macro|RSP_PAYLOAD_LEN
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|RxIrqCnt|variable|RxIrqCnt
DECL|RxMsgClassLUT|variable|RxMsgClassLUT
DECL|SD|macro|SD
DECL|_SlActionLookupTable|variable|_SlActionLookupTable
DECL|_SlActionLookupTable|variable|_SlActionLookupTable
DECL|_SlBasicCmdMsg_u|typedef|}_SlBasicCmdMsg_u;
DECL|_SlDrvAsyncEventGenericHandler|function|static void _SlDrvAsyncEventGenericHandler(_u8 bInCmdContext)
DECL|_SlDrvBasicCmd|function|_i16 _SlDrvBasicCmd(_SlOpcode_t Opcode)
DECL|_SlDrvClassifyRxMsg|function|static _SlReturnVal_t _SlDrvClassifyRxMsg( _SlOpcode_t Opcode)
DECL|_SlDrvCmdOp|function|_SlReturnVal_t _SlDrvCmdOp( _SlCmdCtrl_t *pCmdCtrl , void *pTxRxDescBuff , _SlCmdExt_t *pCmdExt)
DECL|_SlDrvCmdSend_noLock|function|_SlReturnVal_t _SlDrvCmdSend_noLock( _SlCmdCtrl_t *pCmdCtrl , void *pTxRxDescBuff , _SlCmdExt_t *pCmdExt)
DECL|_SlDrvCmdSend_noWait|function|_SlReturnVal_t _SlDrvCmdSend_noWait( _SlCmdCtrl_t *pCmdCtrl , void *pTxRxDescBuff , _SlCmdExt_t *pCmdExt)
DECL|_SlDrvCmdSend|function|_SlReturnVal_t _SlDrvCmdSend( _SlCmdCtrl_t *pCmdCtrl , void *pTxRxDescBuff , _SlCmdExt_t *pCmdExt)
DECL|_SlDrvDataReadOp|function|_SlReturnVal_t _SlDrvDataReadOp( _SlSd_t Sd, _SlCmdCtrl_t *pCmdCtrl , void *pTxRxDescBuff , _SlCmdExt_t *pCmdExt)
DECL|_SlDrvDataWriteOp|function|_SlReturnVal_t _SlDrvDataWriteOp( _SlSd_t Sd, _SlCmdCtrl_t *pCmdCtrl , void *pTxRxDescBuff , _SlCmdExt_t *pCmdExt)
DECL|_SlDrvDispatchHttpServerEvents|function|void _SlDrvDispatchHttpServerEvents(SlNetAppHttpServerEvent_t *slHttpServerEvent, SlNetAppHttpServerResponse_t *slHttpServerResponse)
DECL|_SlDrvDispatchNetAppRequestEvents|function|void _SlDrvDispatchNetAppRequestEvents(SlNetAppRequest_t *slNetAppRequestEvent, SlNetAppResponse_t *slNetAppResponse)
DECL|_SlDrvDriverCBDeinit|function|_SlReturnVal_t _SlDrvDriverCBDeinit(void)
DECL|_SlDrvDriverCBInit|function|_SlReturnVal_t _SlDrvDriverCBInit(void)
DECL|_SlDrvDriverIsApiAllowed|function|_SlReturnVal_t _SlDrvDriverIsApiAllowed(_u16 Silo)
DECL|_SlDrvFindAndSetActiveObj|function|static _SlReturnVal_t _SlDrvFindAndSetActiveObj(_SlOpcode_t Opcode, _u8 Sd)
DECL|_SlDrvGlobalObjUnLock|function|_SlReturnVal_t _SlDrvGlobalObjUnLock(_u8 bDecrementApiInProgress)
DECL|_SlDrvHandleFatalErrorEvents|function|void _SlDrvHandleFatalErrorEvents(SlDeviceFatal_t *slFatalErrorEvent)
DECL|_SlDrvHandleFatalErrorEvents|macro|_SlDrvHandleFatalErrorEvents
DECL|_SlDrvHandleFatalError|function|void _SlDrvHandleFatalError(_u32 errorId, _u32 info1, _u32 info2)
DECL|_SlDrvHandleGeneralEvents|function|void _SlDrvHandleGeneralEvents(SlDeviceEvent_t *slGeneralEvent)
DECL|_SlDrvHandleGeneralEvents|macro|_SlDrvHandleGeneralEvents
DECL|_SlDrvHandleHttpServerEvents|function|void _SlDrvHandleHttpServerEvents(SlNetAppHttpServerEvent_t *slHttpServerEvent, SlNetAppHttpServerResponse_t *slHttpServerResponse)
DECL|_SlDrvHandleHttpServerEvents|macro|_SlDrvHandleHttpServerEvents
DECL|_SlDrvHandleNetAppEvents|function|void _SlDrvHandleNetAppEvents(SlNetAppEvent_t *slNetAppEvent)
DECL|_SlDrvHandleNetAppEvents|macro|_SlDrvHandleNetAppEvents
DECL|_SlDrvHandleNetAppRequestEvents|function|void _SlDrvHandleNetAppRequestEvents(SlNetAppRequest_t *pNetAppRequest, SlNetAppResponse_t *pNetAppResponse)
DECL|_SlDrvHandleNetAppRequestEvents|macro|_SlDrvHandleNetAppRequestEvents
DECL|_SlDrvHandleSockEvents|function|void _SlDrvHandleSockEvents(SlSockEvent_t *slSockEvent)
DECL|_SlDrvHandleWlanEvents|function|void _SlDrvHandleWlanEvents(SlWlanEvent_t *slWlanEvent)
DECL|_SlDrvHandleWlanEvents|macro|_SlDrvHandleWlanEvents
DECL|_SlDrvIsApiInProgress|function|_i8 _SlDrvIsApiInProgress(void)
DECL|_SlDrvIsTimeoutExpired|function|_u8 _SlDrvIsTimeoutExpired(_SlTimeoutParams_t *pTimeoutInfo)
DECL|_SlDrvMemZero|function|void _SlDrvMemZero(void* Addr, _u16 size)
DECL|_SlDrvMsgReadCmdCtx|function|static _SlReturnVal_t _SlDrvMsgReadCmdCtx(_u16 cmdOpcode, _u8 IsLockRequired)
DECL|_SlDrvMsgReadSpawnCtx|function|_SlReturnVal_t _SlDrvMsgReadSpawnCtx(void *pValue)
DECL|_SlDrvMsgRead|function|_SlReturnVal_t _SlDrvMsgRead(void)
DECL|_SlDrvMsgWrite|function|static _SlReturnVal_t _SlDrvMsgWrite(_SlCmdCtrl_t *pCmdCtrl,_SlCmdExt_t *pCmdExt, _u8 *pTxRxDescBuff)
DECL|_SlDrvObjGlobalLockWaitForever|function|static _SlReturnVal_t _SlDrvObjGlobalLockWaitForever(_u32 Flags)
DECL|_SlDrvObjLockWaitForever|function|_SlReturnVal_t _SlDrvObjLockWaitForever(_SlLockObj_t *pLockObj)
DECL|_SlDrvObjUnLock|function|_SlReturnVal_t _SlDrvObjUnLock(_SlLockObj_t *pLockObj)
DECL|_SlDrvProtectAsyncRespSetting|function|_u8 _SlDrvProtectAsyncRespSetting(_u8 *pAsyncRsp, _SlActionID_e ActionID, _u8 SocketID)
DECL|_SlDrvProtectionObjLockWaitForever|function|_SlReturnVal_t _SlDrvProtectionObjLockWaitForever(void)
DECL|_SlDrvProtectionObjUnLock|function|_SlReturnVal_t _SlDrvProtectionObjUnLock(void)
DECL|_SlDrvReleasePoolObj|function|void _SlDrvReleasePoolObj(_u8 ObjIdx)
DECL|_SlDrvRemoveFromList|function|static void _SlDrvRemoveFromList(_u8 *ListIndex, _u8 ItemIndex)
DECL|_SlDrvResetCmdExt|function|void _SlDrvResetCmdExt(_SlCmdExt_t* pCmdExt)
DECL|_SlDrvRxHdrRead|function|static _SlReturnVal_t _SlDrvRxHdrRead(_u8 *pBuf)
DECL|_SlDrvRxIrqHandler|function|_SlReturnVal_t _SlDrvRxIrqHandler(void *pValue)
DECL|_SlDrvSetErrno|function|_i32 _SlDrvSetErrno(_i32 Errno)
DECL|_SlDrvSleep|function|void _SlDrvSleep(_u16 DurationInMsec)
DECL|_SlDrvStartMeasureTimeout|function|void _SlDrvStartMeasureTimeout(_SlTimeoutParams_t *pTimeoutInfo, _u32 TimeoutInMsec)
DECL|_SlDrvSyncObjSignal|function|_SlReturnVal_t _SlDrvSyncObjSignal(_SlSyncObj_t *pSyncObj)
DECL|_SlDrvSyncObjWaitForever|function|_SlReturnVal_t _SlDrvSyncObjWaitForever(_SlSyncObj_t *pSyncObj)
DECL|_SlDrvSyncObjWaitForever|function|_SlReturnVal_t _SlDrvSyncObjWaitForever(_SlSyncObj_t *pSyncObj)
DECL|_SlDrvSyncObjWaitTimeout|function|_SlReturnVal_t _SlDrvSyncObjWaitTimeout(_SlSyncObj_t *pSyncObj, _u32 timeoutVal, _u32 asyncEventOpcode)
DECL|_SlDrvUpdateApiInProgress|function|static void _SlDrvUpdateApiInProgress(_i8 Value)
DECL|_SlDrvWaitForPoolObj|function|_u8 _SlDrvWaitForPoolObj(_u8 ActionID, _u8 SocketID)
DECL|_SlDrvallocateErrno|function|_i32* _SlDrvallocateErrno(_i32 Errno)
DECL|_SlStatMem_t|typedef|}_SlStatMem_t;
DECL|__errno|function|int * __errno(void)
DECL|event|member|_u8 event;
DECL|fatal_error_callbacks|variable|fatal_error_callbacks
DECL|fatal_error_callback|typedef|typedef _SlEventPropogationStatus_e (*fatal_error_callback) (SlDeviceEvent_t *);
DECL|gGlobalLockCntReleased|variable|gGlobalLockCntReleased
DECL|gGlobalLockCntRequested|variable|gGlobalLockCntRequested
DECL|g_H2NCnysPattern|variable|g_H2NCnysPattern
DECL|g_H2NSyncPattern|variable|g_H2NSyncPattern
DECL|g_SlDeviceStatus|variable|g_SlDeviceStatus
DECL|g_StatMem|variable|g_StatMem
DECL|g_pCB|variable|g_pCB
DECL|general_callbacks|variable|general_callbacks
DECL|general_callback|typedef|typedef _SlEventPropogationStatus_e (*general_callback) (SlDeviceEvent_t *);
DECL|httpServer_callbacks|variable|httpServer_callbacks
DECL|httpServer_callback|typedef|typedef _SlEventPropogationStatus_e (*httpServer_callback) (SlNetAppHttpServerEvent_t*, SlNetAppHttpServerResponse_t*);
DECL|netApp_callbacks|variable|netApp_callbacks
DECL|netApp_callback|typedef|typedef _SlEventPropogationStatus_e (*netApp_callback) (SlNetAppEvent_t *);
DECL|netapp_request_callbacks|variable|netapp_request_callbacks
DECL|netapp_request_callback|typedef|typedef _SlEventPropogationStatus_e (*netapp_request_callback) (SlNetAppRequest_t*, SlNetAppResponse_t*);
DECL|opcode|member|_u16 opcode;
DECL|pPingCallBackFunc|variable|pPingCallBackFunc
DECL|sock_callbacks|variable|sock_callbacks
DECL|sock_callback|typedef|typedef _SlEventPropogationStatus_e (*sock_callback) (SlSockEvent_t *);
DECL|wlan_callbacks|variable|wlan_callbacks
DECL|wlan_callback|typedef|typedef _SlEventPropogationStatus_e (*wlan_callback) (SlWlanEvent_t *);
