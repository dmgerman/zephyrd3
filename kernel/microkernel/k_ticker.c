DECL|_SysIdleElapsedTicksGet|function|static inline int32_t _SysIdleElapsedTicksGet(void)
DECL|_TimeSliceUpdate|function|static inline void _TimeSliceUpdate(void)
DECL|_TlDebugUpdate|function|static inline int _TlDebugUpdate(int32_t ticks)
DECL|_TlDebugUpdate|macro|_TlDebugUpdate
DECL|_k_debug_sys_clock_tick_count|variable|_k_debug_sys_clock_tick_count
DECL|_k_sys_clock_tick_count|variable|_k_sys_clock_tick_count
DECL|_k_ticker|function|int _k_ticker(int event)
DECL|_k_time_elapse|function|void _k_time_elapse(struct k_args *P)
DECL|_sys_idle_elapsed_ticks|variable|_sys_idle_elapsed_ticks
DECL|slice_count|variable|slice_count
DECL|slice_prio|variable|slice_prio
DECL|slice_time|variable|slice_time
DECL|sys_clock_increment|function|static void sys_clock_increment(int inc)
DECL|sys_scheduler_time_slice_set|function|void sys_scheduler_time_slice_set(int32_t t, kpriority_t p)
DECL|task_tick_delta|function|int64_t task_tick_delta(int64_t *reftime /* pointer to reference time */)
DECL|task_tick_get_32|function|int32_t task_tick_get_32(void)
DECL|task_tick_get|function|int64_t task_tick_get(void)
