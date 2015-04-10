DECL|_TimerStart|function|void _TimerStart(struct nano_timer *timer, /* timer to start */ int ticks /* number of system ticks before expiry */ )
DECL|_TimerStop|function|static void _TimerStop(struct nano_timer *timer /* timer to stop */ )
DECL|nano_fiber_timer_stop|function|void nano_fiber_timer_stop(struct nano_timer *timer /* timer to stop */)
DECL|nano_fiber_timer_test|function|void *nano_fiber_timer_test(struct nano_timer *timer /* timer to check */)
DECL|nano_fiber_timer_wait|function|void *nano_fiber_timer_wait(struct nano_timer *timer /* timer to pend on */ )
DECL|nano_task_timer_stop|function|void nano_task_timer_stop(struct nano_timer *timer /* timer to stop */ )
DECL|nano_task_timer_test|function|void *nano_task_timer_test(struct nano_timer *timer /* timer to check */ )
DECL|nano_task_timer_wait|function|void *nano_task_timer_wait(struct nano_timer *timer /* timer to pend on */)
DECL|nano_timer_init|function|void nano_timer_init(struct nano_timer *timer, void *userData)
