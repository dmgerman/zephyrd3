DECL|MAX_BUFFER_CONTEXT_DATA|macro|MAX_BUFFER_CONTEXT_DATA
DECL|RANDOM|macro|RANDOM
DECL|STSIZE|macro|STSIZE
DECL|TEST_EVENT_ID|macro|TEST_EVENT_ID
DECL|context_switch_data_t|struct|struct context_switch_data_t {
DECL|context_switch_summary_data|variable|context_switch_summary_data
DECL|count|member|uint32_t count;
DECL|forks|variable|forks
DECL|last_time_executed|member|uint32_t last_time_executed;
DECL|main|function|int main(void)
DECL|philStack|variable|philStack
DECL|print_context_data|function|void print_context_data(uint32_t thread_id, uint32_t count,uint32_t last_time_executed, int indice)
DECL|profiler_demo|function|void profiler_demo(void)
DECL|profiler_fiber_start|function|void profiler_fiber_start(void)
DECL|profiler_stack|variable|profiler_stack
DECL|profiling_data_collector|function|void profiling_data_collector(void)
DECL|register_context_switch_data|function|void register_context_switch_data(uint32_t timestamp, uint32_t thread_id)
DECL|summary_data_printer|function|void summary_data_printer(void)
DECL|sys_profiler|variable|sys_profiler
DECL|thread_id|member|uint32_t thread_id;
DECL|total_dropped_counter|variable|total_dropped_counter
