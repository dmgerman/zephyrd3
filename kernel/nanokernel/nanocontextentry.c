DECL|_context_entry|function|FUNC_NORETURN void _context_entry(_ContextEntry pEntry, /* address of app entry point function */ _ContextArg parameter1, /* 1st arg to app entry point function */ _ContextArg parameter2, /* 2nd arg to app entry point function */ _ContextArg parameter3 /* 3rd arg to app entry point function */
DECL|_context_essential_check|function|int _context_essential_check(tCCS *pCtx /* pointer to context */ )
DECL|_context_exit|function|void _context_exit(tCCS *pContext)
DECL|_insert_ccs|function|void _insert_ccs(tCCS **queue, tCCS *ccs)
DECL|context_custom_data_get|function|void *context_custom_data_get(void)
DECL|context_custom_data_set|function|void context_custom_data_set(void *value /* new value */ )
DECL|context_self_get|function|nano_context_id_t context_self_get(void)
DECL|context_type_get|function|nano_context_type_t context_type_get(void)
