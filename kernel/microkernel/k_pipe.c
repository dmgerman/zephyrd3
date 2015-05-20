DECL|_pipe_init|function|void _pipe_init(void)
DECL|_task_pipe_get|function|int _task_pipe_get(kpipe_t Id, void *pBuffer, int iNbrBytesToRead, int *piNbrBytesRead, K_PIPE_OPTION Option, int32_t TimeOut)
DECL|_task_pipe_put_async|function|int _task_pipe_put_async(kpipe_t Id, struct k_block Block, int iReqSize2Xfer, ksem_t Sema)
DECL|_task_pipe_put|function|int _task_pipe_put(kpipe_t Id, void *pBuffer, int iNbrBytesToWrite, int *piNbrBytesWritten, K_PIPE_OPTION Option, int32_t TimeOut)
