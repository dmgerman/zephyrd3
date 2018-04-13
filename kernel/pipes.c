DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_pipe_alloc_init, pipe, size)
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_pipe_get, pipe, data, bytes_to_read, bytes_read_p, min_xfer_p, timeout)
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(k_pipe_put, pipe, data, bytes_to_write, bytes_written_p, min_xfer_p, timeout)
DECL|_impl_k_pipe_alloc_init|function|int _impl_k_pipe_alloc_init(struct k_pipe *pipe, size_t size)
DECL|_impl_k_pipe_get|function|int _impl_k_pipe_get(struct k_pipe *pipe, void *data, size_t bytes_to_read, size_t *bytes_read, size_t min_xfer, s32_t timeout)
DECL|_impl_k_pipe_put|function|int _impl_k_pipe_put(struct k_pipe *pipe, void *data, size_t bytes_to_write, size_t *bytes_written, size_t min_xfer, s32_t timeout)
DECL|_k_pipe_put_internal|function|int _k_pipe_put_internal(struct k_pipe *pipe, struct k_pipe_async *async_desc, unsigned char *data, size_t bytes_to_write, size_t *bytes_written, size_t min_xfer, s32_t timeout)
DECL|_trace_list_k_pipe|variable|_trace_list_k_pipe
DECL|async_msg|variable|async_msg
DECL|block|member|struct k_mem_block *block; /* Pointer to memory block */
DECL|buffer|member|unsigned char *buffer; /* Position in src/dest buffer */
DECL|bytes_to_xfer|member|size_t bytes_to_xfer; /* # bytes left to transfer */
DECL|copy_block|member|struct k_mem_block copy_block; /* For backwards compatibility */
DECL|desc|member|struct k_pipe_desc desc; /* Pipe message descriptor */
DECL|init_pipes_module|function|static int init_pipes_module(struct device *dev)
DECL|k_pipe_async|struct|struct k_pipe_async {
DECL|k_pipe_block_put|function|void k_pipe_block_put(struct k_pipe *pipe, struct k_mem_block *block, size_t bytes_to_write, struct k_sem *sem)
DECL|k_pipe_cleanup|function|void k_pipe_cleanup(struct k_pipe *pipe)
DECL|k_pipe_desc|struct|struct k_pipe_desc {
DECL|k_pipe_init|function|void k_pipe_init(struct k_pipe *pipe, unsigned char *buffer, size_t size)
DECL|pipe_async_alloc|function|static void pipe_async_alloc(struct k_pipe_async **async)
DECL|pipe_async_finish|function|static void pipe_async_finish(struct k_pipe_async *async_desc)
DECL|pipe_async_free|function|static void pipe_async_free(struct k_pipe_async *async)
DECL|pipe_buffer_get|function|static size_t pipe_buffer_get(struct k_pipe *pipe, unsigned char *dest, size_t dest_size)
DECL|pipe_buffer_put|function|static size_t pipe_buffer_put(struct k_pipe *pipe, const unsigned char *src, size_t src_size)
DECL|pipe_return_code|function|static int pipe_return_code(size_t min_xfer, size_t bytes_remaining, size_t bytes_requested)
DECL|pipe_thread_ready|function|static void pipe_thread_ready(struct k_thread *thread)
DECL|pipe_xfer_prepare|function|static bool pipe_xfer_prepare(sys_dlist_t *xfer_list, struct k_thread **waiter, _wait_q_t *wait_q, size_t pipe_space, size_t bytes_to_xfer,
DECL|pipe_xfer|function|static size_t pipe_xfer(unsigned char *dest, size_t dest_size, const unsigned char *src, size_t src_size)
DECL|sem|member|struct k_sem *sem; /* Semaphore to give if async */
DECL|thread|member|struct _thread_base thread; /* Dummy thread object */
