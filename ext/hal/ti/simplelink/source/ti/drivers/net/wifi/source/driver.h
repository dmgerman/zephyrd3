DECL|ACCEPT_ID|enumerator|ACCEPT_ID = MAX_SOCKET_ENUM_IDX,
DECL|ASYNC_EVT_CLASS|enumerator|ASYNC_EVT_CLASS,
DECL|ActionAsyncOpcode|member|_u16 ActionAsyncOpcode;
DECL|ActionID|member|_u8 ActionID;
DECL|ActionID|member|_u8 ActionID;
DECL|ActionIndex|member|_u8 ActionIndex;
DECL|ActionIndex|member|_u8 ActionIndex;
DECL|ActiveActionsBitmap|member|_u32 ActiveActionsBitmap;
DECL|ActivePoolIdx|member|_u8 ActivePoolIdx;
DECL|ActiveSelect|member|_u8 ActiveSelect;
DECL|ActiveWaiters|member|_u8 ActiveWaiters;
DECL|ActualRxPayloadLen|member|_i16 ActualRxPayloadLen;
DECL|AdditionalData|member|_u8 AdditionalData; /* use for socketID and one bit which indicate supprt IPV6 or not (1=support, 0 otherwise) */
DECL|ApiInProgressCnt|member|_i8 ApiInProgressCnt; /* Counts how many APIs are in progress */
DECL|AsyncEventHandler|member|_SlSpawnEntryFunc_t AsyncEventHandler;
DECL|AsyncEvtHandler|member|_SlSpawnEntryFunc_t AsyncEvtHandler; /* place to write pointer to AsyncEvent handler (calc-ed by Opcode) */
DECL|AsyncExt_t|typedef|} AsyncExt_t;
DECL|AsyncExt|member|AsyncExt_t AsyncExt;
DECL|CLOSE_ID|enumerator|CLOSE_ID,
DECL|CMD_RESP_CLASS|enumerator|CMD_RESP_CLASS,
DECL|CONNECT_ID|enumerator|CONNECT_ID,
DECL|CPU_FREQ_IN_MHZ|macro|CPU_FREQ_IN_MHZ
DECL|CmdSyncObj|member|_SlSyncObj_t CmdSyncObj;
DECL|CtrlSockFD|member|_u16 CtrlSockFD;
DECL|DUMMY_MSG_CLASS|enumerator|DUMMY_MSG_CLASS
DECL|DeltaTicksReminder|member|_u32 DeltaTicksReminder;
DECL|DeltaTicks|member|_u32 DeltaTicks;
DECL|DeviceEventInfo_t|typedef|} DeviceEventInfo_t;
DECL|ErrnoIndex|member|_u8 ErrnoIndex;
DECL|ErrnoLockObj|member|_SlLockObj_t ErrnoLockObj;
DECL|Errno|member|_SlDrvErrno_t Errno[MAX_CONCURRENT_ACTIONS];
DECL|Errno|member|_i32 Errno;
DECL|FD|member|_SlFd_t FD;
DECL|Flags|member|_u8 Flags;
DECL|FlowContCB|member|_SlFlowContCB_t FlowContCB;
DECL|FreePoolIdx|member|_u8 FreePoolIdx;
DECL|FunctionParams|member|_SlFunctionParams_t FunctionParams;
DECL|GETHOSYBYNAME_ID|enumerator|GETHOSYBYNAME_ID,
DECL|GETHOSYBYSERVICE_ID|enumerator|GETHOSYBYSERVICE_ID,
DECL|INIT_COMPLETE_TIMEOUT|macro|INIT_COMPLETE_TIMEOUT
DECL|Id|member|_i32 Id;
DECL|Index|member|_u8 Index;
DECL|Info|member|_SlSockTriggerData_t Info;
DECL|MAX_SOCKET_ENUM_IDX|enumerator|MAX_SOCKET_ENUM_IDX,
DECL|MULTI_SELECT_RESP_CLASS|enumerator|MULTI_SELECT_RESP_CLASS,
DECL|MinTxPayloadSize|member|_u16 MinTxPayloadSize;
DECL|MultiSelectCB|member|_SlMultiSelectCB_t MultiSelectCB;
DECL|NETAPP_RECEIVE_ID|enumerator|NETAPP_RECEIVE_ID,
DECL|NETUTIL_CMD_ID|enumerator|NETUTIL_CMD_ID,
DECL|NextIndex|member|_u8 NextIndex;
DECL|ObjIdx|member|_u8 ObjIdx;
DECL|ObjPoolIdx|member|_u8 ObjPoolIdx;
DECL|ObjPool|member|_SlPoolObj_t ObjPool[MAX_CONCURRENT_ACTIONS];
DECL|Opcode|member|_SlOpcode_t Opcode;
DECL|PING_ID|enumerator|PING_ID,
DECL|PendingPoolIdx|member|_u8 PendingPoolIdx;
DECL|ProtectionLockObj|member|_SlLockObj_t ProtectionLockObj;
DECL|RECV_ID|enumerator|RECV_ID /* Please note!! this member must be the last in this action enum */
DECL|RECV_RESP_CLASS|enumerator|RECV_RESP_CLASS,
DECL|Response|member|SlSelectAsyncResponse_t Response;
DECL|Resp|member|SlSelectAsyncResponse_t Resp;
DECL|RxDescLen|member|_SlArgSize_t RxDescLen;
DECL|RxDoneCnt|member|_u8 RxDoneCnt;
DECL|RxMsgClass|member|_SlRxMsgClass_e RxMsgClass; /* type of Rx message */
DECL|RxPayloadLen|member|_i16 RxPayloadLen;
DECL|SELECT_ID|enumerator|SELECT_ID,
DECL|SL_DRIVER_TIMEOUT_LONG|macro|SL_DRIVER_TIMEOUT_LONG
DECL|SL_DRIVER_TIMEOUT_SHORT|macro|SL_DRIVER_TIMEOUT_SHORT
DECL|SL_DRVER_ERRNO_FLAGS_UNREAD|macro|SL_DRVER_ERRNO_FLAGS_UNREAD
DECL|SL_DRV_LOCK_GLOBAL_LOCK_FOREVER|macro|SL_DRV_LOCK_GLOBAL_LOCK_FOREVER
DECL|SL_DRV_LOCK_GLOBAL_LOCK_FOREVER|macro|SL_DRV_LOCK_GLOBAL_LOCK_FOREVER
DECL|SL_DRV_LOCK_GLOBAL_UNLOCK|macro|SL_DRV_LOCK_GLOBAL_UNLOCK
DECL|SL_DRV_LOCK_GLOBAL_UNLOCK|macro|SL_DRV_LOCK_GLOBAL_UNLOCK
DECL|SL_DRV_OBJ_LOCK_FOREVER|macro|SL_DRV_OBJ_LOCK_FOREVER
DECL|SL_DRV_OBJ_UNLOCK|macro|SL_DRV_OBJ_UNLOCK
DECL|SL_DRV_PROTECTION_OBJ_LOCK_FOREVER|macro|SL_DRV_PROTECTION_OBJ_LOCK_FOREVER
DECL|SL_DRV_PROTECTION_OBJ_UNLOCK|macro|SL_DRV_PROTECTION_OBJ_UNLOCK
DECL|SL_DRV_SYNC_OBJ_CLEAR|macro|SL_DRV_SYNC_OBJ_CLEAR
DECL|SL_DRV_SYNC_OBJ_SIGNAL|macro|SL_DRV_SYNC_OBJ_SIGNAL
DECL|SL_DRV_SYNC_OBJ_WAIT_FOREVER|macro|SL_DRV_SYNC_OBJ_WAIT_FOREVER
DECL|SL_DRV_SYNC_OBJ_WAIT_FOREVER|macro|SL_DRV_SYNC_OBJ_WAIT_FOREVER
DECL|SL_DRV_SYNC_OBJ_WAIT_TIMEOUT|macro|SL_DRV_SYNC_OBJ_WAIT_TIMEOUT
DECL|SL_IS_COMMAND_ALLOWED|macro|SL_IS_COMMAND_ALLOWED
DECL|SL_IS_DEVICE_LOCKED|macro|SL_IS_DEVICE_LOCKED
DECL|SL_IS_DEVICE_STARTED|macro|SL_IS_DEVICE_STARTED
DECL|SL_IS_DEVICE_START_IN_PROGRESS|macro|SL_IS_DEVICE_START_IN_PROGRESS
DECL|SL_IS_DEVICE_STOP_IN_PROGRESS|macro|SL_IS_DEVICE_STOP_IN_PROGRESS
DECL|SL_IS_PROVISIONING_ACTIVE|macro|SL_IS_PROVISIONING_ACTIVE
DECL|SL_IS_PROVISIONING_API_ALLOWED|macro|SL_IS_PROVISIONING_API_ALLOWED
DECL|SL_IS_PROVISIONING_INITIATED_BY_USER|macro|SL_IS_PROVISIONING_INITIATED_BY_USER
DECL|SL_IS_PROVISIONING_IN_PROGRESS|macro|SL_IS_PROVISIONING_IN_PROGRESS
DECL|SL_IS_RESTART_REQUIRED|macro|SL_IS_RESTART_REQUIRED
DECL|SL_SET_DEVICE_STARTED|macro|SL_SET_DEVICE_STARTED
DECL|SL_SET_DEVICE_START_IN_PROGRESS|macro|SL_SET_DEVICE_START_IN_PROGRESS
DECL|SL_SET_DEVICE_STATUS|macro|SL_SET_DEVICE_STATUS
DECL|SL_SET_DEVICE_STOP_IN_PROGRESS|macro|SL_SET_DEVICE_STOP_IN_PROGRESS
DECL|SL_SET_RESTART_REQUIRED|macro|SL_SET_RESTART_REQUIRED
DECL|SL_UNSET_DEVICE_STARTED|macro|SL_UNSET_DEVICE_STARTED
DECL|SL_UNSET_DEVICE_START_IN_PROGRESS|macro|SL_UNSET_DEVICE_START_IN_PROGRESS
DECL|SL_UNSET_DEVICE_STOP_IN_PROGRESS|macro|SL_UNSET_DEVICE_STOP_IN_PROGRESS
DECL|SL_UNSET_RESTART_REQUIRED|macro|SL_UNSET_RESTART_REQUIRED
DECL|SOCKET_0|enumerator|SOCKET_0,
DECL|SOCKET_10|enumerator|SOCKET_10,
DECL|SOCKET_11|enumerator|SOCKET_11,
DECL|SOCKET_12|enumerator|SOCKET_12,
DECL|SOCKET_13|enumerator|SOCKET_13,
DECL|SOCKET_14|enumerator|SOCKET_14,
DECL|SOCKET_15|enumerator|SOCKET_15,
DECL|SOCKET_1|enumerator|SOCKET_1,
DECL|SOCKET_2|enumerator|SOCKET_2,
DECL|SOCKET_3|enumerator|SOCKET_3,
DECL|SOCKET_4|enumerator|SOCKET_4,
DECL|SOCKET_5|enumerator|SOCKET_5,
DECL|SOCKET_6|enumerator|SOCKET_6,
DECL|SOCKET_7|enumerator|SOCKET_7,
DECL|SOCKET_8|enumerator|SOCKET_8,
DECL|SOCKET_9|enumerator|SOCKET_9,
DECL|SOCK_TRIGGER_READY|enumerator|SOCK_TRIGGER_READY,
DECL|SOCK_TRIGGER_RESP_RECEIVED|enumerator|SOCK_TRIGGER_RESP_RECEIVED
DECL|SOCK_TRIGGER_WAITING_FOR_RESP|enumerator|SOCK_TRIGGER_WAITING_FOR_RESP,
DECL|START_STOP_ID|enumerator|START_STOP_ID,
DECL|STOP_DEVICE_TIMEOUT|macro|STOP_DEVICE_TIMEOUT
DECL|SYNC_PATTERN_TIMEOUT_IN_MSEC|macro|SYNC_PATTERN_TIMEOUT_IN_MSEC
DECL|SelectCmdResp|member|_BasicResponse_t SelectCmdResp;
DECL|SelectEntry|member|_SlSelectEntry_t* SelectEntry[MAX_CONCURRENT_ACTIONS];
DECL|SelectLockObj|member|_SlLockObj_t SelectLockObj;
DECL|SelectSyncObj|member|_SlSyncObj_t SelectSyncObj;
DECL|SlSelectEntry_t|struct|typedef struct SlSelectEntry_t
DECL|SocketNonBlocking|member|_u16 SocketNonBlocking;
DECL|SocketTXFailure|member|_u16 SocketTXFailure;
DECL|SocketTriggerSelect|member|_SlSockTriggerSelect_t SocketTriggerSelect;
DECL|State|member|_SlSockTriggerState_e State;
DECL|SyncObj|member|_SlSyncObj_t SyncObj;
DECL|TIMEOUT_ONE_MORE_SHOT|macro|TIMEOUT_ONE_MORE_SHOT
DECL|TIMEOUT_STATE_EXPIRY|macro|TIMEOUT_STATE_EXPIRY
DECL|TIMEOUT_STATE_INIT_VAL|macro|TIMEOUT_STATE_INIT_VAL
DECL|TSCurr|member|_u32 TSCurr;
DECL|TSPrev|member|_u32 TSPrev;
DECL|TempProtocolHeader|member|_SlCommandHeader_t TempProtocolHeader;
DECL|TimeStamp|member|_u32 TimeStamp;
DECL|Total10MSecUnits|member|_i32 Total10MSecUnits;
DECL|TxDescLen|member|_SlArgSize_t TxDescLen;
DECL|TxLockObj|member|_SlLockObj_t TxLockObj;
DECL|TxPayload1Len|member|_u16 TxPayload1Len;
DECL|TxPayload2Len|member|_u16 TxPayload2Len;
DECL|TxPoolCnt|member|_u8 TxPoolCnt;
DECL|TxSeqNum|member|_u8 TxSeqNum;
DECL|TxSyncObj|member|_SlSyncObj_t TxSyncObj;
DECL|USEC_DELAY|macro|USEC_DELAY
DECL|WaitForCmdResp|member|_u8 WaitForCmdResp;
DECL|_SL_IS_PROTOCOL_ALIGNED_SIZE|macro|_SL_IS_PROTOCOL_ALIGNED_SIZE
DECL|_SL_PENDING_RX_MSG|macro|_SL_PENDING_RX_MSG
DECL|_SL_PROTOCOL_ALIGN_SIZE|macro|_SL_PROTOCOL_ALIGN_SIZE
DECL|_SL_PROTOCOL_CALC_LEN|macro|_SL_PROTOCOL_CALC_LEN
DECL|_SlActionID_e|typedef|}_SlActionID_e;
DECL|_SlActionLookup_t|struct|typedef struct _SlActionLookup_t
DECL|_SlActionLookup_t|typedef|} _SlActionLookup_t;
DECL|_SlArgsData_t|struct|typedef struct _SlArgsData_t
DECL|_SlArgsData_t|typedef|} _SlArgsData_t;
DECL|_SlCmdCtrl_t|typedef|}_SlCmdCtrl_t;
DECL|_SlCmdExt_t|typedef|}_SlCmdExt_t;
DECL|_SlDriverCb_t|typedef|}_SlDriverCb_t;
DECL|_SlDrvErrno_t|typedef|}_SlDrvErrno_t;
DECL|_SlFlowContCB_t|typedef|}_SlFlowContCB_t;
DECL|_SlFunctionParams_t|typedef|}_SlFunctionParams_t;
DECL|_SlMultiSelectCB_t|struct|typedef struct _SlMultiSelectCB_t
DECL|_SlMultiSelectCB_t|typedef|}_SlMultiSelectCB_t;
DECL|_SlPoolObj_t|struct|typedef struct _SlPoolObj_t
DECL|_SlPoolObj_t|typedef|} _SlPoolObj_t;
DECL|_SlRxMsgClass_e|typedef|}_SlRxMsgClass_e;
DECL|_SlSd_t|typedef|typedef _u8 _SlSd_t;
DECL|_SlSelectEntry_t|typedef|}_SlSelectEntry_t;
DECL|_SlSockTriggerData_t|typedef|} _SlSockTriggerData_t;
DECL|_SlSockTriggerSelect_t|typedef|} _SlSockTriggerSelect_t;
DECL|_SlSockTriggerState_e|typedef|} _SlSockTriggerState_e;
DECL|_SlTimeoutParams_t|typedef|} _SlTimeoutParams_t;
DECL|__DRIVER_INT_H__|macro|__DRIVER_INT_H__
DECL|bInCmdContext|member|_u8 bInCmdContext;
DECL|pArgs|member|_u8 *pArgs;
DECL|pAsyncBuf|member|_u8 *pAsyncBuf; /* place to write pointer to buffer with CmdResp's Header + Arguments */
DECL|pAsyncMsgBuff|member|_u8 *pAsyncMsgBuff;
DECL|pCmdCtrl|member|_SlCmdCtrl_t *pCmdCtrl;
DECL|pCmdExt|member|_SlCmdExt_t *pCmdExt;
DECL|pData|member|_u8 *pData;
DECL|pInitCallback|member|P_INIT_CALLBACK pInitCallback;
DECL|pRespArgs|member|_u8 *pRespArgs;
DECL|pRxPayload|member|_u8 *pRxPayload;
DECL|pTxPayload1|member|_u8 *pTxPayload1;
DECL|pTxPayload2|member|_u8 *pTxPayload2;
DECL|pTxRxDescBuff|member|_u8 *pTxRxDescBuff;
DECL|readlist|member|_u16 readlist;
DECL|readsds|member|_u16 readsds;
DECL|writelist|member|_u16 writelist;
DECL|writesds|member|_u16 writesds;
