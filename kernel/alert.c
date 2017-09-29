DECL|_alert_deliver|function|void _alert_deliver(struct k_work *work)
DECL|_handler_k_alert_recv|function|u32_t _handler_k_alert_recv(u32_t alert, u32_t timeout, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_handler_k_alert_send|function|u32_t _handler_k_alert_send(u32_t alert, u32_t arg2, u32_t arg3, u32_t arg4, u32_t arg5, u32_t arg6, void *ssf)
DECL|_impl_k_alert_recv|function|int _impl_k_alert_recv(struct k_alert *alert, s32_t timeout)
DECL|_impl_k_alert_send|function|void _impl_k_alert_send(struct k_alert *alert)
DECL|_trace_list_k_alert|variable|_trace_list_k_alert
DECL|init_alert_module|function|static int init_alert_module(struct device *dev)
DECL|k_alert_init|function|void k_alert_init(struct k_alert *alert, k_alert_handler_t handler, unsigned int max_num_pending_alerts)
