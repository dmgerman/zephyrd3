DECL|DELAY_US|macro|DELAY_US
DECL|EQUAL_PRIORITY|macro|EQUAL_PRIORITY
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|T2_STACK_SIZE|macro|T2_STACK_SIZE
DECL|THREADS_NUM|macro|THREADS_NUM
DECL|THREAD_DELAY|macro|THREAD_DELAY
DECL|TIMEOUT|macro|TIMEOUT
DECL|TIME_SLICE_MS|macro|TIME_SLICE_MS
DECL|abort_threads|function|static void abort_threads(int num)
DECL|check_wokeup_threads|function|static void check_wokeup_threads(int tnum)
DECL|child_fn|function|static void child_fn(void *p1, void *p2, void *p3)
DECL|cleanup_resources|function|static void cleanup_resources(void)
DECL|cpu_id|member|int cpu_id;
DECL|executed|member|int executed;
DECL|pending|variable|pending
DECL|priority|member|int priority;
DECL|spawn_threads|function|static void spawn_threads(int prio, int thread_num, int equal_prio, k_thread_entry_t thread_entry, int delay)
DECL|sync_count|variable|sync_count
DECL|t2_count|variable|t2_count
DECL|t2_fn|function|static void t2_fn(void *a, void *b, void *c)
DECL|t2|variable|t2
DECL|test_coop_resched_threads|function|void test_coop_resched_threads(void)
DECL|test_cpu_id_threads|function|void test_cpu_id_threads(void)
DECL|test_main|function|void test_main(void)
DECL|test_preempt_resched_threads|function|void test_preempt_resched_threads(void)
DECL|test_sleep_threads|function|void test_sleep_threads(void)
DECL|test_smp_coop_threads|function|void test_smp_coop_threads(void)
DECL|test_wakeup_pending_threads|function|void test_wakeup_pending_threads(void)
DECL|test_wakeup_threads|function|void test_wakeup_threads(void)
DECL|test_yield_threads|function|void test_yield_threads(void)
DECL|thread_entry|function|static void thread_entry(void *p1, void *p2, void *p3)
DECL|thread_info|struct|struct thread_info {
DECL|thread_started|variable|thread_started
DECL|thread_wakeup_entry|function|static void thread_wakeup_entry(void *p1, void *p2, void *p3)
DECL|tid|member|k_tid_t tid;
DECL|tinfo|variable|tinfo
DECL|tthread|variable|tthread
DECL|wakeup_on_start_thread|function|static void wakeup_on_start_thread(int tnum)
