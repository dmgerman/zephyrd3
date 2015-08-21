DECL|MAX_BUFFER_CONTEXT_DATA|macro|MAX_BUFFER_CONTEXT_DATA
DECL|RANDOM|macro|RANDOM
DECL|STSIZE|macro|STSIZE
DECL|TEST_EVENT_ID|macro|TEST_EVENT_ID
DECL|awake_cause|member|uint32_t awake_cause;
DECL|busy_task_entry|function|void busy_task_entry(void)
DECL|context_switch_data_t|struct|struct context_switch_data_t {
DECL|context_switch_summary_data|variable|context_switch_summary_data
DECL|count|member|uint32_t count;
DECL|fork_manager_entry|function|void fork_manager_entry(void)
DECL|forks_available|variable|forks_available
DECL|forks|variable|forks
DECL|interrupt_counters|variable|interrupt_counters
DECL|is_busy_task_awake|variable|is_busy_task_awake
DECL|last_duration|member|uint32_t last_duration;
DECL|last_time_executed|member|uint32_t last_time_executed;
DECL|last_time_slept|member|uint32_t last_time_slept;
DECL|main|function|int main(void)
DECL|philStack|variable|philStack
DECL|print_context_data|function|void print_context_data(uint32_t thread_id, uint32_t count,uint32_t last_time_executed, int indice)
DECL|profiler_demo|function|void profiler_demo(void)
DECL|profiler_fiber_start|function|void profiler_fiber_start(void)
DECL|profiler_stack|variable|profiler_stack
DECL|profiling_data_collector|function|void profiling_data_collector(void)
DECL|register_context_switch_data|function|void register_context_switch_data(uint32_t timestamp, uint32_t thread_id)
DECL|register_interrupt_event_data|function|void register_interrupt_event_data(uint32_t timestamp, uint32_t irq)
DECL|register_sleep_event_data|function|void register_sleep_event_data(uint32_t time_start, uint32_t duration,uint32_t cause)
DECL|sleep_data_t|struct|struct sleep_data_t {
DECL|sleep_event_data|variable|sleep_event_data
DECL|summary_data_printer|function|void summary_data_printer(void)
DECL|thread_id|member|uint32_t thread_id;
DECL|total_dropped_counter|variable|total_dropped_counter
