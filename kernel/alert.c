DECL|Z_SYSCALL_HANDLER|function|Z_SYSCALL_HANDLER(k_alert_recv, alert, timeout)
DECL|_alert_deliver|function|void _alert_deliver(struct k_work *work)
DECL|_impl_k_alert_recv|function|int _impl_k_alert_recv(struct k_alert *alert, s32_t timeout)
DECL|_impl_k_alert_send|function|void _impl_k_alert_send(struct k_alert *alert)
DECL|_trace_list_k_alert|variable|_trace_list_k_alert
DECL|init_alert_module|function|static int init_alert_module(struct device *dev)
DECL|k_alert_init|function|void k_alert_init(struct k_alert *alert, k_alert_handler_t handler, unsigned int max_num_pending_alerts)
