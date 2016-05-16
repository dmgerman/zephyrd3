DECL|nano_delayed_work_cancel|function|int nano_delayed_work_cancel(struct nano_delayed_work *work)
DECL|nano_delayed_work_init|function|void nano_delayed_work_init(struct nano_delayed_work *work, work_handler_t handler)
DECL|nano_delayed_work_submit_to_queue|function|int nano_delayed_work_submit_to_queue(struct nano_workqueue *wq, struct nano_delayed_work *work, int ticks)
DECL|nano_fiber_workqueue_start|function|void nano_fiber_workqueue_start(struct nano_workqueue *wq,const struct fiber_config *config)
DECL|nano_task_workqueue_start|function|void nano_task_workqueue_start(struct nano_workqueue *wq, const struct fiber_config *config)
DECL|nano_workqueue_start|function|void nano_workqueue_start(struct nano_workqueue *wq, const struct fiber_config *config)
DECL|sys_workqueue_init|function|static int sys_workqueue_init(struct device *dev)
DECL|sys_workqueue|variable|sys_workqueue
DECL|sys_wq_config|variable|sys_wq_config
DECL|sys_wq_stack|variable|sys_wq_stack
DECL|work_timeout|function|static void work_timeout(struct _nano_timeout *t)
DECL|workqueue_fiber_main|function|static void workqueue_fiber_main(int arg1, int arg2)
