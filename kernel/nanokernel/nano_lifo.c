DECL|_lifo_get|function|void *_lifo_get(struct nano_lifo *lifo /* lifo on which to receive */ )
DECL|_lifo_put|function|void _lifo_put(struct nano_lifo *lifo, /* lifo on which to put */ void *data/* data to insert */ )
DECL|nano_fiber_lifo_get_wait|function|void *nano_fiber_lifo_get_wait(struct nano_lifo *lifo /* lifo on which to receive */ )
DECL|nano_lifo_init|function|void nano_lifo_init(struct nano_lifo *lifo /* lifo to initialize */ )
DECL|nano_task_lifo_get_wait|function|void *nano_task_lifo_get_wait(struct nano_lifo *lifo /* lifo on which to interact */ )
DECL|nano_task_lifo_put|function|void nano_task_lifo_put(struct nano_lifo *lifo, /* lifo on which to put */ void *data/* data to insert */ )
