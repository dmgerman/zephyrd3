DECL|_NewContextInternal|function|static void _NewContextInternal(char *pStackMem, /* pointer to context stack memory */ unsigned stackSize, /* size of stack in bytes */ int priority, /* context priority */ unsigned options /* context options: USE_FP, USE_SSE */
DECL|_NewContext|function|void _NewContext(char *pStackMem, /* pointer to aligned stack memory */ unsigned stackSize, /* size of stack in bytes */ _ContextEntry pEntry, /* context entry point function */ void *parameter1, /* first parameter to context entry point function */
DECL|_nanokernel|variable|_nanokernel
