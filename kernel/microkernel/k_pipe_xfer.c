DECL|CalcChanProcPrio|function|static int CalcChanProcPrio(int iChanDefaultPrio,int iWriterPrio, int iReaderPrio)
DECL|K_ChMovedAck|function|void K_ChMovedAck(struct k_args *pEOXfer)
DECL|K_ChProcRO|function|static void K_ChProcRO(struct pipe_struct *pPipe, struct k_args *pNewReader)
DECL|K_ChProcWO|function|static void K_ChProcWO(struct pipe_struct *pPipe, struct k_args *pNewWriter)
DECL|K_ChProcWR|function|static void K_ChProcWR(struct pipe_struct *pPipe, /* ptr to channel structure */ struct k_args *pNewWriter, /* ptr to new writer struct k_args */ struct k_args *pNewReader /* ptr to new reader struct k_args */ )
DECL|K_ChProc|function|void K_ChProc(struct pipe_struct *pPipe, struct k_args *pNLWriter, struct k_args *pNLReader) /* this is not a K_ function */
DECL|ReaderInProgressIsBlocked|function|static int ReaderInProgressIsBlocked(struct pipe_struct *pPipe, struct k_args *pReader)
DECL|SetChanProcPrio|function|static void SetChanProcPrio(struct k_args *pMvdReq,struct k_args *pContSend, struct k_args *pContRecv, struct k_args *pWriter, struct k_args *pReader)
DECL|WriterInProgressIsBlocked|function|static int WriterInProgressIsBlocked(struct pipe_struct *pPipe, struct k_args *pWriter)
DECL|_UpdateChannelXferStatus|function|static void _UpdateChannelXferStatus(struct k_args *pActor, /* ptr to struct k_args to be used by actor */ struct k_chproc *pActorArgs, /* ptr to actor's channel process structure */ int bytesXferred /* # of bytes transferred */ )
DECL|_X_TO_N|macro|_X_TO_N
DECL|setup_movedata|function|static void setup_movedata(struct k_args *A, struct pipe_struct *pPipe, XFER_TYPE XferType, struct k_args *pWriter, struct k_args *pReader, void *destination, void *source, uint32_t size, int XferID)
