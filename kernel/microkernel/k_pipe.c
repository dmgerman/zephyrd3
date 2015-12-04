DECL|_k_pipe_init|function|void _k_pipe_init(void)
DECL|_task_pipe_block_put|function|int _task_pipe_block_put(kpipe_t Id, struct k_block Block,int iReqSize2Xfer, ksem_t sema)
DECL|task_pipe_get|function|int task_pipe_get(kpipe_t id, void *buffer,int bytes_to_read, int *bytes_read, K_PIPE_OPTION options, int32_t timeout)
DECL|task_pipe_put|function|int task_pipe_put(kpipe_t id, void *buffer,int bytes_to_write, int *bytes_written, K_PIPE_OPTION options, int32_t timeout)
