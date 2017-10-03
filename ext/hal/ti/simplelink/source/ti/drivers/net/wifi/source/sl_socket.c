DECL|CTRL_SOCK_FD|macro|CTRL_SOCK_FD
DECL|Cmd|member|SlAcceptCommand_t Cmd;
DECL|Cmd|member|SlCloseCommand_t Cmd;
DECL|Cmd|member|SlGetSockOptCommand_t Cmd;
DECL|Cmd|member|SlListenCommand_t Cmd;
DECL|Cmd|member|SlSelectCommand_t Cmd;
DECL|Cmd|member|SlSendRecvCommand_t Cmd;
DECL|Cmd|member|SlSendRecvCommand_t Cmd;
DECL|Cmd|member|SlSendRecvCommand_t Cmd;
DECL|Cmd|member|SlSetSockOptCommand_t Cmd;
DECL|Cmd|member|SlSocketAddrCommand_u Cmd;
DECL|Cmd|member|SlSocketAddrCommand_u Cmd;
DECL|Cmd|member|SlSocketAddrCommand_u Cmd;
DECL|Cmd|member|SlSocketCommand_t Cmd;
DECL|CountSetBits|function|static inline _u8 CountSetBits(_u16 fdList)
DECL|DUMMY_BUF_SIZE|macro|DUMMY_BUF_SIZE
DECL|Dummy|member|_u32 Dummy;
DECL|LOCAL_CTRL_PORT|macro|LOCAL_CTRL_PORT
DECL|Msg|variable|Msg
DECL|Rsp|member|SlGetSockOptResponse_t Rsp;
DECL|Rsp|member|SlSocketAddrResponse_u Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|SlSocketResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|SELECT_NO_TIMEOUT|macro|SELECT_NO_TIMEOUT
DECL|SELECT_TIMEOUT|macro|SELECT_TIMEOUT
DECL|SL_LOOPBACK_ADDR|macro|SL_LOOPBACK_ADDR
DECL|SL_SOCKET_FD_CLR|function|void SL_SOCKET_FD_CLR(_i16 fd, SlFdSet_t *fdset)
DECL|SL_SOCKET_FD_ISSET|function|_i16 SL_SOCKET_FD_ISSET(_i16 fd, SlFdSet_t *fdset)
DECL|SL_SOCKET_FD_SET|function|void SL_SOCKET_FD_SET(_i16 fd, SlFdSet_t *fdset)
DECL|SL_SOCKET_FD_ZERO|function|void SL_SOCKET_FD_ZERO(SlFdSet_t *fdset)
DECL|_SlAcceptCmdCtrl|variable|_SlAcceptCmdCtrl
DECL|_SlCtrlSockAddr|variable|_SlCtrlSockAddr
DECL|_SlCtrlSockRelese|variable|_SlCtrlSockRelese
DECL|_SlDrvClearCtrlSocket|function|static _i16 _SlDrvClearCtrlSocket(void)
DECL|_SlDrvCloseCtrlSocket|function|static _i16 _SlDrvCloseCtrlSocket(void)
DECL|_SlDrvGetNextTimeoutValue|function|static _i8 _SlDrvGetNextTimeoutValue(void)
DECL|_SlDrvOpenCtrlSocket|function|static _i16 _SlDrvOpenCtrlSocket(void)
DECL|_SlDrvRegisterForSelectAsync|function|static _i16 _SlDrvRegisterForSelectAsync(_SlSelectEntry_t* pEntry, _SlSelectMsg_u* pMsg, struct SlTimeval_t *timeout, _u8 SelectInProgress)
DECL|_SlDrvUnRegisterForSelectAsync|function|static _i16 _SlDrvUnRegisterForSelectAsync(_SlSelectEntry_t* pEntry, _u8 SelectInProgress)
DECL|_SlGetSockOptCmdCtrl|variable|_SlGetSockOptCmdCtrl
DECL|_SlGetSockOptMsg_u|typedef|}_SlGetSockOptMsg_u;
DECL|_SlListenCmdCtrl|variable|_SlListenCmdCtrl
DECL|_SlListenMsg_u|typedef|}_SlListenMsg_u;
DECL|_SlRecvCmdCtrl|variable|_SlRecvCmdCtrl
DECL|_SlRecvMsg_u|typedef|}_SlRecvMsg_u;
DECL|_SlRecvfomCmdCtrl|variable|_SlRecvfomCmdCtrl
DECL|_SlRecvfromMsg_u|typedef|}_SlRecvfromMsg_u;
DECL|_SlSelectCmdCtrl|variable|_SlSelectCmdCtrl
DECL|_SlSelectMsg_u|typedef|}_SlSelectMsg_u;
DECL|_SlSendCmdCtrl|variable|_SlSendCmdCtrl
DECL|_SlSendMsg_u|typedef|}_SlSendMsg_u;
DECL|_SlSendtoMsg_u|typedef|}_SlSendtoMsg_u;
DECL|_SlSetSockOptCmdCtrl|variable|_SlSetSockOptCmdCtrl
DECL|_SlSetSockOptMsg_u|typedef|}_SlSetSockOptMsg_u;
DECL|_SlSockAcceptMsg_u|typedef|}_SlSockAcceptMsg_u;
DECL|_SlSockBindMsg_u|typedef|}_SlSockBindMsg_u;
DECL|_SlSockCloseCmdCtrl|variable|_SlSockCloseCmdCtrl
DECL|_SlSockCloseMsg_u|typedef|}_SlSockCloseMsg_u;
DECL|_SlSockConnectMsg_u|typedef|}_SlSockConnectMsg_u;
DECL|_SlSockSocketCmdCtrl|variable|_SlSockSocketCmdCtrl
DECL|_SlSockSocketMsg_u|typedef|}_SlSockSocketMsg_u;
DECL|_SlSocketBuildAddress|function|static void _SlSocketBuildAddress(const SlSockAddr_t *addr, SlSocketAddrCommand_u *pCmd)
DECL|_SlSocketHandleAsync_Accept|function|_SlReturnVal_t _SlSocketHandleAsync_Accept(void *pVoidBuf)
DECL|_SlSocketHandleAsync_Close|function|_SlReturnVal_t _SlSocketHandleAsync_Close(void *pVoidBuf)
DECL|_SlSocketHandleAsync_Connect|function|_SlReturnVal_t _SlSocketHandleAsync_Connect(void *pVoidBuf)
DECL|_SlSocketHandleAsync_Select|function|_SlReturnVal_t _SlSocketHandleAsync_Select(void *pVoidBuf)
DECL|_SlSocketHandleAsync_Select|function|_SlReturnVal_t _SlSocketHandleAsync_Select(void *pVoidBuf)
DECL|_SlSocketParseAddress|function|void _SlSocketParseAddress(SlSocketAddrResponse_u *pRsp, SlSockAddr_t *addr, SlSocklen_t *addrlen)
DECL|sl_Accept|function|_i16 sl_Accept(_i16 sd, SlSockAddr_t *addr, SlSocklen_t *addrlen)
DECL|sl_Bind|function|_i16 sl_Bind(_i16 sd, const SlSockAddr_t *addr, _i16 addrlen)
DECL|sl_Close|function|_i16 sl_Close(_i16 sd)
DECL|sl_Connect|function|_i16 sl_Connect(_i16 sd, const SlSockAddr_t *addr, _i16 addrlen)
DECL|sl_GetSockOpt|function|_i16 sl_GetSockOpt(_i16 sd, _i16 level, _i16 optname, void *optval, SlSocklen_t *optlen)
DECL|sl_Htonl|function|_u32 sl_Htonl( _u32 val )
DECL|sl_Htons|function|_u16 sl_Htons( _u16 val )
DECL|sl_Listen|function|_i16 sl_Listen(_i16 sd, _i16 backlog)
DECL|sl_RecvFrom|function|_i16 sl_RecvFrom(_i16 sd, void *buf, _i16 Len, _i16 flags, SlSockAddr_t *from, SlSocklen_t *fromlen)
DECL|sl_Recv|function|_i16 sl_Recv(_i16 sd, void *pBuf, _i16 Len, _i16 flags)
DECL|sl_Select|function|_i16 sl_Select(_i16 nfds, SlFdSet_t *readsds, SlFdSet_t *writesds, SlFdSet_t *exceptsds, struct SlTimeval_t *timeout)
DECL|sl_Select|function|_i16 sl_Select(_i16 nfds, SlFdSet_t *readsds, SlFdSet_t *writesds, SlFdSet_t *exceptsds, struct SlTimeval_t *timeout)
DECL|sl_SendTo|function|_i16 sl_SendTo(_i16 sd, const void *pBuf, _i16 Len, _i16 flags, const SlSockAddr_t *to, SlSocklen_t tolen)
DECL|sl_Send|function|_i16 sl_Send(_i16 sd, const void *pBuf, _i16 Len, _i16 flags)
DECL|sl_SetSockOpt|function|_i16 sl_SetSockOpt(_i16 sd, _i16 level, _i16 optname, const void *optval, SlSocklen_t optlen)
DECL|sl_Socket|function|_i16 sl_Socket(_i16 Domain, _i16 Type, _i16 Protocol)
DECL|to_mSec|function|static inline _u32 to_mSec(struct SlTimeval_t* timeout)
