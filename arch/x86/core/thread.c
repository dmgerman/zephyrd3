DECL|_nanokernel|variable|_nanokernel
DECL|_new_thread_internal|function|static void _new_thread_internal(char *pStackMem, /* pointer to thread stack memory */ unsigned stackSize, /* size of stack in bytes */ int priority, /* thread priority */ unsigned options /* thread options: USE_FP, USE_SSE */
DECL|_new_thread|function|void _new_thread(char *pStackMem, /* pointer to aligned stack memory */ unsigned stackSize, /* size of stack in bytes */ _thread_entry_t pEntry, /* thread entry point function */ void *parameter1, /* first parameter to thread entry point function */
