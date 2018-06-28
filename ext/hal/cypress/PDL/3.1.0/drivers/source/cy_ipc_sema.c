DECL|CY_IPC_SEMA_PER_WORD_MASK|macro|CY_IPC_SEMA_PER_WORD_MASK
DECL|Cy_IPC_Sema_Clear|function|cy_en_ipcsema_status_t Cy_IPC_Sema_Clear(uint32_t semaNumber, bool preemptable)
DECL|Cy_IPC_Sema_GetMaxSems|function|uint32_t Cy_IPC_Sema_GetMaxSems(void)
DECL|Cy_IPC_Sema_Init|function|cy_en_ipcsema_status_t Cy_IPC_Sema_Init(uint32_t ipcChannel, uint32_t count, uint32_t memPtr[])
DECL|Cy_IPC_Sema_Set|function|cy_en_ipcsema_status_t Cy_IPC_Sema_Set(uint32_t semaNumber, bool preemptable)
DECL|Cy_IPC_Sema_Status|function|cy_en_ipcsema_status_t Cy_IPC_Sema_Status(uint32_t semaNumber)
DECL|arrayPtr|member|uint32_t *arrayPtr; /* Pointer to semaphores array */
DECL|cy_semaIpcStruct|variable|cy_semaIpcStruct
DECL|cy_stc_ipc_sema_t|typedef|} cy_stc_ipc_sema_t;
DECL|maxSema|member|uint32_t maxSema; /* Maximum semaphores in system */
