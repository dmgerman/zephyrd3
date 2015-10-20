DECL|FORCE_XFER_ON_STALL|macro|FORCE_XFER_ON_STALL
DECL|ReaderInProgressIsBlocked|function|static int ReaderInProgressIsBlocked(struct _k_pipe_struct *pipe_ptr, struct k_args *reader_ptr)
DECL|WriterInProgressIsBlocked|function|static int WriterInProgressIsBlocked(struct _k_pipe_struct *pipe_ptr, struct k_args *writer_ptr)
DECL|_X_TO_N|macro|_X_TO_N
DECL|_k_pipe_movedata_ack|function|void _k_pipe_movedata_ack(struct k_args *pEOXfer)
DECL|_k_pipe_process|function|void _k_pipe_process(struct _k_pipe_struct *pipe_ptr, struct k_args *pNLWriter, struct k_args *pNLReader)
DECL|move_priority_compute|function|static kpriority_t move_priority_compute(struct k_args *writer_ptr, struct k_args *reader_ptr)
DECL|pipe_read_write|function|static void pipe_read_write(struct _k_pipe_struct *pipe_ptr, struct k_args *pNewWriter, struct k_args *pNewReader)
DECL|pipe_read|function|static void pipe_read(struct _k_pipe_struct *pipe_ptr, struct k_args *pNewReader)
DECL|pipe_write|function|static void pipe_write(struct _k_pipe_struct *pipe_ptr, struct k_args *pNewWriter)
DECL|pipe_xfer_status_update|function|static void pipe_xfer_status_update(struct k_args *pActor, struct _pipe_xfer_req_arg *pipe_xfer_req, int bytesXferred)
DECL|setup_movedata|function|static void setup_movedata(struct k_args *A, struct _k_pipe_struct *pipe_ptr, XFER_TYPE xfer_type, struct k_args *writer_ptr, struct k_args *reader_ptr, void *destination, void *source, uint32_t size, int XferID)
