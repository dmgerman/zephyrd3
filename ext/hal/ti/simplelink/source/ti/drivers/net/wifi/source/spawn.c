DECL|IrqReadCnt|member|_u8 IrqReadCnt;
DECL|IrqWriteCnt|member|_u8 IrqWriteCnt;
DECL|LockObj|member|_SlLockObj_t LockObj;
DECL|SpawnEntries|member|_SlInternalSpawnEntry_t SpawnEntries[_SL_MAX_INTERNAL_SPAWN_ENTRIES];
DECL|SyncObj|member|_SlSyncObj_t SyncObj;
DECL|_SL_MAX_INTERNAL_SPAWN_ENTRIES|macro|_SL_MAX_INTERNAL_SPAWN_ENTRIES
DECL|_SlInternalSpawnCB_t|typedef|}_SlInternalSpawnCB_t;
DECL|_SlInternalSpawnEntry_t|struct|typedef struct _SlInternalSpawnEntry_t
DECL|_SlInternalSpawnEntry_t|typedef|}_SlInternalSpawnEntry_t;
DECL|_SlInternalSpawnTaskEntry|function|void* _SlInternalSpawnTaskEntry()
DECL|_SlInternalSpawn|function|_i16 _SlInternalSpawn(_SlSpawnEntryFunc_t pEntry , void* pValue , _u32 flags)
DECL|g_SlInternalSpawnCB|variable|g_SlInternalSpawnCB
DECL|pEntry|member|_SlSpawnEntryFunc_t pEntry;
DECL|pFree|member|_SlInternalSpawnEntry_t* pFree;
DECL|pIrqFuncValue|member|void* pIrqFuncValue;
DECL|pLastInWaitList|member|_SlInternalSpawnEntry_t* pLastInWaitList;
DECL|pNext|member|struct _SlInternalSpawnEntry_t* pNext;
DECL|pValue|member|void* pValue;
DECL|pWaitForExe|member|_SlInternalSpawnEntry_t* pWaitForExe;
