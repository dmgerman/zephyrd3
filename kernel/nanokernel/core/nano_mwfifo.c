DECL|_FifoGet|function|void *_FifoGet(struct nano_fifo *chan /* channel on which to interact */ )
DECL|_fifo_put|function|void _fifo_put(struct nano_fifo *chan, /* channel on which to interact */ void *data /* data to send */ )
DECL|nano_fiber_fifo_get_wait|function|void *nano_fiber_fifo_get_wait(struct nano_fifo *chan /* channel on which to interact */ )
DECL|nano_fifo_init|function|void nano_fifo_init(struct nano_fifo *chan /* channel to initialize */ )
DECL|nano_task_fifo_get_wait|function|void *nano_task_fifo_get_wait(struct nano_fifo *chan /* channel on which to interact */ )
DECL|nano_task_fifo_put|function|void nano_task_fifo_put(struct nano_fifo *chan, /* channel on which to interact */ void *data /* data to send */ )
