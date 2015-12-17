DECL|_lifo_get|function|void *_lifo_get(struct nano_lifo *lifo, int32_t timeout_in_ticks)
DECL|_lifo_put_non_preemptible|function|void _lifo_put_non_preemptible(struct nano_lifo *lifo, void *data)
DECL|_nano_fiber_lifo_get_panic|function|void *_nano_fiber_lifo_get_panic(struct nano_lifo *lifo)
DECL|nano_lifo_get|function|void *nano_lifo_get(struct nano_lifo *lifo, int32_t timeout)
DECL|nano_lifo_init|function|void nano_lifo_init(struct nano_lifo *lifo)
DECL|nano_lifo_put|function|void nano_lifo_put(struct nano_lifo *lifo, void *data)
DECL|nano_task_lifo_get|function|void *nano_task_lifo_get(struct nano_lifo *lifo, int32_t timeout_in_ticks)
DECL|nano_task_lifo_put|function|void nano_task_lifo_put(struct nano_lifo *lifo, void *data)
