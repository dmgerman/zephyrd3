DECL|KERNEL_EVENT_LOGGER_CONTEXT_SWITCH_EVENT_ID|macro|KERNEL_EVENT_LOGGER_CONTEXT_SWITCH_EVENT_ID
DECL|KERNEL_EVENT_LOGGER_INTERRUPT_EVENT_ID|macro|KERNEL_EVENT_LOGGER_INTERRUPT_EVENT_ID
DECL|KERNEL_EVENT_LOGGER_SLEEP_EVENT_ID|macro|KERNEL_EVENT_LOGGER_SLEEP_EVENT_ID
DECL|__KERNEL_EVENT_LOGGER_H__|macro|__KERNEL_EVENT_LOGGER_H__
DECL|_sys_k_event_logger_enter_sleep|function|static inline void _sys_k_event_logger_enter_sleep(void) {};
DECL|_sys_k_event_logger_interrupt|function|static inline void _sys_k_event_logger_interrupt(void) {};
DECL|_sys_k_get_time|macro|_sys_k_get_time
DECL|sys_k_event_logger_get_mask|function|static inline int sys_k_event_logger_get_mask(void)
DECL|sys_k_event_logger_get_wait_timeout|function|static inline int sys_k_event_logger_get_wait_timeout(uint16_t *event_id,uint8_t *dropped, uint32_t *event_data, uint8_t *data_size, uint32_t timeout)
DECL|sys_k_event_logger_get_wait|function|static inline int sys_k_event_logger_get_wait(uint16_t *event_id,uint8_t *dropped, uint32_t *event_data, uint8_t *data_size)
DECL|sys_k_event_logger_get|function|static inline int sys_k_event_logger_get(uint16_t *event_id, uint8_t *dropped, uint32_t *event_data, uint8_t *data_size)
DECL|sys_k_event_logger_put_timed|function|static inline void sys_k_event_logger_put_timed(uint16_t event_id) {};
DECL|sys_k_event_logger_put|function|static inline void sys_k_event_logger_put(uint16_t event_id, uint32_t *event_data, uint8_t data_size)
DECL|sys_k_event_logger_register_as_collector|function|static inline void sys_k_event_logger_register_as_collector(void) {};
DECL|sys_k_event_logger_set_mask|function|static inline void sys_k_event_logger_set_mask(int value)
DECL|sys_k_event_logger_set_timer|function|static inline void sys_k_event_logger_set_timer(sys_k_timer_func_t func)
DECL|sys_k_must_log_event|function|static inline int sys_k_must_log_event(int event_type)
DECL|sys_k_timer_func_t|typedef|typedef uint32_t (*sys_k_timer_func_t)(void);
