DECL|_is_thread_essential|function|int _is_thread_essential(struct tcs *pCtx /* pointer to thread */ )
DECL|_thread_entry|function|FUNC_NORETURN void _thread_entry(_thread_entry_t pEntry, /* address of app entry point function */ _thread_arg_t parameter1, /* 1st arg to app entry point function */ _thread_arg_t parameter2, /* 2nd arg to app entry point function */ _thread_arg_t parameter3 /* 3rd arg to app entry point function */
DECL|_thread_essential_clear|function|void _thread_essential_clear(void)
DECL|_thread_essential_set|function|void _thread_essential_set(void)
DECL|_thread_exit|function|void _thread_exit(struct tcs *thread)
DECL|sys_execution_context_type_get|function|nano_context_type_t sys_execution_context_type_get(void)
DECL|sys_thread_custom_data_get|function|void *sys_thread_custom_data_get(void)
DECL|sys_thread_custom_data_set|function|void sys_thread_custom_data_set(void *value)
DECL|sys_thread_self_get|function|nano_thread_id_t sys_thread_self_get(void)
