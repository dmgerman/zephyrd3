DECL|FORCE_XFER_ON_STALL|macro|FORCE_XFER_ON_STALL
DECL|ReaderInProgressIsBlocked|function|static int ReaderInProgressIsBlocked(struct pipe_struct *pPipe, struct k_args *pReader)
DECL|WriterInProgressIsBlocked|function|static int WriterInProgressIsBlocked(struct pipe_struct *pPipe, struct k_args *pWriter)
DECL|_X_TO_N|macro|_X_TO_N
DECL|_k_pipe_movedata_ack|function|void _k_pipe_movedata_ack(struct k_args *pEOXfer)
DECL|_k_pipe_process|function|void _k_pipe_process(struct pipe_struct *pPipe, struct k_args *pNLWriter, struct k_args *pNLReader)
DECL|move_priority_compute|function|static kpriority_t move_priority_compute(struct k_args *pWriter, struct k_args *pReader)
DECL|pipe_read_write|function|static void pipe_read_write(struct pipe_struct *pPipe, /* ptr to channel structure */ struct k_args *pNewWriter, /* ptr to new writer struct k_args */ struct k_args *pNewReader /* ptr to new reader struct k_args */ )
DECL|pipe_read|function|static void pipe_read(struct pipe_struct *pPipe, struct k_args *pNewReader)
DECL|pipe_write|function|static void pipe_write(struct pipe_struct *pPipe, struct k_args *pNewWriter)
DECL|pipe_xfer_status_update|function|static void pipe_xfer_status_update(struct k_args *pActor, /* ptr to struct k_args to be used by actor */ struct _pipe_xfer_req_arg *pipe_xfer_req, /* ptr to actor's channel process structure */ int bytesXferred /* # of bytes transferred */ )
DECL|setup_movedata|function|static void setup_movedata(struct k_args *A, struct pipe_struct *pPipe, XFER_TYPE XferType, struct k_args *pWriter, struct k_args *pReader, void *destination, void *source, uint32_t size, int XferID)
