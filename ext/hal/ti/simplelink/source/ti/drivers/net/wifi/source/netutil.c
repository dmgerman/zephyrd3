DECL|Cmd|member|SlNetUtilCmd_t Cmd;
DECL|Cmd|member|SlNetUtilSetGet_t Cmd;
DECL|Rsp|member|SlNetUtilSetGet_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|SlNetUtilCmdMsg_u|typedef|} SlNetUtilCmdMsg_u;
DECL|SlNetUtilMsgGet_u|typedef|} SlNetUtilMsgGet_u;
DECL|Status|member|_i16 Status;
DECL|_SlNetUtilCmdCtrl|variable|_SlNetUtilCmdCtrl
DECL|_SlNetUtilCmdData_t|typedef|}_SlNetUtilCmdData_t;
DECL|_SlNetUtilGetCmdCtrl|variable|_SlNetUtilGetCmdCtrl
DECL|_SlNetUtilHandleAsync_Cmd|function|void _SlNetUtilHandleAsync_Cmd(void *pVoidBuf)
DECL|pOutputLen|member|_u16 *pOutputLen;
DECL|pOutputValues|member|_u8 *pOutputValues;
DECL|sl_NetUtilCmd|function|_i16 sl_NetUtilCmd(const _u16 Cmd, const _u8 *pAttrib, const _u16 AttribLen, const _u8 *pInputValues, const _u16 InputLen, _u8 *pOutputValues, _u16 *pOutputLen)
DECL|sl_NetUtilGet|function|_i16 sl_NetUtilGet(const _u16 Option, const _u32 ObjID, _u8 *pValues, _u16 *pValueLen)
