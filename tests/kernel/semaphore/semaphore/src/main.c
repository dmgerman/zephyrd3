DECL|SEM_INIT_VAL|macro|SEM_INIT_VAL
DECL|SEM_MAX_VAL|macro|SEM_MAX_VAL
DECL|SEM_TIMEOUT|macro|SEM_TIMEOUT
DECL|STACK_SIZE|macro|STACK_SIZE
DECL|TOTAL_THREADS_WAITING|macro|TOTAL_THREADS_WAITING
DECL|isr_sem_give|function|void isr_sem_give(void *semaphore)
DECL|isr_sem_take|function|void isr_sem_take(void *semaphore)
DECL|multiple_tid|variable|multiple_tid
DECL|sem_give_from_isr|macro|sem_give_from_isr
DECL|sem_give_task|function|void sem_give_task(void *p1, void *p2, void *p3)
DECL|sem_take_from_isr|macro|sem_take_from_isr
DECL|sem_take_multiple_high_prio_helper|function|void sem_take_multiple_high_prio_helper(void *p1, void *p2, void *p3)
DECL|sem_take_multiple_low_prio_helper|function|void sem_take_multiple_low_prio_helper(void *p1, void *p2, void *p3)
DECL|sem_take_multiple_mid_prio_helper|function|void sem_take_multiple_mid_prio_helper(void *p1, void *p2, void *p3)
DECL|sem_take_timeout_forever_helper|function|void sem_take_timeout_forever_helper(void *p1, void *p2, void *p3)
DECL|sem_take_timeout_isr_helper|function|void sem_take_timeout_isr_helper(void *p1, void *p2, void *p3)
DECL|sem_tid_1|variable|sem_tid_1
DECL|sem_tid_2|variable|sem_tid_2
DECL|sem_tid|variable|sem_tid
DECL|sema|member|struct k_sem *sema;
DECL|test_main|function|void test_main(void)
DECL|test_sem_give_take_from_isr|function|void test_sem_give_take_from_isr(void)
DECL|test_sem_measure_timeout_from_thread_helper|function|void test_sem_measure_timeout_from_thread_helper(void *p1, void *p2, void *p3)
DECL|test_sem_measure_timeout_from_thread|function|void test_sem_measure_timeout_from_thread(void)
DECL|test_sem_measure_timeouts|function|void test_sem_measure_timeouts(void)
DECL|test_sem_multi_take_timeout_diff_sem_helper|function|void test_sem_multi_take_timeout_diff_sem_helper(void *timeout, void *sema, void *p3)
DECL|test_sem_multi_take_timeout_diff_sem|function|void test_sem_multi_take_timeout_diff_sem(void)
DECL|test_sem_multiple_take_and_timeouts_helper|function|void test_sem_multiple_take_and_timeouts_helper(void *timeout,void *p2, void *p3)
DECL|test_sem_multiple_take_and_timeouts|function|void test_sem_multiple_take_and_timeouts(void)
DECL|test_sem_multiple_threads_wait_helper|function|void test_sem_multiple_threads_wait_helper(void *p1, void *p2, void *p3)
DECL|test_sem_multiple_threads_wait|function|void test_sem_multiple_threads_wait(void)
DECL|test_sem_take_multiple|function|void test_sem_take_multiple(void)
DECL|test_sem_take_no_wait_fails|function|void test_sem_take_no_wait_fails(void)
DECL|test_sem_take_no_wait|function|void test_sem_take_no_wait(void)
DECL|test_sem_take_timeout_fails|function|void test_sem_take_timeout_fails(void)
DECL|test_sem_take_timeout_forever|function|void test_sem_take_timeout_forever(void)
DECL|test_sem_take_timeout_isr|function|void test_sem_take_timeout_isr(void)
DECL|test_sem_take_timeout|function|void test_sem_take_timeout(void)
DECL|test_simple_sem_from_isr|function|void test_simple_sem_from_isr(void)
DECL|test_simple_sem_from_task|function|void test_simple_sem_from_task(void)
DECL|timeout_info|struct|struct timeout_info {
DECL|timeout|member|u32_t timeout;
