DECL|k_offload_work_q_init|function|static int k_offload_work_q_init(struct device *dev)
DECL|offload_args|member|void *offload_args;
DECL|offload_func|member|int (*offload_func)();
DECL|offload_handler|function|static void offload_handler(struct k_work *work)
DECL|offload_work_q_config|variable|offload_work_q_config
DECL|offload_work_q_stack|variable|offload_work_q_stack
DECL|offload_work_q|variable|offload_work_q
DECL|offload_work|struct|struct offload_work {
DECL|task_offload_to_fiber|function|int task_offload_to_fiber(int (*func)(), void *argp)
DECL|thread|member|struct tcs *thread;
DECL|work_item|member|struct k_work work_item;
