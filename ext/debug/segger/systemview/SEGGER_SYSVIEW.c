DECL|CHANNEL_ID_DOWN|macro|CHANNEL_ID_DOWN
DECL|CHANNEL_ID_DOWN|macro|CHANNEL_ID_DOWN
DECL|CHANNEL_ID_UP|macro|CHANNEL_ID_UP
DECL|CHANNEL_ID_UP|macro|CHANNEL_ID_UP
DECL|CPUFreq|member|U32 CPUFreq;
DECL|Cnt|member|unsigned Cnt;
DECL|DisabledEvents|member|U32 DisabledEvents;
DECL|DownChannel|member|U8 DownChannel;
DECL|DropCount|member|U32 DropCount;
DECL|ENABLE_STATE_DROPPING|macro|ENABLE_STATE_DROPPING
DECL|ENABLE_STATE_OFF|macro|ENABLE_STATE_OFF
DECL|ENABLE_STATE_ON|macro|ENABLE_STATE_ON
DECL|ENCODE_U32|macro|ENCODE_U32
DECL|EnableState|member|U8 EnableState; // 0: Disabled, 1: Enabled, (2: Dropping)
DECL|FORMAT_FLAG_ALTERNATE|macro|FORMAT_FLAG_ALTERNATE
DECL|FORMAT_FLAG_LEFT_JUSTIFY|macro|FORMAT_FLAG_LEFT_JUSTIFY
DECL|FORMAT_FLAG_PAD_ZERO|macro|FORMAT_FLAG_PAD_ZERO
DECL|FORMAT_FLAG_PRINT_SIGN|macro|FORMAT_FLAG_PRINT_SIGN
DECL|LastTxTimeStamp|member|U32 LastTxTimeStamp;
DECL|MAKE_DELTA_32BIT|macro|MAKE_DELTA_32BIT
DECL|MAKE_DELTA_32BIT|macro|MAKE_DELTA_32BIT
DECL|MODULE_EVENT_OFFSET|macro|MODULE_EVENT_OFFSET
DECL|Options|member|U32 Options;
DECL|PacketCount|member|U32 PacketCount;
DECL|RAMBaseAddress|member|U32 RAMBaseAddress;
DECL|RECORD_END|macro|RECORD_END
DECL|RECORD_END|macro|RECORD_END
DECL|RECORD_START|macro|RECORD_START
DECL|RECORD_START|macro|RECORD_START
DECL|RecursionCnt|member|U8 RecursionCnt;
DECL|SEGGER_SYSVIEW_DisableEvents|function|void SEGGER_SYSVIEW_DisableEvents(U32 DisableMask) {
DECL|SEGGER_SYSVIEW_EnableEvents|function|void SEGGER_SYSVIEW_EnableEvents(U32 EnableMask) {
DECL|SEGGER_SYSVIEW_EncodeData|function|U8* SEGGER_SYSVIEW_EncodeData(U8 *pPayload, const char* pSrc, unsigned int NumBytes) {
DECL|SEGGER_SYSVIEW_EncodeId|function|U8* SEGGER_SYSVIEW_EncodeId(U8* pPayload, U32 Id) {
DECL|SEGGER_SYSVIEW_EncodeString|function|U8* SEGGER_SYSVIEW_EncodeString(U8* pPayload, const char* s, unsigned int MaxLen) {
DECL|SEGGER_SYSVIEW_EncodeU32|function|U8* SEGGER_SYSVIEW_EncodeU32(U8* pPayload, U32 Value) {
DECL|SEGGER_SYSVIEW_ErrorfHost|function|void SEGGER_SYSVIEW_ErrorfHost(const char* s, ...) {
DECL|SEGGER_SYSVIEW_ErrorfTarget|function|void SEGGER_SYSVIEW_ErrorfTarget(const char* s, ...) {
DECL|SEGGER_SYSVIEW_Error|function|void SEGGER_SYSVIEW_Error(const char* s) {
DECL|SEGGER_SYSVIEW_GLOBALS|typedef|} SEGGER_SYSVIEW_GLOBALS;
DECL|SEGGER_SYSVIEW_GetSysDesc|function|void SEGGER_SYSVIEW_GetSysDesc(void) {
DECL|SEGGER_SYSVIEW_Init|function|void SEGGER_SYSVIEW_Init(U32 SysFreq, U32 CPUFreq, const SEGGER_SYSVIEW_OS_API *pOSAPI, SEGGER_SYSVIEW_SEND_SYS_DESC_FUNC pfSendSysDesc) {
DECL|SEGGER_SYSVIEW_NameResource|function|void SEGGER_SYSVIEW_NameResource(U32 ResourceId, const char* sName) {
DECL|SEGGER_SYSVIEW_OnIdle|function|void SEGGER_SYSVIEW_OnIdle(void) {
DECL|SEGGER_SYSVIEW_OnTaskCreate|function|void SEGGER_SYSVIEW_OnTaskCreate(U32 TaskId) {
DECL|SEGGER_SYSVIEW_OnTaskStartExec|function|void SEGGER_SYSVIEW_OnTaskStartExec(U32 TaskId) {
DECL|SEGGER_SYSVIEW_OnTaskStartReady|function|void SEGGER_SYSVIEW_OnTaskStartReady(U32 TaskId) {
DECL|SEGGER_SYSVIEW_OnTaskStopExec|function|void SEGGER_SYSVIEW_OnTaskStopExec(void) {
DECL|SEGGER_SYSVIEW_OnTaskStopReady|function|void SEGGER_SYSVIEW_OnTaskStopReady(U32 TaskId, unsigned int Cause) {
DECL|SEGGER_SYSVIEW_OnTaskTerminate|function|void SEGGER_SYSVIEW_OnTaskTerminate(U32 TaskId) {
DECL|SEGGER_SYSVIEW_OnUserStart|function|void SEGGER_SYSVIEW_OnUserStart(unsigned UserId) {
DECL|SEGGER_SYSVIEW_OnUserStop|function|void SEGGER_SYSVIEW_OnUserStop(unsigned UserId) {
DECL|SEGGER_SYSVIEW_PRINTF_DESC|typedef|} SEGGER_SYSVIEW_PRINTF_DESC;
DECL|SEGGER_SYSVIEW_PrintfHostEx|function|void SEGGER_SYSVIEW_PrintfHostEx(const char* s, U32 Options, ...) {
DECL|SEGGER_SYSVIEW_PrintfHost|function|void SEGGER_SYSVIEW_PrintfHost(const char* s, ...) {
DECL|SEGGER_SYSVIEW_PrintfTargetEx|function|void SEGGER_SYSVIEW_PrintfTargetEx(const char* s, U32 Options, ...) {
DECL|SEGGER_SYSVIEW_PrintfTarget|function|void SEGGER_SYSVIEW_PrintfTarget(const char* s, ...) {
DECL|SEGGER_SYSVIEW_Print|function|void SEGGER_SYSVIEW_Print(const char* s) {
DECL|SEGGER_SYSVIEW_RecordEndCallU32|function|void SEGGER_SYSVIEW_RecordEndCallU32(unsigned int EventID, U32 Para0) {
DECL|SEGGER_SYSVIEW_RecordEndCall|function|void SEGGER_SYSVIEW_RecordEndCall(unsigned int EventID) {
DECL|SEGGER_SYSVIEW_RecordEnterISR|function|void SEGGER_SYSVIEW_RecordEnterISR(void) {
DECL|SEGGER_SYSVIEW_RecordEnterTimer|function|void SEGGER_SYSVIEW_RecordEnterTimer(U32 TimerId) {
DECL|SEGGER_SYSVIEW_RecordExitISRToScheduler|function|void SEGGER_SYSVIEW_RecordExitISRToScheduler(void) {
DECL|SEGGER_SYSVIEW_RecordExitISR|function|void SEGGER_SYSVIEW_RecordExitISR(void) {
DECL|SEGGER_SYSVIEW_RecordExitTimer|function|void SEGGER_SYSVIEW_RecordExitTimer(void) {
DECL|SEGGER_SYSVIEW_RecordModuleDescription|function|void SEGGER_SYSVIEW_RecordModuleDescription(const SEGGER_SYSVIEW_MODULE* pModule, const char* sDescription) {
DECL|SEGGER_SYSVIEW_RecordString|function|void SEGGER_SYSVIEW_RecordString(unsigned int EventID, const char* pString) {
DECL|SEGGER_SYSVIEW_RecordSystime|function|void SEGGER_SYSVIEW_RecordSystime(void) {
DECL|SEGGER_SYSVIEW_RecordU32x10|function|void SEGGER_SYSVIEW_RecordU32x10(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3, U32 Para4, U32 Para5, U32 Para6, U32 Para7, U32 Para8, U32 Para9) {
DECL|SEGGER_SYSVIEW_RecordU32x2|function|void SEGGER_SYSVIEW_RecordU32x2(unsigned int EventID, U32 Para0, U32 Para1) {
DECL|SEGGER_SYSVIEW_RecordU32x3|function|void SEGGER_SYSVIEW_RecordU32x3(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2) {
DECL|SEGGER_SYSVIEW_RecordU32x4|function|void SEGGER_SYSVIEW_RecordU32x4(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3) {
DECL|SEGGER_SYSVIEW_RecordU32x5|function|void SEGGER_SYSVIEW_RecordU32x5(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3, U32 Para4) {
DECL|SEGGER_SYSVIEW_RecordU32x6|function|void SEGGER_SYSVIEW_RecordU32x6(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3, U32 Para4, U32 Para5) {
DECL|SEGGER_SYSVIEW_RecordU32x7|function|void SEGGER_SYSVIEW_RecordU32x7(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3, U32 Para4, U32 Para5, U32 Para6) {
DECL|SEGGER_SYSVIEW_RecordU32x8|function|void SEGGER_SYSVIEW_RecordU32x8(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3, U32 Para4, U32 Para5, U32 Para6, U32 Para7) {
DECL|SEGGER_SYSVIEW_RecordU32x9|function|void SEGGER_SYSVIEW_RecordU32x9(unsigned int EventID, U32 Para0, U32 Para1, U32 Para2, U32 Para3, U32 Para4, U32 Para5, U32 Para6, U32 Para7, U32 Para8) {
DECL|SEGGER_SYSVIEW_RecordU32|function|void SEGGER_SYSVIEW_RecordU32(unsigned int EventID, U32 Value) {
DECL|SEGGER_SYSVIEW_RecordVoid|function|void SEGGER_SYSVIEW_RecordVoid(unsigned int EventID) {
DECL|SEGGER_SYSVIEW_RegisterModule|function|void SEGGER_SYSVIEW_RegisterModule(SEGGER_SYSVIEW_MODULE* pModule) {
DECL|SEGGER_SYSVIEW_SendModuleDescription|function|void SEGGER_SYSVIEW_SendModuleDescription(void) {
DECL|SEGGER_SYSVIEW_SendModule|function|void SEGGER_SYSVIEW_SendModule(U8 ModuleId) {
DECL|SEGGER_SYSVIEW_SendNumModules|function|void SEGGER_SYSVIEW_SendNumModules(void) {
DECL|SEGGER_SYSVIEW_SendPacket|function|int SEGGER_SYSVIEW_SendPacket(U8* pPacket, U8* pPayloadEnd, unsigned int EventId) {
DECL|SEGGER_SYSVIEW_SendSysDesc|function|void SEGGER_SYSVIEW_SendSysDesc(const char *sSysDesc) {
DECL|SEGGER_SYSVIEW_SendTaskInfo|function|void SEGGER_SYSVIEW_SendTaskInfo(const SEGGER_SYSVIEW_TASKINFO *pInfo) {
DECL|SEGGER_SYSVIEW_SendTaskList|function|void SEGGER_SYSVIEW_SendTaskList(void) {
DECL|SEGGER_SYSVIEW_SetRAMBase|function|void SEGGER_SYSVIEW_SetRAMBase(U32 RAMBaseAddress) {
DECL|SEGGER_SYSVIEW_ShrinkId|function|U32 SEGGER_SYSVIEW_ShrinkId(U32 Id) {
DECL|SEGGER_SYSVIEW_Start|function|void SEGGER_SYSVIEW_Start(void) {
DECL|SEGGER_SYSVIEW_Stop|function|void SEGGER_SYSVIEW_Stop(void) {
DECL|SEGGER_SYSVIEW_WarnfHost|function|void SEGGER_SYSVIEW_WarnfHost(const char* s, ...) {
DECL|SEGGER_SYSVIEW_WarnfTarget|function|void SEGGER_SYSVIEW_WarnfTarget(const char* s, ...) {
DECL|SEGGER_SYSVIEW_Warn|function|void SEGGER_SYSVIEW_Warn(const char* s) {
DECL|SHRINK_ID|macro|SHRINK_ID
DECL|SHRINK_ID|macro|SHRINK_ID
DECL|SysFreq|member|U32 SysFreq;
DECL|UpChannel|member|U8 UpChannel;
DECL|_APrintHost|function|static void _APrintHost(const char* s, U32 Options, U32* pArguments, U32 NumArguments) {
DECL|_DownBuffer|variable|_DownBuffer
DECL|_DownBuffer|variable|_DownBuffer
DECL|_DownBuffer|variable|_DownBuffer
DECL|_DownBuffer|variable|_DownBuffer
DECL|_DownBuffer|variable|_DownBuffer
DECL|_EncodeData|function|static U8* _EncodeData(U8* pPayload, const char* pSrc, unsigned int NumBytes) {
DECL|_EncodeStr|function|static U8 *_EncodeStr(U8 *pPayload, const char *pText, unsigned int Limit) {
DECL|_HandleIncomingPacket|function|static void _HandleIncomingPacket(void) {
DECL|_NumModules|variable|_NumModules
DECL|_PreparePacket|function|static U8* _PreparePacket(U8* pPacket) {
DECL|_PrintInt|function|static void _PrintInt(SEGGER_SYSVIEW_PRINTF_DESC * pBufferDesc, int v, unsigned int Base, unsigned int NumDigits, unsigned int FieldWidth, unsigned int FormatFlags) {
DECL|_PrintUnsigned|function|static void _PrintUnsigned(SEGGER_SYSVIEW_PRINTF_DESC * pBufferDesc, unsigned int v, unsigned int Base, unsigned int NumDigits, unsigned int FieldWidth, unsigned int FormatFlags) {
DECL|_SYSVIEW_Globals|variable|_SYSVIEW_Globals
DECL|_SendPacket|function|static void _SendPacket(U8* pStartPacket, U8* pEndPacket, unsigned int EventId) {
DECL|_SendSyncInfo|function|static void _SendSyncInfo(void) {
DECL|_StoreChar|function|static void _StoreChar(SEGGER_SYSVIEW_PRINTF_DESC * p, char c) {
DECL|_TrySendOverflowPacket|function|static int _TrySendOverflowPacket(void) {
DECL|_UpBuffer|variable|_UpBuffer
DECL|_UpBuffer|variable|_UpBuffer
DECL|_UpBuffer|variable|_UpBuffer
DECL|_UpBuffer|variable|_UpBuffer
DECL|_UpBuffer|variable|_UpBuffer
DECL|_VPrintHost|function|static void _VPrintHost(const char* s, U32 Options, va_list* pParamList) {
DECL|_VPrintTarget|function|static void _VPrintTarget(const char* sFormat, U32 Options, va_list* pParamList) {
DECL|_aPacket|variable|_aPacket
DECL|_abSync|variable|_abSync
DECL|_pFirstModule|variable|_pFirstModule
DECL|pBuffer|member|U8* pBuffer;
DECL|pOSAPI|member|const SEGGER_SYSVIEW_OS_API* pOSAPI;
DECL|pPayloadStart|member|U8* pPayloadStart;
DECL|pPayload|member|U8* pPayload;
DECL|pfSendSysDesc|member|SEGGER_SYSVIEW_SEND_SYS_DESC_FUNC* pfSendSysDesc;
