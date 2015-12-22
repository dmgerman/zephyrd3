DECL|_nano_timer_list|variable|_nano_timer_list
DECL|_timer_start|function|void _timer_start(struct nano_timer *timer, /* timer to start */ int ticks /* number of system ticks * before expiry */ )
DECL|_timer_stop_non_preemptible|function|void _timer_stop_non_preemptible(struct nano_timer *timer)
DECL|_timer_stop|function|static void _timer_stop(struct nano_timer *timer)
DECL|nano_task_timer_stop|function|void nano_task_timer_stop(struct nano_timer *timer)
DECL|nano_timer_init|function|void nano_timer_init(struct nano_timer *timer, void *data)
DECL|nano_timer_stop|function|void nano_timer_stop(struct nano_timer *timer)
