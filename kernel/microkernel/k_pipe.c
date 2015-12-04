DECL|_k_pipe_init|function|void _k_pipe_init(void)
DECL|_task_pipe_block_put|function|int _task_pipe_block_put(kpipe_t Id, struct k_block Block,int iReqSize2Xfer, ksem_t sema)
DECL|_task_pipe_get|function|int _task_pipe_get(kpipe_t Id, void *pBuffer,int iNbrBytesToRead, int *piNbrBytesRead, K_PIPE_OPTION Option, int32_t TimeOut)
DECL|task_pipe_put|function|int task_pipe_put(kpipe_t id, void *buffer,int bytes_to_write, int *bytes_written, K_PIPE_OPTION options, int32_t timeout)
