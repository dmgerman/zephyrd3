DECL|_SysIdleElapsedTicksGet|function|static inline int32_t _SysIdleElapsedTicksGet(void)
DECL|_TimeSliceUpdate|function|static inline void _TimeSliceUpdate(void)
DECL|_TlDebugUpdate|function|static inline int _TlDebugUpdate(int32_t ticks)
DECL|_TlDebugUpdate|macro|_TlDebugUpdate
DECL|_do_sys_clock_tick_announce|variable|_do_sys_clock_tick_announce
DECL|_k_debug_sys_clock_tick_count|variable|_k_debug_sys_clock_tick_count
DECL|_k_ticker|function|int _k_ticker(int event)
DECL|_sys_clock_microkernel_handler_install|function|static int _sys_clock_microkernel_handler_install(struct device *dev)
DECL|_sys_clock_tick_announce_pre_micro|function|static void _sys_clock_tick_announce_pre_micro(kevent_t e)
DECL|_sys_idle_elapsed_ticks|variable|_sys_idle_elapsed_ticks
DECL|slice_count|variable|slice_count
DECL|slice_prio|variable|slice_prio
DECL|slice_time|variable|slice_time
DECL|sys_scheduler_time_slice_set|function|void sys_scheduler_time_slice_set(int32_t t, kpriority_t p)
