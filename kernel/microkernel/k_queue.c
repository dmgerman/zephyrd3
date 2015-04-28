DECL|K_deqreq|function|void K_deqreq(struct k_args *A)
DECL|K_deqrpl|function|void K_deqrpl(struct k_args *A)
DECL|K_enqreq|function|void K_enqreq(struct k_args *A)
DECL|K_queue|function|void K_queue(struct k_args *A)
DECL|_k_fifo_enque_reply|function|void _k_fifo_enque_reply(struct k_args *A)
DECL|_task_fifo_get|function|int _task_fifo_get(kfifo_t queue, /* FIFO queue */void *data, /* where to store FIFO entry */ int32_t time /* maximum number of ticks to wait */ )
DECL|_task_fifo_ioctl|function|int _task_fifo_ioctl(kfifo_t queue, /* FIFO queue */ int op/* 0: status query
DECL|_task_fifo_put|function|int _task_fifo_put(kfifo_t queue, /* FIFO queue */void *data, /* ptr to data to add to queue */ int32_t time /* maximum number of ticks to wait */ )
