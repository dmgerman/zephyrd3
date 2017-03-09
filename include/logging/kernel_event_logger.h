DECL|KERNEL_EVENT_LOGGER_CONTEXT_SWITCH_EVENT_ID|macro|KERNEL_EVENT_LOGGER_CONTEXT_SWITCH_EVENT_ID
DECL|KERNEL_EVENT_LOGGER_INTERRUPT_EVENT_ID|macro|KERNEL_EVENT_LOGGER_INTERRUPT_EVENT_ID
DECL|KERNEL_EVENT_LOGGER_SLEEP_EVENT_ID|macro|KERNEL_EVENT_LOGGER_SLEEP_EVENT_ID
DECL|KERNEL_EVENT_LOGGER_THREAD_EVENT_ID|macro|KERNEL_EVENT_LOGGER_THREAD_EVENT_ID
DECL|KERNEL_LOG_THREAD_EVENT_EXIT|enumerator|KERNEL_LOG_THREAD_EVENT_EXIT,
DECL|KERNEL_LOG_THREAD_EVENT_PEND|enumerator|KERNEL_LOG_THREAD_EVENT_PEND,
DECL|KERNEL_LOG_THREAD_EVENT_READYQ|enumerator|KERNEL_LOG_THREAD_EVENT_READYQ,
DECL|__KERNEL_EVENT_LOGGER_H__|macro|__KERNEL_EVENT_LOGGER_H__
DECL|_sys_k_event_logger_enter_sleep|function|static inline void _sys_k_event_logger_enter_sleep(void) {}
DECL|_sys_k_event_logger_exit_sleep|function|static inline void _sys_k_event_logger_exit_sleep(void) {}
DECL|_sys_k_event_logger_interrupt|function|static inline void _sys_k_event_logger_interrupt(void) {}
DECL|_sys_k_event_logger_thread_create|function|static inline void _sys_k_event_logger_thread_create(void *thread) {}
DECL|_sys_k_event_logger_thread_exit|function|static inline void _sys_k_event_logger_thread_exit(void *thread) {}
DECL|_sys_k_event_logger_thread_pend|function|static inline void _sys_k_event_logger_thread_pend(void *thread) {}
DECL|_sys_k_event_logger_thread_ready|function|static inline void _sys_k_event_logger_thread_ready(void *thread) {}
DECL|_sys_k_get_time|macro|_sys_k_get_time
DECL|sys_k_event_logger_get_mask|function|static inline int sys_k_event_logger_get_mask(void)
DECL|sys_k_event_logger_get_wait_timeout|function|static inline int sys_k_event_logger_get_wait_timeout(u16_t *event_id,u8_t *dropped, u32_t *event_data, u8_t *data_size, u32_t timeout)
DECL|sys_k_event_logger_get_wait|function|static inline int sys_k_event_logger_get_wait(u16_t *event_id,u8_t *dropped, u32_t *event_data, u8_t *data_size)
DECL|sys_k_event_logger_get|function|static inline int sys_k_event_logger_get(u16_t *event_id, u8_t *dropped, u32_t *event_data, u8_t *data_size)
DECL|sys_k_event_logger_put_timed|function|static inline void sys_k_event_logger_put_timed(u16_t event_id)
DECL|sys_k_event_logger_put|function|static inline void sys_k_event_logger_put(u16_t event_id, u32_t *event_data, u8_t data_size)
DECL|sys_k_event_logger_register_as_collector|function|static inline void sys_k_event_logger_register_as_collector(void) {};
DECL|sys_k_event_logger_set_mask|function|static inline void sys_k_event_logger_set_mask(int value)
DECL|sys_k_event_logger_set_timer|function|static inline void sys_k_event_logger_set_timer(sys_k_timer_func_t func)
DECL|sys_k_event_logger_thread_event|enum|enum sys_k_event_logger_thread_event {
DECL|sys_k_must_log_event|function|static inline int sys_k_must_log_event(int event_type)
DECL|sys_k_timer_func_t|typedef|typedef u32_t (*sys_k_timer_func_t)(void);
