DECL|Args|member|SlWlanAddGetEapProfile_t Args;
DECL|Args|member|SlWlanConnectEapCommand_t Args;
DECL|Args|member|SlWlanSmartConfigParams_t Args;
DECL|Cmd|member|SlWlanCfgSetGet_t Cmd;
DECL|Cmd|member|SlWlanCfgSetGet_t Cmd;
DECL|Cmd|member|SlWlanGetNetworkListCommand_t Cmd;
DECL|Cmd|member|SlWlanPolicySetGet_t Cmd;
DECL|Cmd|member|SlWlanPolicySetGet_t Cmd;
DECL|Cmd|member|SlWlanProfileDelGetCommand_t Cmd;
DECL|Cmd|member|SlWlanProfileDelGetCommand_t Cmd;
DECL|Cmd|member|SlWlanRxFilterAddCommand_t Cmd;
DECL|Cmd|member|SlWlanSetMode_t Cmd;
DECL|Cmd|member|_SlProfileParams_t Cmd;
DECL|Cmd|member|_SlProvisioning_t Cmd;
DECL|Cmd|member|_WlanConnectCmd_t Cmd;
DECL|Key|member|_i8 Key[MAX_SMART_CONFIG_KEY]; /* public key + groupId1 key + groupId2 key */
DECL|MAX_ANON_USER_LEN|macro|MAX_ANON_USER_LEN
DECL|MAX_KEY_LEN|macro|MAX_KEY_LEN
DECL|MAX_SMART_CONFIG_KEY|macro|MAX_SMART_CONFIG_KEY
DECL|MAX_SSID_LEN|macro|MAX_SSID_LEN
DECL|MAX_USER_LEN|macro|MAX_USER_LEN
DECL|ProvParams|member|SlWlanProvisioningParams_t ProvParams;
DECL|Rsp|member|SlWlanCfgSetGet_t Rsp;
DECL|Rsp|member|SlWlanPolicySetGet_t Rsp;
DECL|Rsp|member|SlWlanRxFilterAddCommandReponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|Rsp|member|_SlProfileParams_t Rsp;
DECL|Rsp|member|_WlanGetNetworkListResponse_t Rsp;
DECL|SmartConfigParams|member|_SlSmartConfigArgs_t SmartConfigParams;
DECL|Strings|member|_i8 Strings[MAX_SSID_LEN + MAX_KEY_LEN + MAX_USER_LEN + MAX_ANON_USER_LEN];
DECL|Strings|member|_i8 Strings[MAX_SSID_LEN + MAX_KEY_LEN + MAX_USER_LEN + MAX_ANON_USER_LEN];
DECL|_SlPolicyGetCmdCtrl|variable|_SlPolicyGetCmdCtrl
DECL|_SlPolicyGetMsg_u|typedef|}_SlPolicyGetMsg_u;
DECL|_SlPolicyMsg_u|typedef|}_SlPolicyMsg_u;
DECL|_SlPolicySetCmdCtrl|variable|_SlPolicySetCmdCtrl
DECL|_SlProfileAddMsg_u|typedef|}_SlProfileAddMsg_u;
DECL|_SlProfileDelCmdCtrl|variable|_SlProfileDelCmdCtrl
DECL|_SlProfileDelMsg_u|typedef|}_SlProfileDelMsg_u;
DECL|_SlProfileGetCmdCtrl|variable|_SlProfileGetCmdCtrl
DECL|_SlProfileGetMsg_u|typedef|}_SlProfileGetMsg_u;
DECL|_SlProfileParams_t|typedef|}_SlProfileParams_t;
DECL|_SlProvisioningCmdCtrl|variable|_SlProvisioningCmdCtrl
DECL|_SlProvisioningStartMsg_u|typedef|}_SlProvisioningStartMsg_u;
DECL|_SlProvisioning_t|typedef|}_SlProvisioning_t;
DECL|_SlSmartConfigArgs_t|typedef|}_SlSmartConfigArgs_t;
DECL|_SlWlanCfgGetCmdCtrl|variable|_SlWlanCfgGetCmdCtrl
DECL|_SlWlanCfgMsgGet_u|typedef|}_SlWlanCfgMsgGet_u;
DECL|_SlWlanCfgSetCmdCtrl|variable|_SlWlanCfgSetCmdCtrl
DECL|_SlWlanCfgSetMsg_u|typedef|}_SlWlanCfgSetMsg_u;
DECL|_SlWlanConnectMsg_u|typedef|}_SlWlanConnectMsg_u;
DECL|_SlWlanGetNetworkListCtrl|variable|_SlWlanGetNetworkListCtrl
DECL|_SlWlanGetNetworkListMsg_u|typedef|}_SlWlanGetNetworkListMsg_u;
DECL|_SlWlanRxFilterAddMsg_u|typedef|}_SlWlanRxFilterAddMsg_u;
DECL|_SlWlanRxFilterAddtCmdCtrl|variable|_SlWlanRxFilterAddtCmdCtrl
DECL|_SlWlanSetModeCmdCtrl|variable|_SlWlanSetModeCmdCtrl
DECL|_SlwlanSetModeMsg_u|typedef|}_SlwlanSetModeMsg_u;
DECL|_WlanConnectCmd_t|typedef|}_WlanConnectCmd_t;
DECL|sl_WlanConnect|function|_i16 sl_WlanConnect(const _i8* pName,const _i16 NameLen,const _u8 *pMacAddr,const SlWlanSecParams_t* pSecParams ,const SlWlanSecParamsExt_t* pSecExtParams)
DECL|sl_WlanDisconnect|function|_i16 sl_WlanDisconnect(void)
DECL|sl_WlanGetNetworkList|function|_i16 sl_WlanGetNetworkList(const _u8 Index,const _u8 Count, SlWlanNetworkEntry_t *pEntries)
DECL|sl_WlanGet|function|_i16 sl_WlanGet(const _u16 ConfigId, _u16 *pConfigOpt,_u16 *pConfigLen, _u8 *pValues)
DECL|sl_WlanPolicyGet|function|_i16 sl_WlanPolicyGet(const _u8 Type ,_u8 *pPolicy,_u8 *pVal,_u8 *pValLen)
DECL|sl_WlanPolicySet|function|_i16 sl_WlanPolicySet(const _u8 Type , const _u8 Policy, _u8 *pVal,const _u8 ValLen)
DECL|sl_WlanProfileAdd|function|_i16 sl_WlanProfileAdd(const _i8* pName,const _i16 NameLen,const _u8 *pMacAddr,const SlWlanSecParams_t* pSecParams ,const SlWlanSecParamsExt_t* pSecExtParams,const _u32 Priority,const _u32 Options)
DECL|sl_WlanProfileDel|function|_i16 sl_WlanProfileDel(const _i16 Index)
DECL|sl_WlanProfileGet|function|_i16 sl_WlanProfileGet(const _i16 Index,_i8* pName, _i16 *pNameLen, _u8 *pMacAddr, SlWlanSecParams_t* pSecParams, SlWlanGetSecParamsExt_t* pEntParams, _u32 *pPriority)
DECL|sl_WlanProvisioning|function|_i16 sl_WlanProvisioning(_u8 ProvisioningCmd, _u8 RequestedRoleAfterSuccess, _u16 InactivityTimeoutSec, char *pSmartConfigKey, _u32 Flags)
DECL|sl_WlanRxFilterAdd|function|_i16 sl_WlanRxFilterAdd( SlWlanRxFilterRuleType_t RuleType, SlWlanRxFilterFlags_u Flags, const SlWlanRxFilterRule_u* const pRule, const SlWlanRxFilterTrigger_t* const pTrigger, const SlWlanRxFilterAction_t* const pAction,
DECL|sl_WlanRxStatGet|function|_i16 sl_WlanRxStatGet(SlWlanGetRxStatResponse_t *pRxStat,const _u32 Flags)
DECL|sl_WlanRxStatStart|function|_i16 sl_WlanRxStatStart(void)
DECL|sl_WlanRxStatStop|function|_i16 sl_WlanRxStatStop(void)
DECL|sl_WlanSetMode|function|_i16 sl_WlanSetMode(const _u8 Mode)
DECL|sl_WlanSet|function|_i16 sl_WlanSet(const _u16 ConfigId ,const _u16 ConfigOpt,const _u16 ConfigLen,const _u8 *pValues)
