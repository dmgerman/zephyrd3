DECL|ABORTED|enumerator|enum {NOTUSED = 0, USED, ABORTING, ABORTED, FAILED} state;
DECL|ABORTING|enumerator|enum {NOTUSED = 0, USED, ABORTING, ABORTED, FAILED} state;
DECL|ERPREFIX|macro|ERPREFIX
DECL|FAILED|enumerator|enum {NOTUSED = 0, USED, ABORTING, ABORTED, FAILED} state;
DECL|NOTUSED|enumerator|enum {NOTUSED = 0, USED, ABORTING, ABORTED, FAILED} state;
DECL|NO_MEM_ERR|macro|NO_MEM_ERR
DECL|PC_ALLOC_CHUNK_SIZE|macro|PC_ALLOC_CHUNK_SIZE
DECL|PC_DEBUG|macro|PC_DEBUG
DECL|PC_DEBUG|macro|PC_DEBUG
DECL|PC_REUSE_ABORTED_ENTRIES|macro|PC_REUSE_ABORTED_ENTRIES
DECL|POSIX_ARCH_DEBUG_PRINTS|macro|POSIX_ARCH_DEBUG_PRINTS
DECL|PREFIX|macro|PREFIX
DECL|USED|enumerator|enum {NOTUSED = 0, USED, ABORTING, ABORTED, FAILED} state;
DECL|_impl_k_thread_abort|function|void _impl_k_thread_abort(k_tid_t thread)
DECL|abort_tail|function|static void abort_tail(int this_th_nbr)
DECL|cond_threads|variable|cond_threads
DECL|currently_allowed_thread|variable|currently_allowed_thread
DECL|mtx_threads|variable|mtx_threads
DECL|posix_abort_thread|function|void posix_abort_thread(int thread_idx)
DECL|posix_cleanup_handler|function|static void posix_cleanup_handler(void *arg)
DECL|posix_core_clean_up|function|void posix_core_clean_up(void)
DECL|posix_init_multithreading|function|void posix_init_multithreading(void)
DECL|posix_let_run|function|static void posix_let_run(int next_allowed_th)
DECL|posix_main_thread_start|function|void posix_main_thread_start(int next_allowed_thread_nbr)
DECL|posix_new_thread|function|void posix_new_thread(posix_thread_status_t *ptr)
DECL|posix_preexit_cleanup|function|static void posix_preexit_cleanup(void)
DECL|posix_swap|function|void posix_swap(int next_allowed_thread_nbr, int this_th_nbr)
DECL|posix_thread_starter|function|static void *posix_thread_starter(void *arg)
DECL|posix_wait_until_allowed|function|static void posix_wait_until_allowed(int this_th_nbr)
DECL|running|member|bool running; /* Is this the currently running thread */
DECL|state|member|enum {NOTUSED = 0, USED, ABORTING, ABORTED, FAILED} state;
DECL|terminate|variable|terminate
DECL|thead_cnt|member|int thead_cnt; /* For debugging: Unique, consecutive, thread number */
DECL|thread_create_count|variable|thread_create_count
DECL|threads_table_el|struct|struct threads_table_el {
DECL|threads_table_size|variable|threads_table_size
DECL|threads_table|variable|threads_table
DECL|thread|member|pthread_t thread; /* Actual pthread_t as returned by native kernel */
DECL|ttable_get_empty_slot|function|static int ttable_get_empty_slot(void)
