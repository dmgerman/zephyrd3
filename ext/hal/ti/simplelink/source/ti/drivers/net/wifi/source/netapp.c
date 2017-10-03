DECL|AddrLen|member|_u8 AddrLen;
DECL|Address|member|_u32 Address[4];
DECL|CMD_PING_TEST_RUNNING|enumerator|CMD_PING_TEST_RUNNING = 0,
DECL|CMD_PING_TEST_STOPPED|enumerator|CMD_PING_TEST_STOPPED
DECL|Cmd|member|NetAppGetHostByNameCommand_t Cmd;
DECL|Cmd|member|NetappGetServiceListCMD_t Cmd;
DECL|Cmd|member|NetappMdnsSetService_t Cmd;
DECL|Cmd|member|SlNetAppHttpServerSendToken_t Cmd;
DECL|Cmd|member|SlNetAppPingCommand_t Cmd;
DECL|Cmd|member|SlNetAppSetGet_t Cmd;
DECL|Cmd|member|SlNetAppSetGet_t Cmd;
DECL|Cmd|member|SlProtocolNetAppReceiveRequest_t Cmd;
DECL|Cmd|member|SlProtocolNetAppResponse_t Cmd;
DECL|Cmd|member|SlProtocolNetAppSend_t Cmd;
DECL|Cmd|member|_GetHostByServiceCommand_t Cmd;
DECL|Cmd|member|_NetAppStartStopCommand_t Cmd;
DECL|Flags|member|_u8 Flags;
DECL|IndexOffest|member|_u8 IndexOffest;
DECL|IpV4|member|NetAppGetHostByNameIPv4AsyncResponse_t IpV4;
DECL|IpV6|member|NetAppGetHostByNameIPv6AsyncResponse_t IpV6;
DECL|MaxServiceCount|member|_u8 MaxServiceCount;
DECL|NetAppServiceSizeLUT|variable|NetAppServiceSizeLUT
DECL|NetappGetServiceListCMD_t|typedef|}NetappGetServiceListCMD_t;
DECL|NetappMdnsSetService_t|typedef|}NetappMdnsSetService_t;
DECL|Options|member|_u32 Options;
DECL|Padding|member|_i8 Padding;
DECL|Padding|member|_u16 Padding;
DECL|Port|member|_u16 Port;
DECL|Port|member|_u32 Port;
DECL|Rsp|member|SlNetAppSetGet_t Rsp;
DECL|Rsp|member|SlPingReportResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp; /* Not used. do we need it? */
DECL|Rsp|member|_NetAppStartStopResponse_t Rsp;
DECL|SL_NETAPP_PING_GUARD_INTERVAL|macro|SL_NETAPP_PING_GUARD_INTERVAL
DECL|SL_NETAPP_SERVICE_SIZE_MASK|macro|SL_NETAPP_SERVICE_SIZE_MASK
DECL|ServiceLen|member|_u8 ServiceLen;
DECL|ServiceNameLen|member|_u8 ServiceNameLen;
DECL|Status|member|_i16 Status;
DECL|Status|member|_u16 Status;
DECL|TTL|member|_u32 TTL;
DECL|TextLen|member|_u16 TextLen;
DECL|TextLen|member|_u8 TextLen;
DECL|_GetHostByNameAsyncResponse_u|typedef|}_GetHostByNameAsyncResponse_u;
DECL|_GetHostByServiceAsyncResponse_t|typedef|}_GetHostByServiceAsyncResponse_t;
DECL|_GetHostByServiceCommand_t|typedef|}_GetHostByServiceCommand_t;
DECL|_GetHostByServiceIPv6AsyncResponse_t|typedef|}_GetHostByServiceIPv6AsyncResponse_t;
DECL|_SlGetHostByNameCtrl|variable|_SlGetHostByNameCtrl
DECL|_SlGetHostByNameMsg_u|typedef|}_SlGetHostByNameMsg_u;
DECL|_SlGetHostByServiceCtrl|variable|_SlGetHostByServiceCtrl
DECL|_SlGetHostByServiceMsg_u|typedef|}_SlGetHostByServiceMsg_u;
DECL|_SlGetServiceListeCtrl|variable|_SlGetServiceListeCtrl
DECL|_SlNetAppCopyPingResultsToReport|function|static void _SlNetAppCopyPingResultsToReport(SlPingReportResponse_t *pResults,SlNetAppPingReport_t *pReport)
DECL|_SlNetAppEventHandler|function|_SlReturnVal_t _SlNetAppEventHandler(void* pArgs)
DECL|_SlNetAppGetCmdCtrl|variable|_SlNetAppGetCmdCtrl
DECL|_SlNetAppHandleAsync_DnsGetHostByAddr|function|_SlReturnVal_t _SlNetAppHandleAsync_DnsGetHostByAddr(void *pVoidBuf)
DECL|_SlNetAppHandleAsync_DnsGetHostByName|function|_SlReturnVal_t _SlNetAppHandleAsync_DnsGetHostByName(void *pVoidBuf)
DECL|_SlNetAppHandleAsync_DnsGetHostByService|function|_SlReturnVal_t _SlNetAppHandleAsync_DnsGetHostByService(void *pVoidBuf)
DECL|_SlNetAppHandleAsync_NetAppReceive|function|void _SlNetAppHandleAsync_NetAppReceive(void *pVoidBuf)
DECL|_SlNetAppHandleAsync_PingResponse|function|_SlReturnVal_t _SlNetAppHandleAsync_PingResponse(void *pVoidBuf)
DECL|_SlNetAppMDNSRegisterUnregisterService|function|_i16 _SlNetAppMDNSRegisterUnregisterService( const _i8* pServiceName,const _u8 ServiceNameLen, const _i8* pText, const _u8 TextLen, const _u16 Port,
DECL|_SlNetAppMsgGet_u|typedef|}_SlNetAppMsgGet_u;
DECL|_SlNetAppMsgSendResponse_u|typedef|}_SlNetAppMsgSendResponse_u;
DECL|_SlNetAppMsgSendTokenValue_u|typedef|}_SlNetAppMsgSendTokenValue_u;
DECL|_SlNetAppMsgSend_u|typedef|}_SlNetAppMsgSend_u;
DECL|_SlNetAppMsgSet_u|typedef|}_SlNetAppMsgSet_u;
DECL|_SlNetAppReceiveCmdCtrl|variable|_SlNetAppReceiveCmdCtrl
DECL|_SlNetAppReceiveMsg_u|typedef|}_SlNetAppReceiveMsg_u;
DECL|_SlNetAppSendCmdCtrl|variable|_SlNetAppSendCmdCtrl
DECL|_SlNetAppSendResponseCmdCtrl|variable|_SlNetAppSendResponseCmdCtrl
DECL|_SlNetAppSendResponse|function|_u16 _SlNetAppSendResponse( _u16 handle, SlNetAppResponse_t *NetAppResponse)
DECL|_SlNetAppSendTokenValueCmdCtrl|variable|_SlNetAppSendTokenValueCmdCtrl
DECL|_SlNetAppSendTokenValue|function|_u16 _SlNetAppSendTokenValue(SlNetAppHttpServerData_t * Token_value)
DECL|_SlNetAppSetCmdCtrl|variable|_SlNetAppSetCmdCtrl
DECL|_SlNetAppStartCtrl|variable|_SlNetAppStartCtrl
DECL|_SlNetAppStartStopMsg_u|typedef|}_SlNetAppStartStopMsg_u;
DECL|_SlNetAppStopCtrl|variable|_SlNetAppStopCtrl
DECL|_SlNetappGetServiceListMsg_u|typedef|}_SlNetappGetServiceListMsg_u;
DECL|_SlNetappMdnsRegisterServiceMsg_u|typedef|}_SlNetappMdnsRegisterServiceMsg_u;
DECL|_SlPingStartMsg_u|typedef|}_SlPingStartMsg_u;
DECL|_SlPingStatus_e|typedef|}_SlPingStatus_e;
DECL|_SlRegisterServiceCtrl|variable|_SlRegisterServiceCtrl
DECL|inout_TextLen|member|_u16 *inout_TextLen; /* in: max len , out: actual len */
DECL|out_pAddr|member|_u32 *out_pAddr;
DECL|out_pPort|member|_u32 *out_pPort;
DECL|out_pText|member|_i8 *out_pText;
DECL|sl_NetAppDnsGetHostByName|function|_i16 sl_NetAppDnsGetHostByName(_i8 * pHostName,const _u16 NameLen, _u32* OutIpAddr,const _u8 Family )
DECL|sl_NetAppDnsGetHostByService|function|_i16 sl_NetAppDnsGetHostByService(_i8 *pServiceName, /* string containing all (or only part): name + subtype + service */ const _u8 ServiceLen, const _u8 Family,/* 4-IPv4 , 16-IPv6 */ _u32 pAddr[], _u32 *pPort,
DECL|sl_NetAppGetServiceList|function|_i16 sl_NetAppGetServiceList(const _u8 IndexOffest, const _u8 MaxServiceCount, const _u8 Flags, _i8 *pBuffer, const _u32 BufferLength
DECL|sl_NetAppGet|function|_i16 sl_NetAppGet(const _u8 AppId, const _u8 Option,_u8 *pOptionLen, _u8 *pOptionValue)
DECL|sl_NetAppMDNSRegisterService|function|_i16 sl_NetAppMDNSRegisterService( const _i8* pServiceName,const _u8 ServiceNameLen, const _i8* pText, const _u8 TextLen, const _u16 Port,
DECL|sl_NetAppMDNSUnRegisterService|function|_i16 sl_NetAppMDNSUnRegisterService( const _i8* pServiceName,const _u8 ServiceNameLen,_u32 Options)
DECL|sl_NetAppPing|function|_i16 sl_NetAppPing(const SlNetAppPingCommand_t* pPingParams, const _u8 Family, SlNetAppPingReport_t *pReport, const P_SL_DEV_PING_CALLBACK pPingCallback)
DECL|sl_NetAppRecv|function|_SlReturnVal_t sl_NetAppRecv( _u16 Handle, _u16 *DataLen, _u8 *pData, _u32 *Flags)
DECL|sl_NetAppSend|function|_u16 sl_NetAppSend( _u16 Handle, _u16 DataLen, _u8* pData, _u32 Flags)
DECL|sl_NetAppSet|function|_i16 sl_NetAppSet(const _u8 AppId ,const _u8 Option, const _u8 OptionLen, const _u8 *pOptionValue)
DECL|sl_NetAppStart|function|_i16 sl_NetAppStart(const _u32 AppBitMap)
DECL|sl_NetAppStop|function|_i16 sl_NetAppStop(const _u32 AppBitMap)
