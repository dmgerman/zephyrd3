DECL|_fifo_get|function|void *_fifo_get(struct nano_fifo *fifo, int32_t timeout_in_ticks)
DECL|_fifo_put_non_preemptible|function|void _fifo_put_non_preemptible(struct nano_fifo *fifo, void *data)
DECL|data_q_init|function|static inline void data_q_init(struct _nano_queue *q)
DECL|dequeue_data|function|static inline void *dequeue_data(struct nano_fifo *fifo)
DECL|enqueue_data|function|static inline void enqueue_data(struct nano_fifo *fifo, void *data)
DECL|fifo_node|struct|struct fifo_node {
DECL|is_q_empty|function|static inline int is_q_empty(struct _nano_queue *q)
DECL|nano_fifo_get|function|void *nano_fifo_get(struct nano_fifo *fifo, int32_t timeout)
DECL|nano_fifo_init|function|void nano_fifo_init(struct nano_fifo *fifo)
DECL|nano_fifo_put|function|void nano_fifo_put(struct nano_fifo *fifo, void *data)
DECL|nano_task_fifo_get|function|void *nano_task_fifo_get(struct nano_fifo *fifo, int32_t timeout_in_ticks)
DECL|nano_task_fifo_put|function|void nano_task_fifo_put(struct nano_fifo *fifo, void *data)
DECL|next|member|void *next;
