DECL|Cmd|member|SlFsCloseCommand_t Cmd;
DECL|Cmd|member|SlFsDeleteCommand_t Cmd;
DECL|Cmd|member|SlFsFileSysControlCommand_t Cmd;
DECL|Cmd|member|SlFsGetFileListCommand_t Cmd;
DECL|Cmd|member|SlFsGetInfoCommand_t Cmd;
DECL|Cmd|member|SlFsOpenCommand_t Cmd;
DECL|Cmd|member|SlFsProgramCommand_t Cmd;
DECL|Cmd|member|SlFsReadCommand_t Cmd;
DECL|Cmd|member|SlFsWriteCommand_t Cmd;
DECL|FS_CONVERT_FLAGS|macro|FS_CONVERT_FLAGS
DECL|FS_MAX_MODE_SIZE_GRAN|enumerator|FS_MAX_MODE_SIZE_GRAN
DECL|FS_MAX_MODE_SIZE|macro|FS_MAX_MODE_SIZE
DECL|FS_MODE_ACCESS_FLAGS_MASK|macro|FS_MODE_ACCESS_FLAGS_MASK
DECL|FS_MODE_ACCESS_FLAGS_OFFSET|macro|FS_MODE_ACCESS_FLAGS_OFFSET
DECL|FS_MODE_ACCESS_MASK|macro|FS_MODE_ACCESS_MASK
DECL|FS_MODE_ACCESS_OFFSET|macro|FS_MODE_ACCESS_OFFSET
DECL|FS_MODE_ACCESS_RESERVED_MASK|macro|FS_MODE_ACCESS_RESERVED_MASK
DECL|FS_MODE_ACCESS_RESERVED_OFFSET|macro|FS_MODE_ACCESS_RESERVED_OFFSET
DECL|FS_MODE_OPEN_CREATE|enumerator|FS_MODE_OPEN_CREATE,
DECL|FS_MODE_OPEN_READ|enumerator|FS_MODE_OPEN_READ = 0,
DECL|FS_MODE_OPEN_SIZE_GRAN_MASK|macro|FS_MODE_OPEN_SIZE_GRAN_MASK
DECL|FS_MODE_OPEN_SIZE_GRAN_OFFSET|macro|FS_MODE_OPEN_SIZE_GRAN_OFFSET
DECL|FS_MODE_OPEN_SIZE_MASK|macro|FS_MODE_OPEN_SIZE_MASK
DECL|FS_MODE_OPEN_SIZE_OFFSET|macro|FS_MODE_OPEN_SIZE_OFFSET
DECL|FS_MODE_OPEN_WRITE_CREATE_IF_NOT_EXIST|enumerator|FS_MODE_OPEN_WRITE_CREATE_IF_NOT_EXIST
DECL|FS_MODE_OPEN_WRITE|enumerator|FS_MODE_OPEN_WRITE,
DECL|FS_MODE_SIZE_GRAN_16KB|enumerator|FS_MODE_SIZE_GRAN_16KB, /* MAX_SIZE = 4M */
DECL|FS_MODE_SIZE_GRAN_1KB|enumerator|FS_MODE_SIZE_GRAN_1KB, /* MAX_SIZE = 256K */
DECL|FS_MODE_SIZE_GRAN_256B|enumerator|FS_MODE_SIZE_GRAN_256B = 0, /* MAX_SIZE = 64K */
DECL|FS_MODE_SIZE_GRAN_4KB|enumerator|FS_MODE_SIZE_GRAN_4KB, /* MAX_SZIE = 1M */
DECL|FS_MODE_SIZE_GRAN_64KB|enumerator|FS_MODE_SIZE_GRAN_64KB, /* MAX_SIZE = 16M */
DECL|FS_MODE|macro|FS_MODE
DECL|FlagsTranslate|variable|FlagsTranslate
DECL|FsFileOpenAccessType_e|typedef|}FsFileOpenAccessType_e;
DECL|FsFileOpenMaxSizeGran_e|typedef|}FsFileOpenMaxSizeGran_e;
DECL|FsGetCreateFsMode|function|static _u32 FsGetCreateFsMode(_u8 Mode, _u32 MaxSizeInBytes,_u32 AccessFlags)
DECL|MAX_NVMEM_CHUNK_SIZE|macro|MAX_NVMEM_CHUNK_SIZE
DECL|Rsp|member|SlFsDeleteResponse_t Rsp;
DECL|Rsp|member|SlFsFileSysControlResponse_t Rsp;
DECL|Rsp|member|SlFsGetFileListResponse_t Rsp;
DECL|Rsp|member|SlFsGetInfoResponse_t Rsp;
DECL|Rsp|member|SlFsOpenResponse_t Rsp;
DECL|Rsp|member|SlFsProgramResponse_t Rsp;
DECL|Rsp|member|SlFsReadResponse_t Rsp;
DECL|Rsp|member|SlFsWriteResponse_t Rsp;
DECL|Rsp|member|_BasicResponse_t Rsp;
DECL|_SlFsCloseCmdCtrl|variable|_SlFsCloseCmdCtrl
DECL|_SlFsCloseMsg_u|typedef|}_SlFsCloseMsg_u;
DECL|_SlFsDeleteCmdCtrl|variable|_SlFsDeleteCmdCtrl
DECL|_SlFsDeleteMsg_u|typedef|}_SlFsDeleteMsg_u;
DECL|_SlFsFileSysControlCmdCtrl|variable|_SlFsFileSysControlCmdCtrl
DECL|_SlFsFileSysControlMsg_u|typedef|}_SlFsFileSysControlMsg_u;
DECL|_SlFsGetFileListCmdCtrl|variable|_SlFsGetFileListCmdCtrl
DECL|_SlFsGetFileListMsg_u|typedef|}_SlFsGetFileListMsg_u;
DECL|_SlFsGetInfoCmdCtrl|variable|_SlFsGetInfoCmdCtrl
DECL|_SlFsGetInfoMsg_u|typedef|}_SlFsGetInfoMsg_u;
DECL|_SlFsOpenCmdCtrl|variable|_SlFsOpenCmdCtrl
DECL|_SlFsOpenMsg_u|typedef|}_SlFsOpenMsg_u;
DECL|_SlFsProgrammingCmdCtrl|variable|_SlFsProgrammingCmdCtrl
DECL|_SlFsProgrammingMsg_u|typedef|}_SlFsProgrammingMsg_u;
DECL|_SlFsReadCmdCtrl|variable|_SlFsReadCmdCtrl
DECL|_SlFsReadMsg_u|typedef|}_SlFsReadMsg_u;
DECL|_SlFsStrlen|function|static _u16 _SlFsStrlen(const _u8 *buffer)
DECL|_SlFsWriteCmdCtrl|variable|_SlFsWriteCmdCtrl
DECL|_SlFsWriteMsg_u|typedef|}_SlFsWriteMsg_u;
DECL|sl_FsClose|function|_i16 sl_FsClose(const _i32 FileHdl, const _u8* pCeritificateFileName,const _u8* pSignature ,const _u32 SignatureLen)
DECL|sl_FsCtl|function|_i32 sl_FsCtl( SlFsCtl_e Command, _u32 Token, _u8 *pFileName, const _u8 *pData, _u16 DataLen, _u8 *pOutputData, _u16 OutputDataLen,_u32 *pNewToken )
DECL|sl_FsDel|function|_i16 sl_FsDel(const _u8 *pFileName,const _u32 Token)
DECL|sl_FsGetFileList|function|_i32 sl_FsGetFileList(_i32* pIndex, _u8 Count, _u8 MaxEntryLen , _u8* pBuff, SlFileListFlags_t Flags )
DECL|sl_FsGetInfo|function|_i16 sl_FsGetInfo(const _u8 *pFileName,const _u32 Token,SlFsFileInfo_t* pFsFileInfo)
DECL|sl_FsOpen|function|_i32 sl_FsOpen(const _u8 *pFileName,const _u32 ModeAndMaxSize, _u32 *pToken)
DECL|sl_FsProgram|function|_i32 sl_FsProgram(const _u8* pData , _u16 DataLen ,const _u8 * pKey , _u32 Flags )
DECL|sl_FsRead|function|_i32 sl_FsRead(const _i32 FileHdl,_u32 Offset, _u8* pData,_u32 Len)
DECL|sl_FsWrite|function|_i32 sl_FsWrite(const _i32 FileHdl,_u32 Offset, _u8* pData,_u32 Len)
DECL|sl_min|macro|sl_min
